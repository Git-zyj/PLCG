/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, (((((((var_11 ? (arr_0 [16] [16]) : var_3)) <= ((4095 ? var_0 : 12)))) ? (((!57562) ? 8834367567883491240 : ((((!(arr_1 [i_0]))))))) : (((~(239 | 114)))))))));
        var_19 = ((((max(2266822475, 14950693345201232855))) ? (max(12, (arr_0 [i_0] [i_0]))) : 5));
    }
    var_20 = (((var_10 ^ (min(var_13, var_3)))));
    var_21 = (8 ^ -1285564388);
    #pragma endscop
}
