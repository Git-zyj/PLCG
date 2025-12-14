/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(-66, var_15))) ? ((var_16 ? ((var_18 ? var_19 : var_5)) : ((min(var_3, 1))))) : ((((((51617 ? 9223372036854775807 : 170))) ? -288324097 : 2114023455))));
    var_21 = (115 & 11043);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_22 = (((36282 * 0) - (((var_13 || (arr_1 [i_0]))))));
                arr_5 [i_0] = ((63186 ? -23884 : 15053001959637137581));
            }
        }
    }
    var_23 -= var_13;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_24 += (arr_1 [i_2]);
        arr_8 [i_2] [i_2] = ((var_0 - (arr_7 [i_2] [i_2])));
        arr_9 [8] [i_2] = ((!(arr_2 [i_2])));

        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_19 [i_5] [10] [i_3] [i_5] [i_5] = ((1460434894 ? 9223372036854775807 : 5));
                        var_25 = (arr_0 [i_3] [i_3 + 1]);
                    }
                }
            }
            arr_20 [i_3] = (i_3 % 2 == zero) ? ((((arr_18 [i_3] [i_3]) << ((((-1330157179 ? (arr_14 [i_2] [i_3]) : (arr_18 [i_3] [i_3]))) - 12721))))) : ((((arr_18 [i_3] [i_3]) << ((((((-1330157179 ? (arr_14 [i_2] [i_3]) : (arr_18 [i_3] [i_3]))) - 12721)) - 4294957777)))));
            arr_21 [i_2] [i_3] = ((~(~1460434894)));
            arr_22 [i_2] [i_3] [i_3] = ((110 << (((arr_16 [i_3] [i_3] [i_3 + 1] [i_3]) + 13290))));
        }
        var_26 = (((arr_12 [i_2] [i_2] [19]) && (((arr_0 [i_2] [i_2]) && (arr_7 [i_2] [14])))));
    }
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            arr_31 [i_6 - 2] [i_7] [i_6] = (arr_26 [13]);
            var_27 ^= ((((!((((arr_25 [i_6]) ? (arr_25 [i_6]) : (arr_26 [i_7])))))) ? ((max((arr_29 [i_6 - 2] [i_7 + 2]), var_13))) : ((max((((arr_23 [i_6] [i_7]) && (arr_30 [i_7]))), (!-1460434889))))));
            arr_32 [1] [i_6] = (((((-((((arr_24 [3]) > 101)))))) ? (((0 >= 7) ? ((37945 ? 21441 : -1)) : (arr_27 [i_6] [i_7 + 2]))) : (((((((arr_26 [i_6]) + 2147483647)) >> (((arr_29 [i_7] [i_6]) - 189))))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_35 [i_8] [i_6] [i_8] = (((arr_24 [1]) ? (arr_29 [i_6 - 1] [i_6 + 1]) : (arr_29 [i_6] [i_6 - 1])));
            var_28 = (max(var_28, (((!(arr_26 [i_6 - 1]))))));

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_29 = (max(var_29, (((4294967293 ? (arr_26 [i_6 - 1]) : (arr_26 [i_6 + 1]))))));

                for (int i_10 = 3; i_10 < 23;i_10 += 1)
                {
                    arr_40 [i_8] [5] [i_9] = ((-1 ? (((arr_23 [i_10 + 2] [0]) ^ (arr_34 [i_9]))) : (((var_5 ? (arr_24 [i_6]) : (arr_28 [i_6] [i_8]))))));
                    arr_41 [i_8] [i_10] = (arr_39 [i_10] [i_9] [i_8] [i_6]);
                    arr_42 [i_6] [i_8] = (((arr_29 [i_9] [i_6]) ? (arr_36 [i_8] [i_8] [i_9] [i_10 + 2]) : (((arr_34 [i_6]) - (arr_37 [i_6] [i_8] [i_9] [i_8])))));
                    arr_43 [i_10 - 3] [i_8] [i_9] [i_8] [i_6] = -1;
                }
                arr_44 [i_8] [i_8] [i_9] = (0 < 0);
            }
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_30 = (min(var_30, ((max((min((arr_39 [1] [i_6] [i_6] [i_6]), var_15)), (arr_33 [i_6]))))));
            arr_47 [i_6] [20] = (min((min(134217696, 327445808)), 0));
        }
        var_31 = (arr_37 [i_6] [18] [i_6] [i_6]);
        var_32 = ((var_7 ? ((((arr_38 [17]) == (arr_23 [i_6] [1])))) : (((arr_36 [i_6] [i_6 + 1] [i_6 - 2] [i_6 - 2]) << (arr_36 [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2])))));
    }
    #pragma endscop
}
