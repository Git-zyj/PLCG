/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 6737778144352705994;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 ^= (arr_0 [i_0] [i_0]);
        var_19 = min(35115652612096, 255);
        arr_2 [i_0] = (max((((-35115652612097 && (((179 ? -5693622296287356783 : 437368082272411360)))))), 14741));
    }
    var_20 = (max(var_6, (((var_1 ? var_9 : var_13)))));
    var_21 += (var_1 || var_7);
    #pragma endscop
}
