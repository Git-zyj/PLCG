/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((((((arr_3 [i_0 + 1]) != (arr_6 [i_1 - 1] [i_1 + 1] [i_0 + 1])))) / var_2));
                arr_7 [i_1] [i_0] [i_1] = ((((((~0) + 2147483647)) << (((arr_3 [i_0]) - 111)))));
                var_16 += (~var_7);
            }
        }
    }
    var_17 = var_13;
    #pragma endscop
}
