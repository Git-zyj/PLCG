/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74325
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
    var_19 = ((/* implicit */unsigned short) var_1);
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_18))))) < (max((((/* implicit */unsigned long long int) 666254692U)), (var_5))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0 - 1]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 3]))) ? (max((arr_0 [i_0 + 3]), (arr_0 [i_0 + 3]))) : (max((((((/* implicit */unsigned long long int) -3364853763755842869LL)) * (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((-3364853763755842853LL) / (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))), (((0ULL) * (arr_0 [i_1])))))) ? (((/* implicit */unsigned long long int) max((3628712603U), (601877609U)))) : (18446744073709551593ULL)));
        arr_5 [(short)17] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 2405411189U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16)))))) ? (arr_3 [i_1]) : (max((((/* implicit */unsigned int) (short)32751)), (4257177575U))));
    }
}
