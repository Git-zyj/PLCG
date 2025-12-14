/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -19768;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((min((max(1, var_7)), 255)));
                    var_12 = (+-var_9);
                }
            }
        }
    }
    #pragma endscop
}
