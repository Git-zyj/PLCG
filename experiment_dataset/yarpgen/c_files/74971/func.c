/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74971
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) 83162908U))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (max((83162908U), (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8))))))) : (arr_0 [i_0])));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (max((((/* implicit */int) (short)-7022)), (1507060067)))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) -4316286424442896755LL))));
        var_18 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (max((((/* implicit */unsigned int) (short)11472)), (arr_5 [i_1] [i_1])))))));
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1507060044) & (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)117)) ? (-1507060095) : (((/* implicit */int) (short)-926))))) : (-8541594694160237247LL)))) ? (var_2) : (((/* implicit */unsigned long long int) (~(((arr_4 [i_1] [i_1]) ? (((/* implicit */int) var_3)) : (var_9))))))));
    }
    var_19 *= ((/* implicit */unsigned int) (unsigned short)4323);
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_8))));
}
