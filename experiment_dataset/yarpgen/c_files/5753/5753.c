/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((-2133744667 != ((var_5 ? (max((arr_2 [i_0] [1]), var_7)) : (~var_0))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_20 &= -2010295884;
                        var_21 = (min(var_21, var_6));
                        arr_9 [i_3] [i_1] [i_1] [i_1] [i_0] = ((94 || (arr_8 [i_0 + 1] [i_1] [i_1])));
                        var_22 = (min(var_22, (var_10 != var_11)));
                        arr_10 [i_1] [i_2] [i_1] = var_9;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_13 [i_0 + 3] [i_1] [2] [i_1] [i_1] = ((var_7 - ((-((-739577385 ? var_3 : var_18))))));
                        arr_14 [i_1] = var_2;
                        arr_15 [14] |= 4280290284736407606;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_0 + 2] [i_1] [i_1] [i_1] = (arr_1 [i_0] [i_0]);
                        arr_19 [i_0] [i_1] [i_2] [i_5] = (1 * var_12);
                        var_23 = (max(var_23, var_17));

                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_2] [8] [i_6] [8] = -var_11;
                            var_24 &= (((((arr_6 [i_6 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 3]) + 2147483647)) >> (arr_21 [i_6 + 1] [i_6 + 1] [i_2] [i_0 - 1])));
                            var_25 *= 0;
                        }
                    }
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        arr_26 [14] [8] [8] [i_7] &= (max(((min((var_18 >= 4331), (arr_5 [i_0 + 1])))), ((var_17 ? ((max(var_10, var_1))) : -34543))));
                        arr_27 [i_1] = (min(237, (min((!0), (arr_3 [i_0] [i_1] [i_2])))));
                        var_26 = (max(var_16, (max(1, (max(108, var_3))))));
                    }
                }
            }
        }
    }
    var_27 = (min(var_27, (max(var_4, var_11))));
    var_28 &= (max(-23722, (max(((max(var_14, var_11))), ((var_3 ? -2652 : var_14))))));
    #pragma endscop
}
