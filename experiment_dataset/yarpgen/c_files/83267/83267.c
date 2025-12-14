/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((max(0, (arr_1 [8]))) % var_6));
        arr_3 [i_0] = (-127 - 1);
        var_19 = ((!(((-(min(0, (arr_1 [i_0]))))))));
        var_20 += (max((arr_1 [i_0]), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (max(4, -2928605027347780551))))));
    }
    var_21 = (max(var_21, (!var_14)));
    var_22 = 0;
    var_23 = var_10;
    #pragma endscop
}
