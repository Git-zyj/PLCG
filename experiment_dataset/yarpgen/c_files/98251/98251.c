/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        var_19 = (((((-(((arr_0 [i_0]) & var_11))))) <= (min(18159199581867939519, (~var_0)))));
        var_20 = ((((arr_0 [i_0]) ? var_1 : (((var_8 ? var_15 : 833496680))))) * (max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_21 = (((min(833496680, 833496680)) & 95));
        arr_2 [i_0] [i_0] = ((~((~(arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_22 = ((max(13, (var_11 | var_15))));
        arr_7 [i_1] = (((var_1 | ((max(833496686, var_9))))));
    }
    #pragma endscop
}
