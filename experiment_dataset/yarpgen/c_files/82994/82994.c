/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, var_1));
                    arr_9 [i_0 - 1] [i_0] [i_0] [i_0] = (!-1257927991);
                }
            }
        }
        var_14 = ((1 ? (((((arr_7 [i_0] [i_0] [i_0 + 2]) <= (arr_0 [i_0] [i_0]))))) : -var_8));
        arr_10 [i_0] = ((((var_2 ? var_7 : var_9)) | -var_1));
        arr_11 [i_0] [i_0] = arr_5 [i_0 + 3];
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [i_0 + 1] [i_0] [i_0] = ((~(arr_17 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_0])));
                        arr_20 [i_0] [i_3] [i_3] [i_3] [8] = var_0;
                    }
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        var_15 -= ((arr_8 [10] [i_0 + 2] [10]) / -1);
                        var_16 = (((arr_16 [i_6] [i_6 - 2] [i_6] [i_6 - 1]) ? (arr_22 [i_6] [i_6 - 2] [i_6 - 4] [i_6 - 1]) : (arr_16 [i_6] [i_6 - 2] [i_6] [i_6 - 1])));
                        arr_24 [i_0] [i_3] [i_0] [i_4] [8] [i_3] = var_1;
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_17 = (((arr_21 [i_0 - 1]) < (0 | 1)));
                        var_18 ^= (25 & (arr_5 [i_0 - 1]));

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_19 ^= 231;
                            arr_29 [i_0] [i_0] = (arr_5 [i_0 + 3]);
                            arr_30 [i_7] [i_3] [i_3] [i_0] [1] = (((arr_0 [i_0 + 1] [i_3]) ? (arr_0 [i_0 - 1] [i_3]) : 206));
                            arr_31 [i_8] [i_0] [7] [i_0] [i_0 + 1] = (((var_10 >= 1) | 7425545846366194321));
                        }
                    }
                    arr_32 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_3] [i_4]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_20 = ((-41 ? 0 : 65535));
        var_21 -= var_8;
    }
    var_22 *= ((((-((min(var_1, var_0))))) >= ((((~var_5) <= 0)))));
    var_23 = 1;
    #pragma endscop
}
