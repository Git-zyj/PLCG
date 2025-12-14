/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, 3372858095));
        var_13 = 0;
        var_14 = (min((max(-1, ((var_6 ? (arr_1 [i_0] [i_0]) : 1)))), (max(((((arr_0 [i_0]) ? var_1 : -1))), ((var_4 % (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = 4159271161;
    }
    var_15 = ((~((var_9 * (!830318143)))));
    var_16 = (((((-102 ? 63364 : var_11)))) ? 3464649160 : 1);
    var_17 = (min((max(((max(0, 1590196560))), -2229091215874000934)), (((max(43146, 0))))));
    #pragma endscop
}
