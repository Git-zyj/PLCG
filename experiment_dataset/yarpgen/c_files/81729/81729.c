/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (min(((~((11764 ? 26 : -1)))), var_5));
    var_14 = (((((max(281474976710655, var_0)))) ? ((-(-11765 || -18128))) : (((!(var_7 && -283628793743785915))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((-24045 ? (((arr_2 [i_0]) * (arr_0 [i_0]))) : (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])))));
        var_15 = (max(6, -7495015351948053455));
        arr_5 [i_0] [i_0] = (((arr_3 [i_0] [i_0]) ^ (((arr_0 [i_0]) % 5))));
    }
    #pragma endscop
}
