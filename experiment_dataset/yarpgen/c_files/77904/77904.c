/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                arr_4 [i_1 + 2] = ((!(((-(((arr_1 [i_1]) ? 1573559993 : var_4)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (((((arr_8 [i_0]) ? (max(-1573559993, (arr_1 [6]))) : ((max(var_9, (arr_5 [2] [i_1 + 1] [i_0])))))) < (arr_6 [i_2])));
                                var_19 = (min(var_19, ((((65535 && var_5) ? ((((arr_3 [i_0] [i_0]) ? 3756 : 24836))) : (~var_15))))));
                            }
                        }
                    }
                }
                var_20 = (((((-((-(arr_11 [i_0] [i_1] [i_1])))))) ? -var_4 : -var_16));
                var_21 = (min(var_21, (((43183 - 1142115576) + (!var_10)))));
            }
        }
    }
    var_22 = max(((max((!var_9), (min(16682, var_15))))), (var_3 ^ var_7));
    #pragma endscop
}
