/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_16 & 127) ? 151 : 224))) == var_16));
    var_21 = (max(var_21, -26892));
    var_22 = 87;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_23 += -5832;
                var_24 = ((142 ? (~0) : 225));
            }
        }
    }
    var_25 |= (((((var_8 == (6991657905833964221 % -107)))) >= ((var_0 ? ((3212878877553713836 ? -25 : var_5)) : var_14))));
    #pragma endscop
}
