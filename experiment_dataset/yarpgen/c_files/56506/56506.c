/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -2620358548459371892;
    var_11 = (min(var_11, ((((((-2620358548459371892 ? 15910 : 2620358548459371902))) ? (12493161363712685180 || var_0) : ((var_2 & (max(1, 4278892591)))))))));
    var_12 = (min(var_1, (var_8 / 2620358548459371892)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (-5617976240967133271 + -16074713);
                var_14 -= var_6;
            }
        }
    }
    #pragma endscop
}
