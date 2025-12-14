/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max((min((arr_3 [i_0] [i_0]), (arr_1 [i_0]))), (min(-12, (arr_1 [i_1])))));
                var_15 = (((max((arr_4 [i_0] [i_0]), 23064)) - (((arr_4 [i_0] [i_0]) ? var_12 : (arr_4 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_3] [i_3] = (((min(23053, 4390371111997526415)) < (arr_4 [i_2] [i_3 - 1])));
                            var_16 = ((var_5 ? (!0) : (arr_9 [i_2 - 1] [16] [i_3 - 1] [15])));
                        }
                    }
                }
                arr_12 [1] [i_1] = (arr_3 [i_0] [i_1]);
                var_17 = (((max((arr_4 [i_1] [i_0]), ((min(var_6, var_4))))) / (((1270940340 ? (~var_8) : (~42471))))));
            }
        }
    }
    var_18 = (((((max(var_11, 23085))) ? var_0 : (782592565 & 23064))));
    var_19 &= ((+(((~2186691161658710323) ? var_7 : ((8429687337070609934 ? 2870173509 : -782592569))))));
    #pragma endscop
}
