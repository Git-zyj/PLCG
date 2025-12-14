/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_2 ? (var_0 % 35866) : var_13)) % var_7));
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (((((max(0, 49780)))) | (max(var_13, (-7331459681240389119 + var_16)))));
                var_20 = (max((arr_5 [i_0] [i_0] [i_1]), (((max(18446744073709551615, -69)) >> ((((0 ? 1747534568 : 1740663958)) - 1740663933))))));
            }
        }
    }
    #pragma endscop
}
