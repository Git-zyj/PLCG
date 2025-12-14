/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0 - 1] [i_1] = (((min(2147483647, var_13)) - (((var_3 || ((((arr_0 [i_0] [i_1]) / var_4))))))));
                arr_8 [i_0] [i_0] [2] = ((~(1 % -2456320980)));
            }
        }
    }
    #pragma endscop
}
