/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((~1), (((((5411814130165575832 << (40 - 40)))) ? (!var_6) : (var_0 / var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = ((17870523911912748907 >> (-114 + 126)));
                arr_5 [i_1] [i_1 - 1] [i_1] = 5411814130165575832;
            }
        }
    }
    #pragma endscop
}
