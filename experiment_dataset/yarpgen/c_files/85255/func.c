/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85255
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
    var_16 = (short)-10517;
    var_17 = ((/* implicit */unsigned char) (-(10U)));
    var_18 = ((((long long int) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */long long int) 10U)) : (var_10)))) % (((long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_0] = var_2;
                var_19 = ((/* implicit */unsigned char) 16U);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 9007199254740991LL))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((-571691680563925048LL) <= (-571691680563925025LL)))), (((((/* implicit */_Bool) -4972513043982295798LL)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (signed char)116))))))) : (4294967284U))))));
}
