/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68359
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) arr_3 [i_0 - 2])) : (var_8)))) ? ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (11913772232673059888ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_1 [9ULL]))))), (var_5)))))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((((/* implicit */int) (short)-13925)) != (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_0 [i_0 - 2] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_7 [i_1] |= ((/* implicit */_Bool) ((((int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1960696868U)) : (arr_6 [i_1] [i_1])))) ^ (((/* implicit */int) (!(var_6))))));
        var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_5 [i_1]), (arr_5 [i_1])))), (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) || (((/* implicit */_Bool) (unsigned char)230))));
    }
    var_15 = ((/* implicit */_Bool) ((unsigned short) var_6));
    var_16 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2))))), (min((var_4), (((/* implicit */long long int) var_5))))))));
}
