/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57559
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
    var_17 *= ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_16);
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((int) 521411704U))))) && (((/* implicit */_Bool) var_16))));
    }
    var_18 = ((/* implicit */unsigned char) ((_Bool) (+(((((/* implicit */_Bool) 9223372036854775789LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) : (-9223372036854775789LL))))));
    var_19 = ((/* implicit */int) (!(var_14)));
}
