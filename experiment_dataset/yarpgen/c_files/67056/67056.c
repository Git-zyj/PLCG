/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((min(25356, var_4))) ? ((-1 ? 2657615888 : 16384)) : ((((-2147483647 - 1) ? var_4 : 25369)))))) ? ((max(((min(var_5, -19611))), (-1024 + 1489947485)))) : ((var_7 ? (max(var_6, 2147483630)) : (((var_3 ? -1024 : 1)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 &= -2147483610;
        var_16 -= (arr_1 [i_0]);
        arr_2 [i_0] = (((((-25357 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_0 [i_0]) : 3201447023));
        arr_3 [i_0] = ((((((arr_0 [i_0]) * (arr_1 [i_0])))) ? (((arr_1 [i_0]) << (2642551333 - 2642551321))) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_17 += 193223836;
        var_18 = ((1 | (((1489947485 == (arr_0 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = (((arr_0 [i_2]) ? 1024 : ((((max((arr_0 [i_2]), -20685))) & (3 || 0)))));
        var_19 |= -27421;
        var_20 = (max(877116959, 32768));
        var_21 = (((((arr_4 [i_2]) <= 1)) ? ((max(((16388 ? 2147483607 : 44102)), (min(127, (arr_4 [i_2])))))) : (min((arr_6 [i_2] [i_2]), -6900))));
    }
    var_22 = (min(36269, (max(((var_9 ? var_2 : 2440782865179769828)), var_12))));
    var_23 = ((((1956134894 + ((var_10 ? -2147483630 : var_4)))) / var_8));
    #pragma endscop
}
