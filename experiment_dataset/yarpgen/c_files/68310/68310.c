/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_12 = ((var_0 ? var_9 : (((var_0 ? var_4 : var_5)))));
            var_13 *= ((var_7 ? var_9 : var_0));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_14 ^= ((var_5 ? var_1 : var_7));

            for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
            {
                var_15 = (max(var_15, (~var_5)));
                var_16 = (max(var_16, (var_9 - var_1)));
            }
            for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_17 = (max(var_17, var_4));
                var_18 *= ((-(var_2 | var_7)));
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                arr_12 [i_0] = ((var_2 != (((var_7 ? var_11 : var_8)))));
                var_19 = (min(var_19, (!var_1)));
                var_20 = (max(var_20, var_10));
                var_21 = (min(var_21, (((var_1 ? var_11 : var_9)))));
            }
            var_22 = (min(var_22, var_1));
        }
        var_23 = (min(var_23, (((var_5 == (var_5 - var_5))))));
    }
    var_24 = (max(var_24, var_3));
    #pragma endscop
}
