/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((65280 + (max(((min(1, 1))), var_8))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((~var_5) << ((((-(min(var_9, 423226533)))) - 3871740706))));
        arr_4 [i_0] = (var_7 != (min(2709124767380241566, ((min(7, -1914027050))))));
        arr_5 [i_0] [i_0] = ((var_14 << (4577143767766888086 - 4577143767766888086)));
        arr_6 [i_0] = (((((((~5) + 2147483647)) >> (((1545042425 ^ 2286970174) - 3561430201)))) >> ((((-47 ? ((var_14 ? var_9 : 15737619306329310049)) : (~75))) - 4050440108))));
    }
    #pragma endscop
}
