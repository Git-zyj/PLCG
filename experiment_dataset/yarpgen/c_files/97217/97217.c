/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 20;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] |= (((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0])));
        arr_3 [9] = (-21 | 24873);
        var_20 = (max(var_20, (((((((arr_0 [i_0]) != 1))) << (17393763726772053686 - 17393763726772053686))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 &= min((((arr_4 [i_1] [i_1]) ? 1 : 8120045084094644757)), ((((arr_4 [10] [i_1]) ? 94 : (arr_4 [i_1] [i_1])))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_22 = 8120045084094644744;
            var_23 += ((((((~9155601565989220775) % ((((arr_7 [1] [i_2]) ? 1 : 32759)))))) ? (arr_7 [i_1] [i_2]) : ((max(212, -32759)))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_24 = (min(var_24, (arr_10 [i_3] [i_1])));
            var_25 *= ((64 ? (arr_7 [i_3] [i_1]) : ((32757 ? (max((arr_6 [i_1] [16]), -24873)) : (var_4 * 20)))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            var_26 *= (arr_6 [i_4 + 1] [i_4 + 1]);
            arr_13 [i_4] [i_4 - 1] = -32;
        }
    }
    var_27 += ((!(((224 ? (var_18 & -17830) : var_10)))));
    var_28 *= (max(1764799279435325758, var_2));
    var_29 = ((((max(var_5, -1966080))) ? var_16 : ((min(var_0, var_7)))));
    #pragma endscop
}
