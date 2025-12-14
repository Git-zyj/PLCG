/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? 49902 : (((arr_2 [i_0]) * (arr_2 [i_0])))));
        var_11 *= (((((1 ? (arr_1 [2]) : 1)) * (max(127, 409335325)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = (min(var_12, (arr_5 [i_1])));
        arr_7 [i_1] = (((((409335325 - (max(-2147483641, 0))))) || (arr_4 [i_1])));
    }
    var_13 = var_8;
    var_14 = -9223372036854775788;
    var_15 |= 1;
    #pragma endscop
}
