/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 -= (arr_0 [i_0 - 2] [i_0 - 1]);
                var_13 ^= ((11714641811334029794 ? var_9 : (arr_4 [i_0] [i_1] [i_0])));
            }
        }
    }
    var_14 = (!var_3);
    #pragma endscop
}
