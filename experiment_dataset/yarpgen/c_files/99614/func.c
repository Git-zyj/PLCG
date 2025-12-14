/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99614
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-256587249)))) ? (arr_1 [i_0 + 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6909)))));
        arr_5 [6LL] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)27218))));
    }
    var_10 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
    var_11 = ((/* implicit */short) (signed char)86);
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) < (((/* implicit */int) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (var_4)));
}
