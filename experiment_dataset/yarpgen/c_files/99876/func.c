/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99876
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
    var_13 = var_1;
    var_14 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_8 [i_0] [i_0] [i_1] [i_1] [(unsigned char)7] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) (unsigned short)7629))), (((arr_4 [i_0 + 4]) - (arr_4 [i_0 + 2])))));
                        var_15 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                        arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0 + 4]));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_14 [i_0 + 3] [5] [i_5] = ((/* implicit */short) arr_10 [i_0 + 4] [i_0 + 2]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */int) arr_1 [i_6])) > (((/* implicit */int) arr_15 [i_0] [i_4 - 1] [7LL])))) ? (((((/* implicit */_Bool) arr_16 [i_0] [(unsigned char)7] [i_5] [i_6])) ? (arr_2 [i_0]) : (arr_2 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0 + 4]))))))));
                        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)250)) << (((/* implicit */int) arr_7 [i_0 + 3] [i_4] [i_4] [(unsigned char)6] [i_4]))))) ? (((/* implicit */int) ((unsigned short) (-2147483647 - 1)))) : (((/* implicit */int) arr_1 [i_0 + 2]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) (+((~(-9223372036854775800LL)))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(max((((/* implicit */int) min((arr_5 [i_0] [i_5] [i_0] [i_8]), (((/* implicit */signed char) arr_21 [i_4] [i_4] [2] [i_5] [i_5]))))), (((((/* implicit */int) arr_22 [i_0])) - (((/* implicit */int) var_7)))))))))));
                            arr_24 [i_5] [i_0] [i_4] [i_5] [(short)6] [(signed char)0] |= ((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)224)), ((short)-15109)));
                        }
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 262143U)) || (((/* implicit */_Bool) 9223372036854775800LL)))))))) : (((max((arr_25 [i_0] [i_0] [i_4 - 1] [i_5] [i_7] [i_7] [i_0]), (((/* implicit */long long int) var_11)))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_0] [i_7] [i_5] [i_0] [i_0])), ((unsigned short)57902)))))))));
                            arr_27 [i_0 + 3] [i_0 + 3] [i_0 + 4] [i_0 + 3] [i_0 + 2] [i_0 + 4] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) (short)-32752)) <= (((/* implicit */int) (unsigned short)18017))));
                        }
                    }
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                    {
                        arr_30 [i_4 - 1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)60053))));
                        arr_31 [i_0] [i_4] [i_5] [i_5] [i_10] = ((/* implicit */unsigned short) max((arr_29 [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_4 - 1]), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_10])) >= (((/* implicit */int) (unsigned char)240))))) >= (((((/* implicit */_Bool) 1699716317641236855ULL)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min(((~(arr_4 [i_0 + 1]))), (((/* implicit */long long int) ((((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_4 - 1] [8U]))))) || (((/* implicit */_Bool) (unsigned short)7642))))))))));
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_4] [i_4])) : ((-(((/* implicit */int) arr_17 [i_0] [i_0] [2U] [i_0]))))));
                }
            } 
        } 
        arr_32 [i_0] [i_0] = ((/* implicit */signed char) (~(0U)));
        var_23 |= ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [5ULL] [i_0] [i_0] [6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16747027756068314761ULL)) || (((/* implicit */_Bool) 16747027756068314753ULL)))))) : (arr_18 [i_0] [(short)1] [(short)11] [(short)1] [i_0] [i_0]))), (((((((/* implicit */int) (unsigned char)9)) != (((/* implicit */int) (signed char)48)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (arr_20 [i_0] [i_0] [(unsigned short)1] [i_0]))) : (((/* implicit */long long int) (-(-4))))))));
    }
    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) < (((/* implicit */int) (short)-32762)))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) > (1022614948218070530ULL)));
        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)57891)) ? (-1585262129513029LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57917)))));
        /* LoopSeq 2 */
        for (unsigned int i_12 = 1; i_12 < 17; i_12 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_37 [i_11] [8LL])) ? (((/* implicit */int) arr_37 [i_12 + 1] [(short)14])) : (((/* implicit */int) arr_34 [(short)0])))))))));
            arr_40 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_11])) ? (((((/* implicit */_Bool) arr_39 [i_12] [i_12 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11] [i_11]))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11] [i_11])))));
        }
        for (unsigned int i_13 = 1; i_13 < 17; i_13 += 3) /* same iter space */
        {
            arr_45 [i_11] [i_11] = ((/* implicit */unsigned int) arr_39 [i_11] [i_11]);
            arr_46 [i_11] = ((/* implicit */short) max((((max((arr_42 [i_11] [i_13]), (((/* implicit */unsigned int) 2047)))) + (((/* implicit */unsigned int) min((2038), (((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) (short)1023))));
            arr_47 [i_11] [i_11] [i_11] = ((/* implicit */int) (unsigned char)224);
        }
    }
}
