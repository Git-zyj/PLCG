/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98725
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
                {
                    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (short)-1))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
                    {
                        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) 511LL))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4] [i_1] [i_2] [i_1] [i_1] [i_0])) ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) (short)8191)))));
                        }
                    }
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) (+(((unsigned long long int) arr_15 [i_0]))));
                        arr_18 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (+(arr_0 [i_0])));
                        arr_19 [8U] [i_1] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    }
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1] [(unsigned short)8]))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */long long int) ((arr_12 [i_6] [i_6] [i_6] [i_6] [i_6]) >= (arr_12 [i_0] [i_1] [i_1] [i_6] [i_1])));
                    arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_6] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (short)8211)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_7 = 4; i_7 < 14; i_7 += 1) 
                {
                    var_15 = var_6;
                    var_16 = ((/* implicit */long long int) -2015246257);
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) 2015246257))));
                            var_18 = ((/* implicit */unsigned char) var_8);
                        }
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_33 [i_0] [i_1] [i_1] [i_0] [i_8] [i_10] [(unsigned char)1] = ((/* implicit */short) ((arr_11 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8] [i_10]) ^ (arr_11 [i_0] [i_0] [i_8 + 2] [i_0] [(signed char)10] [i_10] [i_10])));
                            var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))) == (arr_4 [i_7] [i_8]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-11409))))) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) 2015246240)) != (127U))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((((/* implicit */int) (short)-13780)) + (13806))) - (12)))))) : (((long long int) arr_29 [i_0] [i_0] [i_0] [i_1] [(_Bool)1] [i_8 - 1] [i_8 - 1]))));
                        var_21 *= ((/* implicit */unsigned char) ((short) 4289185760U));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_0] [6U]);
                        var_23 += ((unsigned char) arr_34 [i_7 - 3] [i_1] [i_7 - 3] [i_1] [i_1]);
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_1))))) | (((/* implicit */int) var_7))));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) arr_3 [i_0] [i_7 - 4]);
                            var_26 = ((/* implicit */unsigned char) ((127U) >> (((arr_28 [i_1] [i_7 - 2] [(unsigned char)2] [i_7 + 1] [i_1] [i_7 - 4]) - (815750161U)))));
                            arr_38 [i_0] [i_11] [i_0] = arr_24 [i_12] [i_0];
                        }
                    }
                }
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    for (long long int i_14 = 2; i_14 < 12; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 2; i_15 < 11; i_15 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) (unsigned short)21476);
                                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((-7662493609536949765LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45537))))))));
                                arr_48 [i_0] [i_0] [(short)4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) -2015246257))) * (((((/* implicit */int) (unsigned char)211)) >> (((/* implicit */int) (signed char)15))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((4294967295U) - (3946306693U)));
    var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((3946306693U), (((/* implicit */unsigned int) ((int) (short)-1)))))) ? (-1) : (((((/* implicit */_Bool) (unsigned short)14308)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) var_5))))));
}
