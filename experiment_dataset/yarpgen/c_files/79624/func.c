/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79624
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
    var_11 = ((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)48)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] [(short)4] = ((/* implicit */long long int) arr_3 [i_0]);
        arr_5 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)48)) || (((/* implicit */_Bool) (unsigned short)32407)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_7 [i_0] = ((/* implicit */long long int) var_1);
    }
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)30)), ((((~(((/* implicit */int) (unsigned short)33141)))) - (((/* implicit */int) var_10))))));
}
