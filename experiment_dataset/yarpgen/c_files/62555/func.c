/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62555
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 -= ((/* implicit */long long int) arr_6 [i_0] [4] [i_0]);
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (var_6) : (arr_7 [i_2] [i_1] [i_2 + 1])))))) ? ((+(((/* implicit */int) ((unsigned char) 1ULL))))) : (min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_20 -= min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */long long int) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : ((-(var_11))))));
}
