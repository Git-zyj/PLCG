/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((33554431 ? 1 : 212)) + (2463475656 < var_7)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = var_10;
                var_14 = -32752;
            }
        }
    }
    var_15 = -var_7;
    var_16 = (max(var_1, (((((var_2 ? 18446744073709551615 : 27279))) ? var_10 : (max(-4392306967859777131, var_0))))));
    var_17 = (max(var_17, ((((var_4 <= (((-9223372036854775807 - 1) ? var_7 : var_7)))) ? var_0 : var_2))));
    #pragma endscop
}
