/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_3, var_1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (((min(37, var_10))));
                arr_5 [i_1] = var_6;
                arr_6 [i_1] [i_0 + 1] [i_1] = (min(var_3, -9223372036854775803));
            }
        }
    }
    var_14 = var_11;
    var_15 = var_1;
    var_16 += 1;
    #pragma endscop
}
