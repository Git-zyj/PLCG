/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((max(276603385, var_9)) / 409832879)), 3863));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 |= (max(8931839778748030533, 462859505509670154));
                var_14 = ((min((max(-30731, 8931839778748030533)), (max(16449333162528525609, var_1)))));
                var_15 += max(((var_7 ? 462859505509670132 : var_7)), var_7);
            }
        }
    }
    #pragma endscop
}
