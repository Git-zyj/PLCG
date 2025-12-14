/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [2] &= ((var_7 ? (((arr_5 [i_0] [i_1] [i_2] [i_0 + 2]) ? var_6 : var_5)) : ((((((4294967295 ? var_6 : 1))) ? 6498 : -5295)))));
                    var_10 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] &= ((((17172 < var_0) ? (max(var_1, (arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_3] [i_0 + 2] [i_3]))) : 0)));
                                var_11 = ((((26 ? 3397 : (arr_1 [i_2])))));
                                arr_16 [i_1] [i_3] [i_2] [i_1] [i_1] = max((var_6 > var_4), ((4294967291 ? ((max((arr_14 [i_0 - 1] [i_0 - 1] [2] [i_0 - 1] [i_0] [i_0 - 1]), var_5))) : 4294967291)));
                            }
                        }
                    }
                    var_12 &= max((((max(4591260393396969725, 16)) & (9857147370503424756 == var_9))), (65535 + var_5));
                    arr_17 [i_0] [5] [i_1] = (arr_1 [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_23 [i_6] = 321164662;

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            var_13 |= ((var_5 ? var_2 : var_3));
                            arr_32 [i_5] [i_6] [i_6] [i_8] [i_7] [7] [i_6] = ((var_3 ? 4294967287 : 15291380845045188422));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_14 = ((65011712 ? (arr_18 [i_7]) : (arr_18 [i_5 - 1])));
                            var_15 = (((arr_27 [i_10] [i_8 - 1] [i_5 - 1] [i_5 - 1] [10] [i_5]) ? (arr_22 [i_6] [11]) : var_2));
                            var_16 = ((var_6 & (!var_0)));
                            var_17 = (max(var_17, 2004735868));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_18 = (arr_19 [i_5 - 1]);
                            arr_38 [i_6] = 4294967287;
                        }

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_19 = (~var_8);
                            var_20 = (min(var_20, var_4));
                            var_21 = (min(var_21, -827683903));
                        }
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_22 &= var_2;
                            arr_43 [2] [i_6] [i_6] [i_6] [i_6] [i_5 - 1] = -var_3;
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_23 = (min(var_23, (((1 == (-6086 + var_4))))));
                            var_24 = (arr_19 [i_5 - 1]);
                        }
                    }
                    var_25 = ((var_4 ? (max((arr_42 [7] [i_5 - 1] [i_6] [i_6] [i_6]), (((arr_33 [15] [3] [15] [10] [14]) - var_5)))) : ((((var_3 == ((var_6 ? var_0 : (arr_31 [i_6] [1] [i_6] [i_5] [i_5 - 1])))))))));
                    var_26 = ((((max((arr_28 [i_5 - 1] [i_5 - 1]), 2321450627))) ? (((arr_42 [i_5 - 1] [6] [i_6] [i_7] [i_6]) ? (arr_42 [i_5 - 1] [i_5 - 1] [i_6] [i_6] [11]) : (arr_41 [i_5 - 1] [i_6] [11] [1] [14]))) : var_6));
                }
            }
        }
    }
    #pragma endscop
}
