/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((1 ? 0 : 9223372036854775807)))));
    var_14 = ((160 <= (((!38006) ? ((5159805713505123997 ? var_5 : 32767)) : 1))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_15 = (((arr_2 [i_0 - 1]) <= var_9));
                        arr_12 [i_3] [i_3] = (((arr_11 [5] [i_1] [1] [i_1]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1 - 2])));
                    }
                }
            }
            arr_13 [i_0] [4] = (!(((552842634 | (arr_0 [i_1])))));
        }

        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_16 *= ((var_2 ? (arr_14 [i_0] [i_0 + 1] [i_0 - 2]) : var_12));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_22 [i_0 - 1] [i_0 - 1] [i_5] [3] &= (((var_11 ? 1057173904 : 3968)));
                        arr_23 [i_5] [i_5] [i_5] [i_5] = ((((1 ? -30171 : 158))) ? var_11 : -5147007614915688597);
                    }
                }
            }
            arr_24 [i_4] [1] [i_0 - 2] = (arr_2 [i_0]);
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
        {
            arr_29 [i_0 + 1] = ((var_5 * (arr_14 [i_7] [i_0 - 1] [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_37 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_8] = -3293879874660923201;
                            arr_38 [i_8] [i_9] = ((-((1926358766 ? var_1 : (arr_15 [i_0 + 1])))));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_41 [i_8] = ((var_6 ? (arr_1 [1] [i_7 - 2]) : 255));
                            arr_42 [i_0] [i_8] [i_0] [i_0] [i_0] = 0;
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_17 ^= 424882650901713402;
                            var_18 = (arr_17 [i_9] [i_9] [i_9]);
                            arr_45 [i_9] [i_8] [i_9] [i_9] [i_9] [i_9] = ((!(arr_30 [i_0 + 1])));
                            var_19 = 1;
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_20 = ((54674 + (arr_2 [i_0 + 1])));
                            arr_49 [i_0] [7] [0] [i_0] [i_8] = var_2;
                        }
                        var_21 = (((arr_25 [i_7] [i_7 - 1] [i_7 + 2]) ? var_9 : (arr_21 [1] [1] [i_9] [i_9] [i_0])));
                        arr_50 [i_8] [i_8] [i_7 + 1] [i_8] = 0;
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            var_22 = (max(var_22, (((var_3 && (((62628 ? (((0 <= (arr_27 [9] [i_0 - 2] [i_0])))) : var_11))))))));
            arr_55 [i_0] |= (((((arr_15 [i_14]) ? (arr_15 [i_0 + 1]) : var_10))) != ((var_12 ? -8197787180181904153 : (8524 != -3516400935009169249))));
        }
    }
    #pragma endscop
}
