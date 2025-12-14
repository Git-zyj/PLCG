/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_9, (((1 ? -var_15 : var_16)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_2)) & (0 % 1))));
        var_20 = ((((max((((!(-2147483647 - 1)))), (arr_3 [i_0])))) ? ((((!((min(15, (-2147483647 - 1)))))))) : (min(((((arr_0 [i_0]) ? var_17 : -26))), ((1 ? 825335586 : 132120576))))));
    }
    #pragma endscop
}
