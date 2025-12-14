/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62853
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) arr_1 [i_0]);
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (237633256) : (((/* implicit */int) var_1))))) == (var_6)))) << ((((+((~(((/* implicit */int) arr_1 [i_0])))))) + (31))))))));
                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) ((short) var_6))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) var_12))) - (43991)))))) : (((((/* implicit */_Bool) 237633266)) ? (253380265U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
            }
        } 
    } 
    var_17 = max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))));
    var_18 += ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)48))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1361037400U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))), (var_7)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) : (max((var_11), (((/* implicit */unsigned long long int) var_2))))))));
    var_19 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) max((2147483647), (((/* implicit */int) var_0))))) : (((long long int) var_7))))), (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_11)))))));
}
