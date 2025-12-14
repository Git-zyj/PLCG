/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82295
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
    var_19 -= ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16152))) : (var_8));
    var_20 = ((((/* implicit */_Bool) min((((((/* implicit */int) (short)-3985)) * (((/* implicit */int) (_Bool)0)))), (min((var_12), (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) -1889562045)) : (var_13));
    var_21 += ((/* implicit */unsigned char) var_0);
    var_22 = ((/* implicit */signed char) ((var_7) << (((((/* implicit */int) var_2)) - (103)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 0U)) ? (min((((/* implicit */long long int) (short)-4165)), (1471204347814271407LL))) : (((/* implicit */long long int) 77692585)))), (((/* implicit */long long int) (_Bool)1))));
        arr_2 [i_0] [(short)19] = ((/* implicit */unsigned long long int) var_4);
        var_24 = ((/* implicit */unsigned short) max((((((var_1) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)26307))))) | (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (_Bool)1))));
    }
}
