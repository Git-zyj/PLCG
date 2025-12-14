/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_3, -245));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_12 = (((min(248, ((-(arr_8 [i_2] [i_1] [i_1] [i_1] [1]))))) == (((arr_8 [i_2] [i_3] [i_3 - 2] [i_3 + 1] [i_2]) + (arr_6 [i_0] [i_0] [i_0] [i_2])))));
                        var_13 = ((((max((arr_9 [i_2] [8] [i_3] [5] [i_3 - 1]), (arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2])))) ? var_9 : ((((max((arr_0 [i_2]), (arr_6 [0] [5] [i_2] [i_2])))) ? (arr_3 [i_0] [i_0]) : ((var_5 ? var_7 : (arr_3 [i_3] [i_0])))))));
                    }
                }
            }
        }
        var_14 = ((~(max((((arr_0 [i_0]) % var_4)), (arr_6 [i_0] [2] [i_0] [0])))));
        var_15 = (max(var_15, ((max(var_6, (max(((0 + (arr_1 [i_0] [i_0]))), (((10 && (arr_1 [10] [i_0])))))))))));
        var_16 ^= 6891089090936265413;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_17 ^= ((((max(var_7, (arr_11 [i_4] [i_4])))) ? -26964 : var_5));
        arr_13 [i_4] = ((+(min((!1289793748), var_1))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_18 = (min(var_18, (((~(~1289793761))))));
                    var_19 = ((((9223372036854775807 ? (arr_12 [i_5]) : (arr_16 [i_5]))) == (arr_16 [i_5])));
                    var_20 |= var_2;
                    var_21 = 96;
                }
            }
        }
        arr_20 [i_5] [i_5] = ((-50 ? var_10 : (~-216242781)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_22 &= var_10;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_23 = var_6;
                                arr_32 [8] [i_8] [i_9] [i_8] [i_5] = (((arr_25 [i_8]) + (arr_25 [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
