/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [7] [i_1] [i_1] = 1;
                var_12 = ((-(min(894754463, 894754478))));
                arr_6 [i_0] [i_0] [i_0] = (arr_0 [i_0] [i_0]);
            }
        }
    }
    var_13 = (max(var_13, ((((-9223372036854775807 - 1) > (max((((-9223372036854775807 - 1) ? var_5 : var_6)), (~var_4))))))));
    #pragma endscop
}
