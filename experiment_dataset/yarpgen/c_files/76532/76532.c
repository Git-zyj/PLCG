/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (!var_4);

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (arr_1 [9]);
        arr_5 [i_0] = (((((((arr_0 [i_0] [i_0]) + 9223372036854775807)) >> var_11))) ? var_5 : 1);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_6;
        arr_9 [i_1] = var_8;
    }
    #pragma endscop
}
