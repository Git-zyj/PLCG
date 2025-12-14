/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84379
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */_Bool) (signed char)-95)) && (((/* implicit */_Bool) arr_2 [8U])))) ? (max((((/* implicit */unsigned int) (signed char)-95)), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)29)), (var_3)))))));
        var_14 = ((/* implicit */unsigned short) max((max((arr_1 [i_0]), (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 11481484700143588506ULL)))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))) : (((((/* implicit */_Bool) arr_6 [3LL])) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [21U]))))) : (var_4))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (signed char)-95))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        var_16 = arr_3 [i_2] [i_2];
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((max((((/* implicit */unsigned long long int) arr_0 [i_2 - 2] [i_2 + 1])), (((unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((signed char) arr_9 [i_2])))))));
    }
    var_18 = ((/* implicit */unsigned short) var_11);
    var_19 |= ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29721)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) var_7))))) & (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) var_13))))));
    var_20 = ((/* implicit */unsigned char) var_8);
}
