/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55852
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned long long int) 3243197523U)))));
                var_19 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)27223)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)56299)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) (unsigned short)27223)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38312))) : (137438953472ULL))) : ((-(18014398492704768ULL)))))));
}
