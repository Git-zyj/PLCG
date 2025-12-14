/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72644
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (signed char)-75))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(arr_0 [i_0])));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))));
    }
    var_16 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (var_4)))))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) var_8)))))))));
    var_17 -= ((/* implicit */unsigned int) var_5);
}
