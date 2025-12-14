/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 |= ((var_3 | var_6) << (((-var_1 + 37362) - 21)));
        var_14 = (min(var_14, var_2));
        arr_3 [11] [i_0] &= var_10;
        var_15 &= ((!(arr_0 [i_0] [i_0])));
        arr_4 [i_0] [7] &= (((((arr_1 [i_0]) % (arr_0 [i_0] [14]))) << (((22645 % var_8) - 22627))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_9 [i_1] |= (((((((~(arr_5 [i_1])))) < (((arr_2 [3]) ? var_1 : 5549229058124763956)))) ? (min((arr_6 [i_1]), var_8)) : ((var_1 | ((var_4 ? var_0 : 0))))));
        var_16 |= ((((min(var_6, (~var_9)))) ? (((var_9 ? (arr_0 [i_1] [i_1]) : ((max(-6, (arr_1 [i_1]))))))) : (((arr_0 [i_1] [i_1]) | (var_12 & var_5)))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_14 [i_1] [i_1] &= var_6;
            var_17 = (max(var_17, (((((104 | 87) << (!var_4)))))));
            var_18 = (min(var_18, var_2));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_19 &= ((~((max(168, (max(151, 67)))))));
            arr_17 [10] |= (((((((((arr_16 [i_1] [i_3]) ? var_4 : 72))) ? var_5 : (min(var_2, var_8))))) ? (((arr_15 [i_1]) ? ((var_4 ? var_0 : var_2)) : (9050743124541331534 / var_6))) : var_3));
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_24 [i_4])));
                    var_21 *= ((((var_2 ? -var_7 : (arr_22 [i_4] [i_4] [17]))) - (((!(((11579143152813348815 ? -4010447938077487943 : var_0))))))));
                    var_22 |= ((((((arr_26 [i_5 - 1] [i_5] [i_5] [i_5 - 1]) % (arr_26 [i_5 - 1] [i_5] [i_5] [i_5 + 1])))) ? (((max(var_7, -10)))) : (var_8 % var_6)));
                }
            }
        }
    }
    #pragma endscop
}
