/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78057
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
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_13)) + (2147483647))) << ((((((-(((/* implicit */int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) + (24))) - (23)))));
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16351)) ? (((/* implicit */int) (short)-16344)) : (((/* implicit */int) (short)-16352)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)29384)))) + (((arr_2 [i_0]) / (arr_2 [i_0])))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26094)) != (((/* implicit */int) (signed char)41)))))));
        arr_4 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (short)-26982)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)16351)))))), (((/* implicit */int) (unsigned short)39441))));
    }
}
