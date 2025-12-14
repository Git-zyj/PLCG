/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74061
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) 4294967295U);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [11ULL] [5U] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) * (((/* implicit */int) (short)-29))))), (((334987926U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3])))))));
                                arr_15 [i_1] [i_2] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                    var_12 ^= ((/* implicit */unsigned char) ((short) (+(((arr_12 [i_1]) / (((/* implicit */int) (unsigned short)32038)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                arr_32 [i_5] [i_5] [i_7] [i_5] [14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((345200844154032021ULL), (0ULL))), (((/* implicit */unsigned long long int) arr_25 [i_5] [i_6] [i_7] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((-1894252948) / (((/* implicit */int) (short)-3364))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)33301))))) : (((((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_5] [i_8] [i_5])))) * (((long long int) var_7))))));
                                var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2130374142U)), (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32226)))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) || (((/* implicit */_Bool) var_4)))))) * (4294967265U))))));
                                arr_33 [i_5] [i_6] [i_7] [10LL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)32234)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32228))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)45)) || (((/* implicit */_Bool) (unsigned short)33290))))))))) * (((((/* implicit */_Bool) (signed char)-65)) ? (((arr_21 [i_5] [i_5] [i_7]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((4208134236U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-11250))))))) ? (((arr_21 [i_8] [(short)1] [(short)1]) + (arr_21 [i_8] [(signed char)16] [i_7]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) (unsigned short)32224)) : (((/* implicit */int) (unsigned char)64)))) - (((((/* implicit */int) (unsigned char)62)) + (((/* implicit */int) (unsigned char)212)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) arr_17 [i_5] [i_5]);
                                arr_39 [i_5] [i_5] [(unsigned char)0] [i_7] [7] [7] [i_11] = ((/* implicit */signed char) var_4);
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (short)32748)) : (((/* implicit */int) arr_18 [i_7])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
