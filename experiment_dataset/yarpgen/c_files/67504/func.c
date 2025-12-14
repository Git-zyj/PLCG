/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67504
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) (short)11095);
                var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_3))))))), (min((min((((/* implicit */unsigned long long int) (short)32762)), (var_4))), (((/* implicit */unsigned long long int) var_11))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)11082))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */short) (signed char)45))))))))), (min((max((((/* implicit */unsigned long long int) (short)-11096)), (var_3))), (((/* implicit */unsigned long long int) (unsigned short)6144))))));
}
