/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_15 = var_4;
                    var_16 = (((((+(((arr_9 [0] [i_1] [i_2]) + var_2))))) ? (max(((var_6 << (-2377555229429365917 + 2377555229429365965))), (((var_10 ? (arr_11 [i_0] [5] [15] [5]) : var_1))))) : -31744));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_17 = 1;
                        arr_16 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = (((arr_13 [i_0 + 1] [i_1] [10] [1] [i_0 - 1] [i_3] [i_1]) ? (arr_13 [i_4] [i_1] [i_2] [i_3] [i_0 + 1] [i_4] [i_3]) : (arr_13 [i_0] [i_1] [i_0] [i_3] [i_0 + 1] [i_1] [i_1])));
                        arr_17 [i_3] [i_1] [i_2] = (((arr_3 [i_1] [i_1]) ? (~224) : (arr_6 [i_2] [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_18 = 211;
                        var_19 = (-224 + ((max(7, 32640))));
                    }
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        var_20 &= ((((((((arr_14 [1] [5] [i_1] [i_0 + 3]) ^ -32641)) | 224))) ^ ((216 ? var_0 : -54))));
                        arr_22 [i_6 + 2] [i_3] [i_2] [2] [i_1] [i_0] |= (((((arr_8 [i_0] [i_0 - 2] [i_1] [1]) && (arr_8 [i_0 + 2] [i_0 + 2] [i_3] [i_3]))) ? (((arr_8 [i_0] [i_0 - 3] [15] [i_1]) + 32640)) : (((var_3 != (arr_8 [i_0] [i_0 - 1] [i_2] [i_3]))))));
                        arr_23 [14] [i_3] [i_3] [i_3] [i_3] = (arr_8 [i_0] [8] [i_0] [i_0]);
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_21 = (max(var_21, (arr_14 [i_0 + 3] [i_0 + 3] [i_0] [i_0])));
                    arr_26 [i_0 + 4] [i_2] [12] [i_0] &= (arr_11 [i_0 - 2] [i_1] [i_2] [i_7]);
                    var_22 = (((arr_20 [i_0] [i_0 - 3] [i_0 - 3] [i_0 + 3] [i_0 + 2]) / var_3));
                    arr_27 [i_2] [i_7] [12] = ((((!(arr_1 [i_0])))));
                    var_23 = (min(var_23, (~32)));
                }
                arr_28 [i_0] [i_1] [i_2] = (((((~(arr_14 [i_0 - 3] [i_0 - 3] [i_2] [i_2])))) & (((-(arr_1 [i_0]))))));
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_24 = 6008;
                            arr_38 [i_9] = (~(arr_36 [i_10] [i_9] [i_10 + 1] [i_10 + 2] [i_10 - 2] [i_9] [i_0 + 4]));
                        }
                    }
                }
            }
        }
        var_25 *= (arr_32 [i_0 - 1] [i_0] [i_0]);
    }
    for (int i_11 = 3; i_11 < 19;i_11 += 1)
    {
        var_26 = (min(((!((((arr_18 [15] [i_11] [i_11] [i_11] [i_11]) ? 8 : 7338725666489142057))))), ((!(~8)))));
        var_27 *= ((((((arr_30 [i_11 - 1] [i_11 - 1] [i_11 - 2]) & (arr_30 [i_11] [i_11 + 1] [i_11 - 3])))) ? -var_12 : (((!var_9) << (arr_3 [i_11 + 2] [i_11 - 1])))));
    }
    var_28 = ((-var_4 < ((12288 << (((~var_2) - 1082989415))))));
    #pragma endscop
}
