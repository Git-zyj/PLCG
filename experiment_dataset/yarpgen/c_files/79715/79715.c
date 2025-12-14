/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = 3676396478;
    var_17 = (min(var_17, 4620789638176190276));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [0] |= 146;
        var_18 &= (arr_1 [8]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 &= (((arr_6 [i_1 + 2] [i_2 + 3] [i_2 - 2]) ? var_2 : (arr_6 [i_1 + 2] [i_2 + 1] [i_2 - 3])));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_20 = ((arr_3 [i_0] [i_1 + 2]) || 4620789638176190276);

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_21 = ((91 ? (arr_8 [i_1] [i_0] [i_3] [i_1 - 1]) : (arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_1 - 1])));
                            arr_14 [i_3] [i_0] [1] [1] [1] [i_0] = var_11;
                            arr_15 [i_0] = 0;
                            var_22 += ((((-117 ? 5642277258319978223 : (arr_3 [6] [i_1 - 1]))) | (!15442981175815131052)));
                        }
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] = 3676396485;
                            arr_19 [6] [i_1] [i_1] [i_1] [i_0] = (!72);
                        }
                        arr_20 [i_0] [i_2] [i_0] [i_0] = var_8;
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_23 ^= var_12;
                        arr_25 [10] [i_1] [i_0] = (!730172864);
                        var_24 -= (!127);
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_24 [i_0] [i_1]);
                        arr_30 [i_0] [i_2 - 3] [i_1] [i_0] = -0;
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_34 [i_8] [i_0] = var_0;
                        var_25 = -67;
                        var_26 = var_8;
                        var_27 = ((1 | (arr_0 [i_1 + 1] [i_2 - 1])));
                        var_28 &= (~0);
                    }

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_29 -= var_13;
                        arr_37 [i_0] [i_0] [i_0] = 146;
                        arr_38 [i_1] [i_0] [i_2 + 2] = (arr_28 [i_9] [i_2 - 3] [i_2] [i_1] [i_0]);
                        var_30 -= 1073741824;

                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            arr_41 [i_0] [i_0] [i_1] [10] [i_9] [i_10] [i_1] |= (((arr_33 [i_9] [i_2 - 1] [i_1] [i_9]) <= var_7));
                            var_31 = 5354;
                            arr_42 [i_0] [i_1 - 1] [i_0] = -269635033;
                            arr_43 [i_0] [6] [i_0] [i_10] = (((arr_28 [i_0] [11] [i_1 - 1] [i_2] [i_2 - 3]) ? 59 : var_2));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_32 ^= (arr_24 [i_1 + 2] [i_2 - 1]);
                            var_33 *= var_3;
                            arr_46 [i_0] [i_11] = (arr_24 [i_0] [i_0]);
                            arr_47 [i_0] [i_1] [i_0] = ((4294967295 | (1 * 13825954435533361361)));
                        }
                    }
                    arr_48 [i_0] = -4294967276;
                }
            }
        }
    }
    #pragma endscop
}
