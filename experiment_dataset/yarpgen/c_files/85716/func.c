/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85716
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)69))));
                arr_6 [i_0] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)104)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775783LL)) ? (var_6) : (((/* implicit */unsigned int) 222500034))))) ? (max((((/* implicit */long long int) -526199491)), (-4120891025779340670LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_3)) : (260046848U)))))) : (((/* implicit */long long int) ((int) arr_2 [i_1 + 3])))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((max((var_6), (((((/* implicit */_Bool) var_6)) ? (var_13) : (var_15))))), (((/* implicit */unsigned int) var_7))));
    var_17 = -733323307;
    var_18 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2751))) : (-401007304228015769LL))), (((/* implicit */long long int) (~(-1989275666))))))));
}
