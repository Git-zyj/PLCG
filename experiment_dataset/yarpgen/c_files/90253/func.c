/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90253
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) var_7))))) ? ((-(min((((/* implicit */unsigned int) (short)-25005)), (var_11))))) : (max((((/* implicit */unsigned int) max(((unsigned char)140), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))))), (((unsigned int) arr_2 [i_0] [i_0]))))));
        var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned short) arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) (short)-25005)) + (25026)))))) : (var_12)))));
        var_19 = ((/* implicit */unsigned long long int) (unsigned char)134);
    }
    var_20 = ((/* implicit */_Bool) ((long long int) max((max((var_6), (((/* implicit */unsigned long long int) (unsigned char)158)))), (((/* implicit */unsigned long long int) (unsigned char)61)))));
}
