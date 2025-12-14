/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83241
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
    var_19 = ((/* implicit */_Bool) max((max((var_0), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) var_12))));
    var_20 = ((/* implicit */int) min((var_6), (((/* implicit */long long int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (var_10))), (((((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) var_18)) : (var_10)))));
                var_22 = ((unsigned short) (+(((/* implicit */int) arr_2 [i_1]))));
            }
        } 
    } 
    var_23 += ((/* implicit */signed char) var_3);
    var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(127)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)140)) - (((/* implicit */int) (unsigned short)65535))))) : (((max(((_Bool)0), ((_Bool)1))) ? (((((/* implicit */_Bool) 2209529860484540274LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
}
