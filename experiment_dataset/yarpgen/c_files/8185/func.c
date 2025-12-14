/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8185
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (short)-16650))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-4)))) : (3801588011U)))) ? (((/* implicit */int) (unsigned short)40067)) : ((~(((/* implicit */int) (short)16637))))));
                var_12 = ((/* implicit */short) var_2);
                var_13 = ((signed char) ((unsigned long long int) ((unsigned long long int) (short)-30291)));
            }
        } 
    } 
    var_14 = ((/* implicit */short) 3426575281U);
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) -1975625203))));
}
