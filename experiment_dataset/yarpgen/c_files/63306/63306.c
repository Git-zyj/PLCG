/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((((arr_1 [i_0]) ? (-32767 - 1) : var_1)), (19606 & 1)))) ? (((((45929 ? 45912 : (arr_1 [i_0])))) ? (arr_0 [i_0]) : (arr_1 [i_0]))) : 45933));
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [4] = (((min((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_4)), var_12))) ? (min((((arr_1 [i_0]) >> (((-32767 - 1) + 32811)))), 108)) : (((((((~(arr_0 [i_0]))) + 2147483647)) << ((((1 ? var_2 : 19587)) - 1360465282))))));
    }
    var_14 = ((var_9 ? ((min(var_3, var_12))) : ((((45910 ? var_8 : var_5)) % var_5))));
    #pragma endscop
}
