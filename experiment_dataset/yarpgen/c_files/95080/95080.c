/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_18 ? (((var_6 ? var_3 : var_9))) : (min(0, var_10))))) ? (((((var_16 ? var_19 : -10))) ? (max(var_19, var_14)) : (var_1 >> var_18))) : -21));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_1] [9] [i_0 + 1] = -2563626710;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = ((1731340586 ? ((((max((arr_13 [3] [i_4] [i_3] [i_3] [i_2] [i_1] [i_0]), 995142978))))) : (((arr_13 [i_0] [i_1] [i_0 - 1] [i_3] [i_4] [i_4] [1]) ? (3299824317 + 1424763649) : (min(1424763662, 3299824307))))));
                                var_22 -= var_6;
                            }
                        }
                    }
                    var_23 = (arr_4 [i_0] [i_0 + 2] [i_0 + 2]);
                }
            }
        }
    }
    var_24 ^= ((var_17 ? ((~((var_5 ? var_7 : 164833507)))) : var_19));
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    arr_24 [14] [i_7 + 3] [i_7] = (arr_20 [17] [17] [i_7 - 2]);
                    var_25 = (min((((((8 ? 0 : 62553))) ? 3299824318 : ((2 ? (arr_18 [3] [i_6]) : (arr_18 [i_5] [i_5]))))), -1424763649));
                    var_26 = (arr_18 [i_5 + 2] [i_7 + 1]);
                    arr_25 [i_5 - 4] [2] [i_7] = ((arr_19 [i_5]) - ((-(((arr_19 [i_5 - 2]) ? 2051096635 : 2243870655)))));
                }
            }
        }
    }
    var_27 = ((var_2 ? 2563626702 : var_18));
    #pragma endscop
}
