/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56944
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(-14))) / (((/* implicit */int) (unsigned short)65518))))) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))));
                var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_1 [i_1 - 1])))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (2243796742U)))) ^ (((unsigned long long int) -4)))) : (((/* implicit */unsigned long long int) arr_0 [1U]))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_5 [i_0] [i_1]) ^ (208982526541718805LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [4LL]))))) : (arr_5 [i_0] [i_1 - 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 205047026)) / (-9223372036854775798LL)))))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_10);
    var_18 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -728629034)) ? (var_3) : (((/* implicit */long long int) 2147483647))))), (var_9)))));
    var_19 = (~(((1961000534996341026LL) | ((~(9223372036854775807LL))))));
}
