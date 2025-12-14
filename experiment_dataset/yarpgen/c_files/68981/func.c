/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68981
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
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0 + 1] [1U]))))), (((arr_0 [(unsigned char)12]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_0]))))))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)12)), (((((/* implicit */_Bool) 674708375)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (short)22720))))))) > (max((((((/* implicit */_Bool) var_9)) ? (3866046328U) : (((/* implicit */unsigned int) 1029561219)))), (((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 2])))))))));
            }
        } 
    } 
}
