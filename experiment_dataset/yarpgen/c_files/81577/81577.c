/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_0 < -var_10) ? (51658 > -434928011) : ((((var_4 ? var_2 : var_9))))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((min(2198989701120, 248))));
        var_15 = ((((((arr_0 [i_0]) >> (var_6 - 1728007423)))) <= var_5));
        var_16 &= (((+((var_8 ? (arr_1 [i_0]) : var_4)))) * var_6);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_17 += (min((!0), 3564600223));
        var_18 += -185;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_19 = (min(var_19, (arr_6 [i_2] [i_2])));
        var_20 = (arr_0 [i_2]);
        var_21 = var_11;
    }
    #pragma endscop
}
