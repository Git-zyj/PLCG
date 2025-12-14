/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 1;
        var_18 = (min(var_18, ((((((((((2305825417027649536 ? 4611685743549480960 : (arr_0 [i_0])))) ? ((-(arr_1 [i_0]))) : (((arr_1 [i_0]) / 2305825417027649536)))) + 9223372036854775807)) << (2305825417027649518 - 2305825417027649518))))));
        arr_3 [i_0] = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (max(((~(arr_4 [i_1] [8]))), (arr_4 [i_1] [i_1])));

        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            var_19 = (((max(((909 ? var_3 : var_0)), 57615)) << (((((-9223372036854775807 - 1) - -9223372036854775790)) + 28))));
            var_20 -= var_17;
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_21 = (((arr_11 [i_3] [i_1]) || (arr_4 [i_3] [i_3 - 2])));
            var_22 = (max(var_22, (((2047 ? (arr_11 [6] [4]) : (arr_13 [i_1] [i_3] [i_3 - 2]))))));
        }
        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
        {
            arr_18 [i_1] [i_1] [i_4 + 1] = (((((-(arr_12 [i_1])))) ? ((+((((arr_14 [i_1] [4] [i_4]) == (arr_0 [i_1])))))) : ((~((~(arr_17 [i_1] [2])))))));

            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_23 = (((arr_0 [i_4 + 1]) & var_16));
                    var_24 *= (arr_16 [i_4 - 1] [i_5 + 1] [i_6]);
                    var_25 = (arr_17 [3] [i_1]);
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_26 = (min(var_26, ((min(((1 ? (-2147483647 - 1) : 2305825417027649536)), 122946203)))));
                            var_27 = (max(var_27, (arr_20 [i_1])));
                        }
                    }
                }
                arr_29 [i_1] [i_1] = (((arr_21 [i_4 + 1] [i_5 + 1]) ? (min(-56, (arr_24 [i_4 + 1] [i_4 + 1] [i_5 + 1] [i_5 + 1]))) : ((max((arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_1]), (arr_0 [i_5 + 1]))))));
                arr_30 [i_1] [i_1] [i_1] = (-2305825417027649549 | (((arr_0 [i_4 - 1]) ? 1 : (arr_24 [6] [i_4 - 2] [i_4 - 2] [i_4 - 2]))));
            }
            var_28 = ((-(arr_13 [i_1] [i_1] [i_1])));
        }
        var_29 = ((!(8026580312713796685 | -2305825417027649527)));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 8;i_11 += 1)
                {
                    {
                        arr_40 [6] |= (((arr_25 [6] [i_9] [i_10] [i_11]) ? (((var_15 | (arr_25 [8] [i_10] [i_10] [i_10])))) : (max(((max(1, (arr_16 [1] [i_9] [4])))), 98))));
                        var_30 = ((8883894369912641785 ? (max(((var_2 + (arr_23 [i_1] [i_9] [i_10] [i_11 - 1]))), (((2305825417027649536 ? 8386560 : var_1))))) : (arr_6 [i_9 - 3])));
                        var_31 = (max(var_31, (((((((2158144311 + (-9223372036854775807 - 1))) + 9223372036854775807)) << (((-29048 * 3533938589) - 165208424)))))));
                    }
                }
            }
        }
        var_32 = (~((9223372036854775807 ? 1 : 1)));
    }

    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_33 = (min(var_33, 1));
        var_34 = (max(var_34, ((((((((~(arr_42 [7]))) > (arr_42 [i_12])))) >= ((((~65535) == (arr_42 [1])))))))));
    }
    #pragma endscop
}
