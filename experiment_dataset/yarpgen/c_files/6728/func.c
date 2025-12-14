/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6728
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((var_8), (var_9)))), (max((max((((/* implicit */long long int) (unsigned short)41644)), (7536612363183361846LL))), (((/* implicit */long long int) var_10))))));
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_6)), (var_9)));
    var_14 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)33786)), (min((((/* implicit */long long int) var_8)), (var_5)))));
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) var_10)), (var_7)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_8)), (1059504775536872325ULL))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0 + 3] [i_0 + 3])), (var_4))))));
        var_17 = ((/* implicit */signed char) var_7);
        var_18 = ((/* implicit */_Bool) (signed char)-29);
        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 2305843009213693951LL)) && (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]))))), (min(((unsigned char)138), (arr_0 [i_0 - 1] [i_0 + 3])))));
    }
}
