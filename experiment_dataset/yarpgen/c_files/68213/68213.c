/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((-1 ? (((var_0 ? var_12 : var_15))) : var_11));
    var_20 *= (max(var_15, 32752));
    var_21 ^= (min((min(var_15, var_10)), (min(((max(32752, -126))), (min(-1108140005, 15657))))));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = -69;
        arr_4 [i_0] = ((((((((var_9 ? 11115845995242626036 : var_7))) ? (32764 ^ var_15) : -0))) > (((arr_1 [i_0]) ? (arr_0 [i_0 - 3] [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((-17824022838166935667 ? ((286658044 ? 7546 : 622721235542615972)) : ((((arr_5 [i_1]) ? -69 : ((4008309251 ? 4294967291 : 249)))))));
        var_22 = (min(var_22, (((((max((arr_7 [7]), (15 ^ 0)))) ? (max(-5077, 910182238506582187)) : (arr_6 [i_1]))))));
        var_23 = (((((min(var_13, (arr_5 [i_1]))))) && (((var_8 ? ((((arr_7 [i_1]) >> (var_0 + 47)))) : (((arr_5 [i_1]) | (arr_7 [i_1]))))))));
        var_24 = (arr_6 [i_1]);
    }
    #pragma endscop
}
