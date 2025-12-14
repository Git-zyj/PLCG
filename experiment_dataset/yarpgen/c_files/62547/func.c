/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62547
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_9) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (((((/* implicit */int) var_4)) + (((/* implicit */int) var_1))))))) : (min((((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (((-2147483647 - 1)) + (2147483647))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (var_12) : (((/* implicit */long long int) arr_1 [i_1]))))) ? ((+(2147483647))) : (((/* implicit */int) max(((signed char)-77), ((signed char)71))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [3ULL])) ? (((/* implicit */int) arr_0 [(unsigned char)1])) : (7936)))))) : (arr_1 [i_0])));
                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((-262820059) < (2147483647))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((_Bool) var_12));
}
