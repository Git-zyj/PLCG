/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((min(var_8, var_10))) << (var_2 - 14413919150223455222))), ((min((var_3 || -16024), var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [13] [16] [i_1] [i_0] = (min(((min(((-46 * (arr_3 [i_1]))), (max(var_4, (arr_0 [i_0 - 1])))))), (max((max(var_0, (arr_2 [i_2] [i_0 - 2]))), (((246 <= (arr_0 [i_0]))))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_3] [i_3] = (var_3 & var_5);
                        arr_11 [i_0] [i_0] [i_3] [2] = (-12 / 255);
                        arr_12 [i_0] [i_3] [i_0] [i_0] [i_3] = (var_3 == -2584);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_12 ^= ((var_7 <= (arr_3 [i_0 + 1])));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_13 = (1 & var_9);
                            var_14 = ((18446744073709551615 && (arr_5 [i_0 - 1] [i_0 - 1] [i_1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_15 = (max(var_15, ((((arr_3 [i_6 + 1]) && var_10)))));
                        var_16 = (min(var_16, (((246 == (arr_20 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 1]))))));
                    }
                }
            }
        }
    }
    var_17 = (max((min((min(var_3, -2367651180416850330)), var_4)), var_0));
    #pragma endscop
}
