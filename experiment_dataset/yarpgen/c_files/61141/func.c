/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61141
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 += min((var_9), (((/* implicit */signed char) (_Bool)1)));
        var_14 += ((/* implicit */_Bool) -2041730060);
    }
    var_15 = (((~(((unsigned long long int) var_4)))) == (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((((/* implicit */_Bool) 323150888U)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) var_9)))) - (167)))))));
}
