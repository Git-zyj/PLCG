/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min((((max(365047896409236164, -74)))), ((-((max(var_8, 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] = (arr_4 [i_3] [i_3] [8] [i_3]);
                        var_14 = (arr_0 [i_0] [i_0]);
                        var_15 = (1 & 9223372036854775800);
                        var_16 -= (!((((arr_1 [i_2 + 2] [i_2]) % ((~(arr_2 [i_0])))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_17 ^= min(((1 ? (arr_5 [i_0 - 1]) : (arr_5 [i_5]))), (((!(arr_1 [i_0 - 1] [i_5])))));
                            var_18 = (max(var_18, ((min((arr_0 [i_0 + 1] [i_1 - 1]), (arr_13 [i_0 - 1] [12] [i_2] [i_4] [i_5]))))));
                            arr_15 [i_4] = (((arr_7 [i_0] [i_1 - 1]) ? ((-2025062246 ? -150515322 : 92)) : ((((32767 >= (arr_2 [i_4])))))));
                            var_19 = (min(((((max(1, (arr_6 [i_0] [i_1] [i_4] [i_4])))) % ((((arr_13 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0]) >= (arr_11 [i_4] [i_4])))))), ((max((arr_6 [i_2] [i_1 - 1] [4] [i_2 + 2]), (arr_6 [i_2 + 1] [i_1 - 2] [12] [i_2 - 2]))))));
                            var_20 = ((~(~50006)));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_21 -= (max((arr_13 [i_1] [i_1 + 3] [8] [i_2 - 1] [i_2 + 3]), (--1)));
                            arr_18 [i_0] [i_1] [i_4] [i_4] [i_4] = (arr_14 [i_0] [i_1] [i_2] [i_4] [i_6]);
                            var_22 = ((!(((~(arr_13 [i_0] [i_0 + 2] [i_2 + 1] [i_0 + 2] [i_6]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_23 = (1 >= 962072674304);
                            var_24 = (min(var_24, ((((arr_2 [i_2 + 2]) >= (arr_2 [i_2 + 2]))))));
                            var_25 = (max(var_25, (arr_7 [i_2 + 2] [i_4])));
                        }
                        var_26 = (min(var_26, 102));
                        arr_22 [i_0] [i_1] [i_2] [i_4] [10] [i_4] = (min((((!(arr_8 [i_0 + 3] [i_1 - 1])))), ((~((-(arr_0 [i_0] [i_2])))))));
                    }
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {
                        arr_26 [i_0] [i_0 + 4] [i_0] [i_0] [1] = ((~(1 / 1)));
                        var_27 *= -116;
                        var_28 *= (min((arr_13 [i_8] [i_1] [i_1] [i_1] [i_0 + 3]), ((((((arr_1 [i_0] [i_1]) && (arr_3 [i_8 - 2] [i_0] [i_0]))) || ((!(arr_16 [i_0] [i_0]))))))));
                        arr_27 [i_0 + 2] [1] [i_2 + 3] [i_8 - 2] = (arr_20 [i_1 + 2] [i_0 + 4] [i_2 + 2] [i_8 - 1] [i_1] [10]);
                    }
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            var_29 = arr_3 [i_9] [i_9] [i_9];
                            arr_33 [i_9] [i_1] [i_9] [i_9 - 1] [i_0] = ((!((!((min((arr_29 [7]), -59)))))));
                        }
                        arr_34 [i_0] [1] [i_9] [3] = ((+(((arr_21 [i_0] [i_1] [0] [i_2] [i_2] [i_9] [i_0]) ? ((1 | (arr_28 [i_0 - 1] [1] [i_0 - 1] [i_2] [i_9]))) : ((min(0, (arr_4 [i_0] [i_0] [i_2 + 1] [i_2 + 1]))))))));
                        var_30 ^= ((((!(arr_7 [i_0] [i_0]))) ? ((-8161 ? ((-119 / (arr_13 [i_0] [i_1] [11] [i_9 - 3] [i_9 - 2]))) : (((1 * (arr_28 [i_9] [i_2] [i_2 + 1] [i_1 - 1] [i_0])))))) : (arr_14 [8] [i_1] [i_1] [2] [i_1])));
                        var_31 ^= (((arr_6 [i_1] [i_1] [i_2 + 2] [i_1]) ? ((-(~1))) : ((-(min((arr_7 [1] [i_9]), 517808063))))));
                    }
                    var_32 = (~6371246315311730056);
                }
            }
        }
    }
    #pragma endscop
}
