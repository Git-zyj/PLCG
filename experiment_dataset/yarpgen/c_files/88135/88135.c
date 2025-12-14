/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((((max((arr_4 [i_1 + 1] [i_1 + 1]), (arr_4 [i_1 + 1] [i_1 - 1])))) ? (((((!(arr_0 [6]))) ? ((-(arr_3 [i_1]))) : (((arr_1 [i_0]) / (arr_2 [i_0])))))) : ((((((arr_1 [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_0 [8])))) ? ((((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_3 [i_1])))) : (arr_4 [i_1 + 1] [i_1 + 1])))));
                var_13 = ((((((arr_2 [i_1]) == (arr_4 [i_0] [i_0])))) >= (max((arr_4 [i_1 - 1] [i_0]), (arr_0 [i_1 + 1])))));
                arr_5 [i_1] = (!((min((((arr_2 [i_1]) ? (arr_0 [i_0]) : (arr_2 [0]))), ((((arr_0 [i_0]) > (arr_3 [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            {
                arr_11 [i_3] = min((((!(arr_9 [i_2] [i_3])))), (min((arr_10 [i_3 - 2] [i_3] [i_3 - 2]), (arr_3 [i_3]))));
                arr_12 [i_2] [i_3] = (((((arr_1 [i_3 - 2]) ? (arr_1 [i_3 - 3]) : (arr_3 [i_3]))) > (min(104, 897805695))));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_14 = (arr_3 [i_3]);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_15 = (((arr_1 [i_3 + 1]) ? (((arr_6 [i_2] [i_2]) + (arr_10 [i_2] [i_3] [i_2]))) : (arr_16 [i_2] [i_2] [i_2] [i_2])));
                            var_16 = ((arr_16 [i_3 - 3] [i_3] [i_3 + 1] [i_3 + 1]) == (arr_1 [i_6]));
                            arr_21 [8] [i_3] [i_4] [8] [i_3] [3] = (((arr_19 [i_3 - 1] [i_3] [i_3 - 3]) ? ((((arr_0 [i_5]) || (arr_17 [i_2] [5] [i_3] [i_2])))) : (((arr_6 [i_2] [i_2]) - (arr_16 [i_2] [2] [i_4] [i_5])))));
                            arr_22 [i_3] [i_2] [i_3] [i_3] [i_3] [i_2] = (arr_0 [i_2]);
                            arr_23 [i_2] [i_2] [i_3] = (((arr_18 [i_3] [i_2]) ? (arr_0 [i_3 - 1]) : (arr_2 [i_2])));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_17 = (arr_20 [i_3] [i_3]);
                            var_18 = (arr_4 [i_2] [i_2]);
                            var_19 = ((arr_9 [i_2] [i_3]) ? ((~(arr_17 [i_2] [5] [i_3] [i_2]))) : (((arr_8 [i_2]) ? (arr_3 [i_3]) : (arr_19 [i_3] [i_4] [i_7]))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_20 = (((arr_18 [i_3] [i_3 - 1]) ? (arr_18 [i_3] [i_3 - 1]) : (arr_18 [i_3] [i_3 + 1])));
                            var_21 = (((arr_10 [i_8] [i_3] [i_4]) || (arr_10 [i_2] [i_3] [6])));
                            arr_28 [i_2] [i_2] [i_3 - 1] [i_4] [i_3 - 1] [1] [i_3] = (((arr_13 [i_3] [i_3 - 3]) ? (arr_13 [i_2] [i_3 + 1]) : ((~(arr_20 [i_3] [i_3])))));
                        }
                        var_22 = ((11253349827991295618 ? 16689127822338222817 : 23986));
                    }
                    for (int i_9 = 1; i_9 < 7;i_9 += 1)
                    {
                        var_23 = (min(((((arr_17 [i_2] [1] [i_3] [i_9]) > (arr_17 [5] [i_9 + 2] [i_3] [i_9 + 3])))), (min((arr_24 [i_2] [i_3] [i_4] [i_2]), (arr_2 [i_4])))));
                        arr_33 [7] [i_3] [i_4] = ((~(((arr_10 [i_9 + 2] [i_3] [i_4]) + (((-55 ? 3266 : -4632640323356282239)))))));
                        arr_34 [i_3] = (min(((-(((arr_16 [5] [5] [i_4] [i_9]) + (arr_20 [i_3] [i_9]))))), (((arr_18 [i_3] [i_3 - 2]) ? (arr_18 [i_3] [i_3 - 3]) : (arr_18 [i_3] [i_3 + 1])))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_42 [i_2] [i_3] [i_4] [i_3] [i_3] = ((((((arr_8 [i_3]) ? (min((arr_36 [0] [i_3] [i_3]), (arr_2 [i_3]))) : (((arr_25 [1] [1] [1] [1] [i_11] [i_11]) ? (arr_19 [0] [i_3 + 1] [i_4]) : (arr_7 [i_10])))))) ? ((((((arr_2 [i_2]) ? (arr_27 [i_2] [i_2] [i_2] [4] [i_3]) : (arr_4 [i_3] [i_11])))) ? (((arr_19 [7] [i_3] [i_4]) ? (arr_32 [i_2] [i_3 - 1] [i_2] [i_2] [i_10] [i_11]) : (arr_3 [i_3]))) : ((((arr_0 [i_2]) ? (arr_3 [i_3]) : (arr_15 [i_2])))))) : (((min((arr_31 [7] [7] [i_3 - 1] [i_3 + 1]), (arr_31 [i_3] [i_3] [i_3] [i_3 - 2])))))));
                                arr_43 [i_3] [2] [1] [2] [i_11] = (((max(((((arr_4 [i_3] [i_10]) ? (arr_32 [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2]) : (arr_1 [i_3])))), (arr_4 [8] [i_4]))) > (arr_38 [i_2] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((max(var_0, var_7))) ? var_0 : (!var_2)));
    var_25 = (min((max(((var_2 ? var_6 : var_9)), ((var_1 ? var_9 : var_8)))), ((max((min(175, 2734)), var_7)))));
    #pragma endscop
}
