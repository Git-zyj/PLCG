/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75539
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
    var_10 = ((/* implicit */_Bool) (short)-5070);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))))) ? (((unsigned int) arr_1 [i_0 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-5063)), (min((var_3), (((/* implicit */unsigned short) (short)5097))))))))));
        arr_3 [i_0] [i_0 + 1] = (+(((/* implicit */int) ((var_4) && (((/* implicit */_Bool) arr_0 [i_0 + 1]))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_7 [i_1] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1])) && (var_1))) ? ((+(arr_6 [i_1 + 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3437)))))));
        arr_8 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_6 [i_1] [i_1 + 1])))))) ? (((((/* implicit */_Bool) ((1645278290U) >> (((((/* implicit */int) (short)-5058)) + (5088)))))) ? (((/* implicit */unsigned int) var_6)) : ((-(var_9))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1 + 1])))))));
        arr_9 [i_1] = (((~(((/* implicit */int) ((short) var_6))))) | (((/* implicit */int) var_2)));
        arr_10 [i_1] = ((/* implicit */int) min((var_7), (((/* implicit */signed char) arr_1 [i_1]))));
        var_11 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)5063)) ? (((/* implicit */int) ((1133697665614476841ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_0 [9U])))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_1]))) : (((((/* implicit */int) (unsigned short)5749)) & (((/* implicit */int) arr_1 [i_1]))))))));
    }
}
