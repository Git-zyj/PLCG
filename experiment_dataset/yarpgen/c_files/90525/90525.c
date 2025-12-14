/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((!(((~(arr_0 [i_0] [i_3])))))))));
                            var_17 += ((~((+(((arr_0 [i_0] [i_1]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : -28))))));
                            var_18 += (arr_0 [i_0] [i_1]);
                            var_19 = ((127 ? (((-118 ^ ((((arr_2 [i_0]) == (arr_2 [i_1]))))))) : 10545158711768291012));
                        }
                    }
                }
                var_20 = (min((arr_5 [i_1] [i_1] [i_0] [i_0]), 127));
                var_21 = (~(min((min((arr_4 [i_1] [i_0] [i_1]), (arr_1 [2]))), (arr_4 [i_1] [i_1] [i_1]))));
                var_22 = (max((((arr_9 [i_0] [i_0] [8] [i_1]) / (-127 - 1))), ((10 - (arr_9 [i_0] [i_1] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_1] = (max(((((arr_13 [i_0] [i_0]) != (arr_13 [i_1] [i_4])))), (min(13163398899549429742, (arr_13 [i_0] [i_1])))));
                            arr_16 [i_4] [i_4] [i_1] [i_4] = (min(((-(max((arr_4 [i_1] [i_1] [i_1]), 9)))), ((((arr_12 [i_0] [i_1] [i_0]) ^ (arr_12 [i_0] [i_1] [i_4]))))));
                            arr_17 [i_1] [i_1] [i_1] = -51;
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_0, (max(-var_11, 117))));

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_24 = ((!(~-123)));
        var_25 = (arr_19 [i_6] [i_6]);
    }
    var_26 = ((((min((max((-127 - 1), var_4)), ((max(-1291840285, 1138057767)))))) && (((((max(var_6, var_7))) ? var_0 : 1576655149)))));
    #pragma endscop
}
