/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (var_12 && -12);
    var_16 ^= ((12779481456736753656 >= (-127 - 1)));
    var_17 = (max(var_17, ((min((min(var_6, (~var_0))), (520192 & 2))))));
    var_18 = -3971421985168721783;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 ^= (+-25763);
                var_20 ^= (--42);
                var_21 = (max(var_21, var_2));
            }
        }
    }
    #pragma endscop
}
