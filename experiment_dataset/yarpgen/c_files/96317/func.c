/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96317
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -6217584494852033083LL)) : (var_6))))) : (((/* implicit */unsigned long long int) min((1825786487U), (2469180809U))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551604ULL)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])), (12ULL)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_4]))) : (2469180809U)))) && (((/* implicit */_Bool) (+(5ULL))))))), (((((/* implicit */_Bool) -8811308773724428581LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36655))) : (18446744073709551604ULL)))));
                                arr_13 [i_1] [i_0] [i_0] [i_3 - 1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)36655)), (1825786464U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned long long int) ((short) 5ULL));
                    arr_24 [i_5] [i_5] [i_7] = 18446744073709551604ULL;
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */int) ((signed char) arr_30 [i_6 - 1] [i_6] [i_7] [i_8] [i_8] [i_9 + 2]));
                                var_21 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_27 [i_9] [i_6 + 2])) ? (((/* implicit */unsigned long long int) arr_17 [i_5] [i_9])) : (18446744073709551601ULL)))));
                            }
                        } 
                    } 
                    var_22 -= ((((/* implicit */_Bool) 34ULL)) ? (31ULL) : (((/* implicit */unsigned long long int) 2807181224U)));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */int) var_4);
}
