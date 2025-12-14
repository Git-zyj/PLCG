/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87495
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((2997096182U), ((-(2997096182U)))))), (min((max((((/* implicit */long long int) var_8)), (-4428685170496222478LL))), (((/* implicit */long long int) var_10))))));
    var_18 = ((/* implicit */signed char) 0U);
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) var_1);
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_7)), (var_2))))))))))));
            }
        } 
    } 
}
