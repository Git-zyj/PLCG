/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_7;
    var_15 = (min(((((!var_1) && 1))), (max((min(var_8, 12144757574444102759)), var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = var_11;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] = (max((arr_8 [i_1] [i_1] [i_2]), (((-2080283593 - ((1 ? 27393 : 1)))))));
                    var_16 *= var_10;
                }

                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_17 = 1;
                        var_18 = (min(var_5, ((1923957360715488011 ? (arr_10 [i_4] [i_3] [i_1] [i_0]) : var_4))));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [i_0] [6] [6] [i_5] = ((((min((arr_7 [i_1] [i_3]), var_7))) ? 50636 : (min((min(4294967289, 1084966122)), ((min(var_8, 1)))))));
                        var_19 = (min((arr_2 [i_3] [i_5]), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_20 &= (min((~-var_2), var_12));
                    }
                    arr_18 [i_0] [i_0] [i_3] |= ((12318 ? (1 & 1) : (min((min((-9223372036854775807 - 1), 1)), (arr_5 [i_1] [i_1] [i_1])))));
                    arr_19 [1] [i_1] [i_1] [i_0] = ((((((max(-1331382700, 1))) ? var_11 : var_10)) & ((((!((min(12144757574444102759, 1)))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_28 [i_8] [i_7] [i_6] [i_1] [i_0] |= ((((1 ? 1 : 1)) * var_1));
                                arr_29 [i_0] [i_0] [i_7] [i_0] [i_0] = (arr_3 [i_0] [i_6] [i_0]);
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_7] = (arr_7 [i_7 + 1] [i_8]);
                                arr_31 [i_7] [i_1] [i_6] [i_7] [i_8] = (((((var_10 ? 1 : var_9))) ? (arr_3 [i_7 + 1] [i_7 + 1] [i_7 + 1]) : (~var_4)));
                            }
                        }
                    }
                    arr_32 [i_0] [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_1] [i_6]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    var_21 = ((~((2721162955 & (arr_23 [i_0])))));
                    arr_35 [i_0] [i_1] [9] = 3136682620;
                    var_22 = (min(var_22, (arr_11 [i_0] [i_1] [i_9])));
                    var_23 |= -4874264779344352490;
                    var_24 += (arr_5 [i_0] [i_1] [i_9]);
                }
                arr_36 [i_1] [i_1] = (((((arr_24 [i_1] [i_0] [i_0]) & var_4)) | ((((!(arr_13 [i_0] [i_0] [13] [i_0] [5])))))));
            }
        }
    }
    #pragma endscop
}
