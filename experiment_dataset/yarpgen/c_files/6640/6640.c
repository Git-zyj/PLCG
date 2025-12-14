/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(((((max(-23, var_13))) ? 6406668621286561063 : (max(3781920838005236835, 2495440359)))), 103)))));
    var_16 = 1749980694;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_17 -= (((-127 - 1) * 1896833687));
                var_18 -= 92;
            }
        }
    }
    var_19 &= ((~(var_8 != var_2)));
    var_20 = var_8;
    #pragma endscop
}
