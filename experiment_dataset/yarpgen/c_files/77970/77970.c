/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_1] = 15970;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 *= (((min((arr_13 [i_0] [8] [12] [i_3]), (!var_4)))) || (((~((var_6 ? 255 : var_12))))));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_17 = 3748949145;
                            arr_18 [i_1] [i_1] [i_2] [i_3] [i_4 - 1] = ((((max((arr_15 [i_2] [i_1] [i_4 - 2]), -var_7))) ? (((((max((arr_16 [i_2] [i_1]), (arr_5 [1] [1] [7]))) <= var_15)))) : (min((arr_5 [i_0] [i_1] [14]), (arr_8 [i_4 + 1] [i_1] [i_2 - 1])))));
                            arr_19 [i_4] [i_1] [i_1] [i_1] [i_0] = (max((((!(arr_6 [5] [i_1])))), (((arr_6 [i_1] [i_4 - 1]) ? (arr_6 [i_4 - 2] [i_0]) : (arr_6 [i_0] [i_1])))));
                        }
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_18 = ((((min((arr_15 [1] [i_1] [i_0]), (arr_15 [i_0] [i_1] [i_2])))) ? ((+(((arr_22 [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? var_7 : var_9)))) : ((((((var_15 ? var_8 : var_14)) > (((arr_17 [8] [i_1] [i_1] [14]) ^ var_9))))))));
                        arr_23 [i_1] [i_1] [4] [i_5] [9] = var_6;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                arr_29 [i_6] [i_6] = (arr_28 [i_6] [i_6] [9]);
                arr_30 [i_6] [i_6] = (min((~-16), (((2251799813685216 > ((((-566979921 + 2147483647) >> (3962079884550094609 - 3962079884550094588)))))))));
                var_19 = ((((max(((-(arr_27 [i_7] [i_6]))), 0))) + (max((arr_25 [8] [i_6]), 65535))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                arr_37 [i_8] [i_8] [i_8] = ((var_14 > ((~(((arr_36 [i_8]) | -566979928))))));
                arr_38 [i_8] [i_8] = (((((((max(478277179263088464, -7801426290725865138))) ? (arr_33 [i_8]) : (var_6 > var_9)))) || (((+(((arr_32 [i_8]) >> (var_8 + 5545919108318930206))))))));
                arr_39 [i_9] = (~var_14);
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_20 = var_13;
                                arr_49 [i_8] [i_9] [i_8] [i_11] [i_11] [i_11] = (max((~var_14), (max((((arr_41 [i_8]) + (arr_41 [i_11]))), (15974 <= 7534971387601302501)))));
                                var_21 = (((!-36) <= (((arr_44 [i_8] [i_8]) + (arr_44 [7] [i_10])))));
                                arr_50 [i_9] [1] [1] = (max(((((arr_31 [i_9]) > (arr_47 [i_12 - 2] [i_12 + 1] [i_12] [i_12] [i_12])))), ((23 ? (((var_14 + (arr_44 [i_10] [i_12])))) : -81165910741353619))));
                                arr_51 [7] [13] [i_11] [i_12] = (max(((5142903186647057430 >> (((max(28, var_1)) - 12493948013666949831)))), var_12));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 0;
    #pragma endscop
}
