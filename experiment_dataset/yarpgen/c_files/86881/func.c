/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86881
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_3 [i_0]))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_0))));
                arr_5 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (((((/* implicit */_Bool) 18425360799425763516ULL)) ? (18425360799425763521ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9097771802630825394LL)) ? (((/* implicit */long long int) -320675613)) : (((min((arr_0 [i_0]), (var_7))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((max((var_15), (((int) var_1)))) / (((/* implicit */int) var_10))));
}
