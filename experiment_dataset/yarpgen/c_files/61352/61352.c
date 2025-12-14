/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_4, ((885131229 ? 1 : 113746194))))) ? (((-(65535 == 114)))) : (min((((14 ? 1 : 29021))), ((-3374749513369003902 ? var_7 : 1661070601))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((((!-1) ? ((-1878757137 / ((52640 << (-18203 + 18209))))) : ((~(1 || 0))))))));
        var_18 ^= (((arr_0 [i_0 + 1]) + ((var_7 ? var_6 : var_15))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_19 = (!var_11);
                arr_11 [i_2] [i_2] [i_2] [i_2] = var_13;
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_20 = (((127 + 1) ? (max(((max(var_10, var_15))), (max(9220, var_0)))) : (!54050)));
                var_21 = (min(var_21, ((((((-(var_12 < var_5)))) ? var_14 : (((((1 ? 127 : 164))) ? 1 : (((var_0 ? var_8 : 1))))))))));
            }

            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                var_22 = (min(var_22, (((1 && ((max(var_14, ((1 ? (arr_4 [i_2]) : 29021))))))))));
                var_23 ^= (max((((arr_2 [i_1 - 1]) ? var_11 : (arr_2 [i_1 - 1]))), (arr_2 [i_1 - 1])));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_24 -= ((((max((!16465257922151772779), -584685023))) ? (max(1, 1)) : var_1));
                    var_25 = (max(var_25, ((!(((-(((arr_10 [i_1] [i_1] [i_1]) / var_10)))))))));
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_24 [i_6] [i_6] [i_6] [i_1] = (((max(((var_9 ? -22185 : (arr_1 [i_1]))), var_2)) + ((((min(-1878757137, var_8)) <= ((max(-13458, (arr_3 [i_1] [i_1])))))))));
                    arr_25 [i_6] = (arr_8 [i_1]);
                }
                var_26 += ((~(((var_4 ? var_4 : 0)))));
                arr_26 [i_1] [i_1] [i_6] = (max(var_13, (((var_13 * 1) ? (arr_4 [i_1 + 1]) : var_5))));
            }
            for (int i_9 = 1; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_27 *= ((((max(var_13, var_3))) ? var_4 : 4434405342355218010));
                            var_28 = (min(var_28, var_7));
                        }
                    }
                }
                var_29 = (min(var_29, (((var_5 ? (((((var_5 + 82) || var_12)))) : ((-818621076 ? 0 : var_0)))))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_30 = (0 ? (arr_40 [i_13] [i_13] [i_12] [i_13] [i_13 - 2]) : var_4);
                            var_31 += (arr_27 [i_2] [i_2] [i_13]);
                            var_32 -= ((((var_14 >= (arr_29 [i_2] [i_12 + 1])))) * (~var_7));
                            var_33 = var_7;
                            var_34 ^= ((1 ? 1 : var_1));
                        }
                    }
                }
                var_35 = (max(var_35, ((((arr_7 [i_1] [i_12] [i_12]) * (~0))))));
                var_36 = (min(var_36, (var_12 > var_7)));
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        {
                            var_37 -= ((((1 ? var_5 : var_7))) ? 3198823702 : ((var_12 ? 3523026014 : var_11)));
                            var_38 = (max(var_38, (arr_45 [i_1] [i_2] [i_12] [i_1] [i_2])));
                            var_39 = (((arr_13 [i_1 + 1] [i_2] [i_12] [i_1 + 1]) ? 1 : var_0));
                        }
                    }
                }
            }
            var_40 = ((~(min(var_3, (min(127, -2121133685))))));
            arr_49 [i_2] [i_1] = ((~(((((var_5 << (((arr_39 [i_1]) - 1187510379))))) ? var_8 : ((2121133678 / (arr_41 [i_1 - 1] [i_2] [i_1 - 1] [i_2] [i_1])))))));
        }
        var_41 = (min(var_41, 1));
        var_42 = (arr_4 [i_1]);
        var_43 = (min(var_43, (((((((min(65535, 235))) ? ((((arr_31 [i_1] [1] [i_1] [i_1]) ? -12985 : var_2))) : 818621075)) ^ (((((((1 ? var_6 : var_13))) && -2144587974)))))))));
    }
    var_44 *= var_2;
    #pragma endscop
}
