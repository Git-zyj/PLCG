/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58966
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
    var_12 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7))), (((/* implicit */long long int) var_6))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */unsigned int) arr_1 [i_0 - 3]);
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_2])), ((-(var_4))))))));
                    var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) ((signed char) (short)(-32767 - 1)))) == (((/* implicit */int) (short)(-32767 - 1))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_7);
}
