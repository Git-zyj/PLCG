/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((((max(151, 3962142642802051400))) ? ((((arr_2 [i_0]) >= (arr_1 [i_0])))) : ((236 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_17 = (min(var_17, ((((((255 == 1848923039) >= (arr_1 [16]))) ? (min(((min(-22442, var_6))), (arr_2 [18]))) : ((((arr_1 [22]) * (arr_1 [2])))))))));
    }
    var_18 = (((3962142642802051400 <= 1) && var_12));
    #pragma endscop
}
