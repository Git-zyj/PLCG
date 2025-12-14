/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56053
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
    var_18 = ((/* implicit */signed char) (((((~(((/* implicit */int) var_12)))) + (2147483647))) >> (((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1590538969U)))) ^ (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((var_14), (((/* implicit */long long int) ((_Bool) (_Bool)1)))));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                }
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_0 - 1] [i_1] [i_3] = ((/* implicit */_Bool) ((min((-5543527293598467321LL), (((/* implicit */long long int) (_Bool)1)))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))));
                    var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_0 + 2] [i_0 - 1])) && (((_Bool) min(((_Bool)1), ((_Bool)1))))));
                    var_20 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 + 2])) >= (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(signed char)20])))))))));
                }
                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3859978246U)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_6 [(signed char)8] [i_1]))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
                var_22 = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((-2001712517489554027LL) >= (-2001712517489554022LL)))), (7579841064541997298LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0 + 1])) + (((/* implicit */int) ((unsigned char) arr_7 [i_1]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_13))))))), (((max((2001712517489554033LL), (((/* implicit */long long int) var_1)))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)73))))))))));
    var_24 = ((/* implicit */signed char) ((((((/* implicit */long long int) (((_Bool)1) ? (434989049U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (var_9))))) | (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))), (var_9)))));
}
