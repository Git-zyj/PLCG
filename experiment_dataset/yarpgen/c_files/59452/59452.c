/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((-8 ? (-1 | 16126) : ((var_8 ? var_0 : 25583))));
        arr_4 [i_0] = ((-439445704217967944 ? var_2 : 0));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_16 [i_4 + 2] [9] [i_2] [i_1] = (((((var_8 ? -25583 : ((var_7 ? 25579 : var_9))))) ? ((var_9 ? ((73 ? var_10 : var_1)) : var_8)) : (min(var_12, 977763551949718385))));
                        var_15 = (+-8);
                        var_16 = ((min(8901514856193282853, var_8)));
                        var_17 = ((~(max(10385, var_12))));
                    }
                }
            }
            var_18 *= (((((min(var_9, var_3)))) ? ((((31055 ? 4190827057094376899 : 5143956563327162264)))) : var_9));
            var_19 = var_12;
            var_20 = ((((max(3581756590, 13030545482711711547))) ? ((var_5 ? ((32767 ? 32767 : 18005602416459776)) : 60772)) : ((((3005 == ((5053958678214694397 ? (-32767 - 1) : var_1))))))));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_21 = (min(var_21, ((((22448 ? var_10 : var_1))))));
            arr_19 [i_1] = ((var_11 ? 10411573140801568425 : var_8));
        }
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        var_22 *= (-var_8 + var_1);
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_23 = (max(var_8, 4207073558));
                        var_24 *= -28628;
                        arr_29 [i_6] [i_7] [i_8] = ((max((((13392785395494857219 ? -4 : var_6))), var_3)));
                    }
                    var_25 = (max(4190827057094376899, 62530));
                    var_26 *= (max((((127 ? -5102 : -28636))), ((14467872975407698651 ? 3429568150 : 18446744073709551614))));

                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_27 = var_11;
                        var_28 = max(0, ((var_6 ? ((var_6 ? 18446744073709551615 : var_5)) : ((min(4294967295, -127))))));
                        var_29 *= -32089;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        arr_35 [i_6] [i_6] [i_11] [i_11] = (((((34162 ? var_1 : var_3))) ? (0 == var_12) : 65535));
                        var_30 = (min(3, 14467872975407698651));
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        var_31 = (((1533510208 ? 8141170812228199609 : 13942)));
                        arr_38 [i_12] [i_12] [i_12] = (-(min(7812495635563083187, var_6)));
                        var_32 *= ((14070846498897594195 ? (min((min(var_11, 4270881695)), 0)) : (!var_9)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
