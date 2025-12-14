/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_5 ? var_4 : 2111062325329920))) ? ((var_4 ? var_8 : 1)) : (arr_0 [i_0 + 1] [i_0])));
        var_11 = (((4546479197843183131 | 0) | (4546479197843183160 | 13776634115378460036)));
    }
    var_12 = (((((var_0 | ((5976508448828956997 ? var_5 : var_5))))) ? (max(var_9, (-4523 | -3447777372478098955))) : var_2));
    var_13 = var_8;
    var_14 = ((((((((var_6 ? 0 : 0))) | 4294967295))) | (((-916072832 | 1) | 1263042244022519850))));
    #pragma endscop
}
