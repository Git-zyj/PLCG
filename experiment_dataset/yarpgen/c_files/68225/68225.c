/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_1] [i_0] [i_2] [i_3] [i_4] [i_4] = min((arr_1 [i_0]), (min((arr_1 [i_0]), (arr_1 [i_0]))));
                                arr_14 [i_0] = var_7;
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] = (min((1307592255 / 42178), ((max((arr_0 [i_1]), (arr_0 [i_0 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = (min(1307592262, 42178));
                                arr_21 [i_0] [i_1] [i_0] [i_5 - 3] [i_6] = (((((~(arr_12 [i_0 - 1] [i_1] [i_1] [i_1])))) ? (max((arr_11 [i_6] [i_6 - 2] [i_0] [i_6] [i_0] [i_5 - 4] [i_1]), (arr_11 [i_6] [i_6 - 1] [i_0] [i_2] [i_0] [i_5 - 3] [i_2]))) : (17868728789269280427 % 15956109275947124103)));
                                arr_22 [i_0] [i_1] [i_0] [i_0] = var_4;
                            }
                        }
                    }
                    arr_23 [i_0] [i_0] = -7906163019618410065;
                    arr_24 [i_0 + 1] [i_0] = (max((((((((arr_8 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2]) ? (arr_7 [i_0]) : var_11))) || var_5))), ((-576460752303423480 * (!-1186714787)))));
                }
            }
        }
    }
    var_13 += 115;
    var_14 = (max(var_14, (((!(((((max(var_0, var_6))) * var_8))))))));
    var_15 -= ((((max(var_5, 17868728789269280427))) >= (((min(var_4, 578015284440271189))))));
    #pragma endscop
}
