/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 2] [i_1] [i_1] [i_2] [i_3] [2] = (max(((~(max((arr_6 [4]), var_7)))), (((~var_4) ? (((arr_9 [i_3] [i_1]) ? (arr_3 [i_0]) : (arr_10 [i_2]))) : (((arr_7 [14] [i_1] [i_2] [5]) ? (arr_11 [i_0] [i_0] [i_0]) : (arr_1 [i_2])))))));
                            var_13 |= (!-2);
                            arr_13 [i_2] [3] [i_2] [i_3] = (((((((min(var_12, var_12))) ? (max(3871389809003952458, var_11)) : ((((arr_1 [i_0]) ? var_3 : (arr_11 [i_2] [17] [i_0]))))))) ? (((var_7 ? ((max(28367, var_3))) : (((arr_8 [i_0] [i_0] [12] [i_3]) ? (arr_1 [i_3]) : var_0))))) : ((((max(1, 2050174581))) ? (((arr_5 [i_0] [6]) ? var_2 : var_5)) : (((var_8 ? (arr_9 [i_3] [i_1]) : (arr_3 [i_0 - 1]))))))));
                        }
                    }
                }
                var_14 += (min((!2525013511), (((((1769953783 ? 24 : var_6))) ? (~167) : ((24 ? 1105400358695837547 : var_6))))));
                arr_14 [i_0 - 2] = (min((((((1776732767117636091 ? 120115794 : 107))) ? (arr_9 [i_1] [i_1]) : (((arr_0 [i_0] [i_1]) ? var_10 : var_11)))), (((var_10 ? var_3 : 2525013513)))));
            }
        }
    }
    var_15 = (max((min(((min(198, 42761))), (max(33554431, var_7)))), (((~(~-17617))))));
    var_16 = (max(var_16, (((((max(92, 2431425839))) ? (~109) : ((~((var_7 ? var_1 : var_1)))))))));
    #pragma endscop
}
