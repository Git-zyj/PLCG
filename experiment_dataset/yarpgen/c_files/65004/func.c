/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65004
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
    var_20 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)24))))), (var_13))), (max((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((var_6) < (var_6))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)65535))))))) : ((-(max((((/* implicit */unsigned long long int) arr_0 [i_0])), (9007199254740991ULL))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)29773)) ? (((/* implicit */int) (unsigned short)35762)) : (((/* implicit */int) (unsigned short)35763))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) min(((((((+(-9044340484516758259LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)20590)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 9044340484516758248LL)) ? (((/* implicit */int) (unsigned short)35762)) : (((/* implicit */int) (unsigned short)29773)))))));
        var_21 += ((/* implicit */signed char) min((max((min((((/* implicit */int) arr_7 [i_1])), (-1))), (((/* implicit */int) arr_7 [i_1 - 1])))), (((((_Bool) arr_5 [i_1])) ? ((+(((/* implicit */int) (unsigned char)48)))) : ((+(((/* implicit */int) var_7))))))));
        arr_9 [i_1] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) min((9044340484516758259LL), (((/* implicit */long long int) (short)-653))))) - (arr_5 [i_1 + 1]))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1 - 1]))))) : (18446744073709551615ULL)))));
    }
    var_22 = ((/* implicit */int) var_13);
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35762)) ? (18437736874454810643ULL) : (((/* implicit */unsigned long long int) 2623877160866811425LL))));
}
