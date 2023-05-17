#define QUIT 5
#define HOT1 180.0
#define HOT2 225.0
#define HOT3 255.0
#define HOT4 355.0
#define DISCOUNT 0.95
#define STARS "********************************"

//显示选择列表
int menu(void);

//返回预定天数
int getnights(void);

//费用计算
void showprice(double rate,int nights);