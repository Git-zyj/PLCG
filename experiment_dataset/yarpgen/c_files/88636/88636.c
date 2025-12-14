/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [15] [i_0] = -32447;
        arr_3 [i_0] [i_0] &= (((arr_1 [21]) - (max(((max((arr_1 [1]), (arr_1 [i_0])))), (max(var_13, (arr_0 [i_0])))))));
        arr_4 [i_0] [i_0] &= ((var_12 ? var_4 : (((((var_0 ? var_8 : 0)))))));
        arr_5 [i_0] [12] = min(((~(var_5 | var_11))), (var_3 & var_11));
        arr_6 [i_0] = ((-96 ? (((((arr_0 [i_0]) || (arr_0 [i_0]))))) : (max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_14 = (!var_7);
    var_15 = var_13;
    #pragma endscop
}
