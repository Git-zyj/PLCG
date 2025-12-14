/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((((72 - ((199 << (var_9 - 186))))) | 241));
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (((((+-134) + 2147483647)) << (((arr_1 [i_0] [i_0]) - 26))));
        var_18 *= ((~((-(((arr_1 [i_0] [12]) - 128))))));
    }
    var_19 = ((7 % ((251 | (var_2 | var_11)))));
    #pragma endscop
}
