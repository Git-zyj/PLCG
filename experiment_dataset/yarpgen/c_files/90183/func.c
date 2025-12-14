/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90183
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
    var_15 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_12)), (var_5)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((var_9), (min((-8192), (2013265920)))))), (arr_0 [(unsigned char)8] [i_0])));
        var_16 = ((/* implicit */unsigned long long int) 2013265946);
    }
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_6))));
    var_18 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            {
                var_19 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) 4294967295U)), (3594141761659363843ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [(signed char)14] [i_2])), (min((arr_7 [(signed char)15]), (((/* implicit */unsigned long long int) var_4)))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_1 [i_2] [i_2]))));
                    var_22 = ((/* implicit */_Bool) (unsigned short)16383);
                }
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    arr_13 [i_2] [i_2] = ((/* implicit */signed char) max(((unsigned short)16375), (((/* implicit */unsigned short) arr_6 [i_2 + 2] [i_2] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), ((signed char)123)));
                        arr_17 [i_2] [i_2] = max((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) var_11)), (arr_9 [i_1 + 2] [i_2] [i_4] [i_5 - 3]))));
                        arr_18 [10U] [i_2] [19LL] [i_5 - 1] = ((/* implicit */short) var_4);
                    }
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_22 [i_2] [i_2] [i_6] [i_6] [i_1] = 3501431477274552064LL;
                        arr_23 [i_2] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                        var_24 *= ((/* implicit */unsigned long long int) arr_12 [i_4] [i_2 + 3] [i_2 + 2]);
                    }
                }
                var_25 = ((/* implicit */long long int) 2013265920);
            }
        } 
    } 
}
