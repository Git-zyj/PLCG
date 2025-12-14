/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55030
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_1])))))));
                var_11 = ((/* implicit */unsigned long long int) (signed char)30);
                var_12 -= ((/* implicit */signed char) (((-(min((((/* implicit */int) arr_1 [i_1])), (var_8))))) + (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)126)), ((unsigned char)127))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_3))));
}
