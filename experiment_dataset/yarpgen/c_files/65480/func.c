/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65480
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 -= ((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_8);
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_7 [i_1] |= (((+(((/* implicit */int) arr_5 [i_1])))) * (((((/* implicit */int) arr_6 [i_1] [i_1])) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_1])) : (var_13))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (var_13) : (((/* implicit */int) var_14))))) : (max((((/* implicit */long long int) var_0)), (2088851307356398663LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2)))) ? (((((/* implicit */_Bool) -1952850438)) ? (-214645577891633459LL) : (((/* implicit */long long int) 4294967294U)))) : (max((((/* implicit */long long int) 1633771671)), (-9223372036854775792LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (int i_5 = 2; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (arr_18 [i_1] [i_1] [(signed char)20] [i_1])));
                                var_20 = ((/* implicit */int) max((var_20), (((var_9) / (var_16)))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1] [i_3]))))) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_3])) : (((((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_3])) ^ (((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_3]))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */unsigned int) ((_Bool) (~(214645577891633480LL))));
    }
    var_23 = ((/* implicit */short) var_16);
}
