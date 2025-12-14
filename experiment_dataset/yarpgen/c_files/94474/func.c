/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94474
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (~(var_7)));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (3239155728242019863ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [12LL]))))), (((/* implicit */unsigned long long int) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))))))));
    }
    var_22 = var_5;
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_14))));
}
