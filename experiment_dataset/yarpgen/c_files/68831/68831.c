/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3193889980427931882;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((((((var_5 < (!-233521550))))) == (max(var_8, ((min(var_3, 102))))))))));
                    var_12 = ((!(((var_5 ? (max(var_9, 2616769900)) : 123)))));
                }
            }
        }
    }
    #pragma endscop
}
