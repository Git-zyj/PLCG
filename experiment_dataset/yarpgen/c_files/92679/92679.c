/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = var_9;
                arr_5 [i_1] [i_1] = ((-(max(-2, 7339206002917655568))));
                var_18 = (max(var_18, ((max(var_10, (max(8511511735527266424, var_8)))))));
                var_19 = ((var_13 ? 61 : var_3));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_20 *= ((-(((var_8 ? 24600 : 9223372036854775807)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((min(1, (max(9223372036854775807, 9223372036854775800)))))));
                                arr_18 [i_2] [i_2] [i_3] [i_4] [i_2] [i_2] [i_6] |= -9223372036854775807;
                            }
                        }
                    }
                    arr_19 [i_2] [i_2] [6] [i_2] = (-9223372036854775807 - 1);
                }
            }
        }
    }
    var_22 = 1315659982;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_23 = (min(var_23, 0));
                                arr_36 [i_7] [i_8 + 3] [i_9] [i_11] [i_7] = ((((max(15220, -15221)))));
                            }
                        }
                    }
                }
                var_24 = (min(var_24, ((min(9223372036854775807, 176)))));
                arr_37 [i_7] [i_7] [2] = (min(((32 ? -15223 : (-9223372036854775807 - 1))), 15220));
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}
