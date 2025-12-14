/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 |= (max(var_4, var_3));
                    var_14 = (max(var_7, 68));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = -var_1;
                }
            }
        }
    }
    #pragma endscop
}
