/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64835
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */long long int) 2147483646);
                    var_15 = 9223372036854775807LL;
                    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [15U] [i_2])) ? (var_10) : (var_8))))))), (max((((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) arr_4 [i_2]))))), (max((var_5), (arr_4 [i_0])))))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_2]) : (2147483646)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_2] [5ULL] [i_1] [5ULL])), (arr_2 [i_0] [i_0])))))), (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1])) || (((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (2304562935U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    var_19 *= ((/* implicit */_Bool) ((signed char) ((unsigned long long int) min((var_7), (9223372036854775789LL)))));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (min((2304562945U), (((/* implicit */unsigned int) 1637007099)))) : (var_8)))) ? (((((/* implicit */_Bool) (+(-652366599)))) ? ((-(var_3))) : (max((((/* implicit */unsigned long long int) 2304562945U)), (18446744073709551615ULL))))) : (var_3))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1115203011))))) ? (((/* implicit */long long int) 1230995559)) : (var_7)))) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_4)))), (1726919647))))));
}
