/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 -= 0;
    var_13 = (~var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 2964054749;
        var_14 += (2110872401 + ((~(arr_0 [17] [i_0]))));
        arr_3 [i_0] [i_0] = ((!2690066997) ? 2230201300 : 1763633884);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 = 1076425852;

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_10 [6] [i_0] [i_0] &= (arr_0 [i_0] [16]);
                arr_11 [i_0] [19] [i_0] [8] = (arr_1 [i_1]);
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_16 += ((arr_9 [i_0] [i_3] [i_5]) & (arr_4 [i_4]));
                            var_17 = arr_20 [i_5] [i_5] [i_4] [i_3] [i_1] [i_0];
                        }
                    }
                }
                var_18 = (min(var_18, ((-((var_9 ? 1763633884 : var_2))))));
            }
            arr_21 [i_0] = arr_8 [i_1] [i_1] [i_1] [14];
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    {
                        var_19 = arr_14 [i_0] [i_0] [i_0];
                        var_20 = arr_12 [i_6] [i_6] [i_1] [i_0];
                        var_21 ^= (-((-(arr_16 [i_0] [i_0] [7] [i_0]))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_31 [i_8] = ((arr_29 [i_8] [i_8]) ? ((-(arr_25 [15] [15] [i_8] [i_8]))) : var_3);
        arr_32 [i_8] = max((((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (max((arr_8 [i_8] [i_8] [i_8] [i_8]), 4294967295)) : ((var_4 ? 65535 : 4294967295)))), (((max((arr_8 [i_8] [12] [i_8] [i_8]), var_1)) ^ 2133665105)));
        arr_33 [i_8] = ((!0) ? (min(18, 4294967295)) : (((arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [4]) : var_2)));
        var_22 -= arr_1 [i_8];
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    var_23 += var_3;
                    arr_39 [i_10] = max(4294967286, (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        arr_42 [i_11] = var_8;
        arr_43 [i_11] = 2676107432;
        var_24 = arr_17 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11];
    }
    var_25 = var_6;
    #pragma endscop
}
