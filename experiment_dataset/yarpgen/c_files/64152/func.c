/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64152
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_16))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((signed char) ((arr_3 [i_1] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
                arr_5 [4LL] &= ((((/* implicit */unsigned long long int) (-((-(var_5)))))) & ((+(((((/* implicit */_Bool) (unsigned short)65408)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_16))))));
                arr_6 [i_0] = ((/* implicit */short) min((min((((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) arr_1 [i_0]))))));
                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((var_2) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */long long int) min(((~(((/* implicit */int) var_14)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32838)))))))));
    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) : (4294967295U)));
}
