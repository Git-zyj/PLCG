/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [3] = var_8;

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_11 = (min(var_11, (min(var_1, ((max(var_7, (arr_1 [i_0]))))))));
                                arr_18 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = (((((min(var_8, -7246742581370729321))) <= (~17339442704908648727))));
                                var_12 ^= ((!(!var_10)));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_13 = (max(var_13, (((max((arr_10 [i_3] [i_1] [i_0]), var_2)) / ((((arr_1 [i_1]) ? (arr_1 [i_0]) : var_5)))))));
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((((arr_15 [i_2] [i_1] [i_2] [i_3] [i_3] [i_2]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5])))) ? var_6 : (arr_9 [i_1] [i_2] [i_1] [i_1])));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = var_0;
                                arr_25 [i_6] [i_1] [i_0] [i_1] [i_1] [i_0] = (((((-7253072800662341685 ? (arr_17 [i_0] [i_0] [i_1] [i_0] [0] [3] [i_6]) : var_5))) ? var_3 : (arr_2 [i_0])));
                            }
                            arr_26 [i_3] [i_1] [i_1] [i_0] = (arr_23 [i_1] [i_1] [1] [i_1] [i_1] [i_1]);
                        }
                    }
                }
                arr_27 [i_1] = ((!(arr_4 [i_0] [i_1])));

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_14 *= ((~(arr_28 [i_0] [i_7])));

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_34 [i_1] = (min(var_10, ((~((var_7 ? var_7 : var_0))))));
                        var_15 = (min((arr_2 [i_0]), (((229 == ((6697212010537070165 ? 3631012567 : (arr_32 [i_1]))))))));
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_38 [i_1] [i_1] [i_9] [i_1] = ((((((!((((arr_23 [i_1] [i_1] [i_1] [6] [i_9] [i_9]) | (arr_33 [i_9])))))))) | ((1107301368800902880 ? var_4 : (min(1107301368800902887, (arr_10 [i_0] [i_0] [i_0])))))));
                    arr_39 [1] [i_9] [i_1] = var_10;
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_42 [i_1] [i_1] = (((((~(arr_6 [i_1])))) ? (arr_31 [i_1] [i_10]) : (((arr_35 [i_1] [i_1] [i_1]) ? (arr_20 [i_1] [i_1] [i_0] [i_10] [i_0]) : 1107301368800902900))));
                    arr_43 [i_1] [i_0] [i_1] [i_0] = (((arr_12 [i_0] [i_0] [i_1] [i_10] [i_1]) ? 1 : var_10));
                }
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    arr_46 [i_0] [i_1] [i_1] [i_11] = var_9;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 8;i_13 += 1)
                        {
                            {
                                arr_53 [i_13] [i_1] [i_12] [i_0] [i_1] [i_0] = (max(9223372036854775807, (arr_23 [i_1] [i_13 + 1] [i_13 + 1] [i_1] [i_1] [i_1])));
                                arr_54 [i_1] [i_12] [i_11] [i_1] [i_1] = (arr_7 [i_1] [i_1] [i_11]);
                                var_16 *= ((((min((!var_7), (((arr_10 [i_11] [i_12] [i_13]) ? var_3 : (arr_30 [i_13] [i_13] [i_1] [i_0] [i_13 + 4])))))) ? (((((-(arr_8 [i_0])))))) : (min((arr_47 [i_0] [i_1] [i_11]), (arr_16 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                    arr_55 [i_0] [i_0] [i_1] = ((((12 & (arr_45 [i_0] [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                {
                    arr_66 [i_15] [i_15] [i_16] = (min(57300, (min(1, 43109))));
                    var_17 = ((((((arr_60 [i_14]) ? (arr_60 [i_15]) : (arr_60 [i_16])))) ? ((var_0 | (arr_59 [i_15] [i_16]))) : (((arr_60 [i_14]) ? (arr_59 [i_15] [i_16]) : (arr_60 [i_14])))));
                    arr_67 [i_14] [i_15] [i_15] = (arr_64 [i_15] [i_16]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 25;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            {
                var_18 = (max((max(var_8, (arr_72 [11] [i_18] [10]))), ((((arr_72 [i_18] [i_18] [i_17]) ? (arr_72 [i_17] [i_17] [i_17]) : var_10)))));
                var_19 = (min(((1 ? (arr_72 [i_17] [i_17] [i_18]) : (arr_71 [10]))), (((arr_74 [i_17]) & var_5))));
            }
        }
    }
    var_20 = ((((((((var_2 ? 8222 : -9223372036854775792))) ? (max(var_1, var_8)) : var_4))) ? (min((((49 ? 1 : var_0))), var_1)) : ((min(((var_4 ? 0 : var_5)), var_5)))));
    #pragma endscop
}
