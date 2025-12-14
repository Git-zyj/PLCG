/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_2] = ((+((((arr_1 [i_0 - 2]) >= var_10)))));
                        var_17 = ((15145552911044657035 ? (1 < 15372) : -94));
                        var_18 = ((((((arr_3 [i_0] [i_0] [i_0]) <= var_16)))) + 11005447569273821126);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] = ((-220 & (((arr_13 [i_2] [i_4 - 2] [i_2]) ? ((-106 ? var_10 : var_10)) : (-114 >= 0)))));
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_2] = ((~((max(var_1, 85)))));
                                arr_20 [7] [7] [7] [i_2] [7] [i_5] [i_5] = -119;
                                var_19 = (((7441296504435730489 > ((((3710255677667820395 > (arr_16 [i_2] [i_1] [i_2]))))))));
                                arr_21 [i_5] [i_2] [i_2] [i_2] [1] [i_2] [i_2] = (((((arr_7 [i_1] [i_2] [i_4 + 2] [i_4 + 2]) > (var_16 & var_13))) && 22796));
                            }
                        }
                    }
                    var_20 = ((~(min((arr_11 [i_0 + 1] [i_0 + 1]), (42740 + 38614)))));
                    var_21 = (min(var_21, var_12));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 = var_15;
                        var_23 = (arr_5 [i_2] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_24 *= (((-(arr_9 [i_0 - 1] [i_0 - 1] [9] [i_7]))));
                        var_25 = -var_6;
                        arr_26 [i_0] [i_1] [i_2] [11] [i_1] [11] = ((165693226 ? var_0 : 113));
                        var_26 = -89;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_27 = (((arr_0 [i_0 - 1]) ? (arr_4 [i_2] [i_8] [i_0 - 1]) : var_9));
                        var_28 = (max(var_28, 1));
                    }
                    for (int i_9 = 4; i_9 < 14;i_9 += 1)
                    {
                        var_29 = ((var_16 * (min(56072, 0))));
                        var_30 -= -975119784;
                        arr_31 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((max((((975119780 ? (-2147483647 - 1) : var_13))), ((123 ? 20 : 876698698))))) ? -2147483634 : 62836));
                        var_31 = 22790;
                    }
                }
            }
        }
    }
    var_32 = ((0 ? 7307370949453240747 : ((((-2147483647 - 1) ? 126 : (-64 >= 2147483647))))));
    var_33 = ((((((-58 + 2273036263349779836) ? (min(var_14, 15)) : 1928352253))) ? (max(var_15, 1)) : (((((var_8 < 5096274008112486912) < ((-7 ? 1 : -98))))))));
    var_34 = 3684404892965323164;
    #pragma endscop
}
