/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 1;
    var_17 ^= (max((((var_2 + -31137) ? var_5 : (((var_3 ? -52 : -1215429392))))), 536866816));
    var_18 = ((-(min(((var_3 ? var_13 : var_10)), var_8))));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_1 [i_0 + 2] [i_0 - 4])));
        var_20 = (min((arr_1 [i_0] [i_0 - 2]), (((arr_1 [i_0 + 2] [i_0 - 3]) & (arr_1 [i_0 + 2] [i_0 + 3])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 ^= (((((~(arr_3 [i_1] [i_1])))) && ((min(var_4, (min(39, 0)))))));
        arr_5 [12] [12] = 1;
        var_22 = (var_15 && 4830713298571747059);
    }
    #pragma endscop
}
