/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_15 = (max(var_15, (-1734617375 | -10344)));
                        var_16 = (min(var_16, -5425170723104561233));
                        arr_9 [i_0] &= (arr_0 [i_2 - 1]);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_13 [i_1] [i_2] = arr_10 [i_2] [i_1] [i_2] [i_4] [i_4];
                        arr_14 [i_2] [i_4] [i_2] [i_2] [i_2] = (((min((arr_6 [i_2 - 1]), (arr_6 [i_2 - 1])))) ? (((~(arr_3 [i_1] [i_2 - 1] [i_2 - 1])))) : (((arr_3 [i_0] [i_2 - 1] [i_2 - 1]) % (arr_6 [i_2 - 1]))));
                        var_17 = (min(var_17, ((min((((arr_5 [i_0] [i_1] [i_2 - 1] [i_4]) ? (arr_12 [i_4] [i_2] [i_2 - 1]) : var_0)), (arr_0 [i_2 - 1]))))));
                    }

                    for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        var_18 ^= (5425170723104561232 ? -25894 : 13514772753836513411);
                        var_19 += (min(((max(((-5425170723104561202 ? -22446 : -1653223098)), (arr_3 [i_1] [i_2] [i_5 + 1])))), (max(((max(1105923591, 1))), ((8675973671579199695 >> (var_11 - 1419442331467335094)))))));
                        arr_18 [i_0] [i_1] [i_2] [i_2] = (~34);
                    }
                    for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            var_20 = (min(var_20, ((max((((arr_7 [i_0] [i_1] [i_0] [i_6]) ? 46 : (arr_20 [i_7] [i_1] [i_2]))), (((211 != (arr_21 [i_0] [i_1] [i_2])))))))));
                            arr_23 [i_6] [i_7] [i_2] [i_2] [i_7] = (max(((((arr_12 [i_2] [i_6] [i_7]) < (arr_15 [i_7 - 2] [i_2 - 1] [i_2] [i_6 + 1])))), (min((arr_0 [i_0]), (arr_21 [i_6] [i_6 - 2] [i_6 - 3])))));
                            arr_24 [i_2] [i_6] [i_2] [i_2] [i_2] = (max(((((arr_0 [i_6 + 1]) != (arr_16 [i_6] [i_2] [i_2] [i_2 - 1])))), ((-(arr_17 [i_6 - 1] [i_7 - 3] [i_2 - 1] [i_0] [i_0])))));
                            var_21 = 1;
                        }

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = (((arr_5 [i_0] [i_6] [i_2] [i_6]) ? (~13540) : (arr_5 [i_0] [i_1] [i_2] [i_8])));
                            var_22 ^= ((((((5425170723104561244 != (arr_20 [i_0] [i_6 - 1] [i_2 - 1]))))) < (arr_0 [i_8])));
                            var_23 *= ((arr_22 [i_0] [i_1] [i_2] [i_6] [i_8]) | (((!(((-(arr_20 [i_0] [i_1] [i_1]))))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_32 [i_0] [i_2] [i_1] [i_2] [i_9] [i_10] = 1257276706;
                            arr_33 [i_0] [i_2] [i_1] [i_1] [i_2] [i_9] [i_10] = (((arr_20 [i_1] [i_9] [i_10]) ? 1 : (~191)));
                            arr_34 [i_0] [i_2] [i_2] [i_9] [i_10] = (((arr_31 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]) >= (arr_31 [i_2] [i_2] [i_2] [i_2 - 1] [i_2])));
                        }
                        var_24 = (arr_2 [i_9 - 3] [i_2 - 1]);
                        var_25 = (((arr_20 [i_0] [i_0] [i_2]) | (arr_21 [i_9] [i_2] [i_0])));
                        var_26 = (max(var_26, (((3189043716 ? -10264 : -7322325417535645649)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 11;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 10;i_12 += 1)
        {
            {
                var_27 ^= arr_37 [i_11] [i_12] [i_12];
                var_28 += (min(1, -331598152));
            }
        }
    }
    var_29 -= (var_11 ? ((-(~9494760868302953135))) : (1 | 1257276729));
    #pragma endscop
}
