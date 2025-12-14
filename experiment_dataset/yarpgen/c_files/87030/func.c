/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87030
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */int) ((((((/* implicit */int) (signed char)-83)) / (((/* implicit */int) arr_8 [i_2] [i_1] [i_0])))) == (((/* implicit */int) ((((/* implicit */_Bool) ((9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) var_2)))))) || (var_19))))));
                    var_21 -= ((/* implicit */long long int) ((((arr_1 [i_0] [i_1]) << (((var_17) - (345021942))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) < (2475697658U)))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((5697283374176699934ULL) == (((/* implicit */unsigned long long int) var_10))))) >= (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_22 = var_4;
}
