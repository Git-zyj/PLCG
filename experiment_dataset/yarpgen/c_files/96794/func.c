/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96794
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_1])))) && (((((/* implicit */_Bool) 6620275009019611178ULL)) && (((/* implicit */_Bool) arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) max((min((arr_8 [i_0] [13U] [i_0] [i_3]), (((/* implicit */unsigned long long int) arr_10 [3U] [i_1] [i_2])))), (((/* implicit */unsigned long long int) ((unsigned short) 11826469064689940430ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (11826469064689940430ULL) : (((/* implicit */unsigned long long int) arr_1 [i_3 + 1]))))))))));
                            arr_14 [i_3] = ((/* implicit */signed char) (+(6620275009019611204ULL)));
                            arr_15 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)64254)), (((arr_8 [i_2 - 1] [i_1] [i_2] [10]) / (arr_8 [i_2 - 1] [i_1] [i_2 + 1] [i_1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)111))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64254)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)12))))) : (max((((/* implicit */unsigned long long int) var_6)), (11826469064689940442ULL)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) 11826469064689940467ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    arr_27 [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) 3726158610U));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((unsigned char)52), (((/* implicit */unsigned char) arr_20 [i_4] [i_5]))))), (((((/* implicit */_Bool) (unsigned short)1282)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (min((((/* implicit */unsigned int) arr_18 [(unsigned char)6])), (((((/* implicit */_Bool) 17456260421357135134ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) : (arr_21 [i_4]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4])) ^ (((/* implicit */int) (unsigned short)7872))))) ? (((/* implicit */int) arr_32 [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 2] [i_5 + 2] [i_6])) : ((~(((/* implicit */int) arr_17 [i_5 + 1])))))))));
                                arr_33 [i_4] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */unsigned short) var_2);
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((3175567093U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 + 1]))))))) >= (((arr_30 [i_7] [i_7] [i_7] [i_5 + 3] [i_7] [i_5]) & (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 + 1]))))))))));
                                var_20 = max((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)65535)) >> (((arr_12 [5ULL] [i_7] [i_7]) - (6866044190455917049ULL))))) < (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (short)-18542)) : (((/* implicit */int) (unsigned short)23811))))))), (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21))) > (arr_22 [i_7] [i_6])))), (((((/* implicit */_Bool) arr_5 [17ULL])) ? (arr_25 [i_4] [13U] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6]))))))));
                            }
                        } 
                    } 
                }
                arr_34 [i_4] [(unsigned short)5] = ((/* implicit */unsigned short) (+(2901514527U)));
                arr_35 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))) > (max((((((/* implicit */int) arr_32 [i_4] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [16ULL])) & (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (unsigned short)1282)) ? (((/* implicit */int) (unsigned short)12800)) : (((/* implicit */int) (unsigned short)4390))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_3);
}
