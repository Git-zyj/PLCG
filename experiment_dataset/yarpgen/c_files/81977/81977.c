/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = (arr_1 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [2] = (~var_3);
        arr_7 [i_1] = (((var_1 ? (arr_5 [i_1]) : (arr_5 [i_1]))));
        arr_8 [6] = (arr_1 [i_1]);
        arr_9 [i_1] = ((((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))) <= (max(var_3, var_7))));
    }
    var_10 = ((((!78) ? var_1 : (53 && -14525))));
    var_11 &= var_4;
    #pragma endscop
}
