/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58948
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (+((+((+(var_5)))))));
                arr_7 [i_0] [i_0] |= ((/* implicit */short) (-(max((((long long int) arr_2 [i_0] [i_1])), (((/* implicit */long long int) arr_1 [i_1]))))));
                arr_8 [i_0] [i_0] [i_1] = (+(((((/* implicit */_Bool) 2136120827U)) ? (8571211457423870289ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))));
                arr_9 [9U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65511)) ? ((+(arr_3 [i_0] [(short)3]))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) var_17)))), (((/* implicit */int) (signed char)-63)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (unsigned short)1);
    var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned long long int) -927846081)) : (35184372088832ULL)))) ? ((~(-927846100))) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((4501748994024910323ULL) > (min((var_14), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))))))));
}
