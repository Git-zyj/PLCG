/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 += -7113557814751268826;
        arr_2 [i_0] [i_0] = ((((((-4830798688769468466 + 9223372036854775807) << (4286578688 - 4286578688)))) ? ((252 ? -4317510091413727028 : (arr_1 [i_0 + 4]))) : (((!190) ? 1 : 6702637971072996961))));
        var_21 = (2137388979270462830 ? (min(((127 ? 733639178589754557 : 107)), 0)) : -4331197563274949967);
        arr_3 [i_0] [i_0] = (arr_1 [i_0 + 2]);
    }
    var_22 = var_5;
    #pragma endscop
}
