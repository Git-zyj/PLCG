/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_6));
    var_20 = (((var_0 ? ((max(64923, 0))) : var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [13] [i_0] &= (min(var_5, var_4));
                    var_21 = (max(var_21, var_17));
                }
            }
        }
    }
    #pragma endscop
}
