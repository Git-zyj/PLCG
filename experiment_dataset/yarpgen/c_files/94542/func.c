/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94542
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))), (((/* implicit */unsigned long long int) max((-2117325608), (((/* implicit */int) var_3)))))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) 2117325607)) ? (((/* implicit */int) var_4)) : (var_0))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((var_8) ? (var_10) : (((/* implicit */long long int) -2117325631)))) - (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned char)102)))))))));
    var_13 = ((/* implicit */int) max((var_8), (var_6)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 14620690369654523045ULL)) ? (var_5) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_3 [i_0])))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((signed char)-49), (var_4)))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (552108413)));
        var_15 = ((/* implicit */int) 321906942892956437ULL);
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_8 [i_1] [3ULL] = ((/* implicit */unsigned char) 3826053704055028552ULL);
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) max((var_7), (((/* implicit */short) (_Bool)0))))) & (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [17])), (arr_3 [i_1])))) == (((/* implicit */int) arr_3 [i_1])))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14336)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (1692536261U)))) || (((/* implicit */_Bool) ((max((arr_0 [i_1] [i_1]), (arr_0 [3ULL] [4U]))) | (((/* implicit */int) arr_7 [i_1])))))));
        var_18 -= ((/* implicit */unsigned short) (((-(2117325607))) != ((+(((/* implicit */int) arr_6 [i_1] [i_1]))))));
    }
}
