/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = ((max((var_1 % var_3), var_8)));
                var_11 -= (var_8 ? (((arr_3 [i_1 - 3] [i_1 - 3]) + (arr_3 [i_1 - 2] [i_1 + 1]))) : (((arr_3 [i_1 - 2] [i_1 - 2]) ? (arr_3 [i_1 + 1] [i_1 - 1]) : (arr_3 [i_1 + 1] [i_1 - 2]))));
            }
        }
    }
    var_12 = (max(var_12, ((((((((max(11119418295003870191, var_8))) ? var_0 : var_9))) ? var_0 : (min(var_8, (max(7327325778705681425, var_5)))))))));
    #pragma endscop
}
