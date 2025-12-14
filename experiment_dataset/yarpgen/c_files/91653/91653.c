/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((1419959331 * var_16) & (((-(arr_0 [i_0] [i_0]))))));
        arr_3 [6] = (((arr_0 [i_0] [i_0]) >= (arr_1 [i_0] [i_0])));
        var_18 = (min(var_18, -var_11));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 = ((min(((218741938 << (-10721 + 10751))), (((var_13 ? var_7 : (arr_4 [i_1])))))));
        arr_7 [i_1] [i_1] = 3679;
        arr_8 [i_1] [9] &= var_15;
    }
    var_20 = (var_3 < ((-(-6878385607768648833 / 60290))));
    #pragma endscop
}
