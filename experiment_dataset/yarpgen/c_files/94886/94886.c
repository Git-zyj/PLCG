/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_13 = (min(var_13, (15 & 1)));
        var_14 |= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_16 [i_2] [i_4] [i_2] [i_4] = arr_12 [i_2] [i_3] [i_4] [i_3];
                                arr_17 [i_1] [6] [i_3] [i_3] [i_4] [i_4] [i_4] = ((+((((((arr_10 [6] [6] [3] [3]) ? (arr_3 [i_1]) : 2)) < (arr_11 [i_1 - 1] [i_1] [i_4] [i_1 - 1] [i_4] [i_5]))))));
                            }
                        }
                    }
                    var_15 = (min(var_15, (((~(((!-7) | ((0 ? 15 : (-9223372036854775807 - 1))))))))));
                }
            }
        }
        arr_18 [i_1] &= -1524347738;
    }
    for (int i_6 = 4; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                {
                    var_16 = (min(var_16, 1));
                    arr_26 [i_6] [i_7] [i_7] [i_6] = ((((var_7 < (!1752552937)))));
                    var_17 = (arr_25 [i_6] [i_6] [22] [i_8]);
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_5));
                                arr_31 [20] [20] [20] [i_9] [i_10] = (~7749648037668387351);
                                arr_32 [i_6] = (((((var_2 << (224 - 224))) << 0)));
                                var_19 = ((((245 ? 17 : var_5)) * ((max((arr_2 [i_8 + 1]), ((var_4 + (arr_27 [i_6] [i_7] [i_6] [i_7] [i_10 - 1]))))))));
                                var_20 = (min(var_20, (arr_21 [i_9] [i_8] [i_7])));
                            }
                        }
                    }
                    var_21 = (max(var_21, (((~(max(2304717109306851328, (arr_1 [i_6] [i_6 + 1]))))))));
                }
            }
        }
        var_22 = 246;
        arr_33 [i_6] |= (((arr_29 [i_6]) < ((min((arr_1 [i_6] [i_6 + 1]), (arr_22 [i_6]))))));
    }
    var_23 = (750316775836472858 + -1524347709);
    #pragma endscop
}
