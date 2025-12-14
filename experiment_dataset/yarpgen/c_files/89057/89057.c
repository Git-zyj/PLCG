/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_5;
                arr_6 [i_1] [i_0 - 1] = 1915792833;
            }
        }
    }
    var_13 = var_2;
    #pragma endscop
}
