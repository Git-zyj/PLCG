/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87355
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
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */int) (~(0U)));
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) var_10);
                                var_13 += ((/* implicit */short) (~(((/* implicit */int) (signed char)26))));
                                arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_1] = ((((/* implicit */_Bool) ((long long int) (~(arr_3 [i_2] [i_1] [i_1]))))) ? ((~(((/* implicit */int) (short)6834)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) (signed char)107)))) : (((int) (signed char)107)))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), (2937401542992500344ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-2871)), (15509342530717051272ULL)))) ? (((long long int) 2937401542992500343ULL)) : (((/* implicit */long long int) arr_0 [i_0 + 2]))))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(2937401542992500344ULL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */long long int) var_10))));
    /* LoopNest 3 */
    for (long long int i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        for (long long int i_6 = 3; i_6 < 21; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-270726724) : (((/* implicit */int) arr_8 [i_5] [i_5 - 2] [i_5 + 1] [i_5 + 1]))))), (4294967295U))))));
                    arr_22 [i_7] [i_6] [i_5] = ((/* implicit */int) ((short) (signed char)29));
                    var_17 *= ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) 9075432400392266641LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5581))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)-108)), ((short)3))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) min((((/* implicit */long long int) var_10)), (8871816096622058860LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) : (18446744073709551604ULL))))));
                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) 1744001479)) ? (((/* implicit */int) (short)8441)) : (((/* implicit */int) (short)3))));
            }
        } 
    } 
}
