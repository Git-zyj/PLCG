/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79398
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
    var_19 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [2U] [2U] |= ((/* implicit */short) max((((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) / (((((/* implicit */_Bool) -6751290193723189715LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0)))))));
                var_20 = ((/* implicit */unsigned char) ((arr_0 [(short)15]) ? (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0])), ((short)-8864)))) : (((/* implicit */int) arr_3 [i_0]))));
                var_21 *= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1717065131961889961LL)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0])))))))) % ((-(min((((/* implicit */long long int) (signed char)-80)), (9223372036854775807LL)))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((15ULL), (arr_2 [14U] [i_1])))) ? (((arr_2 [i_0] [i_1]) << (((arr_2 [i_0] [i_1]) - (2035889840419582804ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) != (arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((2343979045U), (((/* implicit */unsigned int) -2060205294))));
    var_23 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(var_13)))) ? (min((18446744073709551613ULL), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17)))))))));
}
