/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((!((min(8999576363455076867, 127)))))), 0));
    var_21 = ((65531 ? (((8579 ? 754309385 : 0))) : var_17));
    var_22 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((min((arr_3 [i_0] [i_0] [i_1]), var_2)));
                var_23 ^= (((65535 ? (arr_0 [i_0]) : 184)));
            }
        }
    }
    #pragma endscop
}
