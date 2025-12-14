/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = (((~var_2) < ((-(var_6 <= var_2)))));
        arr_4 [i_0] [i_0] = ((((((arr_3 [i_0] [i_0]) ? (((~(arr_0 [i_0])))) : var_7))) ? var_3 : (~var_5)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 |= (arr_1 [i_1]);
        var_14 ^= (((arr_0 [i_1]) ? (arr_0 [i_1]) : var_10));
    }
    var_15 = ((9223372036854775807 && ((((~var_7) ? 27815 : (796097246241423882 ^ -83))))));
    var_16 = (max(((((var_2 * 3088644454) ? var_4 : var_0))), (796097246241423882 + 85)));
    #pragma endscop
}
