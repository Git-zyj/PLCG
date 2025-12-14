/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] |= (((((arr_1 [i_0] [i_0]) ^ var_1))) == var_16);

        /* vectorizable */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_20 = (min(var_20, (((211 ? 217 : (arr_2 [i_0] [i_1 - 1]))))));
            var_21 = ((44 ? var_5 : (((arr_2 [3] [i_0]) ? var_5 : 46))));
        }
        arr_7 [0] = 209;
    }
    var_22 = var_3;
    var_23 = ((1 ? var_11 : (((((max(var_3, 16439))) ? var_14 : ((max(var_12, 1))))))));
    var_24 = ((var_14 ? ((((~50) | (var_1 % -1605004743)))) : var_11));
    #pragma endscop
}
