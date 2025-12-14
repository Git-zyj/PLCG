/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84714
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
    var_14 = ((/* implicit */unsigned char) (-(max((max((var_11), (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_5)) ? (var_11) : (var_11)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_4 [16U] |= ((/* implicit */signed char) (((+(((/* implicit */int) arr_0 [i_0])))) >> (((arr_1 [(unsigned char)2]) + (494591722)))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-1))))), (var_13)))));
}
