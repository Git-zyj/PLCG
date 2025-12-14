/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67911
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
    var_12 = ((/* implicit */unsigned long long int) -1025431003);
    var_13 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (min((var_8), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-54)), (var_1))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_7))))))) : (((((88241185U) >> (((var_8) - (14510214187772093049ULL))))) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_3)), ((short)1023)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (88241185U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (-(var_11)));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_0 [i_0]) + (2147483647))) >> (((var_5) + (2088694615)))))) ? (((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-6494))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-54), (((/* implicit */signed char) (_Bool)1)))))) >= (((((/* implicit */_Bool) (unsigned char)174)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6494)))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
    }
    var_17 = ((/* implicit */unsigned int) var_11);
}
