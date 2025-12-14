/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((((((((var_1 ? var_2 : var_3))) ? ((var_7 ? var_9 : var_7)) : -13269))) <= ((var_1 ? ((var_1 ? 13264 : var_2)) : (-13274 && var_8)))));
    var_11 = (((((((var_7 ? var_1 : var_1))) ? (1 || var_7) : (!216)))) ? (((((13262 ? var_5 : var_9))) ? (!var_0) : ((-24498 ? var_9 : var_8)))) : ((((var_0 || var_2) ? ((var_4 ? -24508 : 13271)) : (!var_5)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, (((((873 ? var_9 : (arr_0 [14]))) + (arr_1 [i_0] [14]))))));
        var_13 = (((var_3 ? (arr_0 [i_0]) : var_1)));
        arr_2 [i_0] [i_0] = ((((var_0 ? var_1 : -13260))) ? (((arr_0 [i_0]) ? 24484 : var_0)) : ((-13265 ? (arr_0 [i_0]) : -24478)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((var_4 ? (arr_1 [i_1] [14]) : 94788173)) <= ((((var_7 > (arr_3 [i_1])))))));
        arr_7 [i_1] = (((((~(arr_4 [i_1])))) ? (((arr_3 [i_1]) ? var_5 : (arr_3 [i_1]))) : (134217727 > 28662)));
    }
    #pragma endscop
}
