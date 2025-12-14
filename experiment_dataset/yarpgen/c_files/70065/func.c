/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70065
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
    var_17 |= ((/* implicit */signed char) (((~(var_14))) << (min((4U), (((/* implicit */unsigned int) var_12))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) min((var_9), ((_Bool)0)))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned char)102), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_7))))))) : (((unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)14187)) - (14168))))))));
    }
    var_20 = ((/* implicit */int) max((((/* implicit */long long int) var_14)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 4161536U))))), (-1105356894700193904LL)))));
}
