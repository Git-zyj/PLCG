/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = (((((var_19 ? var_0 : (!var_7)))) || (var_5 == -72)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 2] = ((((max((((arr_2 [i_0] [i_0]) ? 63 : var_19)), ((-(arr_4 [i_0] [5] [i_0])))))) ? ((max((arr_4 [i_1 - 2] [i_0] [i_1]), (arr_4 [i_1 - 2] [i_1] [i_1 - 2])))) : ((max(0, 5)))));
                var_22 = (((((arr_1 [i_1 + 3]) << (var_0 - 4679589032638533400)))) ? (((((~(arr_1 [i_1 + 2])))) ? (((arr_4 [i_1] [i_1] [14]) + (arr_3 [i_1] [9]))) : (((~(arr_4 [i_0] [i_0] [i_0])))))) : (((((max(190, var_17))) - ((-(arr_2 [i_0] [i_1])))))));
                arr_6 [i_0] [i_1] = -1;
            }
        }
    }
    #pragma endscop
}
