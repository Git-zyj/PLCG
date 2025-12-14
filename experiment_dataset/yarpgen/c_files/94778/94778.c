/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = (0 ? var_0 : (max((((var_2 ? var_6 : var_10))), (max(var_3, var_9)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!0);
        arr_4 [i_0] [i_0] = ((min((max(1248974666, var_8)), ((min(4062656060, (arr_0 [i_0])))))));
        arr_5 [i_0] = (((max(0, 17204)) / ((min((max(var_1, (arr_2 [i_0]))), ((9223372036854775793 ? (arr_1 [i_0] [i_0]) : var_9)))))));
        arr_6 [i_0] = (arr_2 [i_0]);
    }
    #pragma endscop
}
