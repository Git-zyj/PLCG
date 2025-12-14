/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max((((var_3 + 9223372036854775807) << (var_7 - 1120873617476198926))), (min(9223372036854775797, var_3)))) >= ((max(((var_12 ? var_6 : var_14)), (var_8 >= var_1))))));

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_16 = (max(var_16, (((((((min(var_7, (arr_0 [6])))) ? ((min(0, var_11))) : (min(134217728, 8662397953625437769))))) ? ((9223372036854775783 ? ((-26072 ? 14336 : 3357277879)) : 3357277874)) : ((((max(-16, (arr_2 [i_0])))) ? ((937689407 + (arr_1 [i_0] [i_0]))) : (((arr_1 [i_0 - 4] [i_0]) / (arr_2 [i_0 - 4])))))))));
        arr_3 [i_0] = ((((((max(var_7, 9784346120084113847))) ? ((max(3357277879, var_6))) : (min((arr_0 [i_0 - 3]), var_7)))) / (((((arr_2 [i_0]) || 9784346120084113847)) ? (var_5 * 1) : (max((arr_1 [i_0] [i_0]), 8662397953625437769))))));
        var_17 = ((((((((16739017022599710857 ? 12288 : (arr_2 [i_0 + 3])))) ? (min(1, var_1)) : (max(var_12, var_7))))) ? (((((1232478763 ? 0 : 0))) ? 4294967279 : (min(3357277887, 1653398276667934453)))) : ((max((((4194300 ? (arr_2 [i_0]) : 4541))), (max(9223372036854775803, var_5)))))));
        arr_4 [i_0] = ((((((var_8 || 16793345797041617162) % (max(var_0, 498026653))))) != (((max(var_10, var_7)) + ((max(2806051974, (arr_2 [i_0]))))))));
    }
    #pragma endscop
}
