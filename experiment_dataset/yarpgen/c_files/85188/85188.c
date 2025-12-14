/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 ^= ((var_8 % (var_10 > -65535)));
        arr_2 [i_0] [i_0] = 65535;
        var_15 = ((~((65535 ? 11568643717034614620 : (~9)))));
    }
    var_16 = var_8;
    var_17 = (6878100356674936996 >= var_4);

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_4 [i_1]);
        var_18 ^= (36028794871480320 / 77);

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (~-1);

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_11 [i_1] [i_1] [i_1] = -1;

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_19 = (max(var_19, ((5535608280813295214 ? (arr_13 [21] [i_3] [i_2] [i_1]) : (arr_10 [i_2])))));
                    var_20 = -5600;

                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [i_1] [i_3] = (6144 + var_4);
                        var_21 = (-40 != var_11);
                        arr_19 [i_1] [i_2] = var_1;
                        var_22 *= var_7;
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [i_2] [i_3] [i_1] [i_3] [i_1] [i_6] = 65535;
                        var_23 += var_1;
                        var_24 ^= ((var_9 ? var_4 : 1));
                        var_25 = (arr_9 [i_1] [i_1] [i_3]);
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_7] [i_1] [i_4] [i_1] [i_1] [i_1] = ((var_9 ? var_11 : 1));
                        var_26 -= (var_13 * 586546339);
                        arr_28 [i_1] [i_1] [i_1] = var_1;
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_27 = 65535;
                        var_28 += 65532;
                        var_29 = (max(var_29, 65522));
                    }
                }
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {

                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    arr_36 [13] [i_1] = ((16 ? (65519 * 12) : 9));
                    var_30 = (max(var_30, var_5));

                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_31 = ((-(arr_23 [i_10 - 1] [i_1] [i_10 - 1] [8] [i_10] [i_1] [i_1])));
                        arr_39 [i_1] [i_1] [i_2] [i_1] [i_10] [i_11] = 65514;
                        arr_40 [i_9] [i_9] [i_9] [i_1] [i_9] = (~var_2);
                        var_32 = 116;
                        var_33 -= (~var_4);
                    }
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_34 = (max(var_34, 65513));
                    var_35 = (min(var_35, (((!(arr_16 [i_2]))))));
                    var_36 ^= var_12;
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    var_37 = 65526;

                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        arr_48 [i_1] [21] [i_13] [i_1] [i_2] [i_1] [i_1] = ((var_12 ^ (!0)));
                        var_38 = 4611686001247518720;
                    }
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        var_39 += ((22 ? (-32767 - 1) : 12));
                        arr_52 [i_1] [i_2] [12] [i_1] [i_15] = 32;
                    }
                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        arr_57 [i_1] [i_1] [16] [i_1] [i_1] [i_1] [i_1] = var_5;
                        arr_58 [i_1] [i_1] = -3580923456658963741;
                    }
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        arr_61 [i_2] [i_1] [i_9] [i_1] [i_9] = ((var_1 % (arr_45 [i_1] [i_1] [i_1])));
                        var_40 *= ((var_3 ? var_7 : -92));
                        var_41 = ((0 - (arr_4 [i_1])));
                    }
                    var_42 = var_9;
                    var_43 *= ((var_2 ? (0 >= var_3) : (-32767 - 1)));
                    var_44 *= (var_13 >> (-3580923456658963741 <= 65513));
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                {
                    arr_64 [i_1] [i_9] = (((arr_55 [i_1]) ? var_12 : (arr_55 [i_2])));
                    arr_65 [i_2] [i_2] [i_2] [i_9] [i_18] &= (((((arr_47 [i_1] [i_1] [i_9] [i_18] [i_18]) ? 8768100095399838377 : 113)) >= ((var_12 ? 4 : var_6))));

                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        var_45 = var_11;
                        arr_70 [i_1] [i_2] [i_2] [i_2] [i_18] [i_1] = -var_5;
                    }
                }
                var_46 = (max(var_46, ((((~var_6) - 192)))));
                var_47 = 65535;
            }
            arr_71 [i_1] = ((((-1722968882798839971 ? (arr_47 [i_2] [15] [i_2] [i_1] [i_1]) : var_3)) - 1));
        }
    }
    for (int i_20 = 2; i_20 < 20;i_20 += 1)
    {
        arr_76 [i_20] = var_10;
        var_48 = (min(var_48, 448));
    }
    var_49 = (max(var_49, 18280883017269895585));
    #pragma endscop
}
