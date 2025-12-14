/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (((arr_0 [i_0]) ? -118 : 7));
                arr_6 [i_0] [i_0] = (max(114, (arr_0 [i_0])));
            }
        }
    }
    var_19 = (!var_13);
    #pragma endscop
}
