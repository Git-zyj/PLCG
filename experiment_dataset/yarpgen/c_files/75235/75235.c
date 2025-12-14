/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((-((262143 ? 162 : -41470))));
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? 2374920359 : (min(11027785581000707111, (2374920336 | 7418958492708844505)))));
        arr_4 [i_0] = (0 && 162);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = (((((-(arr_7 [i_0] [i_0])))) ? (((50868 ? 7418958492708844504 : 94))) : 0));
            arr_8 [i_0] [i_0] [i_0] = ((((max(7418958492708844504, (arr_5 [i_0] [i_0] [i_0]))) & var_12)));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_12 [i_0] [i_0] [i_2] = ((-(--158)));
            var_22 |= 7418958492708844505;
            arr_13 [i_0] [i_0] [i_0] = ((var_11 ? (-13656 * 2374920359) : ((var_13 ? 1920046937 : 133))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_23 = (min(var_23, var_13));
        var_24 += (((arr_10 [3] [i_3]) ? 9223372036854775797 : (((162 ? -109 : 1920046931)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_25 = (min(var_25, (((0 ? ((1920046931 ? var_8 : var_0)) : (arr_0 [i_4] [i_4]))))));
        arr_18 [i_4] [i_4] = (!var_11);
        arr_19 [16] |= (((arr_0 [i_4] [i_4]) * ((131 / (arr_14 [i_4])))));
        arr_20 [i_4] [i_4] = (((arr_17 [i_4] [i_4]) ? (arr_14 [i_4]) : (!1920046937)));
    }
    var_26 = ((-var_19 + (((2374920365 - var_16) + 7418958492708844504))));
    var_27 |= ((((!var_0) != ((32767 ? var_17 : 1920046957)))));
    var_28 = var_7;
    var_29 = var_12;
    #pragma endscop
}
