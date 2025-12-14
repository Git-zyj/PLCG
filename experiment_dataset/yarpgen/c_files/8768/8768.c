/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (-25933 * -25931);
        var_18 = ((((-31 / (arr_0 [i_0]))) - var_6));
        arr_4 [i_0] [i_0] = (max(((25936 ? 62198 : (arr_1 [i_0]))), ((0 ? 3 : 62218))));
    }
    var_19 = var_4;
    #pragma endscop
}
