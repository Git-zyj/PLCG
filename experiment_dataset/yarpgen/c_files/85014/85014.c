/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = (((arr_10 [11] [i_1] [i_1] [i_1]) ? (((var_8 / var_3) << (((arr_11 [i_0 + 3] [i_1] [4]) - 49955)))) : ((((!((((arr_7 [i_0] [i_0] [i_0]) ? var_9 : 896)))))))));
                        var_13 = (((((var_11 * (arr_7 [i_2 + 3] [i_0 + 1] [i_0 + 4])))) ? -2104979744 : 3180021735297084139));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_14 = (((arr_7 [i_4 + 2] [i_2 + 3] [i_0]) ? (arr_16 [i_4 + 2] [i_2 + 3] [5]) : 49189));
                        var_15 = ((~(arr_3 [i_0 - 3])));
                        var_16 = (min(var_16, ((((arr_15 [i_0 + 4] [i_2 + 4] [10]) ? (arr_14 [i_4 + 1] [i_4 + 3] [i_4 + 1] [i_2 - 2] [i_0 - 2] [i_0 + 4]) : var_9)))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 = (max((arr_14 [i_2] [i_2 + 3] [i_2] [i_2 - 1] [i_2 - 3] [i_2 + 2]), (arr_11 [i_0] [i_1] [i_0])));
                                var_18 = (min(var_18, ((((arr_3 [i_5 + 3]) / (var_7 ^ var_9))))));
                                var_19 = (!var_2);
                                var_20 = (((var_11 + (arr_7 [i_0 + 2] [i_2 + 4] [i_5 + 2]))));
                            }
                        }
                    }
                    var_21 = (arr_16 [i_0] [i_1] [9]);
                    var_22 = var_5;
                    var_23 = ((~((((((arr_21 [i_0 - 1] [i_1] [i_1] [i_2] [i_0] [i_1]) ? 134213632 : var_9))) ? -var_7 : var_11))));
                }
            }
        }
    }
    var_24 = ((var_0 / (var_0 * -2)));
    #pragma endscop
}
