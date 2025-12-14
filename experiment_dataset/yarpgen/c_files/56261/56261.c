/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_0] [i_1] [i_2] [i_3] = (8 + (((((var_9 ? 5060798069123452758 : (arr_9 [i_0] [i_1 - 2] [i_2 - 1] [i_3])))) ? 2310540978131192200 : (((max(var_1, -108)))))));
                            var_18 -= (10121417 + -50);
                            arr_14 [i_0] [i_1] [i_1] = (min((min((arr_1 [i_2 + 1]), 4294967295)), ((max(10121417, var_13)))));
                        }
                    }
                }
                var_19 = (min(var_19, (((((((arr_3 [i_1 - 4] [i_1 + 1]) * ((1890255433 ? 173906027 : 4294967281))))) ? ((((((arr_11 [20] [20]) ? var_0 : (arr_5 [i_1] [i_1] [i_0])))) ? (-450592064 | 7908367907445602268) : (((6333696789376119555 ? 4294967295 : (arr_12 [i_0] [i_0] [i_1] [i_1 - 1])))))) : ((min((arr_0 [i_0] [i_1 - 3]), 20464))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_21 [i_1] [i_0] [i_1] = arr_16 [i_1] [i_1] [i_0];
                            var_20 = (min(((var_1 << (((arr_3 [i_1 + 1] [i_1 - 3]) - 59586)))), ((((arr_10 [i_1 - 2] [i_1 - 4]) == var_7)))));
                        }
                    }
                }
                arr_22 [i_1] [i_1] [i_1] = (arr_7 [i_0] [i_1] [i_1 - 3]);
            }
        }
    }
    var_21 = ((((((min(1, 1)) ? (((min(var_16, 123)))) : 4284845878))) ? var_17 : (((((1320882195 ? 1890255440 : 9071141907870920629))) ? ((max(var_7, var_3))) : ((8922955142703762720 ? 1 : 2147483647))))));
    #pragma endscop
}
