/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1 && (((var_0 ? ((var_9 ? 4393304572197030257 : 4393304572197030257)) : var_2))));
    var_20 = ((var_6 ? (((((var_16 ? -4393304572197030257 : var_7))) ? 4393304572197030245 : 4393304572197030257)) : var_18));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [i_0]) & (arr_2 [i_0])));
        arr_5 [i_0] [i_0] = (!-4393304572197030257);
        arr_6 [i_0] = (4393304572197030257 ? (arr_0 [i_0]) : (((!(arr_2 [i_0])))));
        arr_7 [i_0] = 4393304572197030275;
    }
    #pragma endscop
}
