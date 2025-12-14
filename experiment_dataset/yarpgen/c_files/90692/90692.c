/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(!var_4)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) < ((var_5 ? var_1 : var_6))));
        arr_3 [i_0] [i_0] = (~104);
        arr_4 [i_0] = ((-((var_8 ? var_0 : var_1))));
    }
    var_11 = var_9;
    var_12 = (((0 / 174489880) ? var_3 : (!var_0)));
    #pragma endscop
}
