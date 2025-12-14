/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((-((-(!-23612))))))));
        arr_2 [i_0] = ((!(!var_1)));
        arr_3 [i_0] = (min(((!(var_3 <= var_0))), (((((arr_0 [i_0 + 1] [i_0 - 1]) / 29386)) <= 2088597308))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_8 [12] [i_1 - 1] |= (((((arr_7 [0]) ? (arr_7 [24]) : 252)) * var_13));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [i_1] = (((!var_7) || (!var_3)));
            arr_12 [i_1] [i_2] [i_1] = (-(29386 & var_12));
        }
    }
    var_16 = var_3;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_17 = (0 == 0);
        var_18 = ((arr_4 [i_3]) <= var_7);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_19 = ((-14891 + 2147483647) >> (var_6 == 36160));
        var_20 = (max(var_20, 2233785415175766016));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_21 = (((((~(arr_7 [i_5])))) ? var_10 : ((((!(arr_6 [i_5])))))));
        var_22 = ((-(((~0) | (min(var_6, var_12))))));
    }
    #pragma endscop
}
