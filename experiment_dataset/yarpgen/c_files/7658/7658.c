/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 / ((var_13 ? var_15 : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_17 = (max(var_17, ((((!(arr_10 [i_3] [i_2 + 2] [2] [10])))))));
                        arr_11 [i_3] = (arr_5 [i_0 + 3] [i_0 - 1]);
                        var_18 ^= var_12;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((arr_16 [i_0 + 3] [i_1 - 1] [i_2 + 1] [i_5 + 1] [i_5 + 1]) / ((-(arr_17 [i_0] [i_0] [14] [i_0] [i_0 + 1] [i_0])))))))));
                                var_20 = (arr_4 [1] [i_4]);
                                var_21 = (arr_13 [i_0 + 2] [i_4]);
                                var_22 = (max(var_22, (((var_0 ? (arr_7 [i_0]) : (((arr_0 [i_0 + 1]) ^ var_4)))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_2 + 1] = (((arr_6 [i_0] [i_0]) && (arr_7 [i_0 + 3])));
                    var_23 ^= -var_0;
                }
            }
        }
    }
    #pragma endscop
}
