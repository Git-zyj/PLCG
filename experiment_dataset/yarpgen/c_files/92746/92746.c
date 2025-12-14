/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [10] [i_0] = (max((arr_2 [i_1] [i_0]), (max((arr_2 [i_0] [i_0]), (arr_2 [i_1] [i_0])))));
                var_18 += (max(30529, 246));
                arr_6 [8] [8] = (arr_2 [i_0] [0]);
            }
        }
    }
    var_19 = ((((var_7 * (var_0 % var_6))) > var_4));
    #pragma endscop
}
