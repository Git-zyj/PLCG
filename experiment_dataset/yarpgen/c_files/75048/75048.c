/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [6] [i_0] |= ((min((arr_6 [i_2] [i_1] [2]), (arr_6 [i_0] [i_1] [i_1]))));
                    var_20 = (max(var_20, var_16));
                }
            }
        }
    }
    var_21 = var_9;
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_22 = 4046613900052424245;

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_21 [i_3] [i_4] [i_5] [i_5] [i_6] [i_4] = ((14007 ? 4046613900052424245 : 2303591209400008704));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_25 [i_3] [7] [i_3] [i_7] [i_7] [i_3] = (((((arr_2 [i_3 - 2] [i_3 + 1] [i_3]) + 9223372036854775807)) >> (var_14 - 3936557764)));
                            var_23 = (arr_6 [i_3] [i_5] [i_7]);
                            var_24 = ((((((arr_13 [i_3] [i_5] [i_5]) + (arr_18 [1] [1] [i_5] [i_6] [i_7])))) ? ((((arr_22 [i_7] [i_4] [i_4] [i_4] [i_7] [7]) ? 65535 : var_10))) : 48908));
                            arr_26 [i_3] [i_4] [i_5] [i_3] [i_3] [i_3 - 2] [i_6] = ((~((-4046613900052424246 + (arr_4 [i_5])))));
                        }
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            arr_29 [i_3] [i_3] [i_5] [i_5] [i_5] [i_6] [i_8] = (((arr_24 [i_3 - 2] [i_8 - 1]) >> (((arr_2 [i_3 - 2] [i_3 - 2] [i_8 - 1]) + 7483494802247590470))));
                            var_25 = (max(var_25, ((((arr_20 [i_8 + 1] [i_8] [i_8 - 2] [i_8 - 1]) >> (((arr_5 [i_3 - 2] [i_4] [i_5]) - 371076892)))))));
                        }
                        var_26 = (((-4046613900052424266 / (arr_7 [i_6]))) / (arr_2 [i_3] [i_3 + 1] [i_5]));
                        arr_30 [i_3 - 1] [i_3 - 1] [i_3 - 1] = (((arr_24 [i_3 + 1] [i_5]) | var_18));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 3; i_10 < 10;i_10 += 1)
                        {
                            arr_38 [i_9] [i_9] [i_5] [i_5] [i_4] [i_9] = ((-(arr_11 [i_3 + 1])));
                            var_27 = ((-(arr_23 [i_10] [i_10] [i_10] [i_10] [i_10 + 1] [i_10 - 3] [i_4])));
                            var_28 += (arr_31 [i_3 - 1]);
                            arr_39 [i_4] [i_9] [i_9] = (arr_33 [i_10 + 2] [i_4] [i_9] [i_3] [i_3 + 1]);
                        }
                        arr_40 [i_3] [i_4] [i_5] [i_9] = (((arr_22 [i_3] [i_3 - 2] [i_3] [i_3] [i_3] [i_3 + 1]) ^ (arr_22 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_3 + 1])));
                    }
                }
            }
        }
    }
    var_29 = var_8;
    var_30 = (((~141) / ((~((var_2 ? var_4 : var_18))))));
    #pragma endscop
}
