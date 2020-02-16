#include<stdio.h>
/*场景模拟：3个人点了5道菜，提供每样菜品的原价，以及折扣后的总价
通过如下算法算出每道菜折后单价，便于将来算出每个人需要交多少钱*/
double price(double x, double ttop, double ttlp);   //计算菜品折后单价的函数
 int main()
 {
     double orip[] = {27, 4, 14,35,50}; //original price，由用户提供的每项菜品原价，用数组实现
     double ttlp = 119.50;  //total price, 订单结算总价，由用户提供
     double ttop = 0;   //total original price，本次订单总计原价，初值设为0
     
     for (int i = 0; i < sizeof(orip)/sizeof(orip[0]); i++) {   //来计算出原价总价
         ttop += orip[i];
     }
     printf("本次订单商品原价共计：%.2f元\n", ttop);
     
     double aftp[sizeof(orip)/sizeof(orip[0])]; //after price，折扣后菜品原价，数组长度同orip
     for (int i = 0; i < sizeof(orip)/sizeof(orip[0]); i++) {   //来计算出每个菜品折扣后的价格
         aftp[i] = price(orip[i], ttop, ttlp);
         printf("第%d件商品折扣后的价格为%.2f元\n", i + 1, aftp[i]);
     }
     
     /*
     double ttfp = 0;   //核验用最终订单总价，如果这个价格和用户填入价格相同则证明正确
     for (int i = 0; i < sizeof(aftp)/sizeof(aftp[0]); i++) {   //计算核验用最终订单总价
         ttfp += aftp[i];
     }
     printf("经过计算您本次订单实付价格为%.2f元，请与您的订单进行核对\n如果数据无误，请按照上述价格交给购买人\n", ttfp);
     
     */
     return 0;
 }

double price(double x, double ttop, double ttlp) {
    double prc;
    prc = (x / ttop) * ttlp;    //商品÷折扣前商品自身总价，求出商品价格占比，然后×折扣后总价
    return prc;
}
