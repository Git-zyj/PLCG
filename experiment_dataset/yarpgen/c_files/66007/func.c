/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66007
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2510157065U)) ? (((/* implicit */int) var_6)) : (arr_1 [i_0])))), (((((/* implicit */_Bool) 139306262498627116LL)) ? (var_5) : (((/* implicit */unsigned long long int) arr_1 [i_1])))))));
                var_19 = ((/* implicit */_Bool) ((short) ((max((-3667188321627092054LL), (((/* implicit */long long int) (short)11677)))) % (max((arr_0 [i_1] [i_0 + 2]), (((/* implicit */long long int) arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)))) ? (((/* implicit */unsigned long long int) var_8)) : (min((var_13), (((/* implicit */unsigned long long int) 492455468U))))));
}
