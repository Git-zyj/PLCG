/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75289
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = ((((/* implicit */unsigned int) -999399486)) - (3298193706U));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_13 = arr_5 [i_0] [i_1 + 2] [i_3] [i_3];
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((4119439718U) | (((/* implicit */unsigned int) var_9))))));
                        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0] [i_0]) : (var_0))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 *= ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (max((arr_1 [i_1 - 1] [i_1 - 2]), (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_2]))))));
                        var_17 *= ((/* implicit */unsigned int) max(((~(411202517))), (((int) var_6))));
                        var_18 *= arr_5 [i_4] [i_2] [i_1] [i_0];
                    }
                    arr_11 [i_0] [i_0] = 4119439718U;
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(arr_4 [i_0] [i_1 + 1] [i_2]))))));
                }
            } 
        } 
    } 
}
