/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83999
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [8LL])) || (((/* implicit */_Bool) arr_1 [14LL]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1535952554222350815LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6300246434369125018LL)));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9153318424291031177LL)))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) | (arr_1 [i_0])))));
    }
    var_20 -= ((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (var_9))))) ^ (min((((/* implicit */long long int) var_0)), (var_1))))))));
    var_21 *= ((/* implicit */unsigned int) ((((var_16) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_12)) : (var_16)))) || (((/* implicit */_Bool) var_17))))) - (1)))));
}
