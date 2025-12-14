/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59040
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
    var_20 ^= ((/* implicit */long long int) (((((((-(var_6))) + (9223372036854775807LL))) << (((((/* implicit */int) var_15)) - (123))))) >= (((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ ((~(((/* implicit */int) var_17)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (4611685949707911168LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-109))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) * (((var_14) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59026)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_10)))))) : (((((((/* implicit */int) var_19)) * (((/* implicit */int) var_1)))) * ((-(((/* implicit */int) var_9))))))));
    }
    var_21 = ((/* implicit */signed char) (((((~(((/* implicit */int) var_8)))) + (2147483647))) << (((((((/* implicit */int) var_1)) + (109))) - (5)))));
}
