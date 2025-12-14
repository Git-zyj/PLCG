/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (~8191)));
                var_17 = (max(var_17, (((max(var_3, 8838321748682867273))))));
                var_18 *= (((arr_4 [i_1] [i_0]) ? ((max(((~(arr_6 [i_0] [i_1]))), 89))) : -9608422325026684331));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_19 = (min(var_19, (~var_6)));
        arr_11 [i_2] &= -var_7;
        var_20 ^= (9608422325026684349 ? (arr_8 [i_2 + 1]) : (((arr_3 [i_2]) ? var_15 : -9223372036854775800)));
        var_21 ^= ((var_7 ? var_3 : -6));
    }
    for (int i_3 = 4; i_3 < 11;i_3 += 1)
    {
        var_22 ^= (~((-((18446744073709551607 ? 65519 : var_15)))));
        var_23 *= (~2305843009209499648);
        var_24 -= ((!(((min(var_14, -2))))));
        var_25 = (min(var_25, (!var_12)));
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        arr_17 [i_4] &= ((-(((!(((-(arr_16 [i_4])))))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            var_26 = (min(var_26, 14033923660396911103));
                            var_27 *= (((arr_18 [i_8] [i_8 + 1] [i_4 - 3]) ? -1 : (arr_28 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                            var_28 = (max(var_28, (~57037)));
                            var_29 |= -44;
                            var_30 &= ((!(arr_19 [i_4] [i_4 - 2] [i_8 + 1])));
                        }
                    }
                }
            }
            var_31 -= (var_5 ? var_8 : var_11);
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            var_32 = (min(var_32, (((+((min((arr_30 [i_4 - 2]), 19))))))));
            var_33 = (max(var_33, ((max(17566295085178282928, (arr_19 [i_4 - 2] [i_4] [i_4 - 3]))))));
            var_34 ^= ((max(-var_12, (~var_1))));
            arr_32 [i_4 - 2] [i_4] [i_4] &= 8838321748682867273;
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            var_35 |= ((23040 ? (!var_11) : 10499294097913790017));
            var_36 = (max(var_36, (((!(arr_28 [i_4 - 1] [i_10 + 1] [i_10 - 1] [i_4 - 1] [i_4]))))));
            var_37 *= (((((127 ? 16243 : 7947449975795761593))) ? -var_15 : (arr_22 [i_10 - 1] [i_10 - 1] [i_4 + 1] [i_4 - 3])));
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 20;i_12 += 1)
                {
                    {
                        var_38 = (max(var_38, ((((arr_18 [i_12 - 2] [i_12 + 3] [i_12 + 3]) ? var_1 : var_6)))));
                        arr_42 [i_4] [i_11] [i_12] &= ((-(arr_40 [i_12 + 2] [i_12 + 3] [i_10 + 2] [i_4 - 3])));
                        var_39 = (max(var_39, var_14));
                    }
                }
            }
        }
        arr_43 [i_4] &= max(((-1 ? 75 : 9931446454780266749)), ((max(-63324, 20))));
    }
    var_40 *= -var_13;
    #pragma endscop
}
