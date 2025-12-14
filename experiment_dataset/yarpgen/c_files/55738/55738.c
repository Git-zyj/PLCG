/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((~251660473) | (4281184915197090783 | var_1))), -37));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = var_11;
                var_13 *= arr_2 [i_1];
                arr_6 [i_0] = ((((((min(var_9, (arr_0 [i_0] [i_1])))))) <= (min((arr_2 [i_0]), (arr_4 [i_0 - 1] [i_1] [3])))));
            }
        }
    }
    #pragma endscop
}
