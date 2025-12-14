/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((((var_9 && var_14) || (((-87 ? var_3 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = var_8;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_2] = ((min(-7540931640475620421, -7540931640475620421)));
                    var_16 = ((7540931640475620441 ? 7540931640475620411 : 2277806472));
                }
                arr_12 [i_1] = (((((((1 ? 52 : 1))) == (min(var_3, 9223372036854775807))))) >= (max(((35644 ? 1 : var_13)), (var_11 & -126))));
                var_17 = ((4294966272 ? 2017160823 : var_12));
            }
        }
    }
    var_18 = ((((1 >> (-4294966266 + 4294966297)))) >= ((min(1, var_1))));
    #pragma endscop
}
