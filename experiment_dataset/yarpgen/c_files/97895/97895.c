/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = 120;
                                var_15 = ((12 ? 27776 : -122));
                                arr_15 [i_3] [i_1] [12] [17] [15] [i_4] = var_7;
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_16 = (max(8528929532720746119, (max(9677876095709726538, (arr_17 [i_0 + 1])))));
                        arr_18 [i_2] [i_2] [i_2] [4] = var_0;
                        arr_19 [i_0] [i_1] [i_2] [1] [i_2] [i_5] = var_1;
                        arr_20 [i_0] [5] [i_0] [i_0] = (max(((((max(var_4, var_0))) ? var_0 : ((var_11 ? 15795718154671235748 : var_7)))), (((((((arr_4 [i_0] [i_0] [i_0]) ? 0 : 14556315496062530147))) && ((min((arr_13 [12] [i_1] [i_1] [i_2] [5]), (arr_7 [12] [i_1] [3] [14])))))))));

                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            arr_25 [4] [i_6] [16] [7] [i_6] = ((!((max((arr_17 [i_1 - 2]), (var_9 - var_13))))));
                            var_17 = (min((max((127 <= -10), (arr_16 [14] [i_1] [i_1] [i_1] [i_1 - 1]))), (!var_14)));
                            var_18 = max((arr_23 [i_6]), (min(var_13, 13649737188206433585)));
                            var_19 = (arr_3 [i_1] [i_2] [13]);
                            arr_26 [1] [i_6] [i_6] = (max(var_12, (((((min((arr_6 [i_0] [i_0] [i_0]), var_2))) <= var_7)))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_31 [8] [13] [i_2] [i_2] [i_2] [0] = (max((arr_5 [i_0] [i_0]), (min(-33, 12421236007863286677))));
                            var_20 = (min(((((arr_12 [4]) > ((max(-69, -117)))))), var_10));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_21 = var_3;
                            var_22 = (min(var_22, var_2));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_2] [i_9] [7] = ((var_13 ? (27776 & 126) : ((~(arr_0 [i_1])))));
                        var_23 = (((((5871723891052237428 ? var_12 : 107))) ? var_11 : var_8));
                        var_24 = ((-27787 ? var_13 : (arr_35 [i_0 - 2] [i_1 - 2] [i_2] [i_9])));
                    }
                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        arr_41 [13] [i_1] [i_1] [8] = var_8;
                        var_25 = ((var_7 ? ((min(-117, (arr_6 [i_10 - 2] [17] [16])))) : -125));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_26 += min(var_10, (((max((arr_2 [i_11]), -32762)))));
                                var_27 = (min((min(var_5, -18213)), (~-25083)));
                            }
                        }
                    }
                    var_28 = ((!((max((((arr_33 [6]) ? (-127 - 1) : var_12)), var_9)))));
                }
            }
        }
    }
    var_29 = (max(((~(20680 && -1308))), 123));
    var_30 = (var_14 && 68);
    var_31 = min((min(var_5, var_5)), ((((2820 / 127) ? (var_1 / 72) : var_4))));
    #pragma endscop
}
