/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 += (((((+((((arr_3 [i_0]) != 5929)))))) ? 0 : ((((arr_6 [i_0] [i_0 + 2] [i_2]) > var_3)))));
                    var_19 = (max(var_19, 110));
                }
            }
        }
    }
    var_20 = var_13;
    var_21 = var_12;
    #pragma endscop
}
