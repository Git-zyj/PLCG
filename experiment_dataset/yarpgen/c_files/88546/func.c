/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88546
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_3);
        arr_3 [4] &= ((/* implicit */unsigned char) max((((arr_0 [i_0 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) << (((min((-696689440), (((/* implicit */int) arr_1 [4LL])))) + (696689447))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) != (((/* implicit */int) (unsigned char)240))))) != (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) var_6))))));
        var_18 += ((((arr_4 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) << (((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)43432)))) - (43407))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)253)) ^ (((/* implicit */int) arr_1 [i_1]))));
    }
    var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 321899182)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_0)) ? (-1699517669786443430LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (max((var_16), (((/* implicit */long long int) var_11))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_8 [i_3 + 1])))), ((!((_Bool)1)))));
                var_20 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)79)), (arr_5 [i_3] [i_3 + 2])))), (min((arr_11 [i_3] [i_3 + 2] [i_3 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3 + 2]))))));
                arr_13 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_10 [i_2] [i_3 - 1] [i_2])))))));
                var_21 ^= ((/* implicit */int) (~(((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10133)))))));
                arr_14 [i_3] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2193717414550812289LL)) > (arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_11 [i_3 + 1] [i_3 - 1] [i_3 - 1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((1320433188U) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))));
}
