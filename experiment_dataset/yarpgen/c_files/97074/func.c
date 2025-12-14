/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97074
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        var_14 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0 - 2])))) ? (((/* implicit */unsigned long long int) min((arr_0 [i_0 - 2]), (((/* implicit */unsigned int) arr_1 [i_0 - 2]))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0 - 3])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) : (2804588114259071166ULL)))))));
        var_15 = ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (var_3)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (arr_0 [i_0]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_4)) : (3683473715U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (var_7) : (2013708146U)))) ? (arr_0 [i_0 - 1]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [22ULL]))) : (arr_0 [i_0]))))));
    }
    var_16 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), ((unsigned short)49152)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)112))))) : (((((/* implicit */unsigned long long int) var_1)) & (15672046252620439404ULL)))))));
    var_17 *= ((((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */int) (_Bool)1))))) ? (var_6) : (((/* implicit */unsigned long long int) 2759745851U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
}
