/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94897
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
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_1 [i_0 + 1]))) ? (((/* implicit */int) arr_2 [(short)3] [i_0 + 3])) : (((/* implicit */int) var_7))));
                var_11 = ((/* implicit */_Bool) max((((13692631565965152518ULL) << (((/* implicit */int) (unsigned short)0)))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) var_2)), (-775542820))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((1080113326U), (((/* implicit */unsigned int) (signed char)-72))))) ? (((/* implicit */int) ((unsigned short) -1LL))) : (((/* implicit */int) max((((/* implicit */short) var_9)), (var_1)))))))));
}
