/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min((~var_9), (max(32744, ((-72057594037927936 ? (arr_1 [i_0]) : 21972))))));
                arr_4 [i_0] = (((((0 ? -1629802932371629811 : (-5385 > 652871411)))) ? 0 : ((1 ? -1 : -78138401))));
            }
        }
    }
    var_15 = (min((min(1044480, var_8)), (((!(((var_5 ? 1 : 2647309996403239707))))))));
    var_16 |= ((var_3 ? 58633488 : var_5));
    #pragma endscop
}
