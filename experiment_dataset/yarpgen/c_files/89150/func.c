/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89150
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
    var_18 = ((/* implicit */signed char) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? ((-(((/* implicit */int) (signed char)-71)))) : (((/* implicit */int) (signed char)82))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (-2455439102532002717LL) : (-3296205758883965850LL))))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5054108963256687397ULL)) ? ((((!(((/* implicit */_Bool) -9223372036854775798LL)))) ? (((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned long long int) 9223372036854775802LL)))) : (var_5))) : (var_17)));
}
