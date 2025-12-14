/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73313
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
    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) (+((+(4294967295U))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) 16007905795616177130ULL);
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((-(((/* implicit */int) var_13)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (var_3))))))), (((int) min((((/* implicit */unsigned short) (signed char)-36)), ((unsigned short)11536))))));
    }
}
