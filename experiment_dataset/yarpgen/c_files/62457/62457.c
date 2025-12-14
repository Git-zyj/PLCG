/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (((max(56, 0))));
                var_19 = max(1887599967, 1887599967);
                arr_5 [1] = ((arr_1 [i_0] [i_1]) | (((var_6 >> (17876195109379591495 - 17876195109379591490)))));
            }
        }
    }
    var_20 += (((-var_12 % var_9) < (1887599967 && -57)));
    var_21 = ((var_8 * (!1976168302)));
    #pragma endscop
}
