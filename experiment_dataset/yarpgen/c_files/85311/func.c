/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85311
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
    var_13 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) (signed char)-94))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_6)) : (3011367542021427766LL)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 774221974)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-97))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((~(2338226804U))))))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((int) var_8)))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) ((short) 285710543U)))))) - (((/* implicit */int) min((var_3), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_11))))))))));
    var_16 -= ((/* implicit */signed char) (~(285710559U)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 *= ((/* implicit */unsigned int) var_10);
        var_18 ^= ((/* implicit */unsigned int) min((var_0), (((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (unsigned short)712))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) ((long long int) arr_3 [i_1 + 1]));
        arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1 - 1])) << (((((/* implicit */int) arr_3 [i_1 - 1])) - (86)))));
    }
}
