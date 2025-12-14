/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70304
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) arr_0 [i_0])), (((long long int) (unsigned short)35610))))));
        var_14 &= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (unsigned short)29925)))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((min((((var_5) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8ULL]))) < (var_12)))))), (((((/* implicit */int) ((signed char) var_12))) * ((-(((/* implicit */int) arr_3 [i_1]))))))));
        var_16 = ((/* implicit */signed char) min((((((/* implicit */int) arr_3 [i_1])) & (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) var_7)))))), (((/* implicit */int) ((signed char) arr_4 [(unsigned short)6] [i_1])))));
        var_17 = ((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) max((arr_3 [i_1]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1] [i_1])) <= (2069297498)))))))));
    }
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(2069297498)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)15360))) : (max((max((((/* implicit */long long int) var_11)), (var_9))), (((/* implicit */long long int) (unsigned short)29426)))))))));
    var_19 -= ((/* implicit */_Bool) ((short) min((((((/* implicit */int) var_11)) * (((/* implicit */int) var_11)))), (((/* implicit */int) max(((unsigned char)246), ((unsigned char)168)))))));
    var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((((/* implicit */_Bool) var_4)) ? (140737488355320ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29902))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)-17321)) : (-1329729293)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(var_8)))), (((((/* implicit */int) var_7)) & (((/* implicit */int) var_6)))))))));
}
