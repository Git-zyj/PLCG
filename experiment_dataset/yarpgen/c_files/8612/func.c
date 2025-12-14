/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8612
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((min((10ULL), (((/* implicit */unsigned long long int) (unsigned short)60730)))) << (((var_5) + (1845528071))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22556))) + (((((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [i_0]) | (arr_4 [(unsigned short)21] [i_0] [(unsigned short)21])))) ^ (((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51)))))))));
                var_16 = ((/* implicit */_Bool) var_10);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)33814)) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))))) - (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) var_8)) : ((-(var_5)))))));
}
