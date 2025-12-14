/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 9223372036854775807;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_16 = (((arr_11 [i_0] [i_0 + 1] [i_2 + 1] [i_3 + 1]) ? (arr_5 [i_0 - 1]) : (max(((var_13 ? 0 : (arr_5 [i_2]))), (((arr_1 [i_2]) + 26681))))));
                        var_17 = ((!((((-64 ? 3088948247 : (arr_11 [i_0] [i_3] [i_2 + 1] [i_3])))))));
                        var_18 += ((((min((arr_8 [i_0 - 2] [i_1] [i_2 + 1]), (arr_8 [i_0 + 1] [i_1] [i_2 + 2])))) ? (((arr_4 [i_1 + 3]) ? -3 : 51)) : ((~((6 ? 0 : (arr_9 [i_0] [i_1 - 3] [i_2] [i_2])))))));
                        arr_13 [i_0] [i_2] [i_2 + 1] [17] [i_2 + 1] [i_0 - 2] = (arr_10 [i_0] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_19 = ((!(((~(arr_8 [i_1] [i_2] [i_4]))))));
                        var_20 = 0;
                        var_21 = (max(var_21, (arr_1 [i_0])));
                        var_22 = (arr_3 [i_2 + 2] [i_1 + 3]);
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2] = (((-2147483647 - 1) ? ((-(arr_6 [i_0] [i_1]))) : 13));
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_23 = (((max(((max((arr_9 [i_0] [i_1] [i_2] [i_5]), 1))), 7143273871712627134)) << (((arr_0 [0] [i_1]) - 20204))));
                        var_24 = (min(var_24, ((((-1 ? 2683019315 : (((max(0, (arr_10 [i_2] [i_1] [i_0])))))))))));
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_25 *= -1;
                        arr_22 [i_2] [15] [i_2] [i_2] = (min((((((arr_2 [i_0]) ? (arr_3 [i_1] [i_1]) : 6)))), (max((!-5461), 15))));
                    }
                    var_26 = (max((((((~(arr_5 [i_0])))) ? 18446744073709551615 : ((6 ? 13 : 1)))), (~var_3)));
                    var_27 = (max((max((max(0, (arr_6 [i_2] [i_1]))), var_3)), ((max((arr_18 [i_2 - 1] [i_1 + 2] [i_2 - 1] [i_1 + 2] [i_1] [i_2]), (arr_18 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_0 - 2]))))));
                }
            }
        }
    }
    var_28 += var_7;
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        var_29 = ((((((arr_9 [i_7 - 1] [i_7] [i_9] [i_10]) ? var_12 : ((max(9, (arr_10 [i_7] [6] [i_9]))))))) ? (min((((1 ? 1 : (arr_11 [i_7] [i_8] [i_9] [i_10])))), 0)) : ((-49 ? ((((arr_26 [i_8 - 1] [i_8] [i_7 + 2]) ? var_3 : (arr_9 [i_7] [i_8] [i_9] [i_10 + 2])))) : (arr_7 [i_10 + 1] [i_10 + 1] [i_8])))));
                        var_30 -= 1;
                        var_31 *= -17;
                        var_32 = (min(var_32, ((((((1 ? -1 : (arr_12 [i_8 - 2] [6])))) & (max((arr_7 [i_8] [i_8] [i_8 - 2]), (arr_7 [i_8] [i_8] [i_8 - 3]))))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 4; i_11 < 11;i_11 += 1)
                    {
                        var_33 = 1;
                        var_34 ^= 65534;
                        var_35 = (((arr_28 [i_7] [i_7 + 4] [i_7]) ? (1295293511 | -502839864) : 0));
                        var_36 = (max(var_36, (arr_10 [i_7] [i_11] [i_9])));
                    }
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        arr_39 [i_7] [i_7] = (!8699653782148740766);
                        var_37 = (15 ? (((arr_29 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 2]) - (arr_29 [i_12 - 2] [i_12] [i_12 + 2] [i_12]))) : ((max((arr_29 [i_12 - 2] [i_12 + 1] [i_12] [i_12 + 1]), 1))));
                        var_38 = var_13;
                    }
                    var_39 = (arr_6 [i_9] [i_7]);

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_40 = ((((-2024437365 != (arr_19 [i_7 + 2] [i_8] [i_8] [i_13] [i_8] [i_7]))) || (arr_38 [i_7] [i_8] [i_9] [i_13])));
                        arr_42 [i_7] [i_7] [i_7 + 3] = ((!(arr_20 [i_13] [i_13] [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                        var_41 = -0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
