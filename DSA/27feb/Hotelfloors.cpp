//https://www.naukri.com/code360/problems/hotel-floors_983624?topList=top-array-coding-interview-questions&problemListRedirection=true&attempt_status=COMPLETED
#include <bits/stdc++.h> 
int hotelBookings(vector<string> queries) {
    int coin=0;
    for(int i=0;i<queries.size();i++){
        if(queries[i][0]=='+'){
            coin++;
        }
    }
    return coin;
}
