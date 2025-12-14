/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91608
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
    var_15 = ((/* implicit */unsigned short) (~(var_2)));
    var_16 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (var_1))) ? (max((((/* implicit */unsigned long long int) var_13)), (max((1754454029755252005ULL), (((/* implicit */unsigned long long int) 4304007012100011959LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((var_7), (var_11))), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8)))))))))));
    var_17 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (-1900016325177763341LL)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_2]);
                        arr_11 [i_0] [11U] [i_1] [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6462689884871162755LL)) ? (16692290043954299610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13458))) : (var_3)))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) var_11))))));
                        arr_14 [i_1] [(short)12] [i_1] [12LL] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)52077))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */long long int) (short)-3537);
                            arr_18 [i_1] [i_1] [(unsigned short)3] [(unsigned short)3] [i_1] = ((/* implicit */int) (short)3536);
                            arr_19 [i_0] [(unsigned short)10] [(unsigned short)10] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
                            arr_20 [i_0] [i_5] [(short)0] [i_4] [(short)0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1 - 2]))) : (((arr_6 [i_5] [i_1] [i_2] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_4]))) : (var_8)))));
                            var_19 = ((/* implicit */unsigned short) (short)-3537);
                        }
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            arr_23 [4U] [4U] [i_1] [i_4] [4U] = ((/* implicit */_Bool) ((short) (-(var_1))));
                            arr_24 [i_1] [i_1] [(_Bool)1] [i_4] [4ULL] = ((/* implicit */signed char) -479188291);
                            arr_25 [i_0] [i_1] [i_2] [(unsigned char)1] [(unsigned char)1] = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_1]))));
                        }
                        for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            arr_29 [i_4] [i_1] [9U] [9U] [9U] [i_1] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [(unsigned char)1] [i_1] [i_4] [i_7]))));
                            arr_30 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))));
                            arr_31 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)3536)) ? (((/* implicit */int) (unsigned short)46993)) : (((/* implicit */int) (_Bool)0))));
                            arr_32 [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) 3519771543U);
                        }
                        for (unsigned short i_8 = 2; i_8 < 10; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_1 [i_0]))));
                            arr_36 [i_0] [i_1] [i_1] [i_0] [i_0] [3U] [i_0] = ((/* implicit */long long int) ((((long long int) 2040125751U)) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)56651)) == (((/* implicit */int) (unsigned char)0))))))));
                        }
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) * (var_1)))) ? (((unsigned long long int) arr_21 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4])))));
                    }
                    arr_37 [i_0] [i_1] = ((/* implicit */short) arr_6 [i_1] [i_1 + 2] [i_1] [i_1 + 2]);
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_5 [i_1] [(unsigned short)7])))))) ? ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_0] [i_0] [i_9] [i_0])) : (((/* implicit */int) (short)-3537)))))) : ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [(_Bool)1]))))));
                        arr_40 [i_9] [i_1] [i_2] [i_2] = arr_33 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_2];
                        arr_41 [i_0] |= (-((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) : (2102438045173865829LL))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        arr_44 [(unsigned char)5] [(unsigned char)5] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((1118877886) & (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            arr_47 [i_1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_1 - 1] [i_1]))));
                            var_23 = ((/* implicit */unsigned char) (-((+(arr_42 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10])))));
                            arr_48 [i_0] [i_1] [i_2] [i_0] [i_11] [i_11] = ((/* implicit */signed char) ((0ULL) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0)))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1 - 2])) & (((/* implicit */int) arr_4 [i_1] [i_1 - 2]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 2) 
                        {
                            {
                                arr_53 [(unsigned short)11] [(unsigned short)11] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_1] [i_1] [(unsigned short)12] [(unsigned short)12]))) ? (((max((var_2), (((/* implicit */long long int) (short)19403)))) >> (min((arr_5 [i_0] [i_0]), (((/* implicit */long long int) arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((13523553711787794997ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_13])))))) ? (((/* implicit */int) arr_38 [0] [i_13 - 1] [i_1] [i_12])) : ((~(((/* implicit */int) arr_49 [i_1] [i_0] [i_1] [11ULL] [i_1] [i_1])))))))));
                                arr_54 [i_12] [i_0] [12LL] [i_12] [i_0] |= (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_0)) ? (18089952361844850767ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                    arr_55 [9] [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)15996))))));
                }
            } 
        } 
        arr_56 [i_0] = ((/* implicit */unsigned short) ((short) (unsigned short)58656));
    }
}
