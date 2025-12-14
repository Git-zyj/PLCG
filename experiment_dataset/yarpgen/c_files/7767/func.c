/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7767
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) 619761749))));
                var_13 = var_4;
                var_14 = ((/* implicit */int) var_9);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                            {
                                var_15 = max((619761749), ((~(var_0))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_8 [i_0] [i_0] [(short)9]), (619761749)))), (var_11)))) ? (var_4) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (-619761749))))))));
                                arr_15 [i_0] [8] [i_2] [i_3] [i_4] = var_8;
                                var_17 = ((/* implicit */short) -619761749);
                            }
                            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) max((1481742907), (-77089278)))) ? ((~(var_8))) : (max((((/* implicit */unsigned int) arr_10 [i_1 - 2])), (arr_9 [i_2] [i_3 + 2] [i_3 + 2] [i_3 + 1])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) arr_9 [i_0] [i_1] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
        {
            for (unsigned int i_7 = 2; i_7 < 19; i_7 += 3) 
            {
                for (int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) -296227425);
                        var_21 = ((/* implicit */int) 1833462693U);
                    }
                } 
            } 
        } 
        var_22 = var_6;
        var_23 ^= ((/* implicit */unsigned int) arr_7 [i_5] [i_5] [i_5]);
    }
    for (short i_9 = 1; i_9 < 18; i_9 += 4) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((((/* implicit */unsigned int) -296227425)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32708))) : (var_10))))))));
        var_25 = min((-619761749), (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_9 + 1] [i_9] [i_9 + 1])) || (((/* implicit */_Bool) arr_19 [i_9 + 1] [i_9] [i_9 - 1]))))));
    }
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 619761758)) ? (((((/* implicit */_Bool) var_9)) ? (var_5) : (619761749))) : (((((/* implicit */_Bool) max((77089277), (var_2)))) ? (var_3) : (296227443)))));
}
