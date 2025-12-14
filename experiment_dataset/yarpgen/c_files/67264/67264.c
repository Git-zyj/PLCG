/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_4));
        arr_2 [i_0] = ((((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (((arr_0 [i_0 - 1] [i_0 - 2]) - 50265))))) ? 1 : (arr_1 [i_0])));
        var_18 += (((max(var_16, 9223372036854775807)) <= ((((arr_1 [i_0 - 2]) ? (arr_0 [i_0 + 1] [i_0]) : 34631)))));
        var_19 = (max(var_19, ((((((30905 + (arr_1 [i_0 - 2])))) ? ((((-114 >= 255) <= (max((arr_1 [i_0]), 4158155965428343616))))) : (var_2 < 1))))));
        var_20 = (max(var_20, (((((max(((4294967295 ? 1 : (arr_0 [i_0] [i_0]))), (arr_0 [i_0 - 1] [i_0 - 2])))) ? ((-281474976710655 ? 9223372036854775786 : ((max(var_15, var_8))))) : ((((((min(1, 1))) >= var_4)))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 += (arr_5 [i_1] [i_1]);
        var_22 += (var_4 / 9223372036854775807);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = (max(var_23, ((((-122 ^ 6545348659729778263) <= var_16)))));
        var_24 = (((((0 ? 40860 : (arr_4 [1])))) ? (((arr_8 [i_2]) ? (arr_9 [i_2] [i_2]) : 3)) : -1));
        var_25 += ((((var_3 + (arr_4 [i_2]))) & (((0 ? var_4 : var_14)))));
        var_26 += (arr_0 [i_2] [11]);
    }
    var_27 = (min(var_27, ((max(-var_0, (((-9223372036854775807 - 1) ? ((619163450 ? -21027 : 34631)) : -206)))))));
    #pragma endscop
}
