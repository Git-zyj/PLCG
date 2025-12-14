/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (((min(1, 2591237310))) ? (((-47 < (arr_0 [11])))) : ((((arr_2 [i_0 + 3]) == var_4))));
                arr_5 [i_0] = (min((36 - 1), (((((min((arr_4 [i_1] [i_0]), 1))) >= ((1 ? -62 : var_2)))))));
            }
        }
    }
    var_17 = (min(var_17, var_13));
    #pragma endscop
}
