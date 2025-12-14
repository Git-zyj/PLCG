/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 2137825201;
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = var_8;
                    var_13 *= (!-2137825201);
                }
            }
        }
    }
    var_14 = var_8;

    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_15 = 2137825170;
        var_16 &= min((min(-2595432667947804599, -18446)), (((((((arr_8 [6]) ? (arr_8 [i_3]) : 9223372036854775807))) ? 1727123360 : (arr_8 [i_3])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_17 = ((1671651877 ? 268435455 : -2595432667947804611));
        var_18 = (min(var_18, (((((((var_4 ? -1141902723 : -2137825201)) + 2147483647)) >> (var_9 - 1773601027))))));
        arr_12 [7] [i_4] = (((!-2595432667947804593) ? (((arr_10 [i_4]) ? 1141902739 : 18446744073709551595)) : (arr_8 [i_4])));
    }
    #pragma endscop
}
