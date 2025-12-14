/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = var_1;
    var_22 *= 65534;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_23 *= 255;
                var_24 = (((arr_4 [i_0]) ? ((min(var_12, 1))) : (max(((((arr_2 [i_0]) * 7))), (max(var_2, (arr_1 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
