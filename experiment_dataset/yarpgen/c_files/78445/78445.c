/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_10 = -60586252;
        var_11 = ((((arr_1 [i_0 + 1]) ? 96987791 : (arr_1 [i_0 - 1]))) % (((((arr_0 [i_0] [i_0 - 2]) & 2147483647)) ^ (((arr_1 [i_0]) / 8483)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_12 -= ((2147483647 ? ((min((arr_8 [i_0 - 1] [i_2] [i_2]), (arr_0 [i_1] [i_1])))) : (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3])));
                        arr_11 [i_1] |= ((arr_5 [i_0] [i_1] [i_2] [i_3]) * (1839722497 & -768181974));
                        arr_12 [i_0] [i_1] [i_1] = ((arr_1 [i_1]) % (((arr_10 [i_3 + 1] [i_3 + 1] [i_3] [i_3]) ? ((3770730683 | (arr_6 [i_0] [i_1] [i_2] [i_0]))) : 524236613)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        var_13 = (max(var_13, (arr_0 [i_6] [i_6])));
                        arr_22 [i_0] [i_4] [i_4] [i_5] [i_5] [i_0] = ((((arr_19 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_6 - 1] [i_6 - 1]) ? (arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_6 - 2]) : (arr_19 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_6 + 1] [i_6 - 1]))) * 0);
                        var_14 &= ((((((min(32767, 1335409259)) ^ (((((arr_0 [i_6] [i_6]) == 4503595332403200))))))) ? (min((((arr_14 [i_0] [i_5] [i_5]) / (arr_2 [i_6] [i_6]))), (((7936 ? (arr_20 [i_0] [i_6] [i_5] [i_6]) : -2147483647))))) : (arr_18 [i_0] [i_4] [i_5] [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_15 -= (arr_6 [i_0] [i_4] [i_5] [i_7]);
                        var_16 = (min(var_16, var_5));
                        var_17 -= ((((((arr_3 [i_0 - 3] [i_0 - 2] [i_0 - 1]) + (arr_3 [i_0 - 2] [i_0 + 1] [i_0 - 3])))) < (arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 3])));
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_18 = ((arr_8 [i_0 + 1] [i_4] [i_4]) ? 28637 : (arr_26 [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 2]));
                        var_19 = (((arr_17 [i_5] [i_4] [i_0]) * (arr_27 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1])));
                        arr_28 [i_0] [i_5] [i_0] [i_0] = (((arr_19 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 1]) ? (arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 3]) : (arr_21 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_4])));
                    }
                    var_20 = (min(var_20, (arr_15 [i_5])));
                }
            }
        }
        var_21 ^= (var_1 | 2147483647);
    }
    var_22 = ((18446744073709551615 ? (((max(var_7, 345016132)))) : (min((max(var_5, var_1)), (0 & var_1)))));
    #pragma endscop
}
