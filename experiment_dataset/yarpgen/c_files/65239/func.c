/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65239
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_11 -= ((/* implicit */_Bool) ((-6887908391390537187LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195)))));
        var_12 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (short)31918))))), (arr_1 [i_0]))) >= (((/* implicit */unsigned long long int) max((((arr_0 [i_0 + 2]) << (((((/* implicit */int) (unsigned char)70)) - (66))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) var_9))))))))));
    }
    var_13 |= var_2;
    var_14 = ((/* implicit */short) var_9);
}
