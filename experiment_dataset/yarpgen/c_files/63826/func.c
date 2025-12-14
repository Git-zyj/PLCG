/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63826
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
    var_10 = ((/* implicit */unsigned char) ((((min((((/* implicit */int) var_9)), (var_5))) + (2147483647))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_11 *= ((/* implicit */unsigned short) ((0U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2109249584)) ? (var_7) : (((/* implicit */long long int) 8U))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (_Bool)1)))))))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (signed char)66))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), ((_Bool)0)));
                var_14 = ((/* implicit */long long int) ((((unsigned int) (+((-9223372036854775807LL - 1LL))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 3] [i_1])))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (max((((/* implicit */long long int) (unsigned char)111)), (-6628710485380825428LL)))))) ? (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */unsigned long long int) 1617504631U)) : (((arr_0 [i_0]) << (((12845345385849314294ULL) - (12845345385849314286ULL))))))) : (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_1])))))))));
            }
        } 
    } 
}
