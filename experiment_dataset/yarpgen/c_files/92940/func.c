/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92940
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_0 [6ULL] [i_0]))));
        var_13 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */int) var_4);
    }
    var_14 += ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (((var_8) - (var_0))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)242)) + (((/* implicit */int) var_6))))) + (((unsigned long long int) 867506278479618333LL))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) var_2)), (max((0ULL), (((/* implicit */unsigned long long int) 2097148LL)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)45095)))))));
}
