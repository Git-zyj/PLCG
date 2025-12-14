/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79007
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_10 -= ((/* implicit */unsigned short) var_2);
        arr_2 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
    }
    var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) - (var_2)));
}
