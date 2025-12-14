/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6956
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 += ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1 + 1]))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)133)), (954337911411750459ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)24580))))));
                var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 268435455U)) ? (9719001011759552154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)48507)))))));
                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (9719001011759552154ULL)))) ? ((-(9719001011759552157ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) : (824753474U))));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) var_0);
}
