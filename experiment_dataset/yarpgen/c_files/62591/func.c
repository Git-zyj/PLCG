/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62591
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
    var_12 = ((/* implicit */unsigned long long int) -860551949653161462LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((1463145930U), (4294967292U))), ((-(1463145930U)))));
                arr_8 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(arr_0 [i_0])))), (((unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) 1254737753U)) || (((/* implicit */_Bool) 4294967288U))))))) : ((~(((/* implicit */int) max(((short)127), (((/* implicit */short) (unsigned char)203)))))))));
                arr_9 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (576458553280167936ULL))), (((/* implicit */unsigned long long int) var_0)))))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_1))));
                var_14 *= ((/* implicit */long long int) ((((unsigned int) 1463145930U)) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */short) ((unsigned char) max((((/* implicit */long long int) var_2)), (var_9))))), (var_10)));
}
