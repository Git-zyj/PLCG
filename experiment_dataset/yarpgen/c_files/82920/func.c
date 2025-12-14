/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82920
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
    var_14 = ((/* implicit */unsigned short) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) / (var_6))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (short)32767))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_3);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6LL])) ? (arr_0 [(unsigned char)18]) : (8603889202863902050ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 2])) >> (((((/* implicit */int) arr_1 [i_0 - 2])) - (42)))))))))));
    }
    for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 2])) ? (arr_4 [i_1 + 1] [i_1 - 2]) : (((/* implicit */int) (unsigned char)205)))) & ((+((~(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
        var_18 = ((/* implicit */int) min((((/* implicit */long long int) var_5)), ((((!(((/* implicit */_Bool) (short)-32754)))) ? (((/* implicit */long long int) arr_4 [i_1] [i_1 + 2])) : (((((/* implicit */_Bool) 3817272936518026682ULL)) ? (((/* implicit */long long int) var_6)) : (-5652031646118923184LL)))))));
        arr_5 [(unsigned char)6] &= ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_3 [i_1 - 1] [i_1 + 2]), (arr_3 [i_1 - 3] [i_1 - 2])))), (((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2])) : (2147483647)))));
    }
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)40653)) : (((/* implicit */int) (short)-16624)))), (((/* implicit */int) ((2037947121) == (((/* implicit */int) var_5))))))) / (((int) ((((/* implicit */_Bool) (unsigned short)1509)) ? (710599313103200677ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13574)))))))))));
}
