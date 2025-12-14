/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((((min(var_5, var_13))) ? var_7 : var_6)), 36));
    var_18 = (((min(var_1, ((max(1136997752, 3))))) == var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_19 = ((((((min(220, -44))) <= (var_11 <= var_8))) ? (((var_10 && (arr_3 [4] [i_1])))) : ((min(var_9, (arr_2 [10]))))));
                    var_20 &= ((-var_1 == (((((arr_1 [i_2]) > var_15))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_10 [1] [1] [14] [i_1] = ((((var_6 ? (arr_1 [8]) : (arr_0 [5]))) << (var_4 - 38138)));
                    var_21 = ((var_10 ? (((arr_5 [11]) ? (arr_0 [14]) : (arr_2 [10]))) : (arr_2 [i_1])));
                    arr_11 [1] [i_1] [i_1] [1] = (((((42 << (((arr_8 [1] [5] [0]) - 196))))) ? ((-36 ? var_8 : (arr_8 [8] [0] [14]))) : (var_14 == 9223372036854775807)));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_14 [6] [1] [i_1] = -42;
                    var_22 -= ((63 & (((var_13 + 9223372036854775807) >> (215 - 159)))));
                    var_23 = ((min((arr_3 [1] [i_1]), (arr_8 [1] [i_1] [3]))));
                }
                arr_15 [i_1] [i_1] = ((~(((((var_13 ? var_13 : (arr_13 [9] [2] [5] [13])))) ? (var_4 * var_4) : (-533399574 == var_13)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_23 [18] [1] &= max(var_8, (~var_6));
                    arr_24 [1] [1] [1] [1] &= ((-9165 ? ((max(0, 36))) : -1136997753));

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_24 = -4400267223837117778;

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_25 = (max((arr_22 [i_5 - 1]), (arr_25 [i_9] [1] [21] [i_5 + 2])));
                            var_26 = var_5;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            arr_35 [22] [6] [5] [17] [17] = ((6035522604810964561 ? var_6 : ((((arr_20 [7] [1] [3]) > 1)))));
                            var_27 = (min(var_27, (((arr_33 [5] [i_5 + 1] [13] [i_5 + 2] [i_5 - 1]) ? ((((var_12 == (arr_25 [21] [23] [1] [5]))))) : (arr_29 [i_10] [i_5 + 1])))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_28 += (~-2379026816);
                            var_29 += ((-(arr_37 [11] [9] [15] [15] [i_11])));
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_30 &= min(((min((arr_37 [1] [1] [7] [11] [7]), (max((arr_19 [6]), var_9))))), (max((max(1, 1538659595608639240)), (arr_26 [17] [1]))));
                            var_31 = 0;
                            var_32 = ((~38075) ^ (((((min(var_14, (arr_33 [18] [1] [1] [22] [4]))))) ^ (min((arr_18 [16] [3]), var_5)))));
                        }
                        arr_41 [10] [13] [2] [9] &= ((!((((!(arr_40 [10] [22] [3] [3] [11])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
