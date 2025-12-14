/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_20 = ((~((9223372036854775807 % (arr_4 [i_0 + 1] [i_0] [5])))));
                    var_21 = (~-1);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        var_22 ^= -2147483630;
                        arr_12 [i_0] = (((~var_18) > 9223372036854775807));

                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            arr_16 [i_5 - 2] [8] [i_0] [i_1] [i_0] = (((4772316904851096583 < (arr_5 [1] [i_1] [i_4]))));
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_4 - 3] [i_5] = (((arr_8 [10] [i_4] [10]) - (arr_15 [i_0 + 2] [14])));
                            var_23 = ((~(arr_9 [3] [i_0 - 1] [i_5 - 1] [i_4])));
                            arr_18 [i_0] [i_0] = -1651575128;
                        }
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_24 = (((-(arr_13 [i_0] [i_0] [i_0] [i_0] [0] [4] [13]))));
                        var_25 = ((arr_9 [i_0] [i_0] [i_0] [i_0 + 2]) == (arr_15 [i_0 + 2] [i_0 + 2]));
                        var_26 ^= (!(!1));
                    }
                    var_27 = ((!(290 < 4950)));
                }
                arr_22 [i_0] = -6639;
                arr_23 [i_0] [i_0] = var_1;
            }
        }
    }
    var_28 *= (min(var_3, (~var_2)));
    var_29 = ((~(~var_15)));

    /* vectorizable */
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        arr_26 [20] = 112;
        arr_27 [i_7 - 1] [i_7] = (((arr_25 [i_7 - 1]) > (arr_24 [i_7 + 1] [i_7 + 1])));
    }
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        arr_41 [19] [15] = (min((min((arr_38 [i_8 + 4] [i_8] [i_8 + 1]), (arr_38 [i_8] [9] [i_8 + 1]))), (max((arr_38 [i_8] [i_8] [i_8 - 1]), (arr_38 [i_8] [i_8] [i_8 + 4])))));
                        var_30 = (arr_34 [i_8] [i_8]);
                    }
                }
            }
        }
        var_31 = ((((var_2 >> (((arr_39 [i_8] [i_8 - 2] [i_8 + 3] [i_8 + 1] [i_8 + 1] [i_8 + 3]) - 1912440683))))) << (((!(arr_30 [i_8 - 2])))));
        arr_42 [i_8] = (((-9223372036854775797 + 9223372036854775807) >> (-315 + 329)));
        var_32 = (var_0 / 1);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_33 = (((arr_33 [i_12]) ? (((-(arr_34 [i_12] [i_12])))) : (((arr_24 [1] [1]) << (arr_29 [i_12])))));
        arr_45 [1] &= (arr_8 [i_12] [i_12] [i_12]);
        var_34 = ((!(~9223372036854775807)));
    }
    var_35 = var_9;
    #pragma endscop
}
