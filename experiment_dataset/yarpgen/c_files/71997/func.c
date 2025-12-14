/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71997
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
    var_11 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (short)32767);
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) + (0U))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)-39)), (((((/* implicit */long long int) ((/* implicit */int) ((signed char) 2855575228U)))) - (var_1)))));
    var_14 ^= ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (min((((/* implicit */long long int) (signed char)63)), (var_1)))));
    var_15 = ((/* implicit */unsigned short) ((_Bool) var_5));
}
