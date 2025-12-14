/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((-((-((min(var_5, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (~-6844);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = (((arr_10 [i_0] [i_0] [i_3] [i_4]) ? (((((107 ? var_7 : var_4)) + -var_0))) : 27));
                                var_13 = (min(129, var_0));
                                arr_15 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4] [i_2] = ((24137 ? 4465701845912095545 : 32767));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_22 [i_6] [i_7] = var_1;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_14 += ((~((131040 ? var_6 : (((arr_16 [i_5] [i_5]) ? (arr_0 [i_5] [i_5]) : (arr_19 [i_7] [6] [i_7])))))));
                                arr_30 [i_9] [i_9] [6] = var_8;
                            }
                        }
                    }
                    var_15 = (((((var_5 < (((arr_21 [i_5] [i_6] [i_7]) ? var_2 : var_5)))))) == ((((var_0 ? 18446744073709551588 : 255)) | (arr_16 [i_5 - 2] [9]))));
                    var_16 &= ((((arr_0 [i_5 + 1] [i_5 + 1]) / (arr_0 [i_5 - 3] [i_5]))));

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {

                        for (int i_11 = 3; i_11 < 8;i_11 += 1)
                        {
                            arr_36 [i_11] = (min(var_10, var_1));
                            var_17 = (min(((((238 ? (arr_16 [i_10] [i_10]) : 6)) % (((arr_17 [i_5]) ? var_1 : var_1)))), (min(1, ((var_10 ? (arr_32 [i_5] [i_5] [i_5] [i_5] [i_5]) : var_1))))));
                            var_18 = (((var_7 / ((18 % (arr_2 [i_5]))))));
                        }
                        var_19 *= -119;
                        arr_37 [i_5] [i_6] [i_7] [i_6] = var_4;
                        arr_38 [i_5] [i_5] [i_5] [i_5] [1] = 218;

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_42 [i_5] [i_12] [i_12] [i_7] [i_5 - 3] [i_10] = (((((arr_35 [i_6] [i_6] [i_6]) ? (((min((arr_18 [i_5]), var_0)))) : ((244 ? (arr_20 [i_6] [i_10] [10]) : 12196979524445262826)))) % var_2));
                            var_20 -= ((min((~48), ((min((arr_7 [i_6] [19]), (arr_35 [i_5 - 2] [i_5] [i_5])))))));
                            var_21 = ((((((arr_13 [i_6] [i_5 - 1] [11] [i_5]) % (arr_13 [i_7] [i_5 - 1] [i_5] [i_5])))) ? ((min((116 >= 1), (((arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_12]) ? (arr_39 [i_5 + 2] [i_5 + 2] [i_7] [i_5 + 2] [i_12] [i_5 + 2]) : -100))))) : (arr_28 [i_6])));
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_47 [i_5] [i_6] [i_6] [i_6] [6] [i_10] [1] = var_4;
                            var_22 = -227;
                            arr_48 [i_5] [1] [4] [i_6] [i_5] = 117;
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_23 = ((~((var_2 ^ (arr_49 [i_5] [i_5] [i_5] [i_5 - 3] [i_14])))));
                            arr_51 [i_7] [i_6] [i_7] [i_10] [i_14] [i_6] = var_10;
                        }
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        var_24 = ((((!var_9) ? (var_4 && var_7) : (~3674))));
                        var_25 |= (arr_6 [i_5] [i_5]);
                        arr_54 [5] [i_6] [3] [4] = (((((18446744073709551605 ? ((0 ? 338781030 : (arr_11 [0] [i_5] [13] [i_7] [i_15]))) : ((((!(arr_8 [i_5 - 3] [i_6] [i_6] [i_15])))))))) ? -var_2 : (((-115 ? (arr_17 [i_6]) : (max((arr_40 [i_5] [3] [3] [i_5]), var_6)))))));
                        arr_55 [i_5] [i_5] [i_7] [i_7] [i_5] = var_4;
                        arr_56 [i_15] [i_15] [i_15] [2] [i_15] = ((((((arr_13 [i_7] [i_5] [i_7] [i_6]) * 1))) ? ((var_2 + ((max(1167365283, (arr_8 [i_5] [i_6] [i_7] [i_7])))))) : ((((((-22235 ? var_9 : (arr_12 [1] [1] [1] [1]))) > (~3)))))));
                    }
                }
            }
        }
    }
    var_26 = ((min(((127 ? var_4 : 41399)), (~-100))));
    #pragma endscop
}
