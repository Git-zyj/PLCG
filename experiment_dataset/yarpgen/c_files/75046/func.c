/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75046
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
    var_16 |= ((/* implicit */long long int) (+(((var_10) | ((~(var_12)))))));
    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4711299231956129602LL)) ? (((/* implicit */long long int) var_13)) : (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) + (((((/* implicit */_Bool) 641582649U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((var_8) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [(unsigned short)14]))))) - (min((3137557541U), (((/* implicit */unsigned int) var_8)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [18U]))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) + (1157409765U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1])))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)207)))))));
            }
        } 
    } 
}
