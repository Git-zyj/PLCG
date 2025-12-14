/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (min(32767, (((255 != ((var_1 ? var_6 : 26402)))))));
                var_12 = var_9;
            }
        }
    }
    var_13 = (min(((min((max(var_6, 109)), var_0))), 39214));
    #pragma endscop
}
