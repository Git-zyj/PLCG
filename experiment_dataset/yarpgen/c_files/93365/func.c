/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93365
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [(signed char)10] [(signed char)10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 4294967291U))) ? (min((max((var_13), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) arr_0 [i_0] [i_1 + 4])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)26276)), (var_9)))) ? ((+(arr_2 [(_Bool)1] [13]))) : (((((/* implicit */int) (unsigned short)25639)) * (((/* implicit */int) (short)0)))))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_6))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_0);
}
