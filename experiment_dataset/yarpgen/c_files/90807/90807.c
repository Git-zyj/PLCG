/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((var_10 ? ((var_0 % (((3432146807 ? 63632 : 120))))) : ((var_16 ? (-14 && -2126071639) : var_8))));
    var_19 = (max(((~(0 & 3047046121))), ((((max(var_6, 1247921174))) ? (~var_10) : ((var_14 ? var_7 : var_8))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [6] = (((-(arr_0 [9]))));
            var_20 = (min(var_20, -120));

            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_1] [i_2 + 1] = (((arr_7 [i_2 + 4] [i_2 - 1] [i_2 + 4]) ? (arr_3 [i_1]) : (!2890)));
                var_21 = (1 ? (~1180666469) : 119);
                arr_9 [i_2 - 2] [i_0] [i_0] [i_0] = (40506 * 16875827905719573965);
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_22 = (max(var_22, (arr_6 [i_0] [i_0] [2] [i_0])));
                        var_23 = (max(var_23, (arr_11 [i_0])));
                        arr_16 [i_4] [i_3] [i_1] [i_0] [i_0] = ((!(var_9 < 41564)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_24 ^= (arr_0 [i_5]);
            arr_19 [i_0] [i_5] = ((20195 ? 3047046121 : (((arr_6 [i_5] [i_5] [i_5] [6]) ^ -120))));
            var_25 *= (((((-(arr_10 [i_0] [i_0] [i_0])))) ? var_16 : ((var_4 ? (arr_18 [6] [6] [6]) : (arr_15 [i_0] [i_5] [i_5] [i_5] [i_0] [i_5])))));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                arr_27 [i_0] [i_6] [i_6] [i_7 - 2] = (((!3047046137) ? ((+(max((arr_26 [i_0] [i_6] [i_7 + 1]), 18014398507384832)))) : (((((((arr_1 [i_6]) ? (arr_14 [i_0] [i_0] [i_6] [i_0] [i_7 + 2] [6]) : 3729319377)) <= ((var_14 + (arr_11 [i_0])))))))));
                arr_28 [i_7 + 2] [i_6] [i_0] = ((4 + (arr_23 [i_0] [i_0] [i_6] [i_7])));
                arr_29 [1] [10] [10] = (((arr_18 [i_6] [i_6] [i_0]) ? (((arr_6 [i_7] [i_6] [i_0] [i_0]) ? ((40839 ? var_5 : (arr_20 [i_7] [i_0]))) : (((var_10 ? 119 : (arr_4 [i_0])))))) : (((((arr_15 [i_0] [i_0] [i_7 - 3] [9] [i_0] [i_0]) ? 9095737033210576189 : 1814310137)) ^ ((((!(arr_20 [i_7 - 2] [5])))))))));
                arr_30 [i_7 + 2] [i_6] = (max(1954285143833612640, (((arr_4 [4]) ? ((var_17 - (arr_4 [i_0]))) : (arr_10 [i_7 + 1] [i_0] [i_0])))));
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                var_26 -= (((((511 ^ (arr_23 [i_8 + 1] [i_6] [i_0] [i_0])))) ? (arr_12 [i_0] [i_8 + 2] [i_8 - 1]) : (arr_31 [i_0] [i_0] [i_0] [i_8 + 1])));
                arr_34 [i_0] [i_8] [i_8 - 1] = (arr_24 [i_8 + 2] [i_8 - 1] [i_8 - 2]);
            }
            var_27 |= (((~var_7) ? -3615 : (!-var_11)));
            var_28 -= var_11;
            arr_35 [i_0] [i_0] = (arr_7 [i_0] [3] [i_6]);
            arr_36 [1] = var_12;
        }
        arr_37 [i_0] = (~var_13);
    }
    var_29 = var_6;
    #pragma endscop
}
