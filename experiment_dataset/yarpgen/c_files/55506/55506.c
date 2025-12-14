/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((max(var_13, var_4))) && (((((min(3438320382, 32762))) - (max(var_8, var_4))))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 ^= (max((max((max(var_3, var_15)), (max(var_14, var_9)))), ((min(32762, 26)))));
                    var_18 = (min(var_18, ((max((((var_12 & 0) * 0)), ((min(-8, 7182224))))))));
                }
            }
        }
    }
    var_19 = (max((min((min(var_15, var_10)), (max(var_13, var_15)))), (min(48348, 5434749368386896911))));
    var_20 = (max(var_20, -var_14));
    #pragma endscop
}
