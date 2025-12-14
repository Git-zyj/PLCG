/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = (var_0 | var_5);
    var_15 = var_9;
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [22] = (((-11 ^ 181) ? -20 : 3021027056242780612));
        var_17 ^= (arr_0 [i_0]);
    }
    #pragma endscop
}
