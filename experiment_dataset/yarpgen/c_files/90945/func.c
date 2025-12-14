/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90945
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(var_8)))), (((1048575U) >> (((max((var_0), (arr_2 [i_0] [i_1]))) - (823713288U)))))));
                arr_6 [i_0] = ((/* implicit */int) max((4294967273U), (((arr_2 [5U] [5U]) + (((/* implicit */unsigned int) (-(var_8))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((var_1) ? (min((min((717243774), (((/* implicit */int) var_1)))), (((/* implicit */int) var_2)))) : (var_6)));
    var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) var_0)) ? (min((max((((/* implicit */int) var_2)), (var_9))), (max((var_9), (var_8))))) : (((((/* implicit */_Bool) max((-717243777), (var_9)))) ? (var_9) : (((int) 3445289549U))))))));
}
