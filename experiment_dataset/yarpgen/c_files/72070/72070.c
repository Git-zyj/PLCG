/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(5641193577540849579 * 1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (((min(1, 4142080692)) + (((var_9 ? (arr_3 [i_1 - 1] [i_1 - 1]) : (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    var_18 = (min(var_18, 35096));
                }
            }
        }
    }
    #pragma endscop
}
