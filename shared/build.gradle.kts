import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

val coroutinesVersion = "1.4.2-native-mt"
val apolloVersion = "2.5.4"

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    id("com.apollographql.apollo").version("2.5.4")
    id("maven-publish")
    kotlin("native.cocoapods")
}

group = "com.akshit.kmm.apollo"
version = "1.0.0"

kotlin {
    cocoapods {
        // Configure fields required by CocoaPods.
        summary = "Apollo Kmm Pod"
        homepage = "https://github.com/akshitc/KmmSpecs"
        frameworkName = "apollokmm"
    }
    android {
        publishLibraryVariants("release", "debug")
    }
    ios()
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:$coroutinesVersion"){
                    version {
                        strictly(coroutinesVersion)
                    }
                }
                implementation("com.apollographql.apollo:apollo-runtime-kotlin:$apolloVersion")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("com.google.android.material:material:1.2.1")
            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13")
            }
        }
        val iosMain by getting
        val iosTest by getting
    }
}

android {
    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdkVersion(24)
        targetSdkVersion(29)
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}

tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile> {
    kotlinOptions.jvmTarget = "1.8"
}

val packForXcode by tasks.creating(Sync::class) {
    group = "build"
    val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
    val sdkName = System.getenv("SDK_NAME") ?: "iphonesimulator"
    val targetName = "ios" + if (sdkName.startsWith("iphoneos")) "Arm64" else "X64"
    val framework = kotlin.targets.getByName<KotlinNativeTarget>(targetName).binaries.getFramework(mode)
    inputs.property("mode", mode)
    dependsOn(framework.linkTask)
    val targetDir = File(buildDir, "xcode-frameworks")
    from({ framework.outputDirectory })
    into(targetDir)
}

tasks.getByName("build").dependsOn(packForXcode)