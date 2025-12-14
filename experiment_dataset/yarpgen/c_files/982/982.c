/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_7;
    var_13 = var_1;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_14 = ((~((2147483634 ? (arr_1 [i_0 + 2]) : (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [6])))))));
        var_15 = ((((((arr_0 [i_0 + 3]) ? (arr_0 [i_0]) : (arr_0 [i_0 - 2])))) ? (arr_1 [i_0 - 2]) : ((0 ? -852632025 : 3050827890))));
        var_16 = ((~(-9223372036854775807 - 1)));
        var_17 = (((((9223372036854775807 | (((arr_1 [i_0 - 3]) ? (arr_1 [16]) : var_4))))) ? (((3096770266 ^ -17) ? (((2751252681459453543 ? (arr_0 [i_0 + 2]) : 2976410584))) : (((arr_0 [i_0]) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0]))))) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (min(9758, -2751252681459453538));
        var_19 -= (!(arr_3 [6] [i_1]));
    }
    #pragma endscop
}
