/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_15));
    var_21 ^= (((var_4 ^ var_2) | ((((58622 / var_12) ? 1 : (var_16 || var_5))))));
    var_22 = ((+(((!1) * (!1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_23 ^= 53295;
                var_24 = ((~(var_2 % var_19)));
                var_25 = (max(((max(682, 255))), -96));
                arr_4 [i_0] [i_0] = ((((32768 ? ((var_15 ? var_7 : var_6)) : (var_5 > 1))) << ((((~(var_9 / var_15))) + 42))));
            }
        }
    }
    var_26 -= var_13;
    #pragma endscop
}
