/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (min((-9223372036854775807 - 1), (-9223372036854775807 - 1)));
                var_17 = var_6;
                var_18 = (max(var_18, ((max((-9223372036854775807 - 1), ((-(arr_6 [i_0] [i_0 + 3] [i_1 + 1]))))))));
                arr_8 [i_0 + 1] = (!-9223372036854775799);
                arr_9 [i_1] [i_0] [i_0] = (((~(min((arr_0 [i_0 + 2]), var_7)))));
            }
        }
    }
    var_19 -= (!1);
    #pragma endscop
}
