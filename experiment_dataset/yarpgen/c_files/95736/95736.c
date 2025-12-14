/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_4;
    var_19 = ((((max((((var_13 ? var_3 : var_13))), var_1))) ? var_6 : var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 -= (max(((((((arr_5 [8] [i_1] [8] [i_0]) ? (arr_3 [i_0] [i_1] [1]) : var_2))) ? ((min((arr_1 [15]), var_6))) : (arr_0 [i_1 + 2]))), (min((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0]) : var_16)), ((~(arr_6 [i_0] [i_1] [i_1] [i_2])))))));
                    arr_9 [11] [i_1] [11] [4] = (((((~(min((arr_1 [i_0]), (arr_3 [i_2 - 2] [i_1 - 1] [i_0])))))) ? ((((((arr_1 [i_1 + 1]) ? (arr_4 [i_0]) : (arr_3 [i_2 - 1] [i_2] [i_2 + 1]))) <= ((((arr_8 [i_2 - 2]) ? (arr_2 [i_0] [i_2]) : var_11)))))) : ((((arr_3 [i_2 + 1] [i_2 + 2] [i_1 + 2]) > (arr_3 [i_2 - 1] [i_2 - 2] [i_1 - 1]))))));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_21 = (min(((((arr_7 [i_1] [i_2 + 1] [i_2 + 1] [i_3]) ? ((((arr_11 [i_0] [i_0] [i_3]) ? (arr_12 [i_0] [i_2]) : var_5))) : (arr_11 [i_1 - 1] [i_1 + 2] [i_1 + 2])))), ((((((arr_6 [i_2] [i_3] [i_2 - 2] [1]) ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (arr_6 [i_0] [15] [3] [i_3]) : ((-(arr_10 [i_0] [i_0] [i_0] [11] [i_2] [10])))))));
                        var_22 |= (arr_10 [i_0] [7] [i_1] [i_0] [i_2 + 1] [i_2 + 1]);
                        var_23 = ((((((arr_3 [i_0] [i_0] [i_0]) + ((((arr_5 [13] [i_1] [i_1] [14]) ? var_12 : (arr_2 [i_2 - 1] [i_2 - 1]))))))) ? (((!(arr_8 [i_0])))) : ((((max((arr_11 [i_0] [i_2] [i_3]), (arr_0 [i_0])))) ? var_5 : (7 && var_1)))));
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_15 [12] [5] [i_1] [i_1 + 2] [9] [9] = var_3;
                        var_24 += (((((~(((arr_6 [8] [3] [3] [i_0]) ? (arr_11 [i_0] [i_0] [i_0]) : (arr_2 [12] [i_1 + 1])))))) ? ((min((arr_6 [i_4 + 1] [i_1 - 1] [i_2 + 2] [i_2 - 2]), (arr_6 [i_4 + 2] [i_1 - 1] [i_2] [i_2 - 2])))) : ((+((var_7 ? (arr_6 [i_0] [i_0] [i_2] [i_4 + 3]) : var_7))))));
                        arr_16 [14] [14] [i_2] [i_2] [0] = ((((((4042654937858672571 < 20) ? (~var_1) : -var_14))) ? ((-((var_5 ? var_13 : var_10)))) : (((0 ? 102 : 1)))));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_20 [8] [i_1 + 1] [i_2] [i_5] [i_5] = (((((arr_10 [9] [i_1 + 1] [13] [i_2] [i_4 + 2] [7]) ? (-17 && 4042654937858672571) : -255)) <= var_2));
                            var_25 = (max((((var_11 == (arr_6 [i_5] [i_4 + 1] [i_2 + 1] [i_1 + 1])))), (((arr_6 [i_4 - 2] [i_4 + 2] [i_2 + 2] [i_1 + 2]) ? (arr_5 [i_4] [i_4 - 2] [i_2 - 2] [i_1 - 1]) : var_11))));
                        }
                        var_26 -= (((((14 ? -3505938787588163487 : 52545))) && (((((max(65535, -29))) ? var_14 : (arr_7 [12] [12] [i_2] [12]))))));
                    }
                }
            }
        }
    }
    var_27 |= ((((((var_7 ? var_11 : var_1)) ^ (((var_8 ? var_3 : var_15))))) <= ((((~var_7) ? ((max(var_13, var_6))) : (-3505938787588163489 > 1))))));
    var_28 = var_6;
    #pragma endscop
}
