/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 -= var_10;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 -= var_14;
                    var_19 = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, var_1));
                                var_21 = 1123264939;
                                arr_14 [i_0] [i_3] [2] [i_0] [12] = var_3;
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] = var_6;
                    var_22 = var_12;
                }
            }
        }
    }
    var_23 -= var_7;
    #pragma endscop
}
