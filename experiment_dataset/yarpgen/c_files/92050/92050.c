/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(min(-1, 1512))));
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = var_14;
                var_19 = -17803;
                arr_5 [i_1] [14] [i_0 + 1] = (arr_2 [i_0] [i_1] [i_0 + 2]);
            }
        }
    }
    #pragma endscop
}
