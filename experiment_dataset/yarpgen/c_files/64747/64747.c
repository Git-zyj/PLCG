/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [14] [i_1] [14] = 1896368401;
                var_21 *= ((-(max(((1 ? (arr_4 [i_0] [i_0]) : 1)), var_8))));
                arr_7 [1] = 1;
            }
        }
    }
    #pragma endscop
}
