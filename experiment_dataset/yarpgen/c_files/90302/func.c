/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90302
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
    var_10 *= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (max((2106756435U), (2188210861U))))))));
    var_11 = ((/* implicit */unsigned char) max((var_2), (var_4)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 |= ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (2188210861U)))), (((((/* implicit */_Bool) 387147417U)) ? (6099290645668365635LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [14U] [i_1]))))))) - (((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (2188210860U))))));
                var_13 += max((max((max((((/* implicit */unsigned int) var_8)), (3865183143U))), ((~(2188210862U))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (!((_Bool)1))))))));
                var_14 = (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2188210861U))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
}
