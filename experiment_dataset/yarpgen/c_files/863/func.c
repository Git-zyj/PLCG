/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/863
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_11 = min((min((min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])), (8671587358224890271LL))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((2269047193174443714LL) - (2269047193174443705LL)))))))), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (signed char)-8)))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)7)) << (((-8667552351069088387LL) + (8667552351069088401LL))))))) ? (var_8) : (((/* implicit */unsigned int) (((+(((/* implicit */int) var_10)))) << (((((((arr_5 [i_1 + 1] [i_3] [i_4 - 2]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_2 [i_4 + 1] [i_1])) - (61))))) - (7212529803002392185LL))))))));
                                arr_16 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] = ((unsigned char) max((arr_9 [i_0 + 2] [0U] [i_2] [i_3] [i_2]), (((/* implicit */long long int) arr_1 [i_3]))));
                                arr_17 [i_2] [i_0 + 2] [i_2 - 1] [i_1] [i_0 + 2] [i_2 - 2] [i_1] = ((((((long long int) arr_5 [i_2] [i_2 - 2] [i_2 - 1])) + (9223372036854775807LL))) << (((((arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 1]) + (2010842233852383665LL))) - (61LL))));
                                var_12 = ((/* implicit */unsigned char) ((((((((((/* implicit */_Bool) 3942328500486726296LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)4)))) + (2147483647))) << (((((long long int) (signed char)102)) - (102LL))))) << (((((unsigned int) max((((/* implicit */long long int) (unsigned char)60)), (arr_14 [i_0] [3LL] [i_2 + 1])))) - (60U)))));
                                var_13 = ((/* implicit */signed char) arr_13 [i_0] [i_0] [(unsigned char)4] [i_3] [i_0]);
                            }
                        }
                    } 
                } 
                arr_18 [i_0 - 1] [i_1] [12U] &= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_1 + 1])) << (((((/* implicit */int) min(((unsigned char)231), (arr_4 [i_1] [i_0] [i_0])))) - (74))))) << (((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) >= (4294967286U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [6U] [i_1] [i_1 - 1] [i_1]))) : (((3484789843U) << (((((/* implicit */int) (unsigned char)134)) - (130))))))) - (4217029927U)))));
                arr_19 [i_1 + 1] [i_1] [i_0 - 2] = var_7;
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) >= (var_8)))))))) >= ((((-(((/* implicit */int) var_1)))) << (((((((/* implicit */int) (unsigned char)251)) << (((-6329465574763132860LL) + (6329465574763132879LL))))) - (131596286)))))));
    var_15 = ((/* implicit */signed char) var_2);
}
