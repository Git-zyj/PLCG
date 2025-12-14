/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, (max(var_11, 184))));
        var_20 = (min(var_8, (min(((var_2 ? var_13 : 2147483647)), 154))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_21 = ((((((arr_3 [i_0 + 2]) ? var_3 : (arr_3 [i_0 + 2])))) ? (max(var_7, var_15)) : (min(var_18, var_6))));
            var_22 = ((+((min((arr_0 [i_1 - 2]), var_4)))));
        }
        var_23 = (min(var_23, ((min((((!((max(var_10, 0)))))), (max(((max(24, var_5))), (~var_3))))))));
        var_24 ^= min(((max(((var_5 ? 15 : var_8)), ((min(var_8, var_5)))))), (max((~var_1), ((min(var_5, var_3))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                var_25 -= (arr_7 [i_4 + 1] [i_2 + 1]);
                var_26 = (max(var_26, var_17));
            }
            var_27 = ((var_6 * (arr_9 [i_2] [i_3])));
            var_28 = var_14;
            var_29 = (12437215061216069702 && var_0);
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_30 = (((arr_11 [i_2]) >= var_7));
            var_31 = (~var_3);
        }
        var_32 = (40 ? var_7 : var_5);
    }
    var_33 = ((var_0 < (var_13 >= var_18)));
    var_34 = -9223372036854775803;
    var_35 = (var_10 || var_1);
    #pragma endscop
}
