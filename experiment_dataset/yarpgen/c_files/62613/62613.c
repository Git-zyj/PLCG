/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? var_10 : ((var_7 ? (var_11 & var_1) : var_10))));
    var_13 = (min(var_13, var_3));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((~(var_1 >= var_10)))) * -7795718317120713602)))));
                    var_15 += 2;
                    arr_7 [i_1] [i_2] = ((7020437093443168280 ? -3 : 2));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                {
                    arr_17 [i_5] = (min((min((arr_1 [i_5 + 2] [i_3]), (!var_8))), 120));
                    arr_18 [i_3] [i_3] = ((~((((arr_12 [i_5 + 2] [i_4 + 1]) || (arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 2]))))));
                    var_16 = var_7;

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_21 [i_3] [i_4] [i_5] [i_4] [i_6] [i_5] = (((arr_16 [8] [8] [i_6]) * (arr_0 [i_5] [i_5])));
                        arr_22 [i_3] [i_3] [i_3] [i_3] = (var_6 + var_11);
                        arr_23 [i_3] [i_4] [i_5] [i_5] = (((arr_20 [i_4 + 2]) || var_1));
                        var_17 = var_2;
                        var_18 = (((((var_11 ? 3 : var_8))) ? (7849933915295990995 | 2) : (arr_16 [i_5 - 3] [i_5 - 2] [i_5 - 2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
