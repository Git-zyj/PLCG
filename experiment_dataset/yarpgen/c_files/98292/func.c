/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98292
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
    var_18 = ((/* implicit */int) ((-7886779997411320776LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)60))))), (((((/* implicit */_Bool) (unsigned short)50201)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15344))) : (arr_6 [i_0] [i_0] [12LL])))))));
                var_19 *= ((/* implicit */signed char) arr_2 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_3))));
}
