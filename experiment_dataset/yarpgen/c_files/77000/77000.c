/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = 12291;
        arr_2 [i_0] |= (((arr_1 [8]) ? (((arr_1 [i_0]) ? -6856395106368201443 : 12291)) : (3844691787 ^ 0)));
        var_15 = -12268;
        var_16 *= (max(((((min(-1, 450275511))) ? 12276 : (((arr_1 [i_0]) / -1507374499)))), (!var_0)));
        var_17 = ((-(max((arr_1 [i_0]), 9555))));
    }
    var_18 = (max(var_2, 1));
    #pragma endscop
}
