/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((max(((0 < (arr_4 [i_0 - 1] [i_0]))), (((arr_0 [i_0]) == 202)))) ? ((var_14 ? ((var_7 / (arr_3 [i_0] [i_1] [i_1]))) : -76381087)) : ((min((arr_2 [i_0]), (arr_2 [i_0]))))));
                var_20 -= ((-(max((arr_1 [i_0 - 1] [i_0 - 1]), 15275))));
            }
        }
    }
    var_21 = 31;
    var_22 = (max(var_22, (((7208715088669326618 >> (var_1 + 730576914))))));
    #pragma endscop
}
