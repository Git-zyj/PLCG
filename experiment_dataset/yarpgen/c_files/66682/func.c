/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66682
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) 1091490517836805679LL);
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1143433370)) ? (-758409058) : (((/* implicit */int) (unsigned char)205))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */long long int) var_1)), (var_3))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (758409046) : (((/* implicit */int) (signed char)-94))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_10)))))));
    var_16 = var_8;
    var_17 = ((/* implicit */_Bool) var_10);
}
