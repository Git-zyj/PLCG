/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((((-var_6 + 9223372036854775807) << (var_15 - 123))) >= (((var_5 ^ (~var_17))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((((var_16 ? var_12 : 4611685949707911168)) ^ -109)), ((((((var_12 ? (arr_0 [i_0]) : (arr_0 [i_0])))) * ((var_14 % (arr_0 [i_0]))))))));
        arr_3 [i_0] = ((59026 ? (var_3 == var_10) : (((var_19 * var_1) * -var_9))));
    }
    var_21 = (((((~var_8) + 2147483647)) << (((var_1 + 109) - 5))));
    #pragma endscop
}
