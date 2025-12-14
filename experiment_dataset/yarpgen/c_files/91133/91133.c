/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 &= var_9;
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 += ((306 - (max(((1 ? var_1 : var_4)), (((-(arr_3 [1] [1]))))))));
        var_14 = ((((max(var_0, 17))) >= ((((max(1, (arr_0 [i_0])))) ? (arr_2 [i_0]) : (arr_0 [i_0])))));
    }
    #pragma endscop
}
