/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78266
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
    var_16 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 7350127887296942014LL)), (((unsigned long long int) -7350127887296941988LL)))), (((/* implicit */unsigned long long int) var_12))));
    var_17 &= ((/* implicit */short) var_4);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 12120911320783954114ULL))) ? (max((((((/* implicit */_Bool) 7350127887296942026LL)) ? (((/* implicit */unsigned long long int) var_14)) : (12120911320783954107ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */int) (unsigned short)27777)) > (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) -1216939176)) || (((/* implicit */_Bool) var_4))))))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12120911320783954107ULL)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((var_5) < (((((/* implicit */int) (unsigned short)42141)) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 - 2])), ((unsigned short)37030))))))));
            }
        } 
    } 
}
