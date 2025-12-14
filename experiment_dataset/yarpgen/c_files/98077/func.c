/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98077
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_9))));
    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_15))));
    var_22 = 4230646244U;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((((4230646244U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))))) >= (4230646244U)))));
                    arr_8 [i_2] [14U] [14U] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (0ULL)));
                    var_24 |= ((/* implicit */_Bool) ((((18446744073709551608ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) % (var_6))))));
                }
            } 
        } 
    } 
}
