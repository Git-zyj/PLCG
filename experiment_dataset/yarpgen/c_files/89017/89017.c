/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((((109 * 17890990714557360429) && var_8)) ? var_5 : -8445804644128552246)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_0] [7] [i_3] = (((((var_11 ? -var_2 : 146))) ? (arr_7 [i_0] [0]) : (((max(var_1, (arr_2 [i_0 - 1])))))));
                        var_20 = ((~((var_9 & (arr_5 [i_3 - 1] [4] [i_3 + 2])))));
                        var_21 += (max((arr_11 [i_3 + 1]), (!var_15)));
                        var_22 = ((((max(var_18, (max(var_9, (arr_11 [i_0])))))) ? ((var_12 ? (!16354148772969579182) : (0 || 548365027))) : ((((max(var_14, var_2))) & (arr_4 [5] [i_1])))));
                        var_23 = ((106 ? 2092595300739972438 : -81));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        var_24 = 125;

                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            var_25 += ((arr_9 [i_0 - 1] [i_2 - 1] [5] [i_2]) ? (arr_10 [i_0 - 1] [i_0 + 3] [i_1 + 3] [0] [i_0 - 1] [i_5 - 1]) : (arr_9 [i_0 + 3] [i_2 + 2] [6] [6]));
                            var_26 |= ((var_9 ? (arr_6 [i_0 + 2] [i_0 + 4] [i_0 + 1]) : var_2));
                        }
                        arr_18 [i_1] = ((-(arr_7 [i_0] [i_1 + 2])));
                        arr_19 [i_0 + 3] [i_1] [i_1] [i_2 - 1] [2] = ((-var_9 ? 19670 : 25));
                    }
                    arr_20 [8] [i_1] [i_1] [i_1] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
