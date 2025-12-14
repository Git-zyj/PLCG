/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(15166936507619003996, (min(var_0, 78)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (((((((-(arr_7 [i_0] [i_1] [i_1]))) - 78))) - (max((arr_4 [i_0] [i_0]), (var_0 + var_7)))));
                    var_13 -= ((((!(arr_6 [i_2 + 1] [i_2 + 1] [i_2]))) ? (arr_7 [i_0] [i_0] [i_2 + 3]) : (max((((arr_4 [i_1] [i_0]) ? 190 : (arr_2 [i_0] [i_1]))), (arr_6 [i_0] [i_1] [6])))));
                    var_14 = (min(var_14, (((((-(arr_0 [i_2 + 1])))) ? (((arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1]) ? var_6 : 1651915233)) : ((((!(min(1, 1))))))))));
                    var_15 = (max(var_15, (arr_2 [i_0] [i_2 + 1])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_10 [i_3] = (((((((arr_6 [i_3] [i_3] [i_3]) > var_5)) ? -var_5 : ((var_10 << (((var_8 + 7926465906644208465) - 44)))))) << ((((var_6 & (((max(var_5, (arr_7 [i_3] [i_3] [i_3]))))))) - 2642))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        var_16 = ((var_2 != (((arr_20 [i_5 + 1] [i_5 + 4] [i_5 + 2] [i_5 - 1] [i_5 + 4] [i_5]) ? (min(var_10, (arr_11 [1]))) : (arr_1 [i_3] [i_4])))));
                        var_17 -= (((arr_16 [i_6 + 1] [i_4] [i_5 + 1]) ? ((((24 / (arr_12 [i_3] [i_4]))) & 8191)) : (var_0 < 2302910349)));
                        var_18 -= ((((arr_18 [i_3] [i_6] [i_5] [i_4] [i_5 + 4] [i_6 + 1]) <= (arr_18 [i_3] [i_4 + 1] [17] [i_6] [i_5 + 1] [1]))));
                    }
                    var_19 = (arr_6 [i_3] [i_4] [i_4]);
                    var_20 = ((var_7 ? var_3 : ((var_3 ? (arr_9 [i_4 + 2]) : var_5))));
                    arr_21 [8] = ((var_4 ? var_4 : ((var_2 & (arr_5 [i_4 + 4] [i_4 + 2])))));
                }
            }
        }
        arr_22 [8] = 1;
    }
    var_21 = var_6;
    var_22 = (min(var_22, (((var_3 ? var_8 : (((((min(var_5, 6755135098386204111))) ? var_3 : (!var_10)))))))));
    var_23 ^= (((~var_7) < (max((max(var_10, var_7)), (((var_5 ? var_7 : var_0)))))));
    #pragma endscop
}
