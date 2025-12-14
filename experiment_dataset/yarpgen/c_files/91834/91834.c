/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((((4248 ? var_16 : var_11))) ? (min(var_8, 4194303)) : 1848447680)) >= var_15));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0 - 2]) > (min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 2])))));
        arr_3 [i_0] [i_0] = ((117 ? -4249 : 3256290676));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = (min((((22431 >> (((arr_0 [i_1]) - 38069))))), 7416527240843205467));
        var_20 &= ((3556532460405335657 ? 15075 : (min(((var_15 ? -1 : -117)), 960))));
    }
    var_21 = (((((var_3 ? (var_3 && -98677717735036603) : var_17))) ? (((var_3 + 2452122080) ? (1848447680 + 33285996544) : var_8)) : ((min((4248 + 127), var_6)))));
    #pragma endscop
}
