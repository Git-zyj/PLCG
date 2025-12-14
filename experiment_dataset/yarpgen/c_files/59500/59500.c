/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 &= ((-23845 ? (max(32767, ((((-23845 + 2147483647) << (((arr_8 [i_2] [i_2] [2] [i_2]) - 2098116189))))))) : -124));
                                arr_12 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0] &= (max(((-(arr_10 [i_3] [i_4 - 2] [i_4 + 2] [i_4] [i_4]))), ((min((arr_9 [i_0 + 1] [i_2 - 2]), ((((arr_3 [i_2]) >= -23845))))))));
                                var_16 = (min(var_16, (((~(min((arr_1 [i_2]), (min((arr_10 [i_4] [i_4 - 1] [12] [i_4 - 1] [i_4 + 1]), (arr_3 [i_2]))))))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] [i_2] |= ((((!(((357398038 ? -120 : 120))))) ? ((((~var_4) ? (arr_7 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) : var_0));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_18 [13] [i_0] [13] = (((!var_13) >= -6050208228699733854));
                                arr_19 [i_6] [i_5] [i_0] [i_1] [i_0] = var_13;
                                var_17 |= (((arr_8 [i_1] [i_1] [i_2 - 1] [i_5]) ? ((min((((-9223372036854775807 - 1) + 124)), ((-(arr_0 [i_5])))))) : (((((5131150344868776504 ? (arr_8 [i_0] [i_1] [3] [i_1]) : -8520383365576257584))) ? (max(var_8, 8)) : (arr_10 [i_0] [i_0 + 4] [i_2 - 1] [i_5] [i_6 + 1])))));
                                var_18 &= (max((max((arr_10 [i_0] [i_1] [i_6 - 1] [i_5] [i_2 + 1]), (arr_8 [i_0 + 1] [i_1] [i_2 - 3] [i_6 + 1]))), ((min((arr_9 [8] [i_6]), (var_3 & var_2))))));
                                var_19 = (min(var_19, ((((min((!var_9), (arr_16 [i_2]))) ^ var_2)))));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = (((((((arr_6 [i_0] [i_0] [i_0] [i_0]) >> (((-127 - 1) + 181)))) ^ (arr_5 [i_0 + 1] [i_0 + 1]))) == (((~(var_3 || var_13))))));
        arr_21 [i_0] [11] = -1;
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    var_20 &= var_13;
                    arr_30 [i_8] = (((-(min(70368744177663, 1)))));
                }
            }
        }
        var_21 &= (min((max((((-20 + 2147483647) >> var_1)), (~var_1))), ((~(arr_15 [i_7 + 4] [i_7] [i_7 + 4] [14] [i_7])))));
        arr_31 [10] = ((var_4 > (max((((!(arr_11 [10] [10])))), ((~(arr_22 [i_7] [i_7])))))));
        arr_32 [i_7] &= (min(((((((arr_10 [6] [i_7] [i_7 - 1] [6] [i_7 - 1]) ? (arr_15 [i_7] [0] [i_7] [i_7 + 3] [i_7]) : var_2))) ? (min(var_12, var_8)) : var_13)), (arr_1 [i_7 + 3])));
    }
    var_22 = (((((var_11 ? -var_12 : ((min(var_13, var_12)))))) ? var_10 : ((var_14 >> ((((var_13 ? var_7 : var_2)) - 4917484090598754477))))));
    #pragma endscop
}
