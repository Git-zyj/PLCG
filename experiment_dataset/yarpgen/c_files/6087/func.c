/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6087
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
    var_12 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_0)), (var_2))) << (((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)15514)) << (((7463386823412846021ULL) - (7463386823412846009ULL))))))) - (40948)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((((unsigned long long int) 6181382874649878776ULL)), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1]))));
                var_14 = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_15 = ((/* implicit */signed char) 745581583U);
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(((int) arr_3 [i_1 + 2] [i_0])))))));
            }
        } 
    } 
}
