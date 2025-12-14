/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88721
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
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2591237310U)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-47)) < (((/* implicit */int) arr_0 [11ULL]))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 3])) == (((/* implicit */int) var_4))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)36)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) min((arr_4 [i_1] [i_0]), (((/* implicit */short) (_Bool)1))))) >= ((((_Bool)1) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_13))));
}
