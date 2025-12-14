/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((1 ? var_3 : var_9))) * ((0 ? var_2 : 1))))) ? ((1 ? (!var_12) : ((var_1 ? var_9 : var_10)))) : 1));
    var_16 = (((((-9223372036854775807 - 1) + var_3)) - ((var_13 ? var_9 : -var_2))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0 - 1] = (((((((max(var_9, var_0)))) + (arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2]))) + (!var_10)));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_17 = ((((((!33126) ? (((var_1 != (arr_4 [i_0] [i_1] [i_2])))) : 18887))) ? ((16020 ? 233 : 18887)) : (arr_2 [i_0 - 2] [i_2])));

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_0 + 1] [i_0] [i_0] [i_0] = ((var_4 ^ ((((((arr_1 [i_0 - 2]) ^ var_8))) ? 1 : var_11))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_18 = ((((min((arr_8 [i_3 + 2] [i_1] [i_0 + 1] [i_0]), -608238092))) ? (((((var_6 << (((var_9 + 27648) - 23))))) ? (((arr_8 [i_0] [i_1] [i_2] [i_3 + 2]) ? var_12 : 1)) : (arr_1 [i_0 - 1]))) : (min(((12767 ? var_0 : (arr_0 [i_3] [i_1]))), (var_0 ^ var_4)))));
                            arr_15 [i_4] [i_4] [i_3 - 3] [i_2] [i_2] [i_1] [i_0] = (((-15382 && var_3) ? (((var_8 + 9223372036854775807) << (((((~1) + 23)) - 21)))) : (!var_5)));
                            arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_4] = 44549;
                            var_19 += (arr_7 [i_0 + 1] [16] [i_3]);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_2] [i_3] [i_5] = var_14;
                            arr_20 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] = ((~(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) & (15382 | -12013)))));
                            arr_21 [i_5] [i_1] [i_5] [i_3 + 3] [i_0] = ((((((arr_14 [i_0 - 1]) ^ var_1))) ? (~32766) : (((arr_14 [i_0 + 1]) & (arr_14 [i_5])))));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0] [12] [i_0] [i_0] [i_0] = (((((!(arr_14 [i_0 - 2])))) != 255));
                            var_20 = var_10;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_21 = 12767;
                            var_22 = 3;
                            arr_27 [i_0] [i_2] [i_3 + 2] [i_3] [i_3] [0] [i_1] = var_8;
                        }
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_23 = ((((max((-9223372036854775807 - 1), (!var_10)))) ? (arr_25 [i_8]) : 44560));

                        for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            var_24 = 50153;
                            arr_33 [i_0] [i_8] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1] = var_3;
                        }
                        for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_25 = ((var_3 < ((((!var_9) && 1)))));
                            var_26 = ((((!(((85 ? var_9 : -18887))))) ? ((min(-95, 141))) : (arr_29 [i_0] [i_1])));
                            var_27 = (var_3 + var_14);
                        }
                    }
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        var_28 = (((-1990757878 || 211) ? var_2 : ((-((var_5 ? (arr_39 [i_0] [i_1]) : var_1))))));

                        for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            var_29 = arr_17 [i_0 - 1] [i_0 + 1] [i_0] [i_0];
                            var_30 = -6045362824514617897;
                            arr_43 [i_0 - 1] [i_11 + 2] = (((-28945 ? -6909768829828520410 : 1)));
                            arr_44 [i_11 - 1] [i_2] = ((8297 ? (arr_41 [i_0] [i_1] [i_0 - 2]) : (max(6045362824514617896, (((~(arr_40 [i_0 - 1] [i_2] [i_11]))))))));
                        }
                        for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            arr_49 [2] [i_1] [2] [i_11] [i_11] = (max((((arr_45 [i_13] [i_13 + 1] [i_13 - 1] [i_13]) != var_8)), (((arr_45 [14] [i_13 - 1] [i_13 - 1] [i_13 - 1]) > (arr_45 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 - 1])))));
                            var_31 = (arr_35 [i_0 - 2] [i_1] [i_1] [1] [0] [i_11 + 1] [0]);
                            var_32 = arr_9 [i_0] [i_0] [0] [i_0 + 1] [i_0];
                            arr_50 [3] [i_1] [i_1] [i_11] [i_13] = ((44549 ? (-2147483647 - 1) : 0));
                        }
                    }
                }
                arr_51 [i_0 + 1] [i_0] [i_1] = (arr_29 [i_0 - 2] [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
