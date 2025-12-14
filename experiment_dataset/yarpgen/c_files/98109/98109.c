/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (min((((arr_2 [i_0 - 1]) ? (((max(99, (arr_1 [i_0]))))) : var_5)), ((((var_2 ^ (arr_0 [9])))))));
        arr_5 [i_0] = (((min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1]))) <= (~var_2)));
        arr_6 [i_0] = ((-(min((arr_0 [i_0 - 2]), ((max(255, var_9)))))));
    }
    var_10 = ((((((var_7 ? 17296 : 25))) ? var_5 : (var_8 / var_4))));
    var_11 = (max(var_11, (((32495 ? (((min(var_5, var_2)) / -1)) : -207)))));
    var_12 *= ((((max((255 | var_5), ((max(var_9, -13763)))))) ? 33 : var_2));
    #pragma endscop
}
