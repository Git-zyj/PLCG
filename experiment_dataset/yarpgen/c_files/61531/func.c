/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61531
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) (~(min((var_2), (((/* implicit */unsigned long long int) var_6))))));
        var_12 *= (short)32767;
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 13042708118466168678ULL)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    var_13 *= ((_Bool) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (var_1))))));
}
