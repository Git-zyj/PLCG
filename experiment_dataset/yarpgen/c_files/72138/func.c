/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72138
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
    var_14 = ((/* implicit */_Bool) var_2);
    var_15 = ((/* implicit */unsigned char) var_6);
    var_16 = ((/* implicit */unsigned short) ((int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45550))) : (var_2))) << ((((((~(((/* implicit */int) (unsigned short)16384)))) + (16441))) - (12))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45550)) / (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) -1207567548)) - (arr_1 [i_0 + 1])))));
        var_18 = ((/* implicit */_Bool) 0U);
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_0 - 1]) < (((/* implicit */long long int) 4071980670U))))) << (((((((/* implicit */_Bool) (-(739942477)))) ? (-1207567548) : (((/* implicit */int) (_Bool)1)))) + (1207567571)))));
    }
}
