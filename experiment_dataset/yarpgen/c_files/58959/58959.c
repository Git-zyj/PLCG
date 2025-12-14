/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((((min(1, 1)) ? var_12 : 4391233339784364341)))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_21 = (min(1, (~-51)));
        arr_4 [i_0] [i_0] = arr_3 [i_0 - 2];
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((((min((arr_6 [i_1]), (var_18 >= -69)))) ? -58 : (min((arr_5 [i_1] [i_1]), (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (var_16 - 1341968227161884446)))))));
        var_22 = (max(var_22, (~1)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_1] = (!62973);
                    var_23 = (min((((25099 / -1) ? 0 : (6917529027641081856 != -1))), ((max(0, 69)))));
                    var_24 = (max(var_24, (((1 ? 255 : 1)))));
                }
            }
        }
        var_25 = (arr_8 [i_1] [i_1]);
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (((~((((arr_8 [i_4] [i_4]) || (arr_11 [i_4] [i_4])))))))));
        var_27 += 8145018215620525159;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = -62;
        var_28 = (!287948901175001088);
        arr_21 [i_5] [i_5] &= (-62 ? (arr_5 [i_5] [i_5]) : (arr_5 [i_5] [i_5]));
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            {
                var_29 *= (arr_23 [i_6]);
                arr_27 [9] [i_7] = (max((arr_10 [i_6 + 2] [i_6 - 1]), ((((arr_10 [i_6 + 1] [i_6 + 2]) | var_17)))));
                var_30 = ((-(((arr_11 [i_6 - 1] [i_6 - 1]) ? (arr_5 [i_6 - 1] [i_6 - 1]) : -1))));
            }
        }
    }
    #pragma endscop
}
