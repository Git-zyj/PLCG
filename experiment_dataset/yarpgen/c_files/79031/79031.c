/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2107825754;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(32125, 2076785483));
                arr_6 [i_1] [i_0] = ((!((((arr_1 [i_0 - 1] [i_0 - 1]) ? 1760106965 : (arr_2 [i_0 - 2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_17 [i_2] [i_2] [i_3] = ((arr_13 [i_3 - 1] [i_3 + 2] [i_3 + 2]) ? (arr_10 [i_2] [i_2] [i_2]) : -2076785483);
                    arr_18 [i_2] [i_3 - 1] [i_4] [i_3] = (arr_13 [i_4] [i_4] [i_4]);

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_16 = (arr_20 [i_3] [i_3 + 2]);
                        var_17 = (-32125 ? (arr_14 [i_3]) : -2076785483);
                        arr_21 [i_3] = 32125;
                        var_18 = (!2076785483);
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_24 [i_3] [i_3 + 2] [i_3] = ((arr_2 [i_2]) ? 3991726327 : (arr_19 [i_3] [i_6] [i_3] [i_3 + 2] [i_3 + 2]));
                    arr_25 [i_3] = (((arr_14 [i_3]) ? ((var_2 ? (arr_23 [i_3]) : -2076785484)) : (((8192 >> (((arr_1 [10] [10]) + 7447)))))));
                    var_19 -= (arr_11 [i_2] [i_3]);
                    arr_26 [i_2] [i_2] [i_6] [i_6] |= -121925466;
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_29 [i_7] [i_3] [i_2] = (((var_6 && var_7) < ((-(arr_16 [i_2] [i_3] [i_7] [i_3])))));
                    arr_30 [i_2] [4] [i_7] |= ((((((arr_13 [i_7] [i_3 - 1] [i_2]) ? (arr_23 [i_2]) : (arr_13 [i_2] [i_3] [0])))) || ((((arr_22 [i_3]) ^ (arr_19 [i_2] [i_7] [i_2] [i_7] [i_3]))))));
                    arr_31 [i_2] [i_2] [i_3] [i_3] = (((((var_5 ? var_12 : (arr_10 [i_2] [i_2] [i_3])))) ? var_14 : ((((arr_2 [i_2]) == -32752)))));
                    arr_32 [i_2] [i_2] [i_3] = (arr_28 [i_3] [i_3 - 1] [i_3 + 1] [i_3]);
                    arr_33 [i_3] [i_3] [i_3 + 1] [i_3] = ((-2057342217 ? ((1902005210 ? var_2 : var_13)) : ((((arr_7 [i_7]) >= 0)))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    arr_36 [i_3] = (min(((max(-2076785483, 2076785504))), var_2));
                    var_20 = (max(((min((arr_28 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 2]), (arr_28 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 2])))), ((-2113543092 ? var_2 : (arr_23 [i_2])))));
                    var_21 = ((-(min((arr_28 [8] [i_3 + 2] [i_3 + 1] [i_3 - 1]), var_4))));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_41 [i_2] &= ((-(((1713 <= (arr_39 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
                        var_22 ^= (min(((-(arr_35 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 2]))), ((var_9 ? (arr_9 [i_3 - 1] [i_3 + 1]) : (arr_9 [i_3 + 2] [i_3 + 1])))));
                        var_23 = (min((min(30720, -121925466)), ((-(arr_38 [i_2] [i_3 - 1] [i_8] [i_9])))));
                        arr_42 [10] [i_3] [i_8] [i_3] [i_8] = (max(((max(-121925466, var_10))), (min(4212483193, -var_4))));
                    }
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_24 *= (-2147483647 - 1);

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_25 ^= (arr_43 [i_11] [i_2] [i_3 - 1] [i_2]);
                        var_26 = (((((-(arr_38 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 1])))) ? ((-(arr_38 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1]))) : (min(-2076785483, 20319))));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        arr_50 [i_2] [i_3] = 1;
                        var_27 = (((arr_47 [i_2]) && ((max(((32125 ? (arr_45 [i_12] [i_10] [i_3] [i_2]) : var_6)), (((2076785482 <= (arr_4 [6])))))))));
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_28 *= max(-2076785482, (min(4294967295, -285594524)));
                        arr_54 [i_2] [i_2] [i_10] [i_13] [i_13] [i_13] |= (min(0, -var_10));
                    }
                }
            }
        }
    }
    #pragma endscop
}
