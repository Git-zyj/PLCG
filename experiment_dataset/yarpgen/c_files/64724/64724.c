/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (arr_0 [i_0 - 1] [i_0 - 2]);
        arr_3 [i_0] = var_8;
    }
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            {
                var_15 = (max(((var_0 + (arr_10 [i_1] [i_2 - 1]))), (arr_10 [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_16 = (min(var_16, (~var_7)));
                            arr_19 [i_4] [1] [1] [i_1] [4] = ((~var_5) ? (((~var_0) ? (var_3 | var_4) : (((var_13 ? (arr_6 [i_3]) : var_1))))) : (((((((-4303745117531323423 + 9223372036854775807) >> (var_3 - 7991963132817228508))) != (min(var_1, var_8)))))));

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                var_17 *= (!2026279310);
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = var_0;
                                arr_23 [i_1] [i_2] [6] [i_3] [i_4] [6] [i_2] = -93;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                arr_26 [i_1] = ((((var_1 ? var_7 : var_2)) << (var_11 - 201)));
                                var_18 = (min(var_18, (((~(arr_8 [i_3 - 1] [i_3 + 1] [8]))))));
                                arr_27 [i_3] = (arr_20 [14] [i_3 + 1] [0] [14] [5]);
                                var_19 |= var_9;
                            }
                            var_20 = var_1;
                        }
                    }
                }
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
