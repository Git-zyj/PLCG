/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66617
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
    var_16 = ((/* implicit */unsigned int) (short)32765);
    var_17 = ((/* implicit */unsigned long long int) -1);
    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 1073741824)) ? (((/* implicit */int) (short)15360)) : (-6))) : (((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) (short)24)) : (((/* implicit */int) (_Bool)1))))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((var_10), (((/* implicit */int) (short)-3))))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25))) : (var_7)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((var_11) ? (((/* implicit */int) (short)-3)) : (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (33554431)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) -2147483646)) : (arr_0 [i_0 - 2] [i_0 - 1])));
        arr_5 [6LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [3LL])) ? (var_10) : (var_10)));
        arr_6 [i_0 - 4] [i_0] = ((/* implicit */signed char) (~(4294967295U)));
        arr_7 [(short)13] [(unsigned char)9] = ((/* implicit */signed char) (short)25);
    }
}
