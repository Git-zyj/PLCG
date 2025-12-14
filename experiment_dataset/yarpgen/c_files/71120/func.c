/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71120
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
    var_14 -= ((/* implicit */unsigned char) max(((short)0), (((/* implicit */short) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) ((unsigned int) (short)4))));
                arr_6 [i_0] [i_0] [i_0] = min((((unsigned short) ((unsigned short) (unsigned char)158))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16))) >= (3272924496U)))));
                var_15 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))))));
                var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) ? (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), ((short)11836))))) : (max((0ULL), (((/* implicit */unsigned long long int) -5715167030674483660LL)))))) : (((/* implicit */unsigned long long int) (~(-175723097))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */_Bool) var_4);
    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) max((var_0), (((/* implicit */unsigned short) var_10)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((4247146395476882716ULL) >= (((/* implicit */unsigned long long int) 13U)))))) - ((-(1318146401U)))))));
}
