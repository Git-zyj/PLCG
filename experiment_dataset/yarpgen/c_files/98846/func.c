/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98846
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
    var_11 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_6)))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_9))));
    var_13 = ((/* implicit */long long int) ((_Bool) 16366755753495286038ULL));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_6);
        arr_3 [i_0] [13LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -483624545)), (var_9)))) : (((((/* implicit */_Bool) 483624575)) ? (1040420046858017483ULL) : (((/* implicit */unsigned long long int) -483624545))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 6352362431819750210LL)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) arr_0 [18ULL])) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) 2208496180287813575ULL)) ? (((/* implicit */unsigned long long int) -483624574)) : (27ULL))), (max((((/* implicit */unsigned long long int) ((long long int) (short)32753))), (var_4)))));
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(short)1]))));
    }
}
