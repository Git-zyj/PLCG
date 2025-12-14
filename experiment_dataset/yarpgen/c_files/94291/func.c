/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94291
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (max((max((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [i_1] [7U] [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-3699)), ((unsigned short)48062))))))));
                var_18 = ((/* implicit */int) max((var_18), (967100163)));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)5611)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned long long int) (short)-23139)), (13915046224663353685ULL)))));
}
