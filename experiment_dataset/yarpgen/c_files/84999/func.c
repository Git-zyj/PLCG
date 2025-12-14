/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84999
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) (~(-1357903547)));
                var_15 = ((/* implicit */unsigned char) arr_3 [i_0] [7LL] [i_1 - 2]);
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (_Bool)1))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
    var_18 = ((/* implicit */unsigned short) var_0);
    var_19 = ((/* implicit */unsigned long long int) var_6);
}
