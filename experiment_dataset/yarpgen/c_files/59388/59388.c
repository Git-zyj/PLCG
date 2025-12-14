/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((max(((min(var_7, var_13))), (min(1, 2355960338))))) && (((-(~var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((min((2363516088 & var_12), (var_8 * 0))) << ((((~(arr_1 [i_0]))) - 39))));
                var_17 &= (min((min((min(7, -100)), var_15)), (arr_0 [8])));
            }
        }
    }
    #pragma endscop
}
