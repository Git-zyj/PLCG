/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98869
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
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_13)), (((((var_12) * (((/* implicit */unsigned long long int) 683557467989102449LL)))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (16233521655951422958ULL)))))));
    var_19 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))))));
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | ((~(16233521655951422958ULL)))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_16))))))))));
}
