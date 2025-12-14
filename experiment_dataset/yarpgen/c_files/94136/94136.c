/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 8957604006946805932;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 = var_9;
                                var_12 = ((((((arr_6 [i_0]) ? var_1 : var_2)) << (((arr_3 [i_0] [i_1]) - 2326421742)))) <= (((((max(var_7, 149))) ? ((var_7 ? 1 : var_8)) : (var_0 != var_3)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_13 = var_6;
                        var_14 |= (((~var_5) > (min((min(17229224539113110956, (arr_7 [i_2] [i_2] [i_1] [6]))), (var_2 > var_3)))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_15 [i_0] = var_1;
                            arr_16 [i_0] [i_0] [0] [0] [i_6] = ((~((9270 ? var_8 : (arr_1 [i_1])))));
                            var_15 = var_2;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
