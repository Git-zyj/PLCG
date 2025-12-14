/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((min(var_2, var_8)), -40);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = 768684416;
        arr_3 [i_0] [i_0] = 48348;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (!-1);
        arr_7 [i_1] = (((((((((-1614103121 | (arr_2 [i_1] [1]))) + 2147483647)) >> ((((1 ? var_1 : var_0)) + 37))))) ? ((((var_8 && 1) > 15988975363590447291))) : (((((min(var_2, 1)) + 2147483647)) >> (var_5 - 41041)))));
        var_12 *= ((var_2 != (((var_7 * var_8) ? (arr_5 [i_1]) : 8))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_13 |= ((!(arr_10 [i_2] [i_2])));
        var_14 = -1;
        var_15 = (((arr_0 [i_2]) && var_4));
        var_16 = (max(var_16, var_6));

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            arr_14 [i_2] [i_3] |= var_4;
            arr_15 [i_2] = var_9;
            var_17 = 0;
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_18 = 35;
            arr_18 [i_2] [i_4] = -var_2;
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_19 = (95 ? (arr_8 [i_2]) : (((768684416 ? var_2 : var_8))));
            var_20 = var_2;
            var_21 |= ((~((48346 ? var_4 : var_2))));
            var_22 *= var_9;
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_23 |= var_7;
        arr_23 [i_6] = var_2;
        var_24 = var_8;
        arr_24 [i_6] = var_7;
    }
    #pragma endscop
}
