package com.akshit.kmmapollo.shared

import UserQuery
import com.apollographql.apollo.ApolloClient
import com.apollographql.apollo.api.ApolloExperimental
import com.apollographql.apollo.api.Response
import com.apollographql.apollo.network.http.ApolloHttpNetworkTransport
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.flow.single

@ExperimentalCoroutinesApi
@ApolloExperimental
class ApolloKmmRepository {

    private val apolloClient = ApolloClient(
        networkTransport = ApolloHttpNetworkTransport(
            serverUrl = "https://api.staging.cluno.com/graphql",
            headers = mapOf(
                "Cluno-User-Agent" to "Cluno/2.0 (com.cluno.clunoapp.debug.staging; build:2; iOS 12.2.0) Alamofire/5.0.0-rc.2"
            )
        )
    )

    suspend fun getUser(): Response<UserQuery.Data> {
        return apolloClient.query(UserQuery("5b8fde33-1237-4751-ae74-6876e2f9083d")).execute()
            .single()
    }
}
