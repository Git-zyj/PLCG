/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73244
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
    for (short i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) max((var_10), (((min(((~(var_4))), (((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_2))))))) != (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                arr_7 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_7))) <= (((/* implicit */int) ((_Bool) var_9)))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3))))))))) ? (((unsigned long long int) ((var_5) > (((/* implicit */unsigned long long int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_2))))))))));
                arr_9 [i_0] [i_0] [i_0] = var_8;
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_6))));
    var_12 = ((/* implicit */unsigned short) max((((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_2))))), (var_8)));
    var_13 = ((/* implicit */unsigned short) var_7);
}
