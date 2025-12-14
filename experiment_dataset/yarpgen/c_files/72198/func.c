/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72198
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
    var_15 = ((/* implicit */unsigned char) var_0);
    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (-1LL) : (((/* implicit */long long int) 371396224))));
    var_17 = ((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) -1LL)), (var_1))) << (((((/* implicit */int) var_13)) - (214))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17294)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 -= ((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0])))) ? (min((((/* implicit */long long int) var_13)), (((0LL) << (((371396224) - (371396193))))))) : (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) var_14)), (arr_2 [i_0])))))));
                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_1] [i_0])) != (2130706432U))))) - (arr_2 [i_0])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) var_12))), (arr_1 [i_0] [i_0])))) : (((((((/* implicit */_Bool) 3288254028U)) || (((/* implicit */_Bool) -371396224)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) -371396224)) ? (1006713267U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))))));
                var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1558567340U)) ? (((/* implicit */int) (short)-28497)) : (((/* implicit */int) (unsigned short)1022))));
                var_21 = arr_2 [i_0];
            }
        } 
    } 
}
