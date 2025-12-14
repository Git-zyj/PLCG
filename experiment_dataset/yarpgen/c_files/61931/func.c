/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61931
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((((((/* implicit */_Bool) var_0)) ? (17003915340979504700ULL) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) var_1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) 17003915340979504703ULL);
                var_14 = ((/* implicit */signed char) var_10);
                var_15 = ((/* implicit */int) var_6);
                var_16 = ((/* implicit */unsigned int) max((17003915340979504700ULL), (((/* implicit */unsigned long long int) (unsigned short)48554))));
            }
        } 
    } 
}
