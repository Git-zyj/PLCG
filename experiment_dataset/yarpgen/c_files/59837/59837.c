/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_5 - ((var_0 ? var_5 : var_11))))) ? (var_2 - var_12) : ((var_7 ? 1 : (61525 - 1077599053)))));
    var_14 += var_11;
    var_15 = ((~var_6) ? (min((!-26), ((var_7 ? var_0 : var_10)))) : (((-(max(var_1, 1077599071))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 &= ((-1077599050 ? 36 : -8261762799693300078));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_17 = (max(var_17, (((arr_11 [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_2 [i_2])))));

                        for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_18 -= (((((var_11 ? var_7 : var_7))) ? var_11 : var_12));
                            var_19 = ((var_6 ? 13579866768487538903 : (arr_12 [1] [i_0] [1] [i_0] [i_4 - 3] [i_4 + 2])));
                            arr_16 [i_0] [i_4 + 2] = (((arr_12 [20] [i_0] [3] [i_3] [20] [i_4 + 1]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4 - 1]) : var_8));
                        }
                        for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((8946297827544138959 >> (var_11 + 2095571756)));
                            arr_19 [i_0] [i_2] [i_2] [i_2] [i_5] = ((-(arr_12 [i_2] [i_0] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                            arr_20 [i_0] [i_0] [10] [i_0] = (((((var_12 << (var_12 - 3671510806)))) ? var_4 : (arr_10 [i_0] [8] [i_0] [i_0])));
                        }
                    }
                    arr_21 [4] [4] &= (((((var_8 ? -9223372036854775795 : var_2))) ? var_6 : (arr_11 [i_0] [i_1] [i_2])));
                }
            }
        }
        var_21 = (max(var_21, (arr_13 [0])));
        arr_22 [8] &= ((1073741823 ? -3845829715689858519 : 11));
        arr_23 [20] |= ((((((arr_4 [i_0] [i_0]) ? (arr_1 [i_0]) : var_6))) ? -var_1 : var_0));
    }
    for (int i_6 = 3; i_6 < 21;i_6 += 1)
    {
        arr_27 [i_6] = (min((((arr_25 [i_6 + 3]) ? ((var_1 ? 5688190249496802168 : var_4)) : (((var_8 ? (arr_25 [i_6 - 3]) : (arr_24 [i_6])))))), ((max((arr_24 [i_6]), (min(var_6, (arr_25 [i_6]))))))));
        arr_28 [18] [3] = var_3;
        var_22 = (min(var_22, (((!((((((min(65529, -1077599050)) + 2147483647)) << ((((27636 << (((((-9223372036854775807 - 1) - -9223372036854775780)) + 34)))) - 1768704))))))))));
        arr_29 [i_6] = ((((min((min(var_4, var_0)), (!926309413)))) ? var_7 : (var_6 + -var_11)));
        var_23 -= (((min(var_0, (~-1077599040)))) ? (((((2147483647 ? 2242465901 : 12758553824212749432))) ? 18446744073709551603 : 49997)) : (((var_9 ? var_12 : var_11))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_24 &= ((~((var_4 / (arr_26 [15])))));
        var_25 = (arr_25 [i_7]);
        var_26 = (arr_24 [i_7]);
    }
    var_27 = ((((var_1 ? var_8 : (var_6 & -479821246))) - ((((((var_1 ? var_6 : var_0)) + 2147483647)) << (((~var_4) - 193390729))))));
    #pragma endscop
}
