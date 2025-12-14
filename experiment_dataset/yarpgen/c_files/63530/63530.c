/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 += (arr_0 [22]);
        arr_2 [14] [i_0] = (arr_1 [i_0]);
        var_14 = ((((((arr_1 [i_0]) || (arr_1 [i_0])))) < ((((((arr_1 [i_0]) >= (arr_0 [0])))) ^ ((max((arr_1 [i_0]), (arr_1 [18]))))))));
        var_15 += ((!(((((min((arr_0 [16]), (arr_0 [i_0])))) ? (~8) : (min((arr_0 [i_0]), -13523)))))));
        var_16 = ((~((((arr_0 [i_0]) < (arr_0 [i_0]))))));
    }
    var_17 ^= var_5;
    var_18 &= ((((164 + 48) ? var_4 : (max(var_9, var_6)))));
    #pragma endscop
}
