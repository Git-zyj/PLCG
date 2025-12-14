/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = arr_1 [i_0];
        var_12 = (min((((((arr_1 [i_0]) ? 1189 : -1203)) / ((min((-32767 - 1), 20329))))), (min(((var_8 ? (arr_0 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0])))));
    }
    var_13 = ((!((max(((-20285 ? -32013 : -6384)), (!var_2))))));
    #pragma endscop
}
