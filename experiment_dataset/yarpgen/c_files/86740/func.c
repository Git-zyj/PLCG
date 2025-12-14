/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86740
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
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_0])) & (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) | (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
}
