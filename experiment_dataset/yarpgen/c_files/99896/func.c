/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99896
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [11ULL] [11ULL] [i_0] = ((/* implicit */short) (_Bool)1);
                                var_19 = ((/* implicit */unsigned int) min((var_19), (var_1)));
                                var_20 = (_Bool)0;
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) var_2);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) (~(arr_9 [i_2 + 1] [i_2] [i_2] [i_2 + 1])));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 187055573U)) ? ((~(((/* implicit */int) arr_13 [i_5] [i_2] [i_2] [i_1] [i_0])))) : (((/* implicit */int) arr_11 [i_5] [(short)3] [i_0] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1179))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (18446744073709551615ULL)))))));
}
