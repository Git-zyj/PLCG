/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75875
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
    var_10 = ((/* implicit */int) ((((/* implicit */long long int) var_8)) / (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35172)))))) + (min((((/* implicit */long long int) var_9)), (-925227102223844634LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((signed char) var_9))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))), (((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [i_1 - 1] [i_1]))))))));
                var_12 &= ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) <= (2730768988U))), ((_Bool)1)));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((var_3) >> (((var_4) - (759095527)))));
}
