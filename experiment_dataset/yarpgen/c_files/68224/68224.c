/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((((arr_0 [i_0]) == (max((arr_0 [i_0]), var_9))))) & ((((arr_2 [i_0] [i_0]) <= (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_13 = ((((max(31, 12039))) ? (min(246, ((-(arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (((arr_3 [i_0] [i_0]) ? 5803 : (arr_7 [i_0] [i_2] [i_1] [i_0])))));
                        var_14 = (min(((((arr_11 [i_0] [i_1] [i_1] [i_2] [i_1]) ? (arr_6 [i_0] [i_1]) : (var_3 + 0)))), (arr_9 [i_0] [i_1] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_15 = (((((-6437586948989809211 | 1) ? ((7650083475314534192 ^ (arr_6 [i_1] [i_1]))) : (~var_4))) >> (((((~var_4) * 1)) + 145))));
                        var_16 = (((((~(((arr_9 [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0]) : (arr_12 [i_0])))))) ? (((((-13650 & (arr_14 [i_0] [i_1] [i_1] [2])))) ? ((0 ? var_7 : (arr_15 [17] [i_0]))) : (arr_10 [i_0]))) : (((var_10 * var_1) ? var_7 : (arr_5 [5])))));
                        arr_17 [i_0] = ((((~(((arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_4]) ? var_9 : var_10)))) & (((((max(var_6, -32570))) ? ((var_12 ? var_11 : var_2)) : ((-5811 ? var_4 : var_10)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 = (max((max((arr_8 [i_0]), ((max(var_8, var_9))))), (arr_0 [i_0])));
                                arr_25 [i_0] [i_2] [i_0] = ((((var_12 ? 1 : (arr_12 [i_0])))) - ((((min((arr_11 [i_0] [i_1] [i_2] [17] [i_2]), var_2))) ? ((-1482842203 ? 45 : (arr_22 [i_0]))) : (-1204994523 | var_2))));
                            }
                        }
                    }
                    var_18 = min(((8099911344550550853 - (((max(210, var_6)))))), -993119506881966582);
                    arr_26 [i_0] [i_0] = arr_18 [i_0] [i_0] [i_0] [i_0] [i_2];
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_19 = var_7;
        var_20 = var_3;
    }
    var_21 = ((((((0 - 110) + (29 > var_6)))) ? var_6 : var_2));
    var_22 = (-var_7 && var_10);
    #pragma endscop
}
