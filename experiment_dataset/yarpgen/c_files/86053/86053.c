/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (var_0 == -8521);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 += (arr_3 [i_0] [i_0]);
        arr_4 [i_0] |= ((29 >> (-121 <= var_2)));
        var_14 = ((((((arr_2 [i_0]) >= (arr_1 [i_0] [i_0])))) == (arr_1 [i_0] [i_0])));
        var_15 = (min(var_15, ((((1 ? var_5 : 1))))));
        arr_5 [i_0] [i_0] = ((((-7862 ? var_1 : (arr_1 [i_0] [i_0]))) == (arr_3 [i_0] [i_0])));
    }
    var_16 = ((!(((var_0 ? (var_0 > 14) : (min(-37, var_1)))))));
    var_17 = 37;
    var_18 &= (min(0, (var_1 || var_6)));
    #pragma endscop
}
