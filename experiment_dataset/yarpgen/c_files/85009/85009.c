/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 += var_8;
        arr_2 [i_0] = (((arr_1 [i_0]) ? 7355829055201896268 : (!65)));
        var_19 = (min(var_19, ((((arr_0 [i_0]) && (arr_0 [i_0]))))));
    }
    var_20 *= ((-(var_16 / 158)));
    var_21 = ((((var_4 || (-373685658 && var_3))) ? ((((!174) ? (196 || -11) : 38))) : var_1));
    #pragma endscop
}
