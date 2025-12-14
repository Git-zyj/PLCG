/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60214
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10512)) && ((!((!((_Bool)1)))))));
    var_13 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)10512)) ? (((/* implicit */int) ((_Bool) (unsigned short)62490))) : (var_1)))) + (var_10));
    var_14 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15926)) ? (13259043331296899283ULL) : (18446744073709551615ULL)))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 564645726U)) ? (3730321595U) : (564645731U)))));
                var_16 = ((/* implicit */long long int) min((var_16), ((~(-4569415571893303534LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) 7137778686228765218ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) : (var_8)))))));
}
