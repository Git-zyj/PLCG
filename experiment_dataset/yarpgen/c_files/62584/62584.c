/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_9 ^ var_3);
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (min(var_14, (max((min(11857012658072786380, 21)), ((var_6 ? (max((arr_0 [i_0]), (arr_2 [0] [i_0]))) : (((((arr_1 [i_0]) <= var_6))))))))));
        arr_3 [i_0] = min((5626968169605243879 ^ 15548404209292389674), ((((((arr_0 [i_0]) & (arr_2 [i_0] [i_0])))) ? ((13410686012794797664 ? (arr_1 [i_0]) : (arr_2 [i_0] [1]))) : (arr_0 [i_0]))));
    }
    #pragma endscop
}
