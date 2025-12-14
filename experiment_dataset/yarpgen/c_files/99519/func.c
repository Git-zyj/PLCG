/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99519
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (var_4)))) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) var_9))))))) ? (((((/* implicit */_Bool) ((long long int) var_13))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)))) ? (((((/* implicit */_Bool) var_7)) ? (var_4) : (var_9))) : (((/* implicit */int) var_8)))))));
    var_16 = ((/* implicit */int) ((short) var_1));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_10) : (((/* implicit */int) arr_1 [i_0])))));
        var_18 = ((/* implicit */unsigned int) ((unsigned short) ((int) ((signed char) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) ((long long int) arr_3 [i_1]));
        var_20 = ((/* implicit */unsigned short) ((unsigned char) var_2));
    }
}
