/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(((max(143, 0))), (max(var_18, (max(var_13, -60))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 = (max((min(var_3, var_13)), var_10));
                        var_22 = (min((min(var_11, var_8)), var_0));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            arr_14 [8] [i_3] [i_1] [8] |= var_7;
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_0] = var_6;
                            arr_16 [i_0] = var_17;
                            arr_17 [i_0] = var_14;
                            arr_18 [i_0] [i_0] [i_0] [i_0] = var_4;
                        }
                    }
                }
            }
        }
        var_23 = var_19;
        arr_19 [i_0] = (min(((min(var_2, var_0))), (max(var_12, var_9))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_27 [i_0] [1] [i_6] = (max((min(var_13, var_14)), var_5));
                    arr_28 [i_0] [i_0] [i_0] = var_18;
                    arr_29 [4] [i_0] [i_6] [i_5] = var_1;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_24 = (max((min(var_13, var_18)), ((max(var_5, var_0)))));
        arr_33 [i_7] = max(((max(var_6, var_1))), (max((max(var_6, var_2)), var_15)));
        arr_34 [i_7] = (min((min(2780792086, 77)), ((min(var_16, var_6)))));
        arr_35 [i_7] |= (max(((max(var_4, var_16))), (max((min(var_18, var_19)), var_13))));
    }
    var_25 = (max(var_25, ((max(var_18, var_14)))));
    var_26 = (max(var_8, var_5));
    #pragma endscop
}
