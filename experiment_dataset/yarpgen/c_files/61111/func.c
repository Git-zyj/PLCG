/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61111
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) 1328317076736412512LL);
                var_12 &= ((/* implicit */_Bool) 5646031697099184145ULL);
                var_13 = 12800712376610367454ULL;
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_19 [i_2 + 1] [i_2 + 1] [i_4] [i_5] [i_4] = ((/* implicit */short) min((var_10), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_8 [i_3] [i_3]))))))));
                                var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                                var_15 = (short)32759;
                                var_16 = ((/* implicit */unsigned char) 1328317076736412521LL);
                                var_17 = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */int) ((((var_2) <= (((long long int) (short)-27252)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-2362))))) : (max((((((/* implicit */_Bool) 10500284752382278513ULL)) ? (10289323938514126631ULL) : (arr_23 [i_3]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)27076)))))))));
                            var_19 = ((/* implicit */unsigned long long int) arr_15 [i_8] [i_3]);
                            var_20 &= ((/* implicit */unsigned long long int) ((long long int) var_2));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */int) arr_22 [i_4] [i_7 - 1] [i_4] [i_7]);
                            arr_27 [i_2] [i_4] [i_4 - 1] [i_7] [i_2] = ((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                        }
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            var_22 = max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (arr_31 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 - 1] [i_7] [i_7 + 2] [i_10] [i_10] [i_10])))))), (arr_21 [i_4 + 1] [i_4] [i_4 + 1] [9LL] [i_4] [(unsigned short)12]));
                            var_23 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 3705017292247676788LL)), (arr_23 [i_2]))), (((/* implicit */unsigned long long int) (~(4963650287908416935LL))))))) ? (((unsigned long long int) (+((-9223372036854775807LL - 1LL))))) : (((var_9) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-1834477146920977271LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) >= (((((/* implicit */_Bool) arr_10 [i_11])) ? (4424632780224705518ULL) : (((/* implicit */unsigned long long int) var_0))))));
                            var_25 = ((/* implicit */unsigned int) arr_33 [i_2] [i_3] [i_4] [i_4] [i_7 + 2] [i_11] [(_Bool)1]);
                        }
                        for (long long int i_12 = 3; i_12 < 20; i_12 += 2) 
                        {
                            arr_38 [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10289323938514126634ULL)) ? (((long long int) ((var_4) ? (((/* implicit */unsigned long long int) var_6)) : (1716252478147278037ULL)))) : ((-9223372036854775807LL - 1LL))));
                            var_26 += ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (min((((/* implicit */long long int) (unsigned short)0)), (-9223372036854775792LL)))));
                        }
                        var_27 = 3796746831U;
                    }
                    var_28 = ((/* implicit */unsigned short) arr_28 [i_4] [i_2 - 1] [i_3] [i_2 - 1] [i_3] [i_4 + 2]);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) 7946459321327273103ULL);
    var_30 ^= ((/* implicit */unsigned long long int) ((unsigned int) 498220467U));
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) / (10204970939241969515ULL)));
}
