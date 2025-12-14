/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] = ((~(((arr_3 [i_0 - 4] [i_0 - 3]) ? (arr_3 [i_0 - 1] [i_0 - 4]) : (arr_3 [i_0 - 4] [i_0 + 1])))));
                arr_5 [i_1 + 2] [i_1 + 2] = (min(((min(var_1, var_14))), (max(var_8, (arr_2 [i_1] [i_1 + 1])))));
                var_20 = var_5;
            }
        }
    }
    #pragma endscop
}
