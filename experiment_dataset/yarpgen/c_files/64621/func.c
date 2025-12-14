/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64621
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) 17885830775669298547ULL))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    var_15 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (short)760)) ? (arr_2 [i_0 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 560913298040253069ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-761))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_16 |= ((/* implicit */signed char) ((int) (short)-767));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_17 = ((/* implicit */int) var_6);
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) (+(3608085625U)))) : ((+(arr_4 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (((unsigned long long int) arr_2 [i_1])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_4 [i_1]))))))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)))) ? ((+(((unsigned long long int) arr_1 [i_1])))) : (((/* implicit */unsigned long long int) ((long long int) ((short) arr_5 [i_1] [i_1])))));
    }
}
