/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62462
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
    var_19 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_15);
                var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [6] [6]))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) / (arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) (-(4242434784U))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned int) var_15))))) && (((/* implicit */_Bool) var_9)))))) & ((-(min((((/* implicit */unsigned int) (short)26491)), (var_7)))))));
}
