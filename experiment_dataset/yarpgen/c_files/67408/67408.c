/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((((((max(var_4, (arr_1 [i_0 - 1] [i_0 - 3])))) ? var_9 : (var_8 & var_7)))) ? 0 : ((~(((arr_0 [i_0 - 1] [i_0 + 1]) | -14))))));
        arr_3 [i_0] = 1;
        arr_4 [i_0] [2] = 63050394783186944;
        var_10 -= 0;
        var_11 -= (min((max((arr_0 [i_0 - 1] [i_0 + 1]), 4294967295)), ((-4232008430424389228 ? (arr_0 [i_0 - 1] [i_0 - 3]) : var_8))));
    }
    var_12 = 32;
    var_13 = var_4;
    var_14 = ((var_4 ? ((((26579 ? 14650 : 2707558946)) - 1)) : 1474154829));
    var_15 *= var_0;
    #pragma endscop
}
