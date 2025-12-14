/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91024
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [0LL] [i_0] = ((/* implicit */unsigned long long int) min(((-((-(((/* implicit */int) arr_5 [i_1])))))), (17)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (short)0))))) ? (9007199254740991LL) : (((/* implicit */long long int) (+(arr_0 [i_0]))))));
                        arr_12 [i_0] [20LL] [i_0] = ((/* implicit */int) (-((~(var_14)))));
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)0)))))));
                        var_21 = ((/* implicit */unsigned short) var_12);
                        var_22 = ((/* implicit */signed char) ((arr_0 [i_0]) != (arr_0 [i_0])));
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((!(var_3))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [10ULL] [10ULL] [i_1] [(unsigned short)20]))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_4]))))))))));
                            var_24 = ((/* implicit */unsigned long long int) (unsigned char)93);
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((arr_6 [i_0]), (arr_6 [i_0]))) * (((/* implicit */unsigned long long int) ((2147483647) / (var_18))))))) ? (((((((/* implicit */unsigned long long int) arr_7 [i_0] [i_4] [i_1] [i_0])) - (arr_18 [i_0] [i_0] [(signed char)16] [i_4] [i_0]))) / (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)6] [(unsigned char)10])), (var_4)))))) : (((arr_13 [i_0] [i_0] [i_0] [i_2] [i_4] [i_5 + 1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)114)) : (var_0))))))));
                            arr_19 [i_4] [i_4] [i_2] [i_4] [i_4] [i_4] &= arr_3 [i_0] [i_2];
                            arr_20 [i_4] [i_0] [i_2] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_0] [(unsigned char)16] [i_5])) ? (-9007199254740992LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) (!((_Bool)1))))))), (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_1 + 2] [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)92)), (-9007199254740972LL)))) : (arr_8 [i_1 - 2] [(short)12] [i_1 - 2] [i_1 + 3])))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [(signed char)1] [14] [14] [i_6] = ((/* implicit */short) -9150411431573106479LL);
                            arr_26 [i_0] = ((/* implicit */long long int) ((signed char) arr_17 [i_1] [i_1 + 1] [i_0] [(signed char)3] [i_1 + 2]));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_27 [(_Bool)1] [i_2] [i_1 - 2] [i_2] [i_1 + 3])))))))));
                            arr_30 [i_4] [i_1 + 2] [i_2] [(signed char)0] [i_4] [i_2] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), (arr_24 [i_0] [i_1] [i_0] [(signed char)9] [(signed char)15])))) || (((/* implicit */_Bool) 9007199254740991LL)))) ? ((~(((/* implicit */int) (!(arr_11 [9] [(_Bool)1] [9] [(unsigned short)15])))))) : (((/* implicit */int) ((min((((/* implicit */long long int) arr_11 [(unsigned short)1] [i_1] [i_2] [(unsigned short)1])), (arr_16 [(unsigned short)4] [14ULL] [14ULL] [i_2] [i_7] [14ULL]))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [5ULL] [i_1] [i_2] [i_4] [i_4] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (var_15)))))))));
                        }
                        var_27 = ((/* implicit */_Bool) ((max(((!(((/* implicit */_Bool) var_15)))), ((!(((/* implicit */_Bool) var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_4]))))) : (var_4)));
                    }
                    var_28 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_27 [i_0] [i_0] [i_2] [i_2] [i_1 - 2]) - (-149579398)))) + (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483646)) ? (-2147483634) : (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */unsigned long long int) 1892394094)) + (arr_6 [i_0])))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_29 = (~(arr_22 [i_0]));
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))))) - ((-(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_0]))) / (var_1)))))));
                            var_31 = ((/* implicit */unsigned short) (-(max((arr_22 [i_0]), (((/* implicit */int) var_9))))));
                            arr_37 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [(unsigned short)5] [(signed char)11] [(signed char)11] [(signed char)11] [(signed char)11] [0U] [i_1 + 2])) & (((/* implicit */int) arr_35 [(_Bool)1] [7] [i_1] [i_1 + 1] [i_1] [(_Bool)1] [i_1 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_8] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) (-(-218437375)))) : (arr_28 [(_Bool)1] [i_8])))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                        {
                            var_32 ^= ((/* implicit */unsigned int) max(((~((~(var_4))))), (-2147483639)));
                            var_33 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min(((-(var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-9)))))))) * (15349896827781358499ULL)));
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                        {
                            arr_43 [i_11] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (var_10))))));
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_11] [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 1])) ? (arr_21 [i_1] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_0] [i_0]) : (arr_21 [i_1] [i_1 + 2] [i_0] [i_1 + 2] [i_0] [0LL]))))));
                            var_35 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [9ULL])) ? (((/* implicit */int) var_11)) : (arr_27 [i_0] [i_0] [i_2] [i_0] [i_0])))) ? ((((_Bool)1) ? (var_12) : (((/* implicit */long long int) arr_22 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)77)) << (((((/* implicit */int) arr_39 [(unsigned short)3] [i_0] [i_1 - 1] [i_1 - 1] [10ULL] [i_0] [i_0])) - (46432))))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [9ULL])) ? (((/* implicit */int) var_11)) : (arr_27 [i_0] [i_0] [i_2] [i_0] [i_0])))) ? ((((_Bool)1) ? (var_12) : (((/* implicit */long long int) arr_22 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)77)) << (((((((/* implicit */int) arr_39 [(unsigned short)3] [i_0] [i_1 - 1] [i_1 - 1] [10ULL] [i_0] [i_0])) - (46432))) - (5274)))))))));
                        }
                        for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) max((50860416), (((/* implicit */int) (_Bool)1))))), (max((arr_0 [i_0]), (((/* implicit */unsigned int) var_18)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-20367)))))));
                            var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [7]))));
                            var_37 = ((/* implicit */short) min((var_37), ((short)-26405)));
                        }
                        arr_49 [i_0] [i_1 - 2] [i_0] [i_0] [10ULL] [i_1 - 1] = ((/* implicit */signed char) (-(((arr_8 [i_0] [i_1 - 2] [i_0] [i_1 - 2]) - (((/* implicit */unsigned long long int) var_1))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            var_38 *= ((/* implicit */_Bool) (((+(((/* implicit */int) var_5)))) << ((((+(var_1))) + (5152769102437383487LL)))));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [(_Bool)1]) + (2147483647)))) ? ((-(15349896827781358510ULL))) : (15349896827781358510ULL)));
                            arr_52 [i_0] = ((/* implicit */unsigned int) var_5);
                            var_40 = 52626765U;
                        }
                    }
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1), (((/* implicit */int) (unsigned char)18))))) ? (((((/* implicit */long long int) 552555914)) ^ (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))))));
}
