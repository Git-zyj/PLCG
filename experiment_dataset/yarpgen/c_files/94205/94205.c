/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((~((var_6 ? var_2 : var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_13 = (min((max(var_0, (arr_4 [i_1 + 1] [i_2 - 3] [i_2 + 1]))), ((((arr_4 [i_1 - 1] [i_2 - 4] [i_2 - 4]) ? (arr_4 [i_1 - 1] [i_2 - 3] [i_2 - 2]) : (arr_4 [i_1 + 2] [i_2 - 3] [i_2 - 2]))))));
                        arr_10 [i_0] [i_1] [i_2 - 4] [i_2] [i_0] = (((((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_2]) : var_10))) ? (min(var_10, (arr_9 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_3] [i_3]))) : (((var_9 ? (arr_7 [i_0] [i_1] [i_1] [i_3]) : (arr_2 [i_3] [i_2] [i_0]))))))) ? (((-((min((arr_3 [i_1]), var_1)))))) : ((((((arr_5 [i_0]) ? var_2 : var_1))) ? ((-(arr_9 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]))) : (((max(var_5, var_1))))))));
                        arr_11 [i_2] = (((arr_7 [i_0] [i_0] [i_2 - 3] [i_3]) ? ((var_5 ? (arr_9 [i_0] [i_1 + 2] [i_2] [i_1 + 2] [i_1 + 2] [i_3]) : (arr_0 [i_1]))) : (arr_9 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0])));
                    }
                    var_14 = (((((~(arr_8 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])))) && (((var_10 / (arr_4 [i_1 + 2] [i_1] [i_1]))))));
                    arr_12 [i_2] = (max(((((var_3 & (arr_4 [i_0] [i_0] [i_0]))) & (max(8, -3677421947335814642)))), ((((((arr_3 [i_0]) ? var_0 : (arr_5 [i_2])))) ? ((max((arr_9 [i_2 - 2] [i_1 + 1] [i_2] [i_0] [i_1] [i_0]), (arr_3 [i_1])))) : (~-3677421947335814634)))));
                }
            }
        }
    }
    var_15 = (!var_7);
    #pragma endscop
}
