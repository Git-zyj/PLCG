/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_6, (max(var_6, 151))))) ? -2 : (4224951156 | var_0)));
    var_12 = (max(var_9, var_8));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [8] = ((((min(var_6, (var_4 != -759542627)))) ? ((((max(-1066382984, var_10))))) : (min(7602294944594652874, var_7))));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = (min((4224951156 - var_7), (arr_6 [1] [i_1 + 1] [i_1])));

            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                var_13 = 65535;
                var_14 = 0;

                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_15 = (min(var_15, ((((4294967295 ? var_4 : 27))))));
                    var_16 = 70016140;
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_19 [i_0] [i_1] [i_2] [i_4] &= (((var_1 ? -759542627 : var_6)));
                    var_17 = (((min((-1 - var_2), 14360748940779653710))) ? ((min(((70016139 ? 73 : var_1)), var_4))) : 2123747956);
                    var_18 = (min(var_18, ((((max(18446744073709551615, var_4)) < -15)))));
                    var_19 = (min(var_19, (1833897353 || 126)));
                    arr_20 [i_0] [i_0] [i_2] [i_4] = (((-var_9 / -var_8) ? 255 : var_9));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_23 [i_5] = ((var_9 ? var_3 : var_5));
                    var_20 = 860643211;
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    var_21 = (max(var_21, -17596));
                    var_22 = (7602294944594652874 / 1);
                }
            }
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                var_23 = 211;
                var_24 = var_7;
                var_25 = ((max(54, var_10)));
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_33 [i_8] [i_1] [i_1] [i_0] = (((-17596 && 0) && ((var_7 && (((var_6 >> (1983234642 - 1983234588))))))));
                arr_34 [i_0] [i_1] [i_1] [i_8] = 0;
                var_26 = 301653143;
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                arr_37 [i_0] = -2105;
                var_27 = (max((min(70016140, -4046444037933720741)), var_8));
                arr_38 [13] [i_1] = ((-78 ? (max(var_7, var_3)) : ((-1367632109081031398 ? 211 : 6503766932897157550))));
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                arr_41 [i_0] [i_1] [i_1] [i_10] = var_1;

                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    var_28 = (max(var_28, (((2917052311 ? -255 : 56)))));
                    var_29 &= (((104 ? 23 : 240)));
                    arr_44 [i_11] [i_11] [i_10] [i_1] [i_0] [i_0] = 9223372036854775807;
                }
                for (int i_12 = 3; i_12 < 15;i_12 += 1)
                {
                    var_30 = var_10;
                    var_31 = (max(var_31, (((9223372036854775807 << (((arr_32 [i_1 - 3] [i_0]) - 1)))))));
                    arr_47 [i_12] = (arr_26 [8] [i_12 + 1] [i_12] [i_12]);
                    arr_48 [i_0] [i_0] [i_0] [i_12 + 1] &= var_0;
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    var_32 = (min(var_32, (((var_8 || (arr_32 [i_0] [i_0]))))));

                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        arr_54 [i_13] [i_1] [i_14] [11] [i_14] = var_3;
                        var_33 += -1309406902;
                        var_34 = 70016140;
                        var_35 = var_10;
                    }
                }
                arr_55 [i_0] [5] [i_0] = 77;
                arr_56 [i_1] = (1610612736 % 255);
            }
            arr_57 [i_1] = var_0;
        }
        var_36 += ((((((min(0, 10355793500215211879))) ? (((var_9 ? 211 : 0))) : 14755574059709799805)) / ((((min(var_7, var_10)) * 9223372036854775807)))));
        var_37 *= ((((((min(32640, var_5))) - 9223372036854775807))));
    }
    var_38 = var_6;
    #pragma endscop
}
