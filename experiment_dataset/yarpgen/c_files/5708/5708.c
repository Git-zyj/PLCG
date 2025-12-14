/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = ((-69 ? (arr_0 [i_2] [i_1]) : 95));
                    var_12 *= (arr_2 [i_0]);
                }
            }
        }
    }
    var_13 = var_2;
    var_14 = var_7;
    var_15 = var_7;
    #pragma endscop
}
