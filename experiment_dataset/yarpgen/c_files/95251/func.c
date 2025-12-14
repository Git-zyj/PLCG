/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95251
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
    var_20 = ((/* implicit */signed char) var_5);
    var_21 = ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((short) arr_3 [i_0 - 1]));
                var_23 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_4 [i_0 - 1]))) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_1])) : (((/* implicit */int) (unsigned short)16382))))) && (((/* implicit */_Bool) arr_4 [i_0 - 1])))))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_3 [i_0 - 1]))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1])), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)75)) - (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))))))));
                var_25 = ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_3 [i_0 - 1])));
                arr_5 [(signed char)10] [i_1] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 1]))));
            }
        } 
    } 
}
