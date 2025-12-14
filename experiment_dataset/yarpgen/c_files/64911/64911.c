/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((~((~(~var_8)))));
                    var_16 = ((~(((~0) & -447145467263609248))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_8 [i_3] = ((-(~1)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_17 = ((!((!(~var_12)))));
                    var_18 ^= ((~((~(~var_12)))));
                    var_19 = (((((~var_9) > 0))) == (~-1866930640));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_18 [i_6] = var_1;
                                arr_19 [i_3] [16] [i_5] [i_6] [i_3] |= 58233806;
                                arr_20 [i_3] [i_4] [i_5] [i_6] [1] = (arr_7 [i_3] [8]);
                                arr_21 [i_3] [i_3] [i_3] [i_3] [i_6] = (!var_7);
                                var_20 -= ((-(((!(arr_6 [i_6] [18]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        var_21 = (max(var_21, (arr_23 [2])));
        var_22 = (arr_13 [i_8] [i_8]);
        arr_24 [i_8] = (!-58233806);
        var_23 = (~255);
    }
    var_24 = ((+(((!1) << (var_1 - 171)))));
    #pragma endscop
}
