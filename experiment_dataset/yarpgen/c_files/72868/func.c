/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72868
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) max((((/* implicit */unsigned int) var_4)), ((+(min((2673586038U), (((/* implicit */unsigned int) (signed char)(-127 - 1))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) var_6)))))));
                var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (var_3)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)127), ((signed char)(-127 - 1)))))))), (min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)123)) >= (((/* implicit */int) var_9)))))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)32587), (var_9)))) || (((_Bool) 8673359821070881931LL)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 860193095)) * (0U)))), (var_2))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (short)25577))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -860193095)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58384))) : (var_2))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_7)) ^ (var_2)))))));
    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-25577))) >= (6U));
}
