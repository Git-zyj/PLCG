/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78115
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((min((((/* implicit */long long int) var_10)), (-7011083241331490961LL))) >= (((/* implicit */long long int) var_1))))) >> (((((var_1) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)7))))))) - (2109757220U)))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))));
    var_13 = ((/* implicit */short) min((((/* implicit */int) (signed char)23)), (min((((/* implicit */int) (short)-20626)), (((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((unsigned int) min((23ULL), (((/* implicit */unsigned long long int) 2622600734305266199LL)))));
                var_15 = ((/* implicit */unsigned long long int) max((max((arr_1 [i_1]), (arr_1 [i_1]))), (max((arr_1 [i_1]), ((short)20616)))));
            }
        } 
    } 
}
