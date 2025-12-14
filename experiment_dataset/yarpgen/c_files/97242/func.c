/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97242
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
    var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 3840)) ? (((/* implicit */unsigned int) 3842)) : (var_14)));
    var_16 = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((var_13) + (1413448156)))))))))) : (((unsigned int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)125))))) || (((/* implicit */_Bool) arr_2 [i_1] [(unsigned short)10])))) ? (((((/* implicit */_Bool) (+(3822)))) ? (((/* implicit */int) max((var_3), (arr_0 [i_0])))) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_2 [(short)4] [(signed char)13]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) -3845);
}
