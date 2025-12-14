/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95928
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
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 -= min(((-((+(((/* implicit */int) var_1)))))), (((/* implicit */int) var_4)));
                var_16 *= ((/* implicit */signed char) min((min((var_10), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (284801001675851746LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) < (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_5)))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_9);
}
