/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75341
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
    var_17 |= ((/* implicit */unsigned long long int) 0LL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) var_11)))))) | (var_0))));
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) >= ((+(0LL))))) || (((/* implicit */_Bool) -1LL))));
                var_20 = ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))) + (var_3))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)0))))))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
            }
        } 
    } 
}
