/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= -86;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((!-3730170923444794667) ? ((max(var_5, (arr_3 [12])))) : (((arr_2 [i_0]) ? (arr_3 [1]) : 0)))) >= (arr_3 [12]))))));
        var_18 = (((((((((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0])))) ? (((arr_3 [i_0]) ? 3730170923444794667 : var_8)) : (arr_3 [i_0])))) || (((var_1 ? (((!(arr_1 [i_0])))) : 127)))));
    }
    #pragma endscop
}
