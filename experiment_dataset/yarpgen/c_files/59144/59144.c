/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (min((((((max((arr_1 [i_0] [i_0]), (arr_4 [20] [20] [i_1 - 1]))))) < (arr_2 [1]))), (arr_4 [i_0 + 2] [1] [i_1])))));
                var_13 = (arr_0 [i_0] [i_0]);
                var_14 = (max(((~(arr_4 [i_0 + 1] [i_1 - 1] [i_0]))), (((!(arr_2 [i_1 - 1]))))));
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}
