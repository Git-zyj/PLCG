/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81998
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
    var_12 = ((/* implicit */int) min((var_6), (var_7)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_2)))) : ((+(((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) (unsigned short)19866)) ? (min((4080U), (((/* implicit */unsigned int) (short)20310)))) : (((/* implicit */unsigned int) ((int) (unsigned short)45693))))) : ((-(0U)))));
        var_13 -= ((/* implicit */unsigned short) var_6);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-32760))))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (short)-20301)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-20277))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 503316480U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)12241)) ? (-7149005678394147821LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19871)))))));
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */long long int) var_5)), (-5525070949818945650LL))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) - (6714740744239871123ULL)))) && (((_Bool) var_8)))))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)20310))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_1)) & (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)20301)), (var_5)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_2), (var_9)))))) : (((/* implicit */int) var_7)))))));
}
