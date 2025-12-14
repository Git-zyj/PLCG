/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(-var_8, ((233 ? var_1 : 23))))) ? ((((min(var_6, 28))) ? var_11 : (var_15 ^ 1073621598))) : (((max(8, (-2147483647 - 1)))))));
    var_21 = ((max(2147483647, var_7)) & var_8);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((~((min((arr_0 [i_0]), var_19)))));
        var_22 = ((((((max(var_9, (arr_0 [i_0]))) & 8))) ? (max(((max((arr_1 [i_0]), (arr_0 [i_0])))), (((arr_1 [i_0]) ? (-2147483647 - 1) : (arr_1 [i_0]))))) : ((~(arr_1 [i_0])))));
    }
    var_23 ^= (max(((((((var_9 ? var_15 : 4867467087939909387)) + 9223372036854775807)) << (var_19 - 14520))), ((((var_0 ? 4867467087939909408 : 36)) / var_2))));
    #pragma endscop
}
