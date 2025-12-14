/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_10 = (max(var_10, (arr_1 [i_0])));
        var_11 = (~36028797016866816);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = ((((((arr_2 [6] [i_1]) ? 255 : (arr_2 [i_1] [i_1])))) ? (var_7 - 33) : var_5));
        var_12 = 53958;
    }
    var_13 -= (max(((-((max(7, 125))))), var_7));
    #pragma endscop
}
