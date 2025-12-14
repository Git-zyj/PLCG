/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75262
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((unsigned long long int) var_10)) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44)))))));
    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) (signed char)-50))))) ? (((((/* implicit */int) var_15)) - (var_7))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))));
    var_20 = ((/* implicit */signed char) var_1);
    var_21 = ((unsigned char) max((min((((/* implicit */unsigned long long int) var_12)), (576460752303423487ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2599015275U)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned long long int) (-((+(arr_2 [i_0] [i_0 - 1])))));
        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)113))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4071843280U))))) : (((((/* implicit */int) arr_0 [i_0 + 3])) & (((/* implicit */int) arr_0 [i_0 + 2]))))));
        var_24 &= ((/* implicit */unsigned long long int) ((unsigned short) (((_Bool)0) ? (-1LL) : (((/* implicit */long long int) 223124021U)))));
    }
}
