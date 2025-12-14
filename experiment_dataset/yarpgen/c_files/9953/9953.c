/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [0] = max((min((arr_0 [i_0]), (~-8503550774274706927))), (((!(((-26905 ? -951329202 : 8274)))))));
                    arr_7 [15] [1] [i_0] [i_0] = ((!(((var_11 ? var_4 : (!2964458904114284298))))));
                    arr_8 [i_0] [i_2 + 1] [i_1] = (min(((max(2045089309, 40149))), 2233058705583059006));
                }
            }
        }
    }
    var_14 = ((!((min((max(-86, var_11)), var_3)))));

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_11 [i_3] = (((((arr_3 [i_3]) ? 32865 : (max(var_0, var_11))))) ? ((~(var_0 == var_6))) : (min((((arr_1 [i_3]) ? (arr_1 [12]) : 30801)), (arr_4 [16] [8] [i_3] [i_3]))));
        arr_12 [i_3] = var_9;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_21 [2] [i_4] [i_5] [i_6] [7] = var_4;
                            arr_22 [i_3] [i_4] [i_5] [i_6] [i_7] [i_3] = (((arr_10 [i_4] [i_7]) | (((2754265901 ? (arr_17 [i_3] [i_3]) : (arr_19 [15] [i_4] [i_5] [i_6] [i_6] [11]))))));
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_29 [i_3] [i_3] [10] [i_3] [i_9] [i_3] [i_3] = (15110638649779538554 < -23822);
                            arr_30 [i_3] [i_3] [i_3] [i_3] [i_9] [8] = (((((arr_5 [i_8] [i_8] [i_8]) * (arr_14 [i_3])))) | (11241304777931058940 * var_2));
                        }
                    }
                }
                arr_31 [i_4] [8] [i_8] [i_4] = ((!(arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
                arr_32 [10] [i_4] [i_4] [i_3] = ((var_7 ? (arr_20 [i_8] [2] [i_8] [i_4] [i_3]) : -23040));
                arr_33 [i_4] = (((arr_9 [i_4]) && (var_8 > var_2)));
            }
            arr_34 [i_3] [i_4] = ((((-20322 ? (arr_0 [i_3]) : 61)) + var_3));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_42 [1] [i_13] [i_13] [i_12] [i_13] = (arr_9 [i_4]);
                            arr_43 [i_3] [i_3] [i_3] [9] [i_3] [i_13] = (arr_28 [8] [i_4] [i_11] [i_11] [15] [i_13]);
                            arr_44 [i_3] [i_11] [i_13] = ((~(arr_9 [i_13])));
                            var_15 = 111957320;
                        }
                    }
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

                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        arr_54 [i_14] [5] [i_17] [i_17] [i_16] [i_14] = (arr_9 [i_17]);
                        var_16 = (var_7 - var_6);

                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            arr_59 [i_14] [i_17] [1] = 14858;
                            arr_60 [i_18] [i_17] [i_16] [i_17] [i_14] = (arr_4 [i_14] [i_15] [i_16] [i_17]);
                        }
                        for (int i_19 = 3; i_19 < 14;i_19 += 1)
                        {
                            arr_65 [i_17] [i_15] [9] [i_16] [9] [i_19 - 1] = (!((min((((var_0 / (arr_18 [i_14])))), (min(25800, (arr_53 [i_14] [i_15] [i_16] [11])))))));
                            arr_66 [i_17] = ((((max((arr_64 [i_19 - 3] [i_19 - 2] [i_19 - 3]), (arr_64 [i_19 - 3] [i_19] [i_19 + 1])))) | (min(207, (max((arr_50 [i_15] [7] [i_19 - 2]), var_6))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 3; i_20 < 13;i_20 += 1)
                    {
                        for (int i_21 = 4; i_21 < 13;i_21 += 1)
                        {
                            {
                                arr_72 [i_14] [i_14] [8] [i_20] [i_20] = (((1838060478450653009 / var_12) | (((((((arr_56 [10] [i_15] [i_15] [12] [10] [i_21]) < (arr_3 [i_16])))) - var_0)))));
                                var_17 = var_2;
                            }
                        }
                    }
                    var_18 = (((min(((var_8 ? 5947671370987699406 : (arr_1 [i_14]))), ((min((arr_1 [i_14]), var_12))))) | (arr_61 [i_14] [i_15] [i_15] [i_16])));
                }
            }
        }
    }
    #pragma endscop
}
