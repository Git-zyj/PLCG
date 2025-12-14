/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91034
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((0ULL) >> (((1595166258U) - (1595166208U))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1LL)), (arr_5 [i_0] [i_0] [i_2])))) ? (max((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_2 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_14))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)46940))))) | (((2ULL) + (((unsigned long long int) 5769040660788958711ULL))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_23 += (+(((/* implicit */int) (unsigned short)18596)));
                    arr_12 [i_1] &= ((/* implicit */short) ((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) arr_6 [i_3] [i_1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))) << (((min((1330263700U), (((/* implicit */unsigned int) (unsigned char)82)))) - (72U)))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10141598939571769895ULL)) ? (((/* implicit */int) (short)4744)) : ((-(((/* implicit */int) (unsigned short)46920))))))) >= (min((var_10), (((/* implicit */unsigned long long int) arr_2 [i_0 - 2]))))));
                                arr_18 [i_0] = ((/* implicit */unsigned char) ((max((3120783659606336966LL), (((/* implicit */long long int) 1932399387)))) - (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_0] [i_0 + 2] [i_0]), (arr_7 [i_0] [i_0 - 2] [i_0])))))));
                            }
                        } 
                    } 
                }
                arr_19 [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((-3120783659606336944LL) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_6))))))))));
}
