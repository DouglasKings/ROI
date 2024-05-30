#include <stdio.h>

double calculateNetProfit(double totalRevenue, double totalExpenses);
double calculateROI(double netProfit, double investmentCost);

int main(){

    double totalRevenue, totalExpenses, netProfit, investmentCost, ROI;

    printf("Enter the total revenue: ");
    scanf("%lf", &totalRevenue);

    printf("Enter the totalExpenses: ");
    scanf("%lf", &totalExpenses);

    printf("Enter the net profit: ");
    scanf("%lf", &netProfit);

    printf("Enter the investment cost: ");
    scanf("%lf", &investmentCost);

    ROI = calculateROI(netProfit, investmentCost);

    printf("The total revenue is: $%.2lf \n", totalRevenue);
    printf("The totalExpenses is: $%.2lf \n", totalExpenses);
    printf("The net profit is: $%.2lf \n", netProfit);
    printf("The investment cost is: $%.2lf \n", investmentCost);
    printf("The return on investment is: $%.2lf \n", ROI);

    return 0;
}

double calculateNetProfit(double totalRevenue, double totalExpenses){
    double netProfit = totalRevenue - totalExpenses;
    return netProfit;
}
double calculateROI(double netProfit, double investmentCost){
    return netProfit / investmentCost * 100;
}