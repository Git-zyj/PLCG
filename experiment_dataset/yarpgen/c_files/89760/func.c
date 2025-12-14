/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89760
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
    var_16 = ((/* implicit */signed char) 4294967295U);
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(var_7)))) == (min((((/* implicit */unsigned long long int) var_11)), (var_8)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = var_11;
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2])) ? (((/* implicit */unsigned int) min((arr_1 [i_2 + 1]), (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2]))))) : (max(((+(1U))), (((/* implicit */unsigned int) (unsigned char)72))))));
                    var_20 = ((/* implicit */unsigned char) (unsigned short)11198);
                    arr_6 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2]);
                }
            } 
        } 
    } 
}
