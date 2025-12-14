/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (min((~3), (((arr_2 [i_0]) ^ 294345955))));
        var_13 = ((-(max(4000621315, 11))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((min((arr_2 [i_1]), (arr_1 [i_1])))) ? (arr_1 [15]) : -562949953421311));
        var_14 = (((min(114486497264632, -1)) + (var_10 + 1518758172)));
    }
    var_15 -= var_7;
    #pragma endscop
}
