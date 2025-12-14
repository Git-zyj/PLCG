/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99242
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned int) var_7);
        var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) var_7))), (((((18446744073709551598ULL) + (((/* implicit */unsigned long long int) 883228422U)))) + (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) (unsigned short)65516)))))))));
    }
    var_15 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned int) max((var_10), (((/* implicit */int) var_0))))) / (((var_6) >> (((var_6) - (399921735U))))))) / (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), (max((var_6), (((/* implicit */unsigned int) var_1))))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((13448913675505320000ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))), (((((/* implicit */unsigned long long int) (~(var_5)))) & (((unsigned long long int) var_5)))))))));
}
