/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max(75, ((~((min(4064, -4065))))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_16 |= (((arr_3 [i_2]) - ((((((-4066 ? (arr_0 [2]) : -8912202643683630550))) ? (!-4066) : -67)))));
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_2] = (min(112, -var_4));
                        var_17 -= ((4096 ? -100 : (((((120 ? 94 : -4))) & 1759117375))));
                        var_18 += (((~3232) & (max((-72 * 41), (~1245201964646909861)))));
                        var_19 = (max(var_19, ((min((((((var_13 ? var_1 : (arr_1 [i_0])))) | ((var_1 ? (arr_6 [i_3]) : var_12)))), (min((~var_11), ((var_10 & (arr_7 [i_0] [i_0] [i_0] [i_2]))))))))));
                    }
                }
            }
        }
        var_20 = (((max(4054, (arr_3 [i_0])))) ? var_8 : (24812 & var_12));
        var_21 -= ((10 >> (((max((((-1245201964646909861 ? 23 : (-127 - 1)))), 955857207)) - 955857183))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_22 = ((((-1 >= (arr_12 [i_4] [i_4])))));

        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_23 += ((max(24, (arr_2 [i_4]))) / (max((arr_2 [i_4]), (arr_2 [i_4]))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_24 += var_7;
                        var_25 = (max(var_25, (((16256 ? -32350 : -7499176169927645399)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_26 |= ((((24 ? (arr_4 [i_4] [i_8]) : var_1)) <= 4143795673381568350));
            var_27 = (arr_9 [8] [i_4] [18] [i_8] [i_4]);
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_28 = (max(var_28, var_1));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_36 [i_4] [i_12] |= (max((((!(32349 && 1770499102248903265)))), (58 & 1)));
                            var_29 = (max(var_29, (arr_19 [i_9])));
                        }
                    }
                }
                var_30 += (!58);
                var_31 = (min(var_31, ((((((((var_14 ? 21169 : var_6))) ? ((max(4294967295, 8912202643683630549))) : (arr_6 [i_10]))) == 185)))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
            {
                var_32 = (max(var_32, 4862074036386302002));
                var_33 = ((~(arr_13 [i_9] [i_13])));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
            {

                for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                {
                    var_34 = (((var_13 ? (arr_21 [i_9] [i_14] [1] [i_9] [1]) : var_11)));
                    var_35 |= var_14;
                    var_36 = var_5;
                }
                for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                {
                    var_37 = var_0;

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_52 [i_4] [i_9] [i_4] [i_16] [i_17] [i_9] = 0;
                        var_38 = (var_6 == 1447088388);
                        arr_53 [i_4] [i_9] [i_14] [8] [i_16] = ((-31 ? (arr_15 [i_9] [i_9] [i_9]) : var_6));
                        arr_54 [14] [14] [i_9] [0] [i_14] [i_9] [i_17] = ((var_9 ? -4862074036386301996 : var_7));
                        var_39 |= 183;
                    }
                    var_40 = -var_4;
                }
                var_41 *= -104;
            }
            var_42 = (((-2184008945728670460 ? (((max((arr_24 [i_4]), (arr_45 [i_4] [i_4] [i_9] [i_9] [i_9] [i_9]))))) : (arr_16 [i_9]))));
            arr_55 [16] [i_9] = (var_1 & 469435292);
            var_43 = var_6;
        }
        var_44 -= (min((((var_7 ? (min((arr_19 [i_4]), 115)) : (arr_5 [i_4] [i_4])))), (min(18, var_2))));
        var_45 = (min((arr_7 [i_4] [1] [i_4] [i_4]), (arr_12 [i_4] [i_4])));
        var_46 = var_7;
    }
    var_47 = ((max(((6704040906306014414 >> (var_4 - 119))), var_0)));
    #pragma endscop
}
