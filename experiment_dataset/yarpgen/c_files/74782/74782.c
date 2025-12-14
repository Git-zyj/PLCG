/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (arr_0 [1]);
                arr_4 [i_1] [i_1] [i_0] = var_1;
                var_22 = max(0, 9223372036854775807);
            }
        }
    }
    #pragma endscop
}
