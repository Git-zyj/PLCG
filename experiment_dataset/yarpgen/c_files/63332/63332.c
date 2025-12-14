/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_20 = (arr_3 [i_2] [i_1] [3]);
                    var_21 *= (((((255 ? -6598939204672568776 : 242))) | ((((min(-9223372036854775802, var_6))) ? (~var_12) : (((arr_7 [i_2] [i_1] [i_1] [10]) ? (arr_1 [i_1]) : var_0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_15 [7] [i_0] [i_0] [i_0 - 2] = (((((arr_2 [i_0 - 1]) / (arr_2 [i_2 + 3]))) - (~-19049)));
                                arr_16 [i_4] [i_4 + 2] [i_0] [i_2] [i_0] [i_1] [i_0] = (((arr_14 [5] [i_2] [i_0] [6] [i_0] [i_2 - 1] [i_0 - 4]) || -9223372036854775802));
                            }
                        }
                    }
                    var_22 = (-(((arr_5 [i_2 + 1] [i_2 + 2] [i_0 - 4]) ? (arr_5 [i_2 + 1] [i_2 + 2] [i_0 - 4]) : var_12)));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_21 [4] [i_6] [i_0] [i_0] [5] [5] = (((((12200776487663872995 ? ((((arr_0 [2] [i_1]) ? var_1 : 20399))) : ((-1 | (arr_13 [2] [i_5] [i_5] [0] [2] [1] [0])))))) > ((max((arr_4 [i_6]), var_11)))));
                        arr_22 [i_0] [i_0] = arr_20 [i_6] [0] [i_1] [i_0];
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_23 = (arr_0 [i_7] [i_5]);
                        var_24 += ((max(var_0, 5364973981470534884)) + (arr_0 [2] [i_0 - 3]));
                    }
                    var_25 = (arr_3 [4] [i_1] [i_0]);
                    var_26 = (min(-9223372036854775794, (min(((min((arr_7 [4] [11] [7] [4]), var_5))), ((~(arr_20 [i_5] [i_5] [i_1] [i_0])))))));
                }

                /* vectorizable */
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        arr_31 [i_0] [i_8] [i_1] [i_0] = var_15;
                        var_27 *= -6598939204672568776;
                        var_28 += (((arr_0 [i_8] [i_0]) ? (arr_27 [i_9] [i_8] [i_1] [i_0]) : (var_10 % 6245967586045678597)));
                    }
                    var_29 += (((arr_25 [i_8] [i_8] [i_8 + 1] [i_0 - 2] [2] [i_0]) ? (!253) : (((arr_13 [i_8] [i_8 + 1] [7] [6] [i_0] [i_0] [i_0]) + (arr_17 [i_8] [i_1] [i_0] [i_0])))));
                    arr_32 [i_0] [i_0] = (((arr_23 [11] [i_1] [i_0]) >= 1));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_37 [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] = ((12200776487663872995 / (arr_19 [i_11] [i_10] [i_8] [0] [10] [10])));
                                var_30 = (~(arr_24 [i_8 - 1] [i_0] [i_0 - 1]));
                                var_31 = ((+(((arr_13 [i_11] [9] [i_0] [i_8] [1] [i_0] [i_0]) ? (arr_6 [i_10] [i_10] [i_8] [i_0]) : 9223372036854775776))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 -= var_1;
    #pragma endscop
}
