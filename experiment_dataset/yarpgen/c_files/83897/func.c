/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83897
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
    var_15 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = (_Bool)1;
        var_16 = (-(((/* implicit */int) arr_0 [i_0] [i_0])));
        var_17 = ((/* implicit */unsigned short) var_14);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_7 [i_1] = (short)30723;
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (((_Bool)0) ? (((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-49))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (unsigned char)249))));
        var_19 |= ((/* implicit */signed char) (unsigned char)15);
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25622))), (((/* implicit */unsigned short) (short)1148))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)50)), ((short)-30354))))) : (((-1LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) -570822312)) ? (((/* implicit */int) var_12)) : (var_8))))))));
}
