/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 += (((!(arr_0 [i_0]))) ? (arr_0 [i_0]) : (max((arr_1 [i_0]), (((arr_0 [i_0]) ? 1008 : (arr_1 [i_0]))))));
        arr_2 [12] [i_0] = var_9;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_17 |= (min((arr_5 [i_1] [i_1]), 6530126052209722436));
        arr_6 [i_1] [i_1 + 1] = ((var_10 % (arr_4 [i_1])));
        var_18 = (max(var_18, 94));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
    {
        var_19 = var_0;
        var_20 = (max(var_20, ((((((((1 ? -121 : -110))) ? var_13 : (arr_7 [4]))) == var_15)))));
        arr_9 [1] |= (min((((((arr_4 [i_2]) - 1)) - 197)), 115));
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
    {
        var_21 = (arr_11 [i_3]);
        var_22 = min((arr_1 [i_3]), (arr_13 [i_3]));
        var_23 = var_13;
        var_24 *= (arr_7 [1]);
    }
    var_25 = ((((var_13 + ((var_1 ? var_9 : var_11)))) - -var_10));
    #pragma endscop
}
