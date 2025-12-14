/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_13 + (~var_9)))) ? (((((var_4 ? var_9 : var_0))) ? var_6 : var_1)) : var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (65520 >> (var_4 - 17638));
        arr_3 [i_0] = ((1328260515 ? 730 : 24));
        var_16 = (min(var_16, ((((arr_1 [i_0] [i_0]) ? (!var_3) : (arr_1 [i_0] [4]))))));
    }
    var_17 = (min((((((0 ? var_12 : -1328260499))) ? ((-2128870661 ? -221517219 : var_12)) : var_4)), (min(var_7, (var_2 + var_1)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                var_18 += (min((var_7 - var_7), ((1 ? 22073 : 174))));
                var_19 = (((arr_6 [i_1]) || var_14));
                var_20 += ((-(((arr_6 [i_1]) >> (var_9 - 9188955329345232254)))));
                var_21 = ((((((~9223372036854775807) + 9223372036854775807)) + 9223372036854775807)) >> ((((max(var_13, (((!(arr_6 [i_2]))))))) - 54182)));
            }
        }
    }
    var_22 = var_1;
    #pragma endscop
}
