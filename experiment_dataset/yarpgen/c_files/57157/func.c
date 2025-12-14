/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57157
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
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_11)))))) == (((/* implicit */int) ((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_11))))) > (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [8LL]))))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((min(((+(((/* implicit */int) var_6)))), (((((((/* implicit */int) var_6)) + (2147483647))) >> (((3247083315U) - (3247083289U))))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_4]))))))))));
                                var_17 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1])), (arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [(unsigned char)6] [i_2] [(signed char)1] = ((/* implicit */int) ((((/* implicit */long long int) 1047883980U)) + (7871210204096994517LL)));
                }
                for (long long int i_5 = 2; i_5 < 7; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        arr_21 [5U] [5ULL] [i_0] [(unsigned short)8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) << (((/* implicit */int) ((((/* implicit */_Bool) ((27) + (((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_0] [i_5]))))) && (((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_5] [i_5] [i_6]), (((/* implicit */unsigned long long int) 3247083336U))))))))));
                        arr_22 [i_0] [i_0] [i_0] [10ULL] [i_0] = ((/* implicit */unsigned int) -44);
                        arr_23 [i_1] [i_1] [i_5] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_5)))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_18 -= ((/* implicit */int) ((long long int) ((arr_9 [i_5 - 1]) >> (((((/* implicit */int) (signed char)-111)) + (162))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_5] [i_7] [i_7] [i_7])) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))) | (max((((/* implicit */long long int) var_12)), (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-103)))) : (1081554953U))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            arr_31 [i_0] [i_1] [i_5 - 2] [i_8] [i_9] = ((/* implicit */int) ((unsigned long long int) var_14));
                            var_20 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) ((_Bool) var_5))) < (((((/* implicit */_Bool) 3247083337U)) ? (((/* implicit */int) arr_30 [i_0] [i_9] [i_5] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) (short)12288)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_21 = ((/* implicit */short) arr_10 [i_5 - 2] [i_1] [i_1] [i_5] [i_10]);
                            arr_34 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_5] [i_1] [i_10]);
                            var_22 -= ((/* implicit */long long int) ((_Bool) var_0));
                            var_23 = (~(((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))) : (arr_14 [i_10] [i_8] [i_5 - 1] [i_1] [0]))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            arr_38 [i_0] [8LL] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (arr_26 [i_5 + 4]) : (arr_26 [i_5 + 3]))) >> (((((((/* implicit */_Bool) max((var_6), (((/* implicit */short) arr_8 [i_1]))))) ? (((int) var_13)) : (((/* implicit */int) ((short) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]))))) + (21025)))));
                            var_24 = ((/* implicit */unsigned char) var_8);
                        }
                        arr_39 [i_0] [i_5 + 3] = ((/* implicit */long long int) arr_10 [i_0] [(short)4] [i_1] [i_0] [i_8]);
                    }
                    var_25 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (3247083319U)));
                    arr_40 [i_0] &= ((/* implicit */int) ((4030130483326791837LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-30292)))));
                    arr_41 [2U] [i_1] [i_5 - 2] = ((/* implicit */unsigned char) ((_Bool) min((arr_20 [i_5 + 4]), (((/* implicit */long long int) min((-1718644261), (((/* implicit */int) var_6))))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_5 + 3])) && (((/* implicit */_Bool) (-(arr_9 [i_5 + 4])))))))));
                }
                for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21127)))))) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_12])) : ((~(((/* implicit */int) var_7))))))) ? (((arr_26 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_6 [i_0] [i_1] [i_12])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) (signed char)113))))))));
                    arr_44 [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                }
                for (short i_13 = 2; i_13 < 10; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_14 = 1; i_14 < 10; i_14 += 4) 
                    {
                        var_28 += ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [7U] [(short)0] [i_13 - 2] [i_1] [(short)8] [(short)8])) && ((((!(((/* implicit */_Bool) 43)))) || (((/* implicit */_Bool) max((((/* implicit */short) var_2)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_36 [i_14] [i_14] [2] [i_14] [i_14])) && (((/* implicit */_Bool) ((short) var_1))))), (((((/* implicit */_Bool) ((int) var_0))) || (((((/* implicit */_Bool) arr_45 [i_13])) && (((/* implicit */_Bool) var_7))))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), ((!(((/* implicit */_Bool) arr_14 [(short)7] [(_Bool)1] [i_13 - 2] [(_Bool)1] [i_13 + 1]))))));
                    }
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (signed char)114)))))));
                            arr_55 [i_0] [5ULL] [i_13] [6] = ((/* implicit */int) arr_43 [i_13 - 1] [i_13 - 1]);
                        }
                        var_32 = ((/* implicit */short) ((unsigned char) var_3));
                        var_33 = ((/* implicit */short) arr_36 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]);
                    }
                    /* LoopNest 2 */
                    for (short i_17 = 1; i_17 < 9; i_17 += 4) 
                    {
                        for (unsigned int i_18 = 3; i_18 < 10; i_18 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned int) max((var_34), (min((3247083316U), (((/* implicit */unsigned int) (_Bool)1))))));
                                var_35 = ((/* implicit */long long int) min((((unsigned short) var_11)), (((/* implicit */unsigned short) ((unsigned char) 1047883971U)))));
                                arr_62 [i_18] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(arr_7 [i_0] [i_13 - 2] [i_13] [i_13]))) | (((/* implicit */int) (signed char)-120))))) ? (((/* implicit */int) arr_17 [i_18 - 3] [i_17] [(short)2])) : (var_13)));
                            }
                        } 
                    } 
                    arr_63 [i_1] = ((long long int) (unsigned char)215);
                }
                /* LoopSeq 1 */
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_20 = 4; i_20 < 7; i_20 += 4) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned int) ((unsigned short) (((_Bool)0) ? (5) : (((/* implicit */int) (unsigned char)215)))));
                                arr_71 [i_21] [i_20] [i_19] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_9)) / (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_21] [i_20] [10LL] [i_19] [i_1] [i_0])) : (((/* implicit */int) var_2)))))));
                                var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_70 [i_19] [i_1] [i_19]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_7)))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_28 [i_0] [i_0])) >= (((/* implicit */int) var_7))))), (2124224969))))));
                                arr_72 [(unsigned char)7] [(unsigned char)10] [i_20 - 2] [i_20 + 2] [i_20 + 4] = ((/* implicit */unsigned short) arr_53 [i_0] [i_0] [8LL] [i_0] [i_0] [i_20] [i_21]);
                                arr_73 [i_1] [i_19] [i_20] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_20]))))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_48 [i_0] [i_0] [(unsigned char)6] [i_19]))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_19] [i_0] [i_19])) ? (arr_54 [i_0] [i_0]) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_19])))) : (((/* implicit */int) arr_36 [i_0] [i_19] [i_1] [i_0] [i_0]))))), (min((arr_58 [i_0] [i_19]), (((/* implicit */long long int) 3152057237U)))))))));
                    var_39 = ((/* implicit */short) max((((((/* implicit */long long int) 3682358056U)) | (arr_37 [i_19] [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_57 [i_0] [i_1] [i_1] [i_19])))))));
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((unsigned short) (+(((((/* implicit */_Bool) arr_24 [i_0] [i_1] [(short)5] [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_19] [i_19] [i_19] [(unsigned short)3] [i_19]))) : (3247083324U)))))))));
                }
                arr_74 [10LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (var_13) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1))))))))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_8)))))));
}
