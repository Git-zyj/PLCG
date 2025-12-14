/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82224
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
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0 - 1] [i_0] = ((min((min((arr_0 [i_1]), (((/* implicit */unsigned long long int) (short)8114)))), (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_0 [i_1]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (16872935629091249844ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0])))))))));
                var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)69))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))))) >= (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ^ (((((/* implicit */_Bool) 7928336337997691428LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (9223372036854775799LL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (min((((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (2009220747U)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(var_4)))), (min((var_5), (((/* implicit */long long int) var_2)))))))));
    var_17 ^= ((/* implicit */_Bool) var_6);
    var_18 = ((/* implicit */signed char) -9223372036854775787LL);
}
