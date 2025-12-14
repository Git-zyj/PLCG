/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((-2147483647 - 1) & -24312));
                var_16 = (min(((((arr_0 [i_1]) ^ -27572838))), (min(var_7, ((var_15 ? var_8 : var_14))))));
                arr_5 [i_0] = (((((!var_10) ? (arr_0 [i_0]) : ((var_4 / (arr_2 [i_1])))))) ? ((((~-12) != ((var_3 ? -1878876529 : var_5))))) : 24312);
            }
        }
    }
    var_17 = (var_3 != var_0);
    #pragma endscop
}
