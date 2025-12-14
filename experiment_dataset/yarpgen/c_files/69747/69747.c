/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((~(~var_11))) << (((((max(var_6, var_4)) ^ (~237))) + 151))));
    var_13 = ((!((max(1, var_10)))));
    var_14 &= (((~((min(var_3, var_7))))));
    var_15 ^= (((-((var_1 ? -743142472 : 16651145858187040113)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = ((((~(9 | 104)))) ? (((((21237 & 104) < 9223372036854775807)))) : (((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0]))) / ((min((arr_3 [i_0]), 246))))));
        var_17 = (max((((var_2 ? -3323 : var_6))), (((var_1 >= 1) ? (((arr_0 [i_0] [i_0]) ? -34 : (arr_0 [i_0] [i_0]))) : (((max(-3, (arr_1 [i_0] [i_0])))))))));
        var_18 *= max((((((min(-1, -42)))) | (min(-1, (arr_0 [i_0] [i_0]))))), (((~-2125321866) ? (arr_0 [i_0] [i_0]) : (((27142 >> (((arr_3 [i_0]) + 4987766272546825481))))))));
    }
    #pragma endscop
}
