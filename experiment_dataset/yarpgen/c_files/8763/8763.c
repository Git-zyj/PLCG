/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_1] = (((((((min(var_0, (arr_4 [i_1]))))) <= ((44370 ? var_17 : 2641365610)))) ? (((arr_1 [i_0] [i_0]) / (((1653601685 ? var_5 : (arr_4 [i_0])))))) : (arr_2 [i_2 + 1] [i_2 + 1])));
                    arr_7 [i_0] [i_0] [i_0] = (((((var_13 ? (max(var_13, 2641365613)) : ((2641365610 - (arr_5 [5] [i_0] [i_0])))))) + ((-(min(var_6, var_1))))));
                    var_20 = ((((((var_16 ? -6036385066071851008 : var_10)))) ? (min((((arr_1 [i_0] [15]) ^ (arr_2 [15] [i_0]))), -var_16)) : ((((arr_4 [i_0]) ? (arr_4 [3]) : (arr_4 [i_1]))))));
                }
            }
        }
        var_21 = (max((min((arr_4 [i_0]), (arr_5 [i_0] [i_0] [i_0]))), 545005721));
        var_22 = ((((((((1653601659 / (arr_3 [i_0]))) < ((3353680907 + (arr_0 [1] [i_0]))))))) + (min((max(1, 281474976710656)), (arr_0 [i_0] [i_0])))));
        var_23 *= ((+(((arr_4 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_4 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_11 [3] = (((((var_16 * (1 ^ var_1)))) ? (arr_4 [i_3]) : ((((arr_8 [i_3]) && 941286389)))));
        var_24 = (((arr_5 [i_3] [i_3] [i_3]) ? (min(((20 ? (arr_0 [i_3] [i_3]) : 1728533383477539646)), (((arr_9 [7] [7]) ? var_10 : 1)))) : 3353680907));
        arr_12 [i_3] [i_3] = (((var_4 <= var_9) * ((255 ? ((2641365610 ? (arr_5 [i_3] [i_3] [i_3]) : 1653601665)) : (arr_9 [i_3] [i_3])))));
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        var_25 = var_16;
        arr_16 [i_4 - 2] = (min((arr_15 [i_4 - 2]), ((-(min(9963, 1653601651))))));
        var_26 ^= (arr_15 [0]);
        var_27 = ((-((var_12 + (~var_16)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_19 [i_5] = ((-1 ? var_12 : var_0));
        var_28 = (arr_0 [i_5] [i_5]);

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_29 = ((!(((3353680920 ? var_5 : var_1)))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_26 [i_7] = ((!(arr_10 [i_8])));
                        arr_27 [i_8] [i_7] = -var_14;
                        arr_28 [i_5] [i_5] [8] [i_7] = 1842938984;
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {

            for (int i_10 = 3; i_10 < 10;i_10 += 1)
            {
                var_30 = (max(var_30, (arr_24 [i_9] [i_9 - 1] [i_9] [7] [i_5] [i_9])));
                var_31 += (((arr_29 [i_9 - 1] [i_10]) <= var_4));
                var_32 = (((arr_9 [i_5] [i_9 + 2]) + ((65535 ? (arr_13 [i_5] [i_5]) : (arr_9 [i_5] [i_10 - 1])))));
            }
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_33 = (arr_29 [i_11] [i_9 + 2]);
                    var_34 = 1;
                    var_35 = (arr_15 [i_9 + 1]);
                    arr_38 [i_5] [i_9 + 2] = (((arr_10 [i_5]) ? (arr_10 [i_9 + 2]) : ((((arr_18 [i_9 - 1]) != var_4)))));
                }
                var_36 *= 1;
                var_37 &= arr_32 [i_11] [i_11] [i_5] [i_5];
            }
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_38 = (max(var_38, (arr_37 [i_5] [i_5] [i_5] [1] [i_9] [i_13])));
                var_39 *= (((var_1 ? (arr_37 [i_9] [i_5] [i_9] [i_5] [i_9] [i_9]) : (arr_34 [i_9] [i_9] [i_9] [i_5]))));
                var_40 -= (((((2845250278 && (arr_31 [i_5])))) != (arr_18 [i_13])));
                var_41 = (max(var_41, ((((arr_29 [i_9 - 1] [i_9 - 2]) + 252)))));
                var_42 = ((-91 ? var_9 : ((39310 ? (arr_8 [0]) : 0))));
            }
            var_43 = var_11;
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_44 = (((arr_34 [i_15] [i_14 - 2] [1] [i_15]) * (arr_34 [i_5] [i_14 + 2] [i_15] [i_14 + 2])));
                            arr_48 [i_5] [i_15] [i_16] [i_15] = var_0;
                        }
                    }
                }
            }

            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                var_45 = (arr_17 [i_9 - 2] [i_9 - 2]);
                var_46 = ((((((arr_50 [i_5] [i_9] [i_17] [i_5]) ? 18065850241025045557 : 9223372036854775807))) ? 59512 : (222 ^ var_12)));
                arr_51 [i_17] [i_17] [i_17] [i_17] = (((arr_23 [i_9 - 1] [i_9 + 1] [i_9 + 1]) + 1));
            }
        }
    }
    var_47 = ((((-var_4 < ((min(var_18, var_13))))) ? ((min(((max(32, var_5))), ((var_7 ? 221 : 27127))))) : (min((((var_17 ? var_5 : 20))), ((6043 ? 221 : var_15))))));
    var_48 |= (max(((((max(var_5, -411217429))) ? (((max(var_4, var_0)))) : -var_6)), var_14));
    #pragma endscop
}
