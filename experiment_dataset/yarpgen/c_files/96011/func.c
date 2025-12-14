/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96011
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_16 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) var_13))) && (((/* implicit */_Bool) arr_2 [(unsigned short)16])))) ? ((+(((/* implicit */int) min(((unsigned short)16630), ((unsigned short)2)))))) : ((~(((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255))))))));
        var_17 = ((/* implicit */unsigned long long int) min((((short) ((int) (unsigned char)250))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
    }
    for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        var_18 = arr_4 [i_1];
        var_19 = ((/* implicit */short) ((long long int) min((((((/* implicit */_Bool) var_1)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (var_0)))))));
        var_20 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (_Bool)1)))))) * ((-(arr_4 [i_1]))))) * (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) && ((!(((/* implicit */_Bool) var_7))))))))));
        var_21 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_12)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((int) (unsigned char)5)) >= (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) arr_3 [i_2] [i_2]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_2] [0])), (var_6)))) : (((var_11) ^ (((/* implicit */int) (_Bool)1))))))));
        var_22 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [21LL] [i_2])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) < (var_4))))));
        var_23 = ((/* implicit */long long int) (_Bool)1);
    }
    var_24 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 3218898073300819687ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) 1234377291))))), (var_10))))));
    var_25 = ((/* implicit */unsigned char) var_13);
}
