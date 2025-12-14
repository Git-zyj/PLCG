/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79620
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
    var_12 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_6 [i_1] [i_1 - 1]))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1]))) : (arr_6 [i_1] [i_1 - 1])))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) -2438504747463883922LL)) | (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (2982811024243581576ULL))))) : (max((max((((/* implicit */long long int) var_5)), (arr_3 [i_0] [10ULL] [i_0]))), ((~(2438504747463883921LL)))))));
                var_14 *= ((/* implicit */unsigned int) ((var_9) >= (((((/* implicit */unsigned long long int) var_5)) * (arr_1 [i_1 + 1])))));
                var_15 = ((/* implicit */long long int) max((((var_9) | (((/* implicit */unsigned long long int) 2438504747463883900LL)))), (((/* implicit */unsigned long long int) ((-2438504747463883939LL) & (-2438504747463883926LL))))));
            }
        } 
    } 
}
