/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 += ((~(!3579793038)));
        arr_3 [11] |= -16;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (min(var_9, -var_11));
        var_15 = (((var_11 ? -121 : 12)));
    }
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_16 += ((!(((var_2 ? 38332 : var_7)))));
        var_17 += (((((11 ? 2061206767 : 139))) ? ((min(var_9, var_1))) : -32));
    }
    var_18 ^= ((~(255 * 0)));
    var_19 = max(3487226273511789435, -18587);
    #pragma endscop
}
