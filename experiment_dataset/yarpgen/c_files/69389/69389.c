/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = ((((((min(274877906943, -7))) ? (((arr_3 [17]) + 152)) : (arr_2 [i_0 - 1] [i_0 - 1]))) & ((((((arr_1 [1] [5]) & 1102699946))) ? ((4294967269 ? (arr_1 [1] [i_0 - 1]) : (arr_0 [i_0] [i_0 - 1]))) : (arr_1 [i_0 - 1] [i_0 - 1])))));
        arr_4 [i_0 - 1] = arr_3 [i_0];
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((((arr_2 [i_1 - 1] [i_1 - 1]) & (arr_2 [11] [i_1 - 1]))) ^ (((((arr_1 [13] [i_1 - 1]) || (arr_1 [i_1 - 1] [i_1 - 1])))))));
        var_16 = (max(var_16, 8128));
        arr_8 [i_1] = (((((32747 < (arr_5 [i_1] [i_1])))) << (((6 != (arr_3 [19]))))));
        var_17 = 0;
    }
    var_18 ^= ((!(var_12 > var_6)));
    var_19 = (((((((4294967282 ? var_2 : 1107592599)) < var_0))) << (((((var_1 < 1040623406) ? var_2 : (!var_2))) - 43206))));
    #pragma endscop
}
