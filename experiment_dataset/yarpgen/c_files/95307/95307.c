/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = ((((var_12 >= (~var_15))) ? (((var_14 || ((min(var_11, var_5)))))) : (((var_2 >= ((max(var_16, 32755))))))));
    var_20 = (((((((var_3 >> (var_3 - 30935))) / (~var_10)))) ? (((~((max(var_4, var_0)))))) : var_15));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 &= (arr_1 [i_0]);
        var_22 += var_12;
        var_23 = (min((max((arr_0 [i_0]), (min(var_7, (arr_0 [i_0]))))), var_7));
    }
    #pragma endscop
}
