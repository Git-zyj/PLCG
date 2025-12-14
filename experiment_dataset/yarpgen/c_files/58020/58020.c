/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (-(var_0 << 4));
    var_19 -= var_6;
    var_20 = ((((((var_7 ? 244 : var_1)) ^ -4)) + var_6));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_21 -= ((!(18446744073709551591 + 18446744073709551591)));
        arr_3 [i_0] = (((arr_2 [i_0]) | (((arr_2 [i_0 - 2]) ? (arr_0 [i_0] [i_0]) : ((max(-102, 4)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 = (min((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_4 [i_1] [i_1]))), (((32 << (((arr_4 [i_1] [i_1]) - 5007017657154260698)))))));
        var_23 = (((arr_0 [i_1] [i_1]) ? (((max((arr_0 [i_1] [i_1]), (arr_2 [i_1]))))) : (min((((arr_4 [i_1] [i_1]) >> (var_6 + 286251224))), (arr_0 [i_1] [i_1])))));
    }
    #pragma endscop
}
