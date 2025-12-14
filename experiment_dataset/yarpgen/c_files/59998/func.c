/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59998
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
    var_19 = ((/* implicit */_Bool) (short)-21181);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) 4223545595U)) : (4300603780629686738LL))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))) == (min((max((((/* implicit */long long int) var_10)), (4300603780629686740LL))), (arr_0 [i_0] [i_0])))));
        var_20 = ((((/* implicit */_Bool) (unsigned short)23912)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) : (arr_0 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) -4300603780629686740LL)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_22 -= ((/* implicit */short) ((unsigned int) (~(var_13))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_16)) / (arr_0 [i_1] [i_1 - 2]))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)23935)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) (unsigned char)212))));
    }
    var_25 = ((/* implicit */int) ((((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)40)))))) + (((((0U) << (((var_13) - (3301992782U))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15)))))));
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) var_14))));
    var_27 = ((/* implicit */long long int) var_2);
}
