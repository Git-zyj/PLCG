/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92573
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
    var_14 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (max((var_2), (var_2))))));
    var_15 -= ((/* implicit */unsigned char) ((_Bool) var_5));
    var_16 += ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) != (var_5)))), (var_4))))) : (var_6)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))) * (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3])))))));
        var_17 = ((/* implicit */int) var_10);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_4))));
        var_19 = ((/* implicit */unsigned int) var_5);
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6383628835540524816LL), (((/* implicit */long long int) (short)3911))))) ? ((+(arr_0 [i_1]))) : (arr_0 [i_1 + 3])))) ? (((long long int) var_2)) : ((-(6383628835540524813LL)))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6383628835540524816LL)) ? (-507872118134601062LL) : (((/* implicit */long long int) 4294967295U))))) != (((((/* implicit */_Bool) arr_1 [(short)3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) : (var_9)))))))));
    }
}
