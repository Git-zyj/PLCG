/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_15;
        var_21 = (arr_2 [i_0]);
        var_22 = (max(var_22, (((((((max((arr_1 [i_0]), 18711))) & (((arr_1 [i_0]) ? (arr_2 [6]) : -2)))) ^ (min(((-18717 ^ (arr_2 [6]))), (arr_1 [6]))))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] = ((((min((((-73 ? var_15 : 3214459207))), ((var_9 ? (arr_0 [14]) : var_12))))) ? (((1 * 18711) ? 18711 : ((4294967295 ? var_15 : (arr_1 [i_1]))))) : 18711));
        arr_7 [i_1] = ((!((!(((-(arr_0 [8]))))))));
    }
    var_23 = var_8;
    var_24 = (min(((~(var_7 ^ var_3))), var_15));
    #pragma endscop
}
