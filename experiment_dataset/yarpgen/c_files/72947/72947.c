/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [1] [i_0] = 70171705;
                            arr_15 [22] [i_1 + 2] [i_0] [i_1] [1] [i_1 + 1] = ((((max((arr_11 [i_0]), (arr_11 [i_0])))) && (arr_11 [i_0])));
                        }
                        var_11 = min((arr_7 [i_0] [i_0] [i_0]), ((152 ? (arr_7 [i_3] [i_2] [i_1 + 2]) : (1 >= 1))));
                        var_12 = -var_3;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_13 = (arr_3 [i_1] [i_5]);
                        var_14 = 40729;
                    }
                    arr_18 [i_0] [i_1 - 2] [i_1] [i_0] = ((!((max((min(var_5, 13975721437114162863)), var_8)))));
                    var_15 = max((((var_7 ? ((min((arr_11 [i_0]), var_10))) : ((((arr_10 [i_0] [i_0] [i_1] [i_2]) >= 172)))))), (max((arr_13 [i_1 - 2] [i_1 + 2] [i_1 - 2]), (((-244735581 ? var_5 : var_5))))));
                    var_16 = 103;
                    var_17 -= ((!(arr_6 [i_2] [i_1 - 2] [i_1] [i_1])));
                }
            }
        }
    }
    var_18 = (min((((~16083620914472371746) ? 103 : (var_2 - 16804290344764909359))), (((min(var_7, 144))))));
    #pragma endscop
}
