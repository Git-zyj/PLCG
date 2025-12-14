/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = 853540580;
        arr_4 [i_0] [0] = (-(arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] &= -2205348633059323319;
        arr_8 [i_1] [i_1] = var_3;
        arr_9 [i_1] [i_1] = ((((arr_6 [i_1]) && (arr_6 [i_1]))) ? (-8179490812883668155 >= 1) : (arr_6 [i_1]));
        arr_10 [i_1] = (-(!var_4));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_13 [14] [i_2] [i_2] = ((4611686018427387903 ? var_14 : 4993511838674255515));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_22 [i_1] [i_4] [i_5] = (-var_17 == var_13);
                            arr_23 [4] [1] [i_3] [1] [i_4] [i_3] [i_3] = 2612;
                            arr_24 [i_1] [14] [i_3] [i_4] [i_5] = ((853540575 ? 1 : -7403057699232126996));
                        }
                    }
                }
            }

            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_29 [i_1] [i_2] [i_6] [i_7] [i_7] = var_18;
                    arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [7] = 28029;
                    arr_31 [i_1] [i_1] [i_1] [i_1] = 1;
                    arr_32 [i_6] [i_1] [i_1] &= 18237;
                }
                arr_33 [i_6] [i_1] = ((-133512939 ? var_15 : -3866172225125517326));
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                arr_36 [i_1] [i_2] [i_8] [19] = var_10;
                arr_37 [i_1] [1] [6] [i_2] = -133512940;
                arr_38 [i_1] [i_2] [i_8] [i_2] = ((3598105281373508963 ? 1 : var_2));
                arr_39 [i_2] [i_2] [i_1] = var_13;
                arr_40 [16] [5] = 5638548399766024553;
            }
            arr_41 [i_1] = ((-6268489917187016538 ? (((arr_26 [i_1] [i_1] [6]) ? var_19 : 853540575)) : 65535));
        }
    }
    var_22 = var_16;
    #pragma endscop
}
