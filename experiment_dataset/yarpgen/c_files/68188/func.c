/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68188
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
    var_18 = ((/* implicit */unsigned short) var_0);
    var_19 += ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)180)) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)6240)) | (((/* implicit */int) (short)-6236))))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 3; i_3 < 24; i_3 += 3) 
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)255)) >> (((/* implicit */int) arr_6 [i_3 + 1])))), (((/* implicit */int) min((arr_1 [i_0] [i_3]), (arr_1 [i_2] [i_3]))))))) ? (((arr_11 [i_3 - 2] [i_3] [i_3 + 1] [i_3 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) var_13))));
                        var_21 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (7722640156065196843LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) - (min((((var_15) + (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3] [i_3 - 2]))))));
                        arr_13 [i_3 - 3] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [i_2] [i_3])))) : (var_11))) == (((/* implicit */unsigned long long int) var_2))));
                    }
                    /* vectorizable */
                    for (short i_4 = 4; i_4 < 23; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_2] [i_4 + 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)52616)) << (((((arr_17 [i_0] [i_1] [i_2] [i_4]) + (600781927188557792LL))) - (14LL)))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_4] [i_4] [i_4 - 4])) ? (arr_8 [i_4 + 2] [i_4 + 1] [i_4] [i_4] [i_4 + 1] [i_4 - 3]) : (((/* implicit */int) arr_7 [i_4 + 2] [i_4 - 4] [i_4] [i_4]))));
                        arr_19 [i_2] [i_0] |= ((/* implicit */short) ((arr_3 [i_0] [i_0] [i_0]) >= (arr_17 [i_4 - 1] [i_4 - 2] [i_4 - 4] [i_4 - 4])));
                        arr_20 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_14 [i_0])) ? (var_16) : (var_11)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_1] [i_6] = (-(((/* implicit */int) (unsigned short)27165)));
                            var_23 = ((/* implicit */unsigned char) ((unsigned long long int) arr_24 [i_0] [i_1] [i_2] [i_5] [i_6]));
                        }
                        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) ((arr_16 [i_0] [i_7 - 1] [i_2]) <= (((/* implicit */unsigned long long int) 536870896))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_25 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7 - 1]);
                            var_25 = ((/* implicit */signed char) ((arr_8 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 2] [i_7]) & ((-(arr_8 [i_0] [i_1] [i_2] [i_5] [i_7] [i_7 - 1])))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 23; i_8 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) -1147220928);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (arr_23 [i_8] [i_1] [i_2] [i_5]) : (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_5] [i_2] [i_8]))));
                            var_28 = ((/* implicit */unsigned char) ((unsigned long long int) arr_32 [i_0] [i_1] [i_2] [i_1] [i_8 + 1] [i_1] [i_0]));
                        }
                        for (unsigned char i_9 = 1; i_9 < 23; i_9 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) arr_33 [i_1] [i_5] [i_9]);
                            arr_38 [i_9] [i_9] [i_2] [i_5] [i_0] [i_1] [i_5] = ((((/* implicit */_Bool) arr_8 [i_9] [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9] [i_9 - 1])) ? (((unsigned long long int) 2483001773U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned char)254)))) + (((/* implicit */int) arr_32 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_9])))))));
                        }
                        var_31 = ((/* implicit */unsigned int) ((unsigned long long int) var_10));
                        arr_39 [i_5] [i_1] [i_1] [i_5] [i_2] [i_5] = ((/* implicit */short) 4353467718982766228ULL);
                        arr_40 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) (-((-(arr_23 [i_0] [i_0] [i_0] [i_0])))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
                    {
                        arr_43 [i_1] [i_10] = ((/* implicit */long long int) var_10);
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_29 [i_0] [i_1] [i_2] [i_10])))), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((var_2), (((/* implicit */unsigned int) (unsigned char)255))))))) : (1184148371U)));
                    }
                    arr_44 [i_0] = ((/* implicit */signed char) (unsigned short)60260);
                    var_33 ^= ((/* implicit */long long int) 4258461925U);
                }
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)5276)) && (((/* implicit */_Bool) 7144429756341377297ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_7 [i_11] [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (3110818924U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) arr_34 [i_11] [i_11] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_46 [i_11] [i_1] [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        arr_49 [i_0] [i_1] [i_0] [i_12] = ((/* implicit */int) (-(((((-7722640156065196843LL) > (((/* implicit */long long int) var_0)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)150))))) : ((-(1184148372U)))))));
                        var_35 = ((/* implicit */unsigned short) ((arr_11 [i_0] [i_1] [i_11] [i_12]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((var_13), (var_13))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_11] [i_12])))))))) <= (((4163004044U) & (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1] [i_11] [i_12] [i_12]))))));
                    }
                }
            }
        } 
    } 
}
