/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57252
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned char)0))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) 2825381515U)) : (var_17)))) ? (((long long int) (unsigned char)7)) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    var_19 = ((/* implicit */_Bool) (short)-23266);
    var_20 = ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) (unsigned short)22079)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0]))), (((/* implicit */unsigned int) ((_Bool) var_3)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((signed char) max((0ULL), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_13)), (var_8)))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        arr_9 [i_1] |= ((/* implicit */unsigned short) max((min((var_15), (((/* implicit */unsigned long long int) arr_5 [i_1])))), (((/* implicit */unsigned long long int) min((min(((unsigned char)89), (((/* implicit */unsigned char) arr_1 [i_1] [i_1])))), (((/* implicit */unsigned char) min((arr_0 [i_1]), ((_Bool)1)))))))));
    }
}
