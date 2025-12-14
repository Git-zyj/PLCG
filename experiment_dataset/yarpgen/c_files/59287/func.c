/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59287
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) var_19)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((unsigned int) ((var_16) > (((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) ((short) var_13))) ? (((arr_2 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))));
        arr_7 [i_1] = min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)90))))), (min((((/* implicit */long long int) arr_2 [i_1])), (var_3))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_22 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_2] [i_2]), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) >= (arr_0 [i_2] [i_2]))))) : (((arr_1 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8226242543653688651LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_5 [i_2] [i_2]) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
        var_23 |= ((/* implicit */unsigned long long int) max(((~(min((((/* implicit */long long int) (short)-19258)), (8226242543653688659LL))))), (((/* implicit */long long int) var_2))));
    }
    var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned char)219))))));
    var_25 = ((/* implicit */_Bool) max((((var_15) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-15)) : (((/* implicit */int) (unsigned short)5)))) : ((~(((/* implicit */int) var_17))))))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) var_10))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
}
