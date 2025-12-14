/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83654
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
    var_13 = ((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-25263)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((int) (signed char)-8));
                    var_14 = ((int) ((max((var_2), (((/* implicit */unsigned long long int) arr_6 [6] [(_Bool)1] [(_Bool)1])))) <= (((/* implicit */unsigned long long int) min((arr_4 [4LL]), (((/* implicit */long long int) var_3)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_15 += ((max((((/* implicit */unsigned long long int) var_7)), (arr_10 [12LL] [i_2] [i_1 + 1] [2LL]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_3))))));
                        arr_11 [i_0] [i_2] [i_0] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_3) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)-7891)) ? (4LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-8)) | (((/* implicit */int) (signed char)23))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1]))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned char)37)) ? (0) : (((/* implicit */int) (short)-6))))));
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_17 |= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)33833)) / (((/* implicit */int) var_8)))) < (((/* implicit */int) var_6))));
                            var_18 = ((/* implicit */int) var_5);
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */int) arr_16 [i_0] [i_0] [(_Bool)1] [i_4] [i_0] [3LL])), ((~(((/* implicit */int) (signed char)-8)))))))));
                        }
                        arr_17 [i_1] = ((/* implicit */unsigned long long int) (+((-(((arr_14 [i_0] [i_1 - 3] [i_2] [i_4]) ? (((/* implicit */int) arr_15 [9ULL] [i_1] [i_2])) : (((/* implicit */int) (_Bool)1))))))));
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (min((((/* implicit */long long int) (unsigned char)21)), (5500907859549355036LL)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned char)217))))), ((-(arr_4 [i_2]))))) : (var_0)));
                        var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7875))))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_4] [i_2] [(unsigned short)8] [i_0])) ? (arr_10 [i_0] [i_1] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    }
                }
                for (long long int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_3))))))));
                    arr_22 [i_1] [5ULL] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [(short)12] [(unsigned char)1] [i_6] [(unsigned char)2] [i_0 + 1] [i_1 - 3])) | (((/* implicit */int) ((((((/* implicit */int) (unsigned char)33)) | (((/* implicit */int) (unsigned char)35)))) != (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 3] [i_0 - 1] [i_0 + 2])))))));
                }
                for (long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    var_23 += ((/* implicit */short) (+(var_0)));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7755932982721525487LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)206))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (short i_9 = 3; i_9 < 12; i_9 += 4) 
                        {
                            {
                                arr_31 [5ULL] [i_1] [5ULL] [i_8] [i_1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_16 [i_9] [i_8] [i_1] [i_0] [i_1] [i_0]))))))))));
                                var_25 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (arr_9 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) (unsigned char)191)), (-386532022)))));
                }
                for (long long int i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) var_7);
                    arr_36 [i_1] [i_10] = ((/* implicit */_Bool) ((unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (var_2))))));
                }
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_11))));
                arr_37 [i_0] [i_1] [(unsigned char)10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_35 [i_0 + 1]))))));
            }
        } 
    } 
}
