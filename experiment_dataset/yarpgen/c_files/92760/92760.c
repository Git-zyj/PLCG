/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (max((1474 < 38183), (((((arr_6 [i_0] [3]) >= var_3)) || ((min(var_9, (arr_0 [i_0]))))))));
                arr_8 [i_0] [i_1] = (arr_3 [i_0]);
                arr_9 [10] [i_0] [0] = (((arr_2 [i_0] [9]) || var_7));
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
