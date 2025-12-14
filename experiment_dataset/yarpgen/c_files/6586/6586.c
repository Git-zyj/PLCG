/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = (max((arr_0 [i_0]), ((max((((arr_2 [i_0]) <= (arr_2 [i_0]))), (arr_3 [11] [i_0 - 1]))))));
        var_14 = (~-93);
        var_15 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = ((((max(-54231942354112833, (54231942354112833 / -10)))) ? (max(322951706, 0)) : (((arr_1 [15]) ? ((max(0, -1))) : (7 / 10)))));
            var_17 = (322951706 >> (-1456318492069698014 + 1456318492069698027));
            var_18 -= (((8128 != 101) ? (((arr_1 [i_0 - 2]) >> (((arr_1 [i_0 + 2]) - 67)))) : (((max(2115376387, 10)) << (4258514481 - 49)))));
        }
        var_19 ^= (arr_3 [i_0 + 2] [i_0 + 2]);
    }
    #pragma endscop
}
