/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (min(var_9, (min((~2685143568846677142), (2402400143 == var_2)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (max((min(((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))), 8898107228804266634)), ((min(((528482304 / (arr_1 [i_0] [i_0]))), 21657)))));
        arr_3 [5] [5] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_16 = (max(var_16, ((((!1) ? 1903282076078967412 : (max(768, 2685143568846677142)))))));
        var_17 += 1700443229;
    }
    #pragma endscop
}
