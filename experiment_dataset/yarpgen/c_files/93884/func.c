/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93884
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((unsigned int) var_12)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) -6918169298280930278LL))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_21 -= min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)186)) / ((+(((/* implicit */int) var_2))))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-86))) % (-2564283923055513575LL))));
                    arr_9 [i_0] [i_0 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)13728))) / (2871500940863433008LL)));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+((+(((long long int) var_15)))))))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((var_17), (((/* implicit */short) ((unsigned char) -1808067712))))))));
                }
            }
        } 
    } 
}
