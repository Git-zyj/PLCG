/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95107
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
    var_12 &= ((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)));
    var_13 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) min((var_9), (var_6)))) + (106))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 2] [i_1] = ((/* implicit */_Bool) var_6);
                var_14 = ((/* implicit */signed char) min((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])), (max((((/* implicit */int) arr_2 [(signed char)9] [i_0 - 1] [i_1])), ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0 + 2]))))))));
                var_15 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) + (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
