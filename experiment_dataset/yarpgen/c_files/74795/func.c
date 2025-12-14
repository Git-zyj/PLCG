/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74795
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-117)))) * (((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned char)178))))))) - ((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)116))) / (-3828681043172446783LL)))))));
                var_14 = ((/* implicit */short) ((min((((/* implicit */long long int) arr_2 [i_1 - 2])), (-3828681043172446783LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 3])))));
                var_15 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0] [6LL])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((+(((/* implicit */int) (short)-1841)))) : (((/* implicit */int) arr_5 [i_0] [(_Bool)1]))))), (((-3828681043172446783LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */long long int) ((_Bool) var_5))), (max((max((((/* implicit */long long int) var_2)), (var_10))), (((/* implicit */long long int) (_Bool)1)))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((var_3) + (1849502201)))))) & (((3165228388869960817LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) % (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) -536870912)) : (var_11)))), (((unsigned long long int) var_2))))));
    var_18 = ((/* implicit */int) (unsigned char)148);
}
