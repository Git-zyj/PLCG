/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_12 ^= (((arr_1 [i_0]) == ((((((arr_0 [i_0 + 2]) + 60))) ? (arr_0 [i_0]) : 81))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_11 [2] [i_3] &= ((~(max((arr_6 [i_0] [i_0] [i_0] [0]), (((arr_8 [0] [i_2]) | (arr_10 [i_0] [i_1] [i_0] [i_2] [2] [i_3])))))));
                        var_13 = arr_9 [i_1];
                        var_14 = ((((min((arr_3 [i_0] [i_0 + 2] [i_0]), (arr_3 [i_0] [i_0 - 2] [i_0 + 1])))) / ((min((arr_3 [i_0] [i_0 - 4] [i_0 - 4]), (arr_3 [i_0] [i_0 - 3] [i_0 + 2]))))));
                        var_15 = arr_6 [i_1] [i_1] [8] [i_0];
                    }
                }
            }
        }

        for (int i_4 = 3; i_4 < 6;i_4 += 1)
        {
            var_16 = ((((min((arr_4 [i_0 - 1]), (arr_4 [i_0 - 1])))) ? (((arr_4 [i_0 - 1]) & -10)) : var_9));

            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_17 = (min(((max((arr_16 [i_0] [i_4] [i_4] [i_4 - 3]), (arr_16 [i_0] [i_4] [i_4 + 1] [i_4 - 1])))), (((((-13 ? 10 : (arr_17 [i_0] [i_4 + 1] [i_5] [i_6])))) ? ((max((arr_21 [i_7] [i_6] [i_4]), var_6))) : ((max((arr_7 [i_0] [i_0] [i_5]), (arr_13 [i_0] [i_0]))))))));
                            var_18 = 9;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_19 = arr_17 [i_9] [3] [i_0] [i_0];
                            var_20 &= ((((((arr_13 [0] [i_4 + 3]) / (arr_1 [0])))) ? (((((arr_19 [i_0] [i_4 + 3] [i_5] [i_8] [i_9]) * (arr_24 [4] [i_5] [i_8] [0]))))) : (max(((~(arr_24 [8] [i_4] [i_4] [i_4 - 1]))), ((((arr_22 [i_0 - 4] [i_4] [i_5] [i_5] [i_8] [i_9]) != 121)))))));
                            var_21 += 106;
                        }
                    }
                }
                var_22 = (min(var_22, ((((arr_17 [7] [i_4] [i_4 - 2] [i_4]) ? (min((arr_16 [4] [i_4] [4] [i_4]), (((var_9 + 2147483647) >> (((arr_18 [8] [i_0] [8] [i_5]) - 28)))))) : var_9)))));
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_23 &= var_8;
                    var_24 &= (arr_32 [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_25 = ((~(min(((var_10 | (arr_36 [i_0 - 1] [i_0 - 1] [i_10] [i_0]))), (arr_0 [i_4 - 3])))));
                    var_26 = (min(var_26, (((var_5 ? ((~((min((arr_16 [2] [i_10] [2] [2]), 88))))) : ((((max(var_10, (arr_27 [i_0 + 2] [i_0] [i_0])))) ? ((var_4 ^ (arr_22 [i_0] [6] [i_10] [i_12] [i_4] [i_12]))) : 15)))))));
                }
                var_27 = (min(var_27, (((((((var_8 > -56) ? (arr_15 [2]) : 64))) ? ((~(arr_3 [6] [i_4 + 1] [i_10]))) : (((111 > (((arr_9 [8]) - var_2))))))))));
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                var_28 -= var_7;
                var_29 = (min(var_29, (~33)));
                var_30 = max(44, (min(124, -36)));
            }
        }
        for (int i_14 = 2; i_14 < 8;i_14 += 1)
        {
            var_31 = min((((var_7 || (arr_13 [i_0] [i_14])))), (arr_14 [i_0] [i_14]));
            var_32 = (((arr_7 [i_0 - 3] [i_0] [i_0 - 3]) >= ((-105 ? -101 : -111))));
        }
    }
    var_33 &= (max((~var_9), (min((105 && 92), (var_4 / var_5)))));
    #pragma endscop
}
