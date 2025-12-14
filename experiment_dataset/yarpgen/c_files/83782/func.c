/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83782
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
    var_16 = ((/* implicit */unsigned char) 8351733419582317102LL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_17 = ((/* implicit */short) max((arr_0 [i_0]), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (signed char)-120))))) : (((((/* implicit */unsigned int) var_13)) * (2731073707U)))))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned char) arr_1 [4] [4]);
    }
    var_18 = ((/* implicit */unsigned long long int) var_7);
    var_19 ^= ((/* implicit */_Bool) ((var_2) + (((/* implicit */long long int) ((((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned short)63)))) + (((/* implicit */int) (signed char)120)))))));
}
