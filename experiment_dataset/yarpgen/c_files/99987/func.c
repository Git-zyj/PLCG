/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99987
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
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        arr_2 [(short)3] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) arr_0 [i_0 + 2]))));
        var_11 = ((/* implicit */_Bool) (short)(-32767 - 1));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
    }
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) min((var_8), (((/* implicit */signed char) var_7)))))))) < (var_9)));
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((((/* implicit */int) (short)2047)), (var_2)))))) : (((unsigned int) var_1))));
}
