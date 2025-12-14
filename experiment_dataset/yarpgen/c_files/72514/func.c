/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72514
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_5 [i_0])), (min((arr_2 [i_1] [i_0] [i_2 + 2]), (arr_2 [i_0] [i_0] [i_2 - 1])))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */short) 2444045151U);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (int i_6 = 3; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_4] [i_5] [i_5])))))))) ? (((/* implicit */long long int) max((arr_14 [i_4 - 1] [i_1] [i_1] [i_6 - 1]), (((/* implicit */unsigned int) var_8))))) : (((((/* implicit */_Bool) (signed char)-96)) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_5] [i_6 + 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_5]))))))))))));
                                arr_22 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (short)19738)) : (((/* implicit */int) (unsigned char)138))))) ? (((((/* implicit */int) (signed char)-92)) & (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) var_7)))))));
                                arr_23 [i_0] [i_1] [i_4] [i_5] [i_6 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6856776042752239504LL)) ? (((/* implicit */int) (short)-24624)) : (((/* implicit */int) (signed char)118))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) * (5902619564016832646ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((int) var_5)) | (min((((((/* implicit */_Bool) 1736262837345229923ULL)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned char)191)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-90))))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        for (unsigned int i_8 = 2; i_8 < 15; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                arr_34 [i_11] [i_10 + 1] [i_10 - 1] [i_9] [i_8] [i_7] [i_7] = ((/* implicit */short) min((((/* implicit */long long int) ((((_Bool) var_3)) && (((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_0)) + (32466))))))))), (arr_27 [i_7] [i_7])));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */short) (signed char)-88)), (var_0)))), (min((((/* implicit */int) arr_25 [i_7])), (2147483647)))))) : (((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_1)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)223)), (var_9)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_8)) ? (arr_28 [i_13] [i_12] [i_9] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))))) >= (arr_28 [i_7] [i_8 + 1] [i_8 + 1] [i_8 + 1]))) ? (((/* implicit */long long int) (((+(arr_24 [i_9] [16ULL]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) arr_36 [i_7] [i_8 + 1] [i_9] [i_7])) ? (arr_27 [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                                arr_40 [i_7] [i_7] [i_8] [i_9] [i_12] [i_13] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_10)) : (var_5)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)-17503)))))))), ((((!(((/* implicit */_Bool) arr_33 [i_13] [13U] [i_9] [i_7] [i_7])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)16671))))) : (arr_24 [i_7] [i_8 - 1])))));
                                var_16 = ((/* implicit */_Bool) 1334576741);
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-((-(((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_12] [i_8] [i_12] [i_7] [i_13]))) - (5738493089805350727LL))))))))));
                                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_8] [i_8] [i_8 + 2])) * (((/* implicit */int) (signed char)-101))))), (min((3754812678U), (((/* implicit */unsigned int) (short)-22282))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
