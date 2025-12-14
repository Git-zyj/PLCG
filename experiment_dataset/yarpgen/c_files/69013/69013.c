/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 ^= (max((arr_4 [i_2]), ((((arr_2 [i_0]) ? (arr_6 [i_2] [17] [4] [i_1]) : (((arr_6 [i_0] [i_0] [i_0] [5]) ? (arr_6 [7] [i_1] [1] [1]) : (arr_6 [i_0] [i_1] [i_1] [i_0]))))))));
                    var_14 = (min(var_14, (min((min((var_6 / var_6), (arr_3 [i_0]))), (((((((arr_4 [i_0]) ? (arr_3 [1]) : (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? ((min(var_7, 0))) : ((((arr_2 [0]) < var_2))))))))));
                    var_15 = (min(var_15, 1));
                    var_16 ^= (((((((((arr_2 [i_2]) ? 1 : var_9)) > var_7)))) < (arr_3 [i_0])));
                }
            }
        }
        arr_8 [i_0] |= (((~1) / (~516220149)));
        arr_9 [i_0] [i_0] = min(((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (min(var_3, var_4)) : 8))), ((var_8 ? (arr_5 [i_0] [i_0]) : 516220149)));
        arr_10 [i_0] = ((!(arr_4 [i_0])));
    }
    var_17 = var_9;

    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_18 = ((((((((~(arr_11 [i_4])))) ? (((arr_15 [i_3] [i_3]) % (arr_12 [i_4]))) : (arr_12 [i_3])))) ? -10 : ((((arr_14 [i_3]) >= 1)))));
                    var_19 = (min(var_19, ((((((1 / 1) * (arr_11 [i_3]))) ^ var_1)))));
                    var_20 += ((-(arr_14 [12])));
                }
            }
        }
        arr_18 [11] = ((!(((+((var_1 ? (arr_12 [i_3]) : var_0)))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_31 [i_8] = ((((max(((1 ? 0 : 1)), (~-47)))) ? var_1 : var_10));
                        arr_32 [i_6] [i_7] [i_8] [i_6] [i_9] [i_9] = var_4;
                    }
                }
            }
        }

        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_6] [i_10 + 2] [i_6] [i_12] [1] [i_13] = (arr_11 [1]);
                            var_21 = ((((max((((!(arr_17 [i_11] [i_12] [i_11])))), -516220159))) ? (((((1 ? (arr_23 [i_11] [i_13]) : var_10)) % (arr_29 [1] [i_10 + 1] [i_10] [i_10] [i_10 - 1])))) : (((arr_34 [i_6] [i_6] [i_6]) ? (arr_15 [i_10 + 3] [i_10 + 3]) : (min(var_8, 516220159))))));
                            var_22 = ((min(((var_11 ^ (arr_13 [i_11]))), (((-(arr_27 [i_6] [i_10 + 3] [i_6] [i_13])))))));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            var_23 ^= (max((arr_35 [i_6] [i_6] [i_6]), ((12288 << (((arr_15 [i_10 + 1] [i_10 + 3]) - 47379850))))));
                            var_24 = ((((((max(1, var_5))))) & (~0)));
                            var_25 = ((var_2 ? (arr_28 [i_6] [i_11] [i_14]) : ((min((min(var_4, 1)), (((arr_28 [i_14] [i_10 - 1] [i_12]) && (arr_11 [i_12]))))))));
                            arr_47 [i_6] [i_10] [i_11] [i_12] [1] [1] [i_10] = ((((((arr_36 [i_14]) ? (arr_37 [i_10 + 1] [i_11] [i_12] [i_14]) : (arr_37 [i_6] [i_10] [i_11] [i_12])))) ? ((+((1 ? (arr_45 [1] [i_10] [i_10]) : (arr_23 [i_11] [i_12]))))) : (arr_46 [i_10 + 2] [1] [i_10 + 2] [i_10 + 2])));
                        }
                        var_26 = (arr_29 [i_11] [i_10] [7] [i_12] [17]);
                    }
                }
            }
            var_27 ^= 1;
        }
        for (int i_15 = 1; i_15 < 19;i_15 += 1)
        {
            arr_51 [i_6] [i_6] [i_6] |= (((((arr_46 [i_6] [i_6] [i_6] [i_6]) ? (arr_40 [i_6] [i_6] [i_6] [i_6] [i_15]) : var_10)) < (arr_27 [i_6] [17] [17] [i_15])));
            arr_52 [i_6] = (max(1, (arr_38 [i_6] [i_15] [i_15 - 1])));
        }
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        var_28 = 1;
        arr_57 [i_16] = (arr_35 [i_16] [i_16] [i_16]);
        var_29 |= (arr_55 [i_16] [i_16]);
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_30 = (((arr_37 [0] [18] [i_17] [i_17]) > (((565000978459432367 >= (arr_1 [1]))))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                {
                    var_31 = (max(var_31, ((((arr_55 [i_17] [i_17]) & var_2)))));
                    arr_65 [i_19] [i_18] [i_17] = 1;
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                var_32 = (min(var_32, (!17881743095250119249)));
                                arr_72 [i_17] [5] [9] [i_20] [i_20] [i_17] [0] = (((var_4 & 1) ? ((1 ? 1 : (arr_0 [i_17]))) : (arr_53 [1])));
                                var_33 = (arr_27 [i_17] [i_17] [i_17] [i_18]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            {
                                var_34 = ((((((arr_46 [5] [6] [14] [5]) ? var_2 : 1))) ? var_3 : 17881743095250119255));
                                var_35 = (((arr_40 [i_23] [i_19] [i_19] [i_22] [i_23]) ? (arr_40 [i_17] [i_18] [i_18] [i_22] [i_23]) : (arr_40 [i_17] [i_18] [i_19] [i_22] [i_23])));
                                arr_78 [4] [2] [2] [i_18] [i_17] |= ((!((((arr_42 [i_17] [10] [i_19] [9] [i_23]) ? 1 : var_3)))));
                            }
                        }
                    }
                }
            }
        }
        arr_79 [i_17] [i_17] = 1;
    }
    #pragma endscop
}
