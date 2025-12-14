/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60238
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 + 1]))) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) -940620550)))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0]))))), (((signed char) arr_2 [i_0 - 1] [i_0]))))) || ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_0])), (var_5))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((((/* implicit */int) ((556761538) > (((/* implicit */int) var_9))))) == (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) var_5)) : (min((var_4), (((/* implicit */unsigned long long int) 3655944203U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
