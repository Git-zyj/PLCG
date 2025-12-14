/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (((((((-(arr_1 [i_0 - 1] [i_0])))) ? var_14 : ((var_10 ? (arr_1 [i_0] [i_0]) : var_9))))) ? (max((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 57631)), (((arr_0 [i_0]) ? 134217727 : (arr_1 [i_0] [i_0]))))) : (min(2147483647, var_8)));
        arr_3 [i_0] = (((var_5 > 1) - ((~(var_13 == var_2)))));
        arr_4 [i_0] = (((((var_17 ? ((max(var_6, var_17))) : (arr_1 [i_0] [i_0 - 1])))) ? (max((arr_2 [15]), ((-1 ? (arr_0 [i_0]) : var_2)))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = max(var_3, (arr_2 [i_1]));
        var_22 += (arr_1 [i_1] [i_1]);
        var_23 = ((((arr_2 [i_1]) - ((var_6 ? var_17 : (arr_6 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (((max((arr_1 [i_2] [i_2]), (arr_6 [i_2] [i_2]))) >> (((arr_1 [i_2] [i_2]) - 9317))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_24 = (((!(((var_4 ? (arr_0 [i_3]) : var_7))))) ? var_0 : ((((min((arr_8 [i_2]), (arr_17 [i_2] [i_3] [i_4] [i_5])))) ? ((32767 ? (arr_2 [i_2]) : (arr_8 [i_2]))) : (((arr_15 [i_2] [5] [i_3] [i_4 + 2] [i_4 + 2]) ? (arr_12 [i_2] [i_3] [i_2]) : (arr_13 [i_2] [i_3] [i_3]))))));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_22 [i_2] [i_5] [i_3] = (1 - 1);
                            var_25 = ((max(((((arr_18 [i_2] [i_2] [i_4]) ? (arr_0 [i_3]) : (arr_11 [i_2] [i_4] [i_6])))), (((arr_20 [i_3]) | (arr_1 [i_4] [i_4]))))));
                        }

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = -729257234;
                            arr_25 [i_3] [i_3] [i_4] [i_5] [i_5] [1] = (max(var_6, (((134217727 ? (arr_16 [12] [i_3] [i_3] [i_3]) : (arr_1 [i_4] [i_7]))))));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_29 [i_3] [i_8] = (+(((arr_16 [i_2] [i_5] [i_4] [i_5]) ? (var_2 / 1) : (arr_28 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_3]))));
                            var_27 = var_3;
                            var_28 ^= (((((var_15 & (arr_10 [i_4])))) ? ((25 ? (((arr_26 [i_4 - 1]) % (arr_0 [i_2]))) : var_3)) : var_10));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_32 [i_3] [i_3] [i_3 + 3] [i_3] [i_3] = (((arr_19 [i_3 + 2] [5] [i_4 + 2]) ? var_17 : var_12));
                            var_29 = ((~(((((-565529527 ? (arr_8 [6]) : -26))) ? 18446744073709551615 : var_13))));
                            arr_33 [i_2] [i_3] [i_3 - 2] [i_3] [i_3] [i_3] [i_3] = (((min(-32765, (arr_1 [i_4] [i_9])))));
                        }
                        for (int i_10 = 4; i_10 < 13;i_10 += 1)
                        {
                            var_30 = (max((((arr_16 [i_2] [i_3 - 2] [8] [i_5]) ? ((var_13 ? -113172470 : var_16)) : (arr_16 [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_10 - 3]))), ((-1 - (((arr_8 [i_2]) - (arr_26 [i_2])))))));
                            var_31 = (~-1);
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        var_32 += (arr_8 [i_11 - 1]);
        arr_38 [i_11] = (((arr_0 [1]) * ((((-(arr_28 [i_11] [i_11] [4] [i_11] [2]))) % ((1 ? (arr_14 [i_11] [i_11] [i_11] [i_11]) : (arr_7 [i_11] [i_11])))))));
    }
    var_33 = (min(var_33, var_7));
    var_34 = var_0;
    var_35 = ((var_10 ? var_17 : ((var_17 ? (((56 ? var_6 : var_12))) : (max(8188275482640076601, 1))))));
    #pragma endscop
}
