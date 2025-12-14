/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_5))) ? 15 : (arr_1 [i_0] [i_0])))) && 109));
        var_15 *= (((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 += (1544047348 - 7160785477503950918);
        arr_5 [i_1] = ((-(2874 / 116)));
        var_17 ^= 48541;
        var_18 = (max(var_18, var_12));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_19 = (max(var_19, 0));
                    arr_13 [i_2] [i_2] [i_4] [i_3] = (((1048575 ? 1048575 : 1048574)));
                    arr_14 [i_4] = ((1048575 ? 3 : 2147483647));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_20 ^= 2048;

                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, ((((-1048605 < (arr_3 [i_7])))))));
                        var_22 += -56436;
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_5] [i_8] [i_2] [i_5] [i_2] [i_5] = (~8);
                        var_23 = (((arr_7 [i_5] [i_6]) ? (arr_6 [i_5]) : (arr_7 [i_2] [i_2])));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_29 [i_2] [i_5] [i_5] [i_5] = (((arr_15 [i_9] [i_5] [i_6]) >= (((arr_25 [i_6] [i_6] [i_5] [i_2]) ? (arr_23 [i_2] [i_2] [i_2] [i_2]) : var_13))));
                        var_24 = (((((arr_24 [i_5]) ? var_7 : -1048575)) & (arr_3 [i_5])));
                    }
                    var_25 = (min(var_25, (((~(arr_12 [i_2] [i_5] [i_2] [i_2]))))));
                    arr_30 [i_5] [i_5] [i_5] = (~-1);
                    arr_31 [i_5] [i_5] = 18100114294350338665;
                }
            }
        }
    }
    var_26 ^= ((var_9 - (!9074)));
    var_27 = (max((-9223372036854775807 - 1), 1));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            {
                var_28 += 221;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_29 = (arr_41 [i_10] [i_10] [i_10] [i_13]);
                            var_30 = ((((min((arr_9 [i_10] [i_10] [i_12]), (arr_23 [i_10] [i_11] [i_12] [i_13])))) && (!1)));
                            var_31 = (max(var_31, ((((arr_11 [i_10] [i_10]) <= 30)))));
                            var_32 = (max(var_32, (((9097 & ((((((arr_32 [i_13]) ? (arr_16 [i_10] [i_11] [i_10]) : (arr_22 [i_13] [i_13] [i_12] [i_11] [i_11] [i_10]))) <= -35))))))));
                            var_33 = (0 << 10);
                        }
                    }
                }
                var_34 = 1;

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_35 = var_9;
                    arr_46 [i_10] [i_10] [i_10] = var_7;
                    var_36 = (min(var_36, (((~((~(arr_15 [i_10] [i_10] [i_14]))))))));
                }
            }
        }
    }
    #pragma endscop
}
