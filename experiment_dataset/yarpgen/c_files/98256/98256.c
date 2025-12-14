/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (max(var_16, (arr_1 [i_0] [i_0])));
        var_17 = 15;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = ((arr_3 [i_1]) / (arr_3 [i_1]));
        var_18 -= ((((!(arr_4 [i_1] [i_1]))) ? (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : (min((arr_4 [6] [i_1]), (arr_3 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_19 += (arr_6 [i_1]);
                    var_20 = 1;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_7] [i_6] [i_5 - 2] [i_5 + 1] [i_4] [i_4] [5] |= ((~(arr_14 [3] [i_4])));
                            arr_23 [i_1] [i_4] [i_5 - 3] [i_4] = (((min(((min((arr_21 [i_1] [i_4]), -15))), (max(5, (arr_10 [i_7] [i_5] [i_4] [i_1]))))) != ((var_7 / (max((arr_16 [i_4] [11] [i_4] [i_7]), (arr_16 [i_4] [i_7] [i_5] [i_6])))))));
                            arr_24 [i_1] [i_5] = ((!((min((arr_4 [i_1] [i_1]), (arr_12 [i_5] [i_6]))))));
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_19 [i_1]);
                            var_21 = (max(var_21, ((((((var_8 ? ((14 ? var_0 : (arr_19 [i_1]))) : (!4294967295)))) ? ((((max(-1480710740695066946, (arr_12 [i_4] [i_5])))) ? (min((arr_17 [i_1] [i_4]), (arr_11 [11] [i_8] [10]))) : (11 * 15))) : (((var_4 ? (var_15 != 18446744073709551615) : -15))))))));
                            var_22 = (arr_26 [i_1] [i_4] [i_4] [i_6] [i_8]);
                        }
                        var_23 = ((-((18446744073709551615 ? (arr_16 [i_6] [0] [i_4] [i_1]) : 7155))));
                        arr_28 [3] [4] [4] [i_4] [i_5] [i_6] = var_11;
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_24 = ((var_6 % (((801243057 ? (arr_14 [i_4] [i_4]) : var_1)))));
                        var_25 ^= (min(((((arr_7 [10] [i_4] [i_1]) < (1125899906842368 < 0)))), (((arr_14 [i_5 - 3] [i_5 + 2]) - (-3 * 6)))));
                        arr_33 [2] [2] [i_5 - 3] [i_9] [8] = ((-(((-7528462958393656469 + 9223372036854775807) >> (1480710740695066974 - 1480710740695066925)))));
                    }
                    arr_34 [i_5] [i_4] [7] [i_5] = ((!(((((1 % (arr_29 [i_1] [i_4] [i_4] [i_4] [i_5] [i_5]))) >> (!651819744198968805))))));
                    var_26 = (max(var_26, (~-1480710740695066976)));
                }
            }
        }
    }
    var_27 = (((((2047735228 ? -2047735228 : 1480710740695066974))) ? (((var_7 % 9223372036854775807) - (((var_2 ? var_2 : 57463))))) : ((min(2047735228, (12288 * 20997))))));
    #pragma endscop
}
