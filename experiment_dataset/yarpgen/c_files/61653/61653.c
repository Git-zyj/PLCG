/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((var_13 ? (max(var_16, 5219)) : 214)))));
    var_18 -= var_9;
    var_19 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 1])));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = -7028315341559103965;
                    var_21 = (max(var_21, -var_11));
                    arr_9 [i_1] = ((var_13 ? (~2219848546) : var_11));
                }
            }
        }
        arr_10 [i_0] = 174;
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_17 [i_4] [i_3] [i_4] = ((!((max(21897, 17884)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_22 -= -48;
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3 + 2] = var_14;
                                var_23 = (((~71827920) ? ((~(arr_19 [3] [i_3] [3]))) : var_6));
                                var_24 -= var_8;
                            }
                        }
                    }

                    for (int i_8 = 4; i_8 < 10;i_8 += 1)
                    {
                        arr_26 [i_3] [i_3] = (((arr_19 [i_8 - 1] [i_3] [10]) ? (arr_25 [i_5]) : 2219848562));
                        var_25 ^= (var_9 && 131990927);
                        var_26 = (min((((arr_24 [8] [i_3] [i_3] [i_3 - 2] [i_3]) ? (!2219848562) : (min(-5338, 2075118734)))), var_4));
                        arr_27 [1] [i_5] [i_3] [8] [i_3] = var_1;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_27 *= var_3;
                                var_28 ^= (((((~((-1078384618 ? var_13 : (arr_30 [i_3] [i_9] [i_10] [i_9])))))) ? (arr_30 [i_3] [i_3] [i_3 + 1] [i_3]) : (min((((var_0 ? (arr_13 [i_3] [i_3]) : 2219848562))), var_15))));
                            }
                        }
                    }
                }
            }
        }
        var_29 = var_14;
        var_30 = var_10;
    }
    #pragma endscop
}
