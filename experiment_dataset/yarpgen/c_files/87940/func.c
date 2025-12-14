/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87940
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)20889)))));
        var_15 = ((/* implicit */unsigned short) (((+(arr_1 [i_0]))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-34)))))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (signed char)119)) ? (0LL) : (-16LL))), (((var_9) >> (((3789058212047988275ULL) - (3789058212047988245ULL))))))) > (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)249)))))));
}
