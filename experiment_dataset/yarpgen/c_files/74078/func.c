/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74078
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max(((~(var_14))), (((/* implicit */unsigned long long int) var_5)))))));
    var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (min((var_7), (((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), (var_9))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (unsigned short)30598);
                    var_19 *= ((/* implicit */signed char) (_Bool)1);
                    arr_9 [i_0] [i_1] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (587787818954409460ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (0ULL))) | (3409335119608009383ULL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (+((-2147483647 - 1))));
}
