/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75005
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) var_2)) : (min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_8)) : (arr_0 [i_0]))), (((/* implicit */int) (signed char)-89))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_12 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) arr_1 [i_0] [i_2 + 2])) - (var_4)))))) / (((arr_7 [i_0] [(unsigned char)10] [i_0 - 3] [i_2 + 3] [i_3]) / (max((((/* implicit */unsigned long long int) arr_4 [i_3])), (arr_2 [i_0] [i_0])))))));
                        var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (max((var_4), (((/* implicit */long long int) var_7))))))) ? (arr_8 [i_2 + 2] [i_1] [i_2 + 3] [i_2]) : (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_4 [i_2])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            arr_12 [i_4] [i_0] [i_2 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)88)))) - (((/* implicit */int) (signed char)-89))));
                            arr_13 [(short)9] [i_3] [i_2 - 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                            var_14 = ((/* implicit */unsigned char) var_10);
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 2) 
                        {
                            arr_16 [i_0 - 3] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2]))) < (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))), (var_0)))));
                            arr_17 [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_2] [i_3] [(_Bool)0] = ((/* implicit */short) var_10);
                            arr_18 [(signed char)5] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_8 [i_0 + 3] [i_0] [i_2 + 3] [i_5 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            arr_19 [(signed char)1] [i_3] [i_0] [i_1] [i_0 + 2] = max((max((arr_8 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */long long int) arr_0 [i_0 + 3])))), (((/* implicit */long long int) (((~(var_5))) & (((/* implicit */int) var_3))))));
                            arr_20 [(signed char)7] [i_1] [i_0] = ((/* implicit */unsigned char) arr_14 [14LL] [i_1] [i_2] [i_2] [i_2] [(short)1] [i_1]);
                        }
                        arr_21 [i_0 + 2] [i_0] = var_4;
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0 + 1] [i_1] [i_0] [i_6] = min((((((((/* implicit */int) var_6)) + (((/* implicit */int) var_2)))) - (min((((/* implicit */int) (signed char)86)), (arr_23 [i_0] [i_0] [i_2] [i_6]))))), ((~(((/* implicit */int) (signed char)74)))));
                        arr_26 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) 3617476561U);
                    }
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) var_10);
                        var_16 = ((((/* implicit */_Bool) ((unsigned int) max((arr_3 [i_2 + 1]), (((/* implicit */short) (signed char)-104)))))) ? (min(((~(((/* implicit */int) arr_6 [i_0] [i_0])))), (((((/* implicit */_Bool) 16206687593357520743ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)39311)))))) : (((/* implicit */int) ((unsigned short) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) min(((+(arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (arr_7 [i_0] [i_0 - 1] [(signed char)10] [(unsigned char)2] [i_0])))));
    }
    for (signed char i_8 = 2; i_8 < 11; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            for (signed char i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(3698676839U)))), (((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (9241908983388561346ULL) : (((/* implicit */unsigned long long int) -976195625))))))) ? (min((((/* implicit */unsigned long long int) arr_39 [i_8] [i_9] [i_8] [i_8] [i_8] [i_10 + 1])), (arr_7 [i_8 - 2] [i_9] [i_10] [9ULL] [i_11]))) : (min((max((17587782259321044328ULL), (((/* implicit */unsigned long long int) arr_35 [i_8] [(_Bool)1] [i_11])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 517152174)), (3617476538U))))))));
                        arr_42 [i_8 + 1] [(short)1] [i_10] [i_11] = ((/* implicit */unsigned long long int) -517152171);
                        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_8 + 1] [(short)12] [i_8 + 1] [i_8])))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)26224))))) ? (((/* implicit */long long int) 3698676851U)) : (((((/* implicit */_Bool) arr_14 [i_8 - 2] [6] [i_10] [i_11] [6] [i_11] [i_8 - 2])) ? (var_9) : (((/* implicit */long long int) 596290444U)))))) - (3698676846LL)))));
                        arr_43 [9] [i_10] [i_10] [i_8] = ((/* implicit */int) -7491832274993905146LL);
                    }
                    arr_44 [i_10] [i_10] [i_10] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_8 + 1] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))) : (596290479U))))), ((+(((/* implicit */int) ((arr_1 [(unsigned short)1] [i_10 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (min((((/* implicit */int) (unsigned short)50360)), (((((/* implicit */int) arr_27 [i_8] [0ULL])) / (((/* implicit */int) arr_37 [i_8])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [8U] [i_8] [i_8] [6LL])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_8] [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)23117)) : (((/* implicit */int) var_2))))))))));
        arr_45 [i_8] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)29600)) : (((/* implicit */int) (signed char)-104))))) ? (((/* implicit */long long int) arr_1 [(unsigned char)14] [i_8])) : (min((var_9), (((/* implicit */long long int) (unsigned short)34815)))))) << ((((+((+(-7491832274993905146LL))))) + (7491832274993905168LL))));
    }
    var_21 = (~(((/* implicit */int) var_2)));
}
