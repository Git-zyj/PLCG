/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_7, (max(-32766, -9793))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 = (arr_0 [i_0 - 1]);
        var_12 *= 104;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_13 *= (arr_12 [5] [i_2] [i_3]);
                                var_14 = (((arr_5 [i_4]) ? -104 : (arr_8 [i_3 - 1] [i_3 - 2])));
                                var_15 = (((arr_8 [i_1] [i_3 + 1]) == (arr_12 [i_3 - 1] [i_3 - 2] [i_3 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            {
                                var_16 -= (arr_19 [i_6] [i_2]);
                                arr_23 [i_1] [i_1] [i_3 + 1] [i_6] [i_7] [i_1] |= 2908766108;
                                var_17 = (((arr_14 [i_6] [i_3 - 2] [i_3 - 2]) ? (arr_14 [i_3 + 1] [i_7] [i_3 + 1]) : (arr_14 [i_3] [i_3] [i_3 + 1])));
                            }
                        }
                    }
                    var_18 = (((((var_7 + (arr_14 [i_1] [i_2] [i_1])))) ? (arr_10 [i_1] [i_1]) : var_0));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 7;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_19 = (((((var_1 ? -1426629242276470554 : 1))) ? 4096 : (((arr_9 [i_9]) + var_5))));
                                arr_30 [i_1] [i_1] [i_3] [i_8 + 4] [3] [i_9] = ((-(-138273 - -1426629242276470554)));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 8;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_20 = (max(var_20, (!4398046511100)));
                                var_21 = ((!(arr_29 [i_10 - 1] [i_10 - 2] [i_11] [i_12])));
                                arr_42 [i_1] [0] [i_11] [i_12 + 1] [0] = ((~((-4398046511100 ? var_8 : 41))));
                            }
                        }
                    }
                    var_22 += (~(118 != 0));
                    arr_43 [i_11] = -109;
                }
            }
        }
        arr_44 [i_1] [i_1] = (var_1 ? (arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((arr_6 [i_1] [i_1] [i_1]) ? var_1 : 4813048814128683829)));
    }
    var_23 = 11264;
    #pragma endscop
}
