/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_3;
    var_16 = ((max((min(var_11, var_14), var_2))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((-((25 ? 3545744063569771572 : var_3))));
        arr_3 [i_0] [i_0] = 14901000010139780050;
        var_18 = (max(var_18, -var_8));
        var_19 = (max(var_19, (arr_1 [i_0])));
        arr_4 [18] |= ((212 ? var_7 : (arr_1 [i_0])));
    }
    var_20 = (max(var_20, var_1));
    #pragma endscop
}
