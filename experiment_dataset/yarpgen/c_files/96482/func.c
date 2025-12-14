/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96482
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)0))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_16))))))))));
                var_20 |= ((/* implicit */short) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) (signed char)21))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_0]))))))) < (((/* implicit */unsigned long long int) arr_3 [i_1]))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)96)), ((-(((/* implicit */int) var_11))))));
                arr_6 [i_0] [i_0] &= ((/* implicit */unsigned int) (!(((((/* implicit */int) max((var_15), (arr_0 [i_0])))) != (((/* implicit */int) var_16))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-102))) != (((((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) ^ (var_12)))))) : ((+(((/* implicit */int) var_13))))));
}
