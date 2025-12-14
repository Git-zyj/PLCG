/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_7;
    var_15 = (var_4 || var_5);
    var_16 = ((((max(20, var_11))) == var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (min(var_17, (((1 ? 49 : (arr_1 [i_0]))))));
        var_18 -= (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = var_13;
    }
    var_19 = (((13981 / 20) ? var_2 : (max(8616330458085139410, (((var_7 ? 181 : var_4)))))));
    #pragma endscop
}
