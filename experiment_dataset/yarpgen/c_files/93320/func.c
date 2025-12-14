/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93320
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-63)) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60622)))));
    var_19 = ((/* implicit */unsigned short) (unsigned char)108);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1])) + (((/* implicit */int) (short)29018)))) > (((/* implicit */int) (unsigned char)103))));
                        var_20 &= ((/* implicit */signed char) ((min((arr_8 [i_0] [i_1] [i_2 + 1]), (arr_8 [i_0] [i_0] [i_0]))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_0] [i_2 - 2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_1])) - (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_1] [i_2])));
                            arr_19 [i_0] [(unsigned short)23] [i_2] [i_2 - 2] [i_0] [i_2 - 2] [i_5 + 3] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_0]);
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_0 [i_5] [i_5 + 2]))));
                        }
                        arr_20 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((int) arr_5 [i_2 - 1] [i_1]));
                    }
                    arr_21 [i_0] [i_1] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)29039))) + ((-9223372036854775807LL - 1LL))));
                }
            } 
        } 
    } 
}
