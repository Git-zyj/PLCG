/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70559
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
    var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_6))) / ((-9223372036854775807LL - 1LL)))), ((~(var_13))))))))));
    var_16 = ((/* implicit */signed char) (unsigned short)3317);
    var_17 = ((/* implicit */signed char) var_1);
    var_18 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26983))) : ((+(arr_1 [i_1])))))), (((var_4) * (((((/* implicit */long long int) -2119477925)) / (var_13)))))));
                var_19 = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
}
