#include <iostream>
#include<climits>

#include <vector>
#include <algorithm>

int maxProfit(std::vector<int>& prices) {
    int max_profit = 0;
    int min_price = INT_MAX;

    for (int price : prices) {
        min_price = std::min(min_price, price);
        max_profit = std::max(max_profit, price - min_price);
    }

    return max_profit;
}


int main() {
    std::vector<int> prices = {3,5,1,7,4,9,3}; // Example prices

    int max_profit = maxProfit(prices);

    std::cout << "Maximum profit: " << max_profit << std::endl;

    return 0;
}
