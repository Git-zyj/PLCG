/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94567
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [(signed char)1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-18269))))) : ((+(((/* implicit */int) (_Bool)1))))))), (var_0));
                var_10 = ((/* implicit */signed char) (-(var_3)));
            }
        } 
    } 
    var_11 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_7))))) <= (min((var_5), (((/* implicit */unsigned int) var_6)))))))) & (var_5));
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_1))));
}
