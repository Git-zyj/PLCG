/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77033
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
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (var_4)))) ? (((/* implicit */int) ((4252604358U) <= (((arr_3 [i_1] [i_1]) ? (0U) : (4294967278U)))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0 - 1])) & (((/* implicit */int) arr_0 [i_0 - 3])))) <= (((/* implicit */int) max((arr_1 [i_0 - 2]), (var_11))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_19), (var_6)));
    var_20 = ((/* implicit */long long int) max((var_15), (((/* implicit */unsigned int) var_14))));
    var_21 &= ((/* implicit */unsigned long long int) ((((min((0U), (((/* implicit */unsigned int) var_6)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (((((_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1)))))));
}
