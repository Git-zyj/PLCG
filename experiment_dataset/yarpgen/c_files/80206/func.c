/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80206
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
    var_20 = ((/* implicit */short) (-((~(262080)))));
    var_21 = ((/* implicit */int) var_18);
    var_22 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_23 = ((/* implicit */short) (_Bool)1);
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) (signed char)3)))) : (((/* implicit */int) ((_Bool) arr_0 [i_0]))))) < (((/* implicit */int) var_2)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (~(arr_2 [i_0])));
        var_25 ^= ((/* implicit */_Bool) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))), ((+(((/* implicit */int) (signed char)-3))))));
    }
}
