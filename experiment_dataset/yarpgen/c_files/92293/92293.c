/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 31;
    var_17 = ((((-(min(var_2, 17139352849213996212)))) - (var_6 < -var_8)));
    var_18 = min((((4149790620449563491 / var_5) || (var_6 | var_14))), (!31));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 = 31;
        arr_2 [i_0] = var_8;
        var_20 -= 0;
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_21 = (min((((arr_1 [i_1]) ? var_4 : var_11)), (arr_1 [i_1])));
        var_22 = (((min((1 && 13789438089328484393), (min((arr_5 [i_1]), var_9)))) ^ (((((var_1 ? (arr_4 [i_1]) : 0))) ? var_1 : ((-(arr_4 [i_1])))))));
    }
    var_23 = var_1;
    #pragma endscop
}
