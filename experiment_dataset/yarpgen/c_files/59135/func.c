/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59135
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
    var_11 = ((/* implicit */signed char) var_1);
    var_12 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [(short)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (unsigned short)42772)) ? (arr_1 [i_0]) : (arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    var_14 = ((/* implicit */unsigned short) ((((var_2) ? (((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) : (((2147483647) * (((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) min((var_10), (((/* implicit */short) var_0))))))))));
}
