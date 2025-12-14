/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68213
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
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))) : (var_11)));
    var_20 *= ((/* implicit */signed char) max((((/* implicit */short) var_15)), ((short)32752)));
    var_21 ^= ((/* implicit */unsigned char) min((min((((/* implicit */int) var_15)), (var_10))), (min((((/* implicit */int) max(((short)32752), (((/* implicit */short) (signed char)-126))))), (min((-1108140005), (((/* implicit */int) (short)15657))))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (signed char)-69);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (11115845995242626036ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */int) (short)32764)) ^ (((/* implicit */int) var_15)))) : ((-(((/* implicit */int) (_Bool)0))))))) > (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0 - 3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(17824022838166935667ULL)))) ? (((((/* implicit */_Bool) 286658044U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7546))) : (622721235542615972ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) : (((((/* implicit */_Bool) 4008309251U)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))))))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [7])), (((((/* implicit */int) (unsigned char)15)) ^ (((/* implicit */int) (signed char)0))))))) ? (max((((/* implicit */unsigned long long int) (short)-5077)), (910182238506582187ULL))) : (((/* implicit */unsigned long long int) (+((+(arr_6 [i_1])))))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) var_13)), (arr_5 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1])) >> (((((/* implicit */int) var_0)) + (47)))))) : (((arr_5 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))))))));
        var_24 = ((/* implicit */unsigned char) arr_6 [i_1]);
    }
}
