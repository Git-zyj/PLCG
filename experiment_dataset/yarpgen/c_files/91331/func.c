/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91331
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
    var_10 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((var_3) <= (-8952813789870077747LL)))), (var_1))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1839)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20945))) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (var_5))))) : (var_9))) : (var_3)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((((((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_2 [i_0 - 4] [i_0 - 4])))) ? (arr_5 [i_0] [i_0] [i_0 - 4]) : (((/* implicit */unsigned long long int) 8952813789870077760LL)))), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) ((unsigned int) var_9)))))))))));
                var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [(unsigned short)7] [(unsigned short)7])), ((+(min((((/* implicit */long long int) (unsigned short)26731)), (var_5)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_3);
}
