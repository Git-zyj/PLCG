/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85764
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) max(((short)32765), (((/* implicit */short) var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [14U]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_18);
    }
    var_20 = ((/* implicit */unsigned long long int) var_8);
    var_21 ^= ((/* implicit */signed char) var_10);
}
