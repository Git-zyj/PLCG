/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (((((5011 & (arr_1 [i_0 + 2] [i_0 + 1])))) ? (arr_1 [i_0 + 1] [i_0 - 1]) : -255));
                    var_20 = (min(var_20, ((((arr_1 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 + 2] [i_0 + 2]))))));
                    var_21 = (max(var_21, ((min((((arr_2 [i_0 + 2]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))), (arr_2 [i_0 - 1]))))));
                    arr_6 [i_0] [i_1] [i_2] = ((arr_2 [i_0 - 1]) ? (arr_3 [i_0]) : ((17780007775815403813 ? (arr_0 [i_0 + 1]) : 32767)));
                }
            }
        }
    }
    var_22 = (((((var_11 ? var_15 : var_12)) & var_18)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            {
                var_23 = (min((arr_9 [i_3]), (var_7 / var_12)));
                var_24 ^= (((arr_7 [10] [10]) && ((max((((!(arr_8 [i_3] [12])))), (((arr_10 [i_3] [2]) ? var_7 : (arr_7 [12] [2]))))))));

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_16 [i_3] = (arr_8 [i_4 + 1] [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_25 ^= max((max((arr_12 [i_6 + 3] [i_7 + 3] [0]), (arr_12 [4] [i_7 + 1] [2]))), (((63352 != (arr_20 [i_3] [i_4] [i_5] [i_5] [i_6 + 2] [i_6] [i_7])))));
                                arr_21 [i_3] [i_4] [i_5] [i_5] [i_7] = 21043;
                                var_26 = ((-(max(((min((arr_11 [i_3] [i_3]), (arr_10 [i_6] [i_3])))), (max((arr_9 [i_3]), 8565478445015910362))))));
                                var_27 = ((((min((arr_8 [i_3] [i_3]), (arr_8 [i_3] [i_3])))) ? (min((arr_8 [i_3] [i_3]), (arr_8 [i_3] [i_3]))) : (max(0, (arr_8 [i_3] [i_3])))));
                            }
                        }
                    }
                    var_28 ^= ((((min((arr_17 [i_3] [i_4 + 1] [i_3] [14] [i_5] [i_3]), (arr_17 [i_3] [i_4 + 1] [i_5] [12] [i_5] [i_5])))) ? (((-(arr_17 [i_3] [i_4 + 1] [i_5] [10] [i_5] [i_5])))) : (((arr_17 [i_4] [i_4 + 1] [i_5] [12] [i_5] [i_5]) ? (arr_17 [i_4] [i_4 + 1] [1] [12] [i_4] [1]) : var_9))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_29 = (max(var_29, (((((((arr_8 [i_4] [14]) && (arr_25 [i_3] [i_3] [i_8] [i_9]))) ? (arr_18 [i_3] [i_4] [i_4 + 1] [i_9]) : (48 && 255)))))));
                        var_30 = (max(var_30, ((min((arr_18 [i_4 + 2] [i_4] [i_4 + 1] [4]), (min((arr_18 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_8]), (arr_18 [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 1]))))))));
                        var_31 = ((-((var_10 ? (arr_17 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_3] [i_4 + 1] [i_4]) : (arr_17 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3] [i_4] [i_4])))));
                    }
                    var_32 = ((min((arr_25 [i_3] [i_4] [i_8] [i_4 + 2]), (arr_25 [i_3] [1] [i_8] [i_4 + 1]))));

                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        var_33 = ((-(((arr_8 [i_4 + 2] [i_3]) ? (arr_17 [i_3] [i_3] [i_4 - 1] [i_3] [i_10] [i_10 + 3]) : (arr_17 [i_4] [i_4 + 2] [i_4 - 1] [i_3] [i_4 - 1] [i_4 - 1])))));
                        var_34 ^= (max(((0 ? ((1902417164 ? 255 : 5241663931177308272)) : 12162)), 10048988299563796206));
                    }
                    var_35 = (min(var_35, (((44493 ? (((!(arr_17 [i_3] [i_3] [i_3] [10] [i_3] [i_3])))) : ((((((arr_15 [16]) ? (arr_11 [i_3] [1]) : var_7)) >= (((~(arr_18 [i_3] [i_4] [i_8] [1]))))))))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    var_36 = (max(var_36, ((((arr_25 [i_3] [i_3] [i_4] [16]) && (arr_10 [i_4 - 1] [8]))))));
                    arr_32 [6] [6] [i_3] = (41824 | 18446744073709551615);
                    var_37 = (((arr_17 [i_3] [i_4] [i_3] [i_3] [i_4 - 1] [i_3]) ? (arr_17 [i_11] [i_4] [i_3] [i_3] [i_4 - 1] [i_3]) : (arr_17 [i_11] [i_11] [i_3] [i_3] [i_4 + 1] [i_3])));
                    var_38 ^= var_12;
                }
            }
        }
    }
    var_39 = var_18;
    #pragma endscop
}
