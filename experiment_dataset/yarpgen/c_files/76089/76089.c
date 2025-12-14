/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 &= (~var_6);
    var_15 = ((-var_9 ? var_10 : (min(var_11, (((var_5 ? var_6 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min((max((~var_8), var_12)), var_2));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_0] = (min(8388607, (max(var_9, 1))));
                    arr_12 [i_0] [i_0] [i_0] = ((var_11 ? (((52204 == ((-(arr_9 [i_2] [i_1] [i_0])))))) : (!-1)));
                }
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_1 - 4] [i_1] [i_1 - 4] = (-(arr_3 [i_0] [i_3 - 2] [i_3 - 2]));
                        arr_19 [i_0] [i_1 - 1] [i_0] = (((arr_14 [i_1 + 1] [i_1 - 4] [i_3 - 3]) / (arr_14 [i_1 - 3] [i_1 - 4] [i_3 + 3])));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_14 [i_5] [i_3] [i_3]) ? (arr_16 [i_5] [i_4 - 3] [i_1 - 3] [i_0]) : -8778789479805853366));
                            arr_23 [i_4] [i_4] [i_4] [i_0] [i_4] = (arr_7 [i_4 - 3] [i_0] [i_4 - 2] [i_0]);
                        }
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((var_6 ? ((((min(37158, (arr_7 [i_3 - 4] [i_1 - 1] [i_1] [i_0])))) ? (arr_8 [i_3 - 4] [i_0] [i_0] [i_1 - 3]) : (~28348))) : (((!(((var_4 ? 511 : 255))))))));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    arr_28 [i_0] [i_6] = (!(arr_7 [i_0] [i_0] [i_6] [i_1]));
                    arr_29 [i_0] = var_10;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_32 [i_0] [i_1] [i_1] [i_0] = (var_8 < 3);
                    arr_33 [i_0] [i_1 - 1] = -1073676288;
                }
                arr_34 [i_1] [i_1] &= ((((((28367 ? var_2 : 28378)))) ? (!var_7) : (var_4 != var_6)));
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_39 [i_8] = (((arr_35 [i_8] [i_8]) && (arr_35 [i_8] [i_8])));
        arr_40 [i_8] = (arr_38 [i_8] [i_8]);
        arr_41 [i_8] = (!((((arr_38 [i_8] [i_8]) - 16383))));
        arr_42 [i_8] = (arr_38 [i_8] [i_8]);
        arr_43 [i_8] = (arr_36 [i_8]);
    }
    #pragma endscop
}
