/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93558
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
    var_10 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)130))))), (max((((/* implicit */long long int) (unsigned char)254)), (var_7)))))));
    var_11 *= max((max((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4969))))), (((/* implicit */unsigned int) (signed char)106)))), (((/* implicit */unsigned int) 2147483647)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_12 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_0 [(unsigned short)4])) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)243))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0 + 1] [i_0 + 1]))))));
    }
    var_13 = var_4;
}
