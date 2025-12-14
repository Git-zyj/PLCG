/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90744
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
    var_16 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-29818)) ? (max((1927998433626126681ULL), (((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_2 + 3] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (short)29818)) : (((/* implicit */int) (signed char)-57)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [2] [i_0])) % (9395050095929196046ULL))))) ? (max((((/* implicit */unsigned int) min(((unsigned short)39311), (arr_12 [i_3] [i_0])))), (arr_5 [i_0] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))));
                                arr_14 [i_0] [i_1] [i_2 + 2] [i_2] [(unsigned char)8] [i_4] |= ((/* implicit */unsigned short) arr_1 [i_2 - 2]);
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */int) min(((-(max((((/* implicit */long long int) (signed char)75)), (9223372036854775795LL))))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) : (((((/* implicit */_Bool) 9395050095929196066ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (2638159448828763572LL)))))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) (unsigned char)1)))) ? ((~(9223372036854775801LL))) : (((/* implicit */long long int) ((1231664976) << (((((/* implicit */int) (unsigned short)255)) - (255)))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2638159448828763571LL)) != (18446744073709551598ULL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) | (9051693977780355569ULL))))) / (((/* implicit */unsigned long long int) -9223372036854775792LL))))));
}
