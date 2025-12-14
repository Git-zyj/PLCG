/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 183566672));
    var_21 &= ((!(((2579196250641166503 ? 63 : (63 > 17))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_22 = (-16 && -99);
        var_23 = (min(var_23, (!-64)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_24 = (min(14130314842258835127, (!-64)));
        arr_6 [i_1] = (min((arr_5 [i_1]), var_3));
        arr_7 [i_1] [i_1] = (min((((!((max(-17, -5)))))), var_11));
        arr_8 [i_1] &= ((max((((var_9 && (arr_4 [7])))), (var_19 + -6))));
    }
    #pragma endscop
}
