/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((4317965486842256351 || ((max((244 <= 3), -57)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [1] = ((((((213 == 6) ? (arr_2 [i_0] [i_0]) : ((max(65529, 3)))))) + 1476677919524431345));
        arr_4 [i_0] = (((((((arr_1 [i_0] [i_0]) ? 4448438828609812329 : 109))) ? (arr_0 [i_0]) : 51)));
        var_11 = (arr_0 [i_0]);
        arr_5 [i_0] [i_0] = 241;
        var_12 = (-127 - 1);
    }
    #pragma endscop
}
