/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_3;
    var_13 += (var_5 ? ((-var_6 ? ((max(var_9, 4546))) : (min(var_3, var_0)))) : var_11);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 += ((!((max(123, (((!(arr_0 [i_0])))))))));
        arr_2 [i_0] = (min((min((arr_0 [i_0]), (arr_1 [i_0]))), (max((arr_1 [i_0]), (arr_0 [i_0])))));
    }
    #pragma endscop
}
