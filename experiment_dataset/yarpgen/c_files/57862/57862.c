/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = -676612348;
                    var_20 = 168;
                    var_21 += (max((max(-65535, 676612345)), (((max(0, 2995419753563706766))))));
                }
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
