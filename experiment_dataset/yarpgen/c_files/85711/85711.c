/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [4] = ((~(arr_0 [i_0])));
        arr_4 [i_0] = (arr_2 [i_0] [7]);
        var_15 = ((((-(!var_1))) >= (((((~(arr_0 [i_0])))) ? ((((arr_1 [i_0] [i_0]) || 5750324649590373015))) : (arr_1 [i_0] [i_0])))));
    }
    var_16 = ((127 ? 3033095801 : 117));
    var_17 &= (max((var_7 > var_8), (max((!155), 5475474960857007872))));
    #pragma endscop
}
