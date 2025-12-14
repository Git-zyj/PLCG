/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68270
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), (var_9))))));
        var_17 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) var_9))))), (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) var_11))))));
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) max(((unsigned short)21206), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)84)))))))));
    }
    var_19 = max((((/* implicit */unsigned short) var_12)), (var_0));
    var_20 = (unsigned char)171;
}
