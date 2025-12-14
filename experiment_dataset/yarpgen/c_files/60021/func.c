/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60021
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
    var_15 |= ((/* implicit */unsigned char) ((((var_11) / (min((3125643711157955053LL), (var_8))))) / (min((((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)250)), (var_3)))), (min((((/* implicit */long long int) (unsigned char)255)), (var_8)))))));
    var_16 = ((/* implicit */long long int) min(((unsigned char)23), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (191500188U))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = 899111244;
        var_17 += ((/* implicit */int) ((_Bool) (_Bool)1));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)244))))) && ((((_Bool)1) || (arr_1 [i_0]))));
    }
    var_19 = ((/* implicit */unsigned long long int) 191500188U);
}
