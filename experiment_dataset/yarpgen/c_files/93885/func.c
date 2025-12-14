/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93885
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */long long int) min(((~(((/* implicit */int) (short)7)))), (var_3)))) & (var_9))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] &= (_Bool)1;
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */short) var_12))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))))) : (((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
                arr_5 [18] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((arr_1 [i_0]), (arr_1 [i_1])))) | (((var_6) >> (((((/* implicit */int) ((short) (signed char)125))) - (114)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    var_21 = ((/* implicit */signed char) ((max((((unsigned long long int) arr_0 [i_0])), (((5353406877305385914ULL) << (((var_9) + (5511517610337878579LL))))))) << ((((~(((unsigned long long int) 4294967283U)))) - (18446744069414584326ULL)))));
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) max((var_2), (((/* implicit */short) var_16))))) : (((/* implicit */int) (unsigned char)252)))) - ((+(((/* implicit */int) min((var_13), (((/* implicit */short) (_Bool)1)))))))));
                    var_23 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) (-(var_15)))) - (arr_2 [i_2 + 3] [i_2 + 1] [i_2 - 1]))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (signed char)121))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))))))))));
                }
                var_25 = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((var_5) ^ (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)113)) | (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2700977004247406532ULL)))));
    var_27 = ((/* implicit */signed char) var_15);
}
