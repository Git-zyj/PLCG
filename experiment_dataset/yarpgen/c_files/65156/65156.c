/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_9;
        var_18 = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_19 = (((((-(max((arr_4 [3]), 4472072796329892501))))) ? (((arr_1 [i_1] [i_1]) * (((arr_1 [i_1] [i_1]) & (arr_3 [4]))))) : ((min(var_13, var_10)))));
        arr_5 [5] [i_1] = (((arr_4 [6]) ? (((~var_5) ? (arr_4 [i_1]) : ((((arr_4 [i_1]) ? 1020255826 : var_13))))) : (((-(-1593836839 == var_9))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((arr_9 [i_2]) ? ((((arr_3 [i_2]) >= (~1)))) : (arr_8 [1] [i_2]))))));
        var_21 = ((((max((arr_7 [i_2] [i_2]), ((((arr_3 [i_2]) ? (arr_0 [i_2]) : var_1)))))) ? ((max((arr_9 [i_2]), (((arr_1 [i_2] [i_2]) / 2046))))) : (max((arr_6 [i_2] [i_2]), (arr_7 [7] [i_2])))));
    }
    var_22 = (((var_2 / var_16) ? -51 : (max((127 != var_12), ((var_13 >> (var_5 + 2117048492)))))));
    var_23 = (min(var_23, var_3));

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_24 = (min(var_24, ((min((((arr_10 [i_3]) ? 4472072796329892496 : (arr_10 [i_3]))), (arr_10 [i_3]))))));
        var_25 = ((max(var_6, (max(var_6, var_15)))));
        var_26 = (max(((max(-755697751, (arr_10 [i_3])))), ((-894096580 ? (((-2147483647 - 1) ? 0 : 4472072796329892508)) : ((((!(arr_11 [i_3])))))))));

        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_27 -= (max(1, var_4));
            var_28 ^= ((min((!2147483647), (arr_13 [i_4 + 1]))));

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_29 |= ((var_2 != var_17) && ((((((arr_11 [19]) || (arr_15 [i_3] [i_4] [i_4] [i_4]))) ? 117 : ((((arr_17 [i_6] [i_6]) >= (arr_19 [i_7] [i_3] [i_3] [i_3]))))))));
                            var_30 = (min((max(var_16, ((((arr_23 [i_3] [4]) / (arr_23 [i_3] [i_5])))))), -4472072796329892508));
                        }
                    }
                }
                var_31 = ((755697750 ? ((((((((arr_17 [i_3] [i_5]) + (arr_21 [i_3] [16] [i_4] [i_5])))) > (min(var_12, 14679833807895924053)))))) : (arr_21 [i_3] [i_4 + 1] [i_5] [i_5])));
                arr_25 [i_5] [i_5] = (max(((((((var_17 ? (arr_20 [i_5] [i_4] [i_3] [i_3]) : 3766910265813627573))) ? (max(-4472072796329892507, var_17)) : (arr_17 [i_5] [i_4 + 2])))), (((arr_18 [i_5] [i_5] [15] [i_5] [i_3]) + (arr_13 [1])))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_32 = ((!(0 <= var_7)));

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_32 [9] [1] [i_4] [i_3] = (((arr_24 [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4] [i_4 + 2] [i_9]) ? 2048 : 4765));
                    var_33 = ((-(arr_27 [i_4 - 1] [i_4] [i_4 + 2])));
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_35 [1] [4] [i_8] = ((183 ? ((var_0 ? (arr_23 [i_3] [i_10]) : (arr_13 [i_3]))) : (((0 + (arr_23 [i_4] [i_3]))))));
                    var_34 = (min(var_34, 0));
                    var_35 = (min(var_35, (!var_15)));
                }
            }
            var_36 = (arr_23 [i_4 - 1] [i_4 - 1]);
        }
        arr_36 [i_3] = ((~(max((arr_30 [i_3] [i_3] [1] [i_3]), (arr_20 [i_3] [i_3] [i_3] [i_3])))));
    }
    #pragma endscop
}
