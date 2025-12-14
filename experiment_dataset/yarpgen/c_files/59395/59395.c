/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_16 += 2032;
                    var_17 = var_12;
                    var_18 = var_8;
                    arr_9 [i_0] [i_0] [9] [i_0] = var_6;

                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] = 1;
                        var_19 = (arr_11 [7] [7] [i_3 - 3] [i_0]);
                        var_20 = (arr_7 [i_3] [i_3] [i_3] [i_3]);
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0] = ((((-(arr_3 [i_0] [i_0])))) ? (arr_11 [i_0] [8] [i_2] [i_0]) : ((-(arr_6 [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_21 = (((32 ? 29205 : 30134)));
                        arr_17 [i_0] = (i_0 % 2 == 0) ? ((((((((arr_10 [16]) ? (arr_11 [i_0] [i_0] [i_2 - 1] [i_0]) : (arr_7 [i_0] [i_1] [i_2] [i_0]))) + 2147483647)) >> (((arr_3 [i_0] [i_0]) - 4193287156))))) : ((((((((((arr_10 [16]) ? (arr_11 [i_0] [i_0] [i_2 - 1] [i_0]) : (arr_7 [i_0] [i_1] [i_2] [i_0]))) - 2147483647)) + 2147483647)) >> (((((arr_3 [i_0] [i_0]) - 4193287156)) - 2416112550)))));
                        arr_18 [i_0] [i_0] [i_0] [10] = 6237297569183392433;
                        arr_19 [i_0] [i_0] [i_0] [i_0] [1] [i_0] = ((-(arr_14 [i_0] [i_1])));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_22 = (((arr_2 [i_0] [i_0]) ? (arr_6 [i_5]) : var_15));
                        var_23 -= ((var_8 & (arr_20 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_24 = (arr_3 [i_0] [i_0]);
                        var_25 = ((arr_4 [i_2] [i_2] [i_2]) ? var_12 : 1);
                        var_26 -= (!-120);
                        var_27 = ((((((arr_0 [i_0] [i_1]) ? -1 : -66))) ? (((var_12 != (arr_11 [i_0] [i_1] [i_1] [i_0])))) : -11072));
                    }
                }
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_28 = (max(var_28, (((~((max((arr_6 [i_8]), (arr_26 [i_0] [i_0] [i_9] [i_8])))))))));
                                var_29 = (3891035465 & var_4);
                            }
                        }
                    }
                    arr_32 [i_0] [i_0] [i_0] [i_0] = var_7;
                    var_30 = (max(4177185145, -73));
                }
                var_31 -= (arr_21 [i_0] [i_1] [i_1] [i_1] [i_1]);
                var_32 = ((-(min(343732454, 15052503019797748699))));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_33 = (((8191 * 18446744073709551615) ? ((var_1 >> (var_8 + 140))) : (arr_21 [i_10] [i_10] [i_10] [i_1] [i_0])));
                    arr_35 [i_0] [i_1] [i_0] [i_1] = (((arr_0 [i_1] [i_0]) | (arr_0 [i_1] [i_10])));
                }
                var_34 += (((arr_30 [i_0] [i_1] [i_1] [i_1] [i_0]) ? (arr_22 [i_0] [i_0] [15] [15]) : ((var_8 ? (min((arr_14 [1] [i_1]), var_7)) : (arr_33 [i_0] [i_1] [i_1] [i_0])))));
            }
        }
    }
    var_35 = (((((var_7 ^ (((-12 ? -23 : -2036712192)))))) ? (15937 & -7) : var_10));
    var_36 = var_13;
    #pragma endscop
}
