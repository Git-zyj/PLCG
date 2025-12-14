/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] = var_2;
                    var_13 *= (max((min(1571366695, (-127 - 1))), var_8));
                    var_14 = ((+(((arr_5 [i_0] [i_1] [i_1 - 2] [i_2]) ? var_7 : var_0))));
                    var_15 = (min(var_15, ((((!var_10) << (6946128468360413275 - 6946128468360413264))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_16 = (arr_2 [i_5] [i_4 - 3]);
                                var_17 *= (max((((~((max((arr_21 [i_7] [i_6] [2] [i_5] [i_4 - 3] [i_4 - 3] [1]), (arr_7 [i_4] [i_5] [i_4]))))))), (min(((var_8 ? (arr_18 [i_3] [i_3] [i_6] [i_7]) : (arr_3 [i_4]))), (arr_3 [i_3])))));
                                arr_24 [i_5] [i_5] = -182;
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_18 = (max(var_18, (arr_16 [i_4 + 2] [12] [12])));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_19 = var_3;
                            var_20 = (max((!var_7), var_7));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_21 = ((((max(var_8, (arr_11 [i_4 - 3])))) + (min(((var_6 ? var_3 : (arr_27 [i_10] [i_5] [i_4 - 3] [i_3]))), -var_3))));
                            arr_35 [i_5] [i_5] = (arr_10 [4] [i_3]);
                            var_22 = (min(var_22, ((min(-72, (((255 ? 1 : -806686211))))))));
                            arr_36 [i_3] [i_5] [i_5] [i_8] [i_10] = (max(-var_8, var_11));
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_23 = ((((max(var_3, var_0)))));
                            arr_41 [i_5] = (arr_13 [i_3] [i_8]);
                        }
                        for (int i_12 = 2; i_12 < 13;i_12 += 1)
                        {
                            var_24 = ((((max(3, 7670231859000858797))) ? ((((arr_32 [i_5] [i_8] [i_5] [i_5] [i_3] [i_3]) ? 0 : -144115188075855872))) : ((max((arr_29 [i_5] [i_8] [i_4 + 1] [i_5] [i_4 + 1] [i_4 + 1] [i_3]), var_3)))));
                            var_25 = (arr_44 [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] [i_12]);
                        }
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        arr_48 [15] [i_3] [9] [15] [i_5] [i_5] = (min(((var_4 | (arr_5 [i_3] [i_3] [i_5] [i_3]))), var_5));
                        arr_49 [i_5] [6] [6] [i_5] = (min(((-((min(0, (arr_45 [i_3] [i_3] [i_5] [i_13])))))), (((-1211894990 + -68) ? ((-23368 ? -73 : 99)) : (arr_4 [i_5] [0] [0])))));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, -6437399163318435823));
                            arr_53 [i_14] [i_5] [i_3] [1] [i_5] [i_3] = var_6;
                            arr_54 [i_14] [i_13] [i_5] [i_4] [i_3] = (!var_4);
                            arr_55 [i_5] [i_14] [i_5] [i_5] [i_5] [i_4] [i_3] = var_5;
                        }
                        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                        {
                            arr_59 [i_5] [i_5] = ((var_9 / (13469136144413573137 - -59)));
                            var_27 = (((((var_5 - (arr_10 [11] [i_4])))) ? ((((((arr_38 [i_15] [i_5] [1] [i_5] [1] [i_5] [i_3]) ? (arr_33 [i_5] [i_5] [i_5] [i_3] [i_3] [i_5] [i_3]) : var_0))) ? var_0 : ((-(arr_30 [i_3] [i_4 - 2] [i_5] [i_13] [i_13] [i_15] [i_13]))))) : (((((arr_33 [i_3] [i_3] [i_4 - 2] [i_5] [i_5] [i_5] [16]) & (arr_40 [i_3] [i_3] [i_4] [i_5] [i_5] [i_13] [i_15]))) * (((var_11 && (arr_18 [i_3] [i_5] [i_5] [i_3]))))))));
                        }
                        var_28 += (((((arr_42 [i_3] [i_13] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_3]) ? (arr_14 [i_4 - 3]) : (arr_14 [i_4 + 1]))) != ((min(var_0, (!var_2))))));
                    }

                    for (int i_16 = 1; i_16 < 14;i_16 += 1)
                    {
                        arr_63 [i_16] [i_5] [i_5] [i_3] = ((1 ? 59 : 1));
                        var_29 = var_2;
                    }
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        var_30 = ((6282872205616761763 ? 36 : 10315388321503839148));
                        var_31 = -var_4;
                    }
                }
            }
        }
    }
    var_32 += var_5;
    #pragma endscop
}
