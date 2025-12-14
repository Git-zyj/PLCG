/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 19764;
    var_17 = 9183;
    var_18 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 += 19;
                    var_20 = 80;
                }
            }
        }
    }
    var_21 += 46682;
    #pragma endscop
}
