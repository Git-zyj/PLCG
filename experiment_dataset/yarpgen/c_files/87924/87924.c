/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((((var_7 ? ((var_4 ? var_9 : 18865)) : var_2))) ? ((((2988541249 ? var_15 : var_13)))) : (((~-118951861) ? var_4 : ((var_6 ? 6379911019432332173 : var_10)))))))));
    var_18 = var_15;
    var_19 = (((!(((13839678830779458475 ? var_3 : var_13))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (!var_1)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_21 = (((!-2445426280593544435) ? var_10 : (((arr_6 [i_0]) ? 11951067491288685910 : 225))));
                        arr_11 [i_1] [7] [i_1] [i_1] [21] = -24856;
                        arr_12 [i_0] [i_1] [i_1] [i_3] = (((~var_16) ? ((-(arr_5 [i_1 + 1] [i_1]))) : ((18867 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                    }
                }
            }
        }
        var_22 = ((~(((arr_3 [i_0]) ? var_9 : (-32767 - 1)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = (((var_10 ? var_6 : var_6)));
        var_23 = (((!(arr_4 [i_4] [i_4] [22]))));
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_21 [i_5] [i_6] = (arr_16 [i_5 + 1]);
            arr_22 [i_5 + 1] [i_6] [i_6] = (((arr_3 [i_5 + 1]) ? (arr_6 [i_5 + 2]) : 1));
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {
                var_24 += (((arr_0 [i_5 + 2]) ? 46 : var_10));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_25 = (((arr_4 [i_10] [1] [i_8]) ? (((1662836539 ? (arr_14 [i_8] [i_8]) : (arr_13 [5] [5])))) : -6195197983806572188));
                            var_26 += ((var_5 ? (arr_24 [i_5 + 1] [i_5 + 1]) : (arr_24 [i_5 + 2] [i_8])));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
            {
                arr_37 [i_11] [9] [5] [8] = (((((-4499053598594123210 ? (arr_2 [i_5 + 2]) : (arr_2 [i_5 - 1])))) ? ((((arr_33 [i_11]) ? (arr_33 [i_11]) : (arr_36 [13] [12] [6] [6])))) : (((var_10 ? var_9 : (arr_27 [i_5 + 2] [3] [i_5 - 1]))))));
                arr_38 [i_11] [i_11] [i_5] = (--69);
                arr_39 [i_11] = (((((644725565 ? 96 : 37071))) ? (((1 ? (arr_4 [i_11] [i_5 + 1] [i_11]) : 314569641))) : (((arr_4 [i_11] [i_5 - 1] [i_11]) ? (-9223372036854775807 - 1) : var_5))));
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
            {
                var_27 = (((((((arr_34 [0] [i_7] [i_5] [13]) ? var_9 : (arr_34 [i_5] [i_5] [i_5] [i_5])))) ? 15 : -4339103744139918598)));
                var_28 = ((-(!var_0)));
                arr_42 [i_12] [i_12] [i_12] [i_5] = (((-((-(arr_24 [i_5 - 1] [i_7]))))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                var_29 = (max(var_29, (((!(arr_34 [i_5 + 2] [i_7] [i_5 - 1] [i_7]))))));
                arr_46 [7] [i_7] [i_13] = (var_6 ? var_10 : var_13);
                arr_47 [i_5] [i_7] [i_7] [i_13] = var_12;
                var_30 = ((-(((!(arr_35 [i_7]))))));
            }
            var_31 = (min(var_31, (((var_2 ? ((~(arr_7 [i_7] [2] [i_5]))) : (((var_11 ? var_8 : 9223372036854775807))))))));
        }
        var_32 = (((((65530 ? (arr_35 [i_5]) : 2122749795))) ? ((~((var_16 ? (arr_36 [i_5] [8] [i_5] [i_5 + 2]) : (arr_36 [i_5] [i_5] [10] [i_5]))))) : ((((var_5 ? var_7 : (arr_36 [i_5] [i_5 + 1] [i_5] [i_5])))))));
    }
    var_33 = var_16;
    #pragma endscop
}
