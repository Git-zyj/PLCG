/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((((max(-17373, 22))))) + (max(((min(-14530, 1))), 10122241343602523677))));
    var_11 = ((((!((max(var_7, 1))))) ? (!var_1) : -701599347));
    var_12 = ((var_4 >> (var_2 + 13115)));
    var_13 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (!8324502730107027934);
        var_14 = ((10565 || (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
