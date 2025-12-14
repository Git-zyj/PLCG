/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 ^ ((-(~var_7)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((((((arr_2 [i_0] [i_0]) || (arr_2 [i_0] [i_0])))) ^ (max(var_6, (arr_2 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = max(((((arr_2 [i_0] [i_0]) && var_7))), (min(var_4, -30129)));
    }
    #pragma endscop
}
