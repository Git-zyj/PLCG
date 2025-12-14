/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57938
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
    var_17 *= var_13;
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [(short)0] = min((((short) (short)4630)), (min((arr_1 [i_0]), (arr_4 [i_0 - 1] [i_0 + 2] [i_0 - 2]))));
                        var_18 -= arr_6 [(short)6] [(short)7] [i_2];
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        for (short i_5 = 4; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_4] [i_5] = var_16;
                                var_19 = ((/* implicit */short) max((var_19), (var_6)));
                                arr_18 [i_0] [i_1] &= ((/* implicit */short) (+(((((/* implicit */_Bool) ((short) arr_14 [i_4]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5 - 1] [i_0 - 3] [i_2] [i_1] [i_0 - 3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) arr_7 [i_4] [(short)4] [i_2])))))))));
                            }
                        } 
                    } 
                    var_20 *= var_8;
                    var_21 += var_9;
                }
            } 
        } 
    } 
}
