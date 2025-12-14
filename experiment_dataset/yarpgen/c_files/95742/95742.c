/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((max((arr_1 [i_0]), (max(var_14, (arr_1 [i_0]))))) * (!1727543424)));
        arr_3 [i_0] [i_0] = ((((-(arr_0 [i_0]))) ^ ((~(arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                arr_10 [1] [1] [i_0] = (max((((63424 ? 216 : 4294967295))), (max(-3250955926866185927, (var_7 / var_4)))));

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_16 [i_0] [0] [1] [i_0] = ((((1627004137839151633 ? var_14 : (arr_11 [i_1]))) ^ (arr_12 [i_2 + 2] [i_0] [i_0])));
                        arr_17 [i_0] = -748825076;
                        var_18 = (((arr_9 [i_0 - 2] [1] [i_2 + 2] [i_4 + 1]) ? ((-(arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] [i_1]))) : (arr_0 [i_0])));
                    }
                    var_19 = (((-(arr_0 [i_0]))) / (max((arr_0 [i_0]), (arr_0 [i_0]))));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_3] = (var_8 || 36694);
                        var_20 = (((~(arr_13 [10] [i_1] [i_2] [i_3] [i_5]))));
                        var_21 = (((((2450025311 | (arr_19 [i_5])))) ? ((((arr_18 [i_0 - 2] [i_3] [5]) / var_15))) : (arr_5 [i_0] [i_0 - 2])));
                    }
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        arr_23 [i_1] [i_2] [i_2] [i_0] = (max((((arr_0 [i_0]) ^ (arr_11 [i_6]))), (((arr_4 [11] [11]) << (var_2 - 224)))));
                        arr_24 [i_0 - 1] [i_0] [i_1] [i_0] [i_3] [i_6] = ((((18446744073709551615 > (((-(arr_18 [i_1] [14] [i_6 - 2]))))))) | ((var_3 ? (!262143) : (((arr_14 [i_6] [i_2 + 1] [i_1] [i_0]) + (arr_14 [i_0] [i_0] [i_1] [i_0]))))));
                        var_22 = (min(((((((arr_12 [i_0 - 2] [5] [i_2 + 2]) << (3138701004129459691 - 3138701004129459684))) ^ var_14))), 2415771133934110764));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_23 = (((((var_1 ? (arr_18 [i_0] [i_1] [i_2]) : (arr_15 [i_7] [i_7] [i_2] [11] [i_1] [i_0 + 1] [i_0 + 1])))) ? ((var_16 ? (arr_19 [i_1]) : var_13)) : (arr_19 [i_0 - 1])));
                    var_24 = (min(var_24, (arr_1 [i_0 + 1])));
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_36 [i_0] [4] [i_0] = ((!((((((arr_18 [i_0 - 1] [i_1] [i_1]) + 9223372036854775807)) >> (((arr_18 [2] [i_8] [i_9]) + 7550928558383915581)))))));
                            var_25 = 3;
                        }
                    }
                }
            }
            arr_37 [i_0] [i_0] = (((((913820512 | (max(-14491, 34001099))))) <= (arr_22 [4] [i_1] [i_1] [4] [i_0])));
        }
    }
    #pragma endscop
}
