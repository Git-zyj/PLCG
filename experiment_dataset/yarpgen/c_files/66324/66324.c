/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((var_13 * (29 >= 41491))));
        var_17 = ((((((~21) ? ((var_10 ? 41489 : 8285)) : -27140))) ? ((~(((-40 + 2147483647) << (var_6 - 9))))) : (((arr_1 [i_0 - 1]) & var_12))));
        var_18 ^= ((+(((((arr_0 [4]) ? var_10 : var_8)) * -1173))));
        var_19 = var_7;
        arr_3 [i_0] = (-27140 && -1);
    }
    #pragma endscop
}
