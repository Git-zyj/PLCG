/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_15 = (min(((-3907388504861059342 ? -3907388504861059342 : 0)), 1));
                    var_16 *= (~18446744073709551615);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (min((((arr_10 [i_3] [i_3 - 1] [i_2] [i_3 - 1]) ? (arr_10 [i_3] [i_3 - 1] [i_2] [i_3 - 1]) : (arr_10 [i_3] [i_3 - 1] [i_2] [i_3 - 1]))), (((arr_10 [i_3] [i_3 - 1] [i_2] [i_3 - 1]) / (arr_10 [13] [i_3 - 1] [i_2] [i_3 - 1])))));
                                var_18 = (((((~(arr_1 [i_2 + 1])))) / ((8595315449705201102 ^ (arr_11 [i_0] [22] [i_2])))));
                            }
                        }
                    }
                    arr_13 [i_2 + 1] [13] [i_2] = ((~(arr_11 [i_0 - 3] [i_1] [i_2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                {
                    arr_22 [i_5] = (((((arr_19 [i_6 + 2] [i_6] [i_5] [i_6]) ? (arr_10 [i_6 - 3] [i_6] [i_5] [i_6]) : var_1)) / (arr_19 [i_6 + 1] [i_6] [i_5] [8])));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_26 [i_5] [1] [i_5] = var_8;
                        var_19 = ((arr_8 [i_6]) ? (max(var_0, (arr_19 [i_5 - 1] [i_6 + 2] [i_5] [i_6 - 3]))) : 62368);
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_20 = ((-(max(-var_10, (arr_24 [6] [i_6 - 1] [13] [i_7 + 1])))));
                        var_21 = (((((arr_3 [i_5 - 1]) ? (arr_5 [i_5 + 1] [i_5] [i_9]) : (arr_3 [i_7 + 1]))) < (arr_5 [i_6 - 2] [i_5] [i_9])));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_22 = var_11;
                        var_23 = -21;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_24 = -var_1;
                            var_25 = (-5341019042165272221 && -8595315449705201103);
                            arr_36 [i_5 + 1] [i_6] [i_7] [i_11] [3] [i_5] = ((~(arr_32 [i_6] [i_6 - 3] [i_6] [i_6 - 2])));
                            var_26 = (max(var_26, (((((((arr_32 [i_5] [1] [13] [i_5]) % var_9))) ? (arr_5 [1] [20] [i_7]) : ((1 ? (arr_32 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5]) : var_2)))))));
                        }
                        var_27 = ((66 ? -21 : 27));
                    }
                }
            }
        }
    }
    var_28 = (max(var_28, var_13));
    #pragma endscop
}
