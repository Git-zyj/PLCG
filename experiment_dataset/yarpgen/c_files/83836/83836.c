/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [13] [13] = (min((max((arr_2 [i_0 + 1] [i_0]), ((-386356796624711539 ? 0 : 416398733)))), 3878568563));
        arr_5 [i_0] = ((((((133956807 ? (arr_1 [i_0 + 1]) : 416398743)))) ? ((3878568585 ? (((-(arr_0 [i_0 + 1] [i_0 + 1])))) : 416398743)) : ((-(max(416398743, 1869))))));
        var_15 = ((((max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 + 1])))) ? (max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 1]))) : 3878568541));
    }
    var_16 -= 0;
    #pragma endscop
}
