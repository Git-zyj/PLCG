/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = var_11;
        arr_2 [1] [1] = ((((((!(arr_1 [3]))))) * (max((arr_0 [i_0] [i_0]), -5135999776651252104))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_14 = ((((((1411179430 << (((arr_5 [16]) + 416786235)))) ^ (min(1411179430, (arr_0 [i_0] [i_1]))))) % ((max((arr_4 [i_1]), (arr_5 [i_0]))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_15 = (((arr_10 [i_0] [i_0] [i_2] [i_4]) ^ (max((!var_7), (arr_9 [i_0] [i_1] [i_2] [i_3 - 1])))));
                            arr_15 [i_0 - 1] [i_1] [i_2] = ((!((min((arr_5 [i_0 - 1]), (!2247230859660245009))))));
                            var_16 = (min((arr_7 [i_4] [i_1] [i_0 - 1]), 552276790));
                            var_17 = ((!(((-(arr_0 [5] [i_1]))))));
                            var_18 = ((((max(((max((arr_13 [i_0 + 1] [i_0 + 1]), (arr_13 [i_0] [i_1])))), (arr_4 [i_1])))) ? var_11 : ((((!((min(var_2, (arr_5 [i_4]))))))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_19 = (max((arr_12 [i_0] [i_5] [i_5] [i_5] [i_5]), 33));
            var_20 = (max((max((arr_8 [i_0] [i_5] [i_5]), (arr_8 [i_0] [i_5] [i_5]))), ((-(arr_8 [i_0] [i_5] [12])))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((var_0 ? (arr_17 [i_0 - 1]) : (arr_17 [i_0 + 1]))))));
            var_22 -= -1;

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                var_23 = (~(~2883787866));
                arr_24 [i_0] [i_0] [i_6] [1] = ((((var_9 ? (arr_14 [i_0 + 1] [i_6] [i_7] [4] [i_7]) : (arr_4 [i_6]))) - (!956815296)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_24 = ((-(arr_14 [i_0] [i_0] [i_9 + 1] [i_0 + 1] [i_7])));
                            var_25 -= (!(((4065333976493267518 / (arr_0 [i_7] [4])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_26 = max((min((min((arr_33 [i_10] [i_11]), var_9)), (arr_32 [i_10]))), var_10);
            arr_35 [i_10] [i_10] [6] = (max(((-(arr_34 [i_11] [1]))), (arr_32 [i_10])));
            var_27 = ((((arr_31 [i_10] [i_11]) ? (arr_31 [i_11] [i_10]) : (arr_31 [i_11] [i_10]))));
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        var_28 = ((+(min((~var_5), (max(var_8, (arr_40 [1])))))));
                        var_29 = (min(var_29, (((-((((arr_34 [i_14] [i_13]) || (arr_34 [i_10] [i_10])))))))));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                    {
                        var_30 ^= (arr_53 [i_15]);
                        arr_59 [i_17] [i_16] [i_15] = (((arr_31 [i_16 - 1] [i_16 - 1]) != (arr_33 [i_15] [i_16])));
                        var_31 ^= ((arr_51 [i_15] [i_16 - 1]) ? (arr_51 [i_16] [i_16 - 1]) : var_12);
                        arr_60 [i_15] [i_15] [i_16] [i_18] [i_17] [i_15] = (arr_37 [i_16 - 1] [i_16 - 1]);
                        var_32 = (arr_41 [0] [i_15] [i_15] [i_15]);
                    }
                    for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                    {
                        var_33 = (((((~(((var_7 < (arr_39 [5] [9] [i_15] [i_19]))))))) % (min((arr_55 [i_16] [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1]), ((((arr_42 [6] [14]) ? 850824467696371019 : 956815302)))))));
                        var_34 += (max((arr_63 [i_15] [i_17] [6] [i_19]), (arr_63 [i_16 - 1] [i_15] [i_15] [i_16 - 1])));
                        arr_64 [i_16] [i_16] [i_17] [i_19] = (((arr_37 [i_15] [i_15]) * ((-(((!(arr_45 [i_15]))))))));
                    }
                    for (int i_20 = 0; i_20 < 22;i_20 += 1) /* same iter space */
                    {
                        var_35 = (min(var_35, ((max((max(var_7, (max(var_0, (arr_61 [i_15] [18] [i_17]))))), (((!(arr_58 [i_16 - 1] [i_17] [i_17] [i_16])))))))));
                        var_36 = (max((!2247230859660245030), (max((arr_58 [i_15] [i_16] [i_16] [i_20]), (arr_67 [i_15] [i_16] [i_17] [i_20])))));
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 21;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 22;i_22 += 1)
                        {
                            {
                                arr_73 [i_15] [i_16] [i_17] [i_15] [i_16] = (((((~(max(var_4, (arr_45 [i_21])))))) ? (((~(max(4065333976493267518, (arr_37 [i_15] [i_15])))))) : ((~(arr_41 [i_16 - 1] [i_16] [i_16] [i_15])))));
                                var_37 = (max((arr_56 [i_15] [i_21 - 1] [19] [i_16 - 1]), (arr_39 [i_15] [i_15] [i_16] [i_15])));
                                var_38 ^= max(((var_5 ? (arr_58 [0] [i_15] [i_15] [i_15]) : (arr_58 [i_22] [i_17] [i_17] [i_22]))), (!var_6));
                            }
                        }
                    }
                }
            }
        }
        arr_74 [i_15] &= (min((max((arr_40 [i_15]), -450156687)), ((~(arr_40 [i_15])))));
        var_39 = (min(var_39, (!var_2)));
    }
    for (int i_23 = 0; i_23 < 22;i_23 += 1) /* same iter space */
    {
        arr_78 [i_23] = (max((var_10 / var_9), (((!(arr_75 [i_23] [i_23]))))));
        arr_79 [i_23] [i_23] = (max(((max(1411179447, ((~(arr_52 [i_23] [i_23])))))), (((var_1 * 131) ? 59975 : (((arr_68 [i_23] [i_23] [i_23] [i_23] [12] [i_23]) ? -8066574768026412782 : (arr_41 [i_23] [i_23] [i_23] [1])))))));
        var_40 -= ((!((max((arr_62 [i_23] [i_23] [i_23]), var_7)))));
    }
    var_41 ^= ((((max((~40), ((max(var_10, -68)))))) ? (((max(var_5, var_5)) | var_8)) : ((~((var_3 ? var_6 : var_4))))));
    var_42 = -836984808;
    var_43 = var_6;
    #pragma endscop
}
