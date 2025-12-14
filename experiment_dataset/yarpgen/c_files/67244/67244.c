/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max((~var_2), var_4)), var_3));
    var_20 = var_9;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_12;
        arr_3 [i_0] = (!var_10);
        var_21 = (((arr_0 [i_0 + 3]) > var_10));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = ((((max(var_0, 7152))) ? ((-(((arr_6 [i_1] [i_1]) ? var_4 : var_8)))) : (((32767 ? 56723 : 8812)))));
        arr_9 [i_1 + 1] [i_1 - 1] = (((((var_17 ? ((115 ? 0 : -21424)) : var_12))) ? (~32747) : ((var_14 ? (arr_7 [i_1 - 3]) : 8807))));
    }
    #pragma endscop
}
