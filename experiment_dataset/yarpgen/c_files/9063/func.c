/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9063
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
    var_18 = ((/* implicit */long long int) 11814461022567944511ULL);
    var_19 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-(0LL))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_1)), (arr_3 [i_0 - 1]))))) : ((-(var_16))))))));
        var_21 |= ((/* implicit */unsigned long long int) var_14);
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) >= (5313966329869522192LL))), ((!(((/* implicit */_Bool) var_1)))))))) : (((((/* implicit */_Bool) min((arr_3 [1U]), (arr_3 [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (((long long int) arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_23 &= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 2]))) % (var_17))) / (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 + 1])) << (((arr_6 [i_1 + 1]) - (6927816566285439160LL))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((int) ((signed char) var_6))))));
    }
    var_25 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)42526))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))) : (var_15)))))));
}
