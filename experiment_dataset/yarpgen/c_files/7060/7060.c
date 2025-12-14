/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((((max(3482437831, var_9)) & (1 >= 0)))), (min((22441 ^ 1), (min(var_3, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 |= (((max(((max(var_14, 156))), -1)) == ((max(171, 1)))));
                var_18 = -1;
            }
        }
    }
    #pragma endscop
}
