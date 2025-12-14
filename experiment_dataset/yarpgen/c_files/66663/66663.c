/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_10 = ((!(arr_1 [i_0])));
                            arr_8 [i_0] [i_2] [i_0] [i_0] [i_0] = ((!(((arr_3 [1] [i_1] [i_1]) < (arr_7 [i_3] [10] [i_2 - 2] [i_3] [i_3] [13])))));
                            var_11 += (max(((min((((!(arr_5 [i_0] [i_3] [i_0] [i_3])))), 255))), ((max((arr_7 [i_0] [i_1] [7] [i_2 - 3] [2] [i_3]), var_3)))));
                            var_12 -= (((arr_5 [i_2] [i_2] [i_2 - 1] [i_2]) * ((((!(((var_8 ? var_9 : 65525)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_13 = ((((((min((arr_13 [10]), var_1))) ? (min(var_4, 65516)) : ((((arr_4 [i_0] [i_0] [i_0] [i_0]) ^ var_1))))) ^ var_6));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((min(1, 194))), (((arr_5 [i_0] [i_1] [3] [i_5]) ^ 65516))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_26 [i_8] [i_9] = (min((((!((max((arr_21 [i_6] [i_6] [8]), (arr_24 [i_6] [i_6] [i_7] [i_8] [i_9]))))))), ((min(65516, var_1)))));
                            var_14 = ((-((((max(4, 65516))) - (!896680844)))));
                            var_15 = ((65496 ? var_5 : ((((!(((20 ? -28237 : (arr_21 [i_9] [i_8] [i_7]))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_16 = (((!17) >= 244));
                            arr_32 [i_6] [i_7] [i_10] [i_10] = (((65516 << 7) == (((!(arr_23 [i_6] [i_7] [5] [i_11] [i_7] [i_11 - 1]))))));
                            var_17 = var_0;
                            var_18 = (max(var_18, (((+((var_9 ? ((var_4 ? (arr_18 [3] [i_11]) : (arr_25 [i_6] [i_7] [8] [8]))) : 1)))))));
                            arr_33 [i_6] [i_6] [i_10] = (arr_18 [16] [i_7]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_19 = 65496;
                            var_20 = ((+(((arr_29 [i_6] [i_6] [i_7] [i_13]) ? (arr_29 [i_6] [i_7] [0] [3]) : 10))));
                            var_21 = ((-9223372036854775799 ^ (min((max(4830532144598351549, (arr_28 [i_13]))), ((((arr_28 [i_6]) || (arr_29 [i_6] [i_7] [5] [i_6]))))))));
                            arr_41 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = (arr_31 [i_7] [i_7] [i_7]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            {
                                arr_50 [i_14] [i_14] [i_14] [i_15] [i_14] = 255597804;
                                var_22 = (max((arr_21 [i_6] [11] [11]), (min(238, -65496))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 24;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 24;i_21 += 1)
                        {
                            {
                                var_23 = var_1;
                                arr_64 [i_17] [i_18] [i_17] [i_17] [i_17] = (min(((((min((arr_63 [i_18] [i_18] [i_18]), 10)) % var_7))), (min((arr_60 [4] [i_17] [i_18] [i_19] [i_20] [i_21]), ((((arr_58 [i_17] [i_17]) ? 23914 : (arr_55 [i_17] [i_17] [i_17]))))))));
                                var_24 = (min(var_24, (((((+(((arr_62 [i_21]) ? -23915 : 1422332008)))) ^ (min(((-(arr_55 [i_17] [20] [i_19]))), var_7)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        {
                            var_25 += ((((!(arr_58 [i_22] [i_23]))) ? (min(var_0, 255)) : ((((!(arr_58 [1] [i_18])))))));
                            var_26 += ((((3648149763873358443 ? -28224 : 65493))) ? (arr_51 [i_18]) : -23929);
                            var_27 = (min(((max(((-(arr_69 [i_17]))), (!10)))), (min((arr_58 [i_22] [i_18]), (arr_53 [i_22] [i_18])))));
                            var_28 = ((!((((min((arr_54 [i_17]), 28235))) < var_3))));
                            var_29 = (arr_56 [i_18] [i_22] [i_23]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
