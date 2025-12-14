/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = (min(var_21, var_9));
    var_22 = (max((max(-var_15, var_6)), (min(-var_11, var_17))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [19] [19] = (((((min(0, (arr_1 [i_0]))) ? (arr_1 [i_0]) : ((var_4 ? 25653 : var_19))))));
        var_23 = (max(25346, (arr_0 [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [22] [22] = (15 > 29427);
                    var_24 -= 1073741823;
                    arr_8 [i_0] [i_2] = ((((((min(39884, (arr_5 [i_1] [i_2])))) || (arr_5 [i_1 - 1] [i_0])))) ^ (arr_5 [i_0] [i_0]));
                    var_25 = ((((5472467170569145757 >> (var_14 != var_19)))) ? (((17332586585105742390 ? 155 : 82))) : (arr_0 [i_0]));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        var_26 = ((~(arr_5 [i_3] [i_5])));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_26 [i_4] [4] [i_4] [i_4] = (!0);
                            arr_27 [i_4] = (((arr_24 [i_5] [i_6] [i_6] [i_6 - 1] [i_6] [i_6]) ? var_5 : (arr_18 [i_6 - 1] [i_6 - 1] [i_6 + 1] [2])));
                        }
                    }
                    arr_28 [i_4] [i_3] [i_4] [5] = (((arr_24 [13] [i_3] [i_4] [i_3] [i_3] [i_3]) > (arr_17 [i_3] [i_4] [i_3])));
                }
            }
        }
        arr_29 [i_3] = (arr_14 [i_3] [6] [i_3]);
        arr_30 [i_3] = ((arr_23 [i_3] [i_3] [11]) ? (arr_10 [i_3]) : -107);
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        arr_34 [i_8] = (((var_9 / (min(17635088993683349582, -80)))));
        arr_35 [i_8] [i_8] = max((min((arr_11 [i_8]), ((((arr_21 [i_8] [i_8] [15] [0] [i_8] [i_8]) ? var_0 : var_15))))), (min((arr_0 [i_8 - 1]), (arr_16 [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1]))));
    }
    #pragma endscop
}
