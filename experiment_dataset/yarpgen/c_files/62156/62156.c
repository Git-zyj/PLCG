/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_1, var_5));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 *= ((!(((30 ? 39 : 6247540430067345026)))));
        arr_4 [i_0] = ((!(((106 ? (arr_2 [i_0 + 2] [i_0 + 1]) : (arr_3 [i_0 + 2] [i_0 + 2]))))));
        var_12 += (((((178 ? (arr_2 [i_0 + 2] [i_0 - 1]) : 0))) ? ((((arr_1 [i_0 + 2]) && var_7))) : var_2));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_13 += (max(var_9, 0));
        var_14 += (min((((0 ? var_2 : -0))), (max(var_2, ((199 ? var_5 : var_8))))));
        arr_7 [i_1] [i_1] = ((-((max((!var_9), (((arr_6 [i_1] [i_1]) >= var_8)))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_10 [10] [10] &= (((((255 ? 91 : ((var_0 ? -11 : -7005092833413524798))))) ? (arr_5 [i_2]) : ((((((arr_5 [i_2]) ? (arr_9 [2]) : var_8))) ? ((212 ? (arr_9 [1]) : var_9)) : (((arr_9 [4]) ? (arr_6 [i_2] [i_2]) : (arr_8 [8] [8])))))));
        arr_11 [i_2] [i_2] = ((-(((!1) ? ((3 ? 218 : 1)) : var_7))));
        var_15 *= 20;
    }
    var_16 = (13 / var_1);
    var_17 = (((max(var_3, (10 || 13))) < ((-((817323549671200175 ? var_0 : -27375))))));
    #pragma endscop
}
