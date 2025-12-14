/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((max(var_6, 3896128076)));
    var_17 = (min((max((max(var_13, 1207434587140107057)), var_4)), (min((min(9052021355876934969, var_9)), var_3))));
    var_18 = ((-((max((!var_5), var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0 + 1] = ((-((var_3 ? var_1 : -9177584253679589036))));
                var_19 ^= (~var_9);
            }
        }
    }
    #pragma endscop
}
