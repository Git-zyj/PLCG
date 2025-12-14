/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71968
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0 + 2])) < (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-24613))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (450936965U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36526)))))))))) : (arr_0 [1ULL])));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1] [i_2])) < (((/* implicit */int) arr_3 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 450936962U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))) : (727665474U)))) : (max((15524781936751182343ULL), (((/* implicit */unsigned long long int) (signed char)104))))))) ? (((/* implicit */int) max((min((((/* implicit */short) (signed char)-105)), (arr_3 [i_0] [i_2]))), (((/* implicit */short) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))))));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_17)) < ((~(2081947446U)))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (min((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1])))), ((-(((/* implicit */int) (unsigned short)65517))))))));
                    var_21 *= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)22] [i_1])))))));
                }
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) < (727665483U))));
                var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2213019849U)))) ? (arr_9 [i_0 - 1] [i_0] [i_0 - 1]) : (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [16] [16])) : (((/* implicit */int) var_15))))))) ? (((/* implicit */int) arr_6 [(unsigned char)14] [i_1])) : (arr_4 [(_Bool)1])));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 3567301819U)) : (var_13)))) ? ((((_Bool)0) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15)))))));
}
