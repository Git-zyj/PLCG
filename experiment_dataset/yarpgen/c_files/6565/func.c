/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6565
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */signed char) 5561409388260220954LL);
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1236955157)) ? (((/* implicit */long long int) 8388604U)) : (arr_0 [i_0])))) : (arr_1 [i_0] [i_1])))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    arr_7 [(short)9] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((4286578697U), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_10)))))))) ? ((~(arr_3 [i_1 - 3] [i_1 - 3] [i_0 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= (var_0)))) : (((/* implicit */int) ((((/* implicit */long long int) 8388604U)) <= (var_3)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) + (-5LL))))));
                                var_20 = ((((/* implicit */int) var_10)) >> (((((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_4] [i_2] [i_0] [i_0])))) : (max((9223372036854775802LL), (((/* implicit */long long int) (short)9439)))))) + (29LL))));
                                arr_13 [i_0] [i_2] [i_0] &= ((/* implicit */long long int) arr_9 [i_0] [i_2] [i_3] [i_4]);
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [8LL] [i_1 - 3])) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 - 3] [i_1 - 3] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((8388599U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0])))))) ? (((/* implicit */int) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4])))))) : ((+(((/* implicit */int) (short)9463))))))) : (max((((/* implicit */long long int) var_10)), (arr_3 [i_0] [i_0 - 2] [i_1 - 3])))));
                                var_21 = min((((/* implicit */unsigned short) (short)-9456)), ((unsigned short)55341));
                            }
                        } 
                    } 
                    var_22 = ((var_7) - (-3196790652735988188LL));
                    arr_15 [i_1] [i_1] [4U] [i_1] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)19721))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    var_23 = ((/* implicit */short) arr_17 [i_0] [i_0] [i_1]);
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18274)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9443))) : (8388601U)));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_1 - 1] [i_5 + 1] [13LL])))));
                    var_26 = ((/* implicit */short) 8388626U);
                }
                for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_27 = ((/* implicit */long long int) (signed char)(-127 - 1));
                    arr_20 [11LL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) max(((signed char)127), ((signed char)0))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((/* implicit */long long int) max((613870900), (((/* implicit */int) (unsigned short)41509))))) >= (((((/* implicit */_Bool) var_0)) ? (((var_11) - (var_7))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_10)))))))));
}
