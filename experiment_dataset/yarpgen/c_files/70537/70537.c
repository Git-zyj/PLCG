/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((((((((arr_2 [15]) || (arr_2 [i_0]))) ? (max(251658240, -16809)) : 18014398509480960))) ? ((min((min((arr_0 [i_0]), 1)), 1))) : 1));
        var_20 ^= (max(1440785136, (((arr_2 [i_0]) ? (1 >= 1440785116) : 20439))));
        var_21 = (min(var_21, (((((max((((arr_2 [1]) * (arr_0 [i_0]))), (arr_0 [i_0])))) == (((arr_0 [i_0]) % 9223372036854775807)))))));
    }
    var_22 = (max(var_22, var_8));
    #pragma endscop
}
