/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76761
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_3 [7U] [7U] = ((/* implicit */unsigned int) 1ULL);
        arr_4 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_1 [6U]), (arr_0 [(_Bool)1]))))))) ? (((((/* implicit */_Bool) (-(var_3)))) ? (min((((/* implicit */unsigned int) arr_2 [6U] [i_0])), (1696239934U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_15))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (3030014261285583556LL))) >= (((((/* implicit */_Bool) (unsigned short)19930)) ? (-8475486351429657464LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))))))));
    }
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)154))))))), (4081325432U))))));
}
