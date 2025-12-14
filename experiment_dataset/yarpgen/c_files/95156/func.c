/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95156
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_6 [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */unsigned long long int) (~(544562734U)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_4] [(unsigned char)13] [i_0] [i_4] = ((/* implicit */short) (((-(3750404553U))) >> (((arr_10 [i_0] [i_1] [i_2] [i_3 - 1] [i_2]) - (8497711198181567970LL)))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_11 [i_0] [i_1]))))));
                                arr_16 [i_4] [i_4] [i_3 + 1] [20ULL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (short)20311);
                            }
                        } 
                    } 
                    arr_17 [5U] [4ULL] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 234881024))))), ((-(arr_10 [(short)20] [i_1] [i_1] [i_2] [i_2])))));
                    arr_18 [i_0] [i_0] [i_0] |= ((long long int) 8715784911163348190LL);
                    var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) != (((/* implicit */int) ((((/* implicit */_Bool) 544562745U)) && (((/* implicit */_Bool) var_0)))))));
                }
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_18 += ((/* implicit */unsigned char) var_11);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_27 [i_7] [i_1] [i_6] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? ((+(var_14))) : (max(((~(1014910803083243299ULL))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_7]))))));
                                var_19 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) & ((+(arr_9 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])))));
                                var_20 += ((/* implicit */short) ((_Bool) 3750404560U));
                            }
                        } 
                    } 
                    arr_28 [3LL] [i_1] [i_1] = ((/* implicit */long long int) (-(544562745U)));
                    var_21 += ((/* implicit */unsigned long long int) var_11);
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 2) 
                {
                    var_22 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_8 - 2] [i_8 - 3] [i_8 - 2] [i_8] [i_8]))));
                    var_23 = ((/* implicit */unsigned int) (~(2789065711573349250ULL)));
                }
                for (long long int i_9 = 2; i_9 < 23; i_9 += 1) 
                {
                    arr_35 [i_9] [i_1] = ((/* implicit */unsigned char) -7859769617859866083LL);
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-23067)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_9 - 2] [i_9 - 2] [i_9 - 2])))) : ((~(arr_34 [(unsigned short)21] [i_1] [i_1])))));
                    var_25 += ((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_1] [i_9]);
                    var_26 ^= ((/* implicit */int) arr_30 [i_9] [i_1] [i_0]);
                }
                var_27 = ((/* implicit */long long int) var_10);
                var_28 -= arr_26 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_1];
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) (-(544562751U)))), (((var_10) | (((/* implicit */unsigned long long int) var_5))))))));
}
