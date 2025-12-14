/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60450
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
    for (long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) 4294967279U);
        arr_2 [i_0] [4LL] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)0])) ? (arr_1 [(short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80)))));
    }
    var_14 -= ((/* implicit */signed char) (~(((((long long int) var_0)) & (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((max((max((((/* implicit */unsigned long long int) 2147483647)), (17188950439890371633ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3710095177U)) ? (((/* implicit */unsigned int) -435744693)) : (3710095179U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3748267687U)) ? (584872137U) : (4294967295U)))))))));
    var_16 *= ((/* implicit */unsigned short) var_12);
}
