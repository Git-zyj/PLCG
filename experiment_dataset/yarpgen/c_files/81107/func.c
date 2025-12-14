/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81107
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
    var_19 = ((/* implicit */unsigned int) -2564873128004160515LL);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) ((arr_2 [i_0]) | (9223372036854775807LL))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned char) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-15337)))))));
        arr_5 [(short)15] = min((((/* implicit */int) min((((/* implicit */unsigned short) (short)15311)), ((unsigned short)61987)))), (((45814656) ^ (((/* implicit */int) (unsigned char)10)))));
        arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (max((((/* implicit */unsigned long long int) var_0)), (17053297439724466793ULL))))))) : (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : (((/* implicit */long long int) max((arr_1 [(unsigned char)15] [(unsigned char)15]), (((/* implicit */int) (short)-28093)))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
}
