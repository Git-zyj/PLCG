/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (max(var_15, (((((~(min(1791630389752820519, (arr_0 [i_0] [4]))))) <= (((~(arr_1 [10])))))))));
        var_16 = (max((arr_0 [i_0] [i_0]), (((arr_1 [i_0]) >> (var_8 + 26629)))));
        var_17 = (min((arr_1 [i_0]), ((-32 ? 5 : 250))));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_18 |= (arr_2 [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_19 ^= (~252);
                    var_20 = (max(var_20, 2240633254));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_21 = ((((((arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]) ? (arr_12 [i_0] [i_0] [i_2] [i_3]) : 5))) ? 4503049871556608 : 102));
                        arr_16 [i_0] [i_1 + 1] [0] [i_3] [i_4] |= (arr_2 [i_1 - 1] [i_2]);
                        var_22 = (!(arr_8 [i_0]));
                        arr_17 [i_0] [i_1] [i_3] [i_0] = 2046;
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1 + 1] [i_2] [i_2] [i_0] [i_5] = 87;
                        var_23 = ((~(arr_4 [i_0] [i_0])));
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = 255;
                        var_24 = (min(var_24, (((+(((arr_18 [4] [i_1 - 2] [i_1] [i_1] [4]) ? (arr_14 [i_3] [i_1]) : 4294967295)))))));
                        var_25 |= var_12;
                    }

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_26 ^= ((4294967286 == (arr_1 [8])));
                        var_27 = (min(var_27, 173));
                        var_28 = var_9;
                    }
                }
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    var_29 = ((-32762 - (((~var_12) ? (min(511, var_6)) : (~5)))));
                    var_30 = (max(var_30, ((max(((~(arr_19 [i_7] [i_7 + 1] [i_7 - 3] [i_7] [i_7 + 1]))), (max(0, ((var_5 ? 1 : (arr_13 [i_7] [i_1 - 1] [i_0]))))))))));
                    arr_29 [i_0] [i_0] [i_2] [i_2] = (min(var_3, 255));
                    var_31 += (!var_13);
                }
                for (int i_8 = 4; i_8 < 10;i_8 += 1)
                {
                    arr_33 [i_1 + 2] [i_0] [i_2] = (max((max(var_5, var_6)), 238));
                    var_32 = var_14;

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_33 = min((((223 && (arr_11 [i_8 + 1])))), 238);
                        arr_36 [i_1] [8] [i_8] |= ((~((((arr_9 [i_8] [i_8] [i_8 - 3] [i_8] [i_8]) <= (((arr_5 [i_0] [i_1 + 1]) ? var_4 : 186)))))));
                    }
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        var_34 ^= (min((min(var_1, var_14)), (((((-67 ? 11 : 255))) ? (((~(arr_12 [i_0] [0] [0] [i_10 + 2])))) : ((var_3 ? (arr_8 [8]) : (arr_10 [i_1] [i_8])))))));
                        var_35 = (max(var_35, (((((min((arr_12 [i_0] [0] [i_8 - 2] [i_10 - 1]), (arr_12 [i_1] [6] [i_8 - 3] [i_10 + 1])))) ? (arr_12 [i_0] [0] [i_8 - 1] [i_10 + 2]) : ((max((arr_12 [i_1 - 3] [10] [i_8 - 3] [i_10 - 1]), 17))))))));
                        var_36 += 229;
                    }
                    var_37 = (max(var_37, (((((min((arr_35 [i_0] [i_1] [i_1] [i_2] [i_8]), var_8))) ? ((-1 ? 4294967284 : (arr_35 [i_8] [i_2] [i_1 + 1] [i_0] [i_0]))) : (((min(32745, var_9)))))))));
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_46 [i_0] [i_1] [i_1 - 2] [i_0] [i_0] [i_12] [i_12] = (((arr_30 [i_12] [i_2] [i_1 - 3] [i_0]) <= ((((max(4223116539, var_8))) ? var_6 : (((min(9, 73))))))));
                            var_38 = max((((((var_3 ? 3599573641 : 15763)) | var_9))), (min((arr_24 [i_12] [i_0] [i_0] [i_0]), ((max(12, 0))))));
                            var_39 = (((((arr_25 [i_12] [i_0] [i_12] [i_11 + 2] [i_2] [i_0] [i_0]) <= var_2)) ? (max((min(var_6, 3041991785431089866)), (min(var_13, var_6)))) : (((min(22, (arr_13 [i_0] [i_12] [i_1 + 1])))))));
                            var_40 ^= (min((!-256), (min(var_12, (arr_45 [i_11 + 2] [i_1 + 1] [i_2])))));
                        }
                    }
                }
                arr_47 [0] [0] |= var_4;
                var_41 ^= (min((((var_10 == (arr_5 [i_1 + 1] [i_1 - 3])))), (min((!var_10), ((var_12 ? 4294967279 : 20))))));
                var_42 |= (min((min(5081, (arr_8 [6]))), 251));
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 10;i_13 += 1)
            {
                arr_50 [i_0] [i_0] [i_0] = (~1);
                var_43 = (1152920954851033088 <= var_10);
                var_44 = (max(var_44, (((((((arr_37 [i_0] [i_1 + 2] [i_13]) && 24576))) ^ var_5)))));

                for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                {
                    var_45 = 19;
                    var_46 = (max(var_46, ((((~246) > var_5)))));
                    var_47 = -65;
                    var_48 = (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
                {
                    var_49 += 31;
                    var_50 ^= (238 != var_13);
                }
                for (int i_16 = 3; i_16 < 10;i_16 += 1)
                {
                    arr_59 [i_0] [i_0] = (arr_3 [i_0]);
                    var_51 = (+-1);
                    var_52 += (((arr_30 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 3]) ? (arr_30 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 3]) : (arr_30 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 3])));
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 11;i_18 += 1)
                {
                    {
                        var_53 = 2904367900;
                        var_54 = (min(var_54, ((min(((~(arr_62 [i_18 - 1] [i_1 - 1]))), (((!((max((arr_61 [i_1] [i_17] [i_18]), var_0)))))))))));
                    }
                }
            }
            var_55 = (max(var_55, (((-55 ? (((min(47, 30)))) : -2117725600353912472)))));
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 20;i_19 += 1)
    {
        var_56 = -98;
        var_57 &= (((((255 ? var_0 : var_10))) ? -2117725600353912473 : (arr_64 [i_19])));
        var_58 = (min(var_58, ((((var_2 < -98) ? (30 != 40454) : 32295)))));
    }
    var_59 = var_3;
    #pragma endscop
}
