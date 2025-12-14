/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (-1132815418 - 6);
    var_18 |= (78 / 271770233);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((~(arr_2 [i_0])));
                    var_20 = 653574827;
                }
            }
        }
    }
    #pragma endscop
}
