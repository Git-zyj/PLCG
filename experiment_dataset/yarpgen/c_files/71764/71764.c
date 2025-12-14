/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_2 ? var_4 : var_6)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_11 = (min(var_11, var_6));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_12 = (min(var_12, var_6));
                            arr_17 [i_0] = 1;
                            var_13 ^= ((~(arr_5 [i_2] [i_3 + 2] [i_4 + 2])));
                            arr_18 [i_0] [i_2] = (arr_1 [i_0]);
                        }
                    }
                }
            }
            arr_19 [i_0] = 966086897;
            var_14 = ((9321191172052504367 && (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_30 [i_0] = (arr_24 [i_0] [i_1] [i_1]);
                            var_15 = (min(var_15, 18446744073709551615));
                            arr_31 [i_0] [i_0] [i_5] [i_0] [i_7] = arr_8 [i_0] [i_0] [i_0] [i_6];
                        }
                    }
                }
            }
            var_16 = 966086897;
        }
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            var_17 -= var_8;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_42 [i_0] [i_0] = (((1203832887 & (arr_9 [i_0]))));
                        arr_43 [i_0] [i_8] [i_8] [i_8] = (((18446744073709551601 ? 9125552901657047233 : (arr_12 [i_0] [i_10]))));
                    }
                }
            }
            arr_44 [i_0] = (arr_32 [i_0]);
        }
    }
    #pragma endscop
}
