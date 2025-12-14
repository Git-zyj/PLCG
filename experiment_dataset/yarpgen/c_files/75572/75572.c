/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(44, var_13));
    var_20 = ((((min((min(9223372036854775807, var_14)), var_13))) ? (var_6 || 1) : ((((var_5 == var_3) ? var_13 : (32762 ^ 1))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_21 &= (2656733898 || -4865693472729665837);
            var_22 = ((183 & (-127 - 1)));
        }
        arr_8 [i_0] = -720128837102662003;
        var_23 ^= (-2659538604358719178 >= 0);
    }
    var_24 = var_5;
    #pragma endscop
}
