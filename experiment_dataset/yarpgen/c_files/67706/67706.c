/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = ((!(arr_0 [i_0 + 1] [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((((var_14 | (min(0, (arr_1 [i_0])))))) ? (min(14133, -3074611827146520940)) : ((((arr_0 [i_1] [i_2]) & (arr_1 [i_0 + 1])))));
                    var_21 += (((min((min(-5232743282462926519, 9126233162659287794)), ((((arr_1 [i_0]) ? (arr_2 [4] [3] [i_2]) : var_14)))))) ? ((min((((arr_0 [i_2] [i_0]) ? -5232743282462926519 : -2824907876616270544)), (arr_1 [i_0 - 1])))) : (max(var_5, (var_9 + -3074611827146520940))));
                }
            }
        }
        arr_7 [11] = (min(((var_7 ? (arr_5 [i_0] [i_0 + 1] [i_0]) : (arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 1]))), (((!(var_2 && var_6))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_22 += ((((((max(7, (arr_1 [i_3])))))) ? (~var_13) : ((var_15 * ((65510 ? 60884 : var_4))))));
        arr_11 [14] [14] = ((194 ? ((((arr_4 [i_3] [18] [19] [19]) ? (arr_2 [2] [i_3] [2]) : (arr_1 [i_3])))) : var_18));
        arr_12 [i_3] |= arr_3 [i_3] [i_3] [i_3];
    }
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (((~var_10) ? (((((~(arr_13 [i_4])))))) : (((var_17 ? (arr_14 [i_4]) : (arr_14 [i_4]))))));
        var_23 = var_2;
        var_24 = (min(var_24, (((!(var_11 && var_14))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5] = 18446744065119617024;
        arr_19 [i_5] [i_5] = 15769240166184237010;
        var_25 = ((((-9223372036854775807 - 1) != 0)));
    }
    var_26 = (min((((~(~var_8)))), var_15));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            {
                arr_26 [i_6] [i_6] |= 63637;
                var_27 += (min((max(var_11, var_18)), 62607));
                arr_27 [i_6] [i_7 + 1] [i_7] = 44274;
            }
        }
    }
    #pragma endscop
}
