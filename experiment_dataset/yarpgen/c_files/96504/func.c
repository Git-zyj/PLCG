/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96504
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
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0 - 2] [(unsigned short)0] [i_0] = ((signed char) min((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (14895550139442490427ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)19385)))))));
                    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 983821006U)))))));
                }
                for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_14 = min((((((/* implicit */_Bool) 1073725440ULL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_1] [15LL] [i_0])));
                    var_15 &= min((((((/* implicit */int) arr_3 [i_0 - 2] [i_0] [i_3])) * (((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 1])))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0 - 1] [i_0])) ? (8388604ULL) : (18446744073709551615ULL))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0 - 2] [i_1] [i_3]) ? (((/* implicit */int) arr_4 [i_3] [i_1] [i_3] [i_1])) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_1] [i_0]))))) ? (((((arr_8 [(signed char)9] [(signed char)9] [(signed char)9]) && (((/* implicit */_Bool) arr_9 [i_1] [i_0 - 2])))) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-96)))))) : (((/* implicit */int) (signed char)-113)))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (9003523639169383417ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))))));
                }
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((_Bool) (+(((((/* implicit */_Bool) 2112412061U)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (short)-12084))))))))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2112412061U))) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 1])) ^ (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-20978)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(17944052214743782749ULL)))));
    var_19 &= ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))));
}
