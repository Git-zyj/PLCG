/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55805
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
    var_19 = ((/* implicit */unsigned char) var_6);
    var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) var_8)), (var_10)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_12)) : (-1014033843283219446LL)))) && (((/* implicit */_Bool) (+(-1848549242)))))))));
    var_21 = (short)9541;
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((-9223372036854775807LL - 1LL)))) * (((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((1715845153U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)12288))))) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0])))))))))));
        arr_5 [6ULL] [i_0] = ((/* implicit */unsigned int) max((min(((~(15394639039241578597ULL))), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (min((-3883808728384492308LL), (((/* implicit */long long int) 3709983938U)))))))));
        var_23 = ((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 3709983959U))) ? (((/* implicit */int) max((var_8), (var_8)))) : (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))))));
    }
}
