/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_2] [9] = (((!8412787716886436461) ? var_15 : (min((~2606714994), var_7))));
                    arr_9 [i_0] = ((-var_1 <= (((min(25649, 0)) * 35))));
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
