/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (arr_1 [1] [i_1]);
                arr_5 [i_0 + 1] [i_0] = 18446744073709551615;
                var_12 += ((-7034460374839348386 + (arr_0 [4] [i_1])));
            }
        }
    }
    var_13 += ((min(1, ((var_5 ? var_1 : var_1)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_14 *= ((((min((1 || 1), (1 | 1)))) ? var_2 : (arr_6 [i_2] [i_3])));

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_15 = ((((!(arr_9 [i_2]))) ? ((+((min((arr_6 [i_3] [i_3]), (arr_12 [i_2] [i_3] [1] [i_5])))))) : var_5));
                                var_16 = (max(var_16, ((min(var_1, (((((var_0 ? var_6 : var_5))) ? 1 : ((min(var_8, 0))))))))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_3] [i_3] = 1;
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_28 [i_2] [i_2] [i_2] [18] [i_2] [i_9] [i_2] = ((((min((1 | 2079816155), var_4))) ? var_4 : ((max(((var_8 ^ (arr_18 [i_3] [i_3] [i_3]))), var_8)))));
                                arr_29 [i_2] [9] [i_9] [i_7] [i_9] [i_8 - 1] [i_9] = (((arr_15 [i_9] [i_3] [7]) | (arr_15 [19] [i_7] [5])));
                                var_17 = var_4;
                                var_18 = (min(var_18, ((min((((var_5 >= (arr_27 [i_2] [i_9] [i_9] [i_8] [i_2])))), (min(var_8, (arr_27 [i_7] [i_8 - 1] [i_8] [i_7] [i_7]))))))));
                                var_19 += (((((1 - (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2])))) <= (arr_23 [i_9 + 1] [i_9] [i_9 - 1] [i_9] [i_2])));
                            }
                        }
                    }
                    var_20 = (arr_10 [i_2] [11]);
                    arr_30 [i_7] [i_3] [i_2] = var_5;
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_21 = (((arr_16 [i_2] [10] [i_2] [i_2] [i_2] [i_2] [0]) ^ (1 | 1)));
                    var_22 = var_7;
                    var_23 = 65520;

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_24 = (((arr_33 [i_2] [i_3] [i_10]) ? (arr_23 [i_2] [i_3] [i_10] [i_11] [i_11]) : (arr_33 [i_2] [i_3] [i_10])));
                        arr_37 [i_2] [i_3] = (((arr_23 [i_11] [i_10] [i_3] [i_2] [i_2]) ? var_9 : (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2])));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_25 = (arr_34 [15] [i_2] [i_10] [i_12]);
                        arr_40 [i_12] [i_12] [i_12] [i_2] = var_4;
                        var_26 = 2147483647;
                        var_27 = (max(var_27, (1853344036 / var_8)));
                        var_28 += ((896 | (~1)));
                    }
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_29 = 1;
                    arr_43 [i_2] [i_3] [i_13] [i_13] = var_1;
                }
                var_30 += ((-(arr_22 [i_2] [i_2])));
            }
        }
    }
    var_31 = (var_3 ^ (((var_2 == 1250798869) ? (((var_8 ? var_7 : 1))) : 15178695270943886137)));
    #pragma endscop
}
