/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_14 = var_4;
        arr_2 [i_0] = (!var_9);
        var_15 = (min(var_15, -var_12));
        var_16 -= ((((((arr_0 [2]) ? var_8 : var_2))) ? (((arr_0 [4]) ^ var_8)) : ((((arr_0 [0]) == (arr_0 [8]))))));
        var_17 = (min(var_17, ((((((max(var_1, 8672685190772928876)))) && var_9)))));
    }
    var_18 = (max(-44, (!-4277)));
    #pragma endscop
}
