/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55103
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
    var_10 = ((/* implicit */unsigned int) var_6);
    var_11 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))) & (((((/* implicit */int) var_6)) * (((/* implicit */int) var_0))))))) == (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1538850408U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    var_12 = 1538850407U;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) (-(1538850407U)))), (((var_7) & (((/* implicit */long long int) 2756116889U)))))));
                var_14 &= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((2756116887U), (2756116889U)))) && (((/* implicit */_Bool) ((var_7) << (((((((/* implicit */int) var_9)) + (23009))) - (15))))))))), (var_7)));
                var_15 *= ((/* implicit */short) (-(arr_4 [(unsigned short)6] [i_1])));
                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_3 [7LL] [i_1] [7LL]))) || (((/* implicit */_Bool) var_1))));
                var_17 = var_0;
            }
        } 
    } 
    var_18 = ((/* implicit */short) 1538850406U);
}
