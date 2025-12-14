/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82627
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    arr_7 [(unsigned char)12] [i_0] [i_2] = ((/* implicit */short) arr_1 [i_0]);
                    var_19 = ((/* implicit */unsigned int) (short)(-32767 - 1));
                    arr_8 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0]))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-68)) & (((/* implicit */int) var_1)))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0] [i_0]))) - (((/* implicit */int) ((_Bool) arr_2 [i_0])))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        var_22 = ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_0])) + (((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)4] [i_0])));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)91)) + (((/* implicit */int) arr_3 [i_0]))));
                        var_24 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 995420566)) ? (((/* implicit */int) (_Bool)1)) : (var_11))));
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */short) arr_5 [i_1] [i_2] [i_5]);
                        arr_19 [i_0] [i_1] [(unsigned char)5] [(unsigned char)2] = (+(((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (unsigned char)164)))));
                        var_26 = ((/* implicit */int) (+((-(var_6)))));
                        var_27 -= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) arr_18 [6LL] [i_2] [i_2] [i_5]))))));
                    }
                }
                for (short i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_7 = 3; i_7 < 11; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */unsigned long long int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6])) : ((+(8796076244992ULL)))))) ? ((~(arr_21 [i_7 - 2] [i_7 + 2] [i_7 + 1]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_15 [0U] [i_1] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58426)))) : (((((/* implicit */_Bool) (signed char)-46)) ? (1463446506) : (((/* implicit */int) arr_3 [i_7]))))))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (arr_6 [i_0] [(unsigned char)2] [i_0])))) - (max((var_16), (var_18)))))) ? (((/* implicit */int) min((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_7])) && (((/* implicit */_Bool) 8796076244962ULL)))), (((var_16) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))))) : (((/* implicit */int) arr_23 [(short)0])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) -1);
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)102)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_2 [i_0]))))))));
                        arr_31 [i_0] = (-(((/* implicit */int) (_Bool)0)));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (9LL)))) ? (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (unsigned char)161)))) : (556940227)));
                    }
                    for (int i_9 = 1; i_9 < 12; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) arr_5 [(short)2] [4LL] [i_6]);
                        arr_34 [i_0] [5] [i_6] [5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((arr_20 [i_6]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? (((556940213) << (((((/* implicit */int) (short)20414)) - (20414))))) : (((/* implicit */int) arr_29 [i_0] [i_9 - 1] [4] [i_6 - 1] [i_6 + 1]))))) <= (max((var_18), (((/* implicit */unsigned long long int) -482263623))))));
                        var_34 = ((/* implicit */_Bool) var_7);
                    }
                    var_35 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_0])) | (-503716690))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (-482263623) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30561))) > (arr_15 [i_0] [i_1] [i_6] [7LL] [i_6] [i_0]))))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((arr_17 [i_0] [i_1] [i_10] [i_11] [(_Bool)1] [4]) ? (((/* implicit */int) ((short) ((unsigned int) -770142218)))) : (((/* implicit */int) (unsigned char)96)))))));
                                arr_45 [0LL] [i_1] [i_10] [i_11] [i_10] |= ((/* implicit */short) var_12);
                                arr_46 [i_0] [i_1] [i_10] [4] [i_12] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) (-(arr_14 [i_0] [i_1] [i_10] [i_11])))) ^ ((((_Bool)1) ? (-5045648919173190640LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_25 [(unsigned short)9] [i_10] [i_11] [i_12])) - (147))))) > (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)0]))) ^ (arr_10 [i_1] [6U] [4] [i_1] [(_Bool)1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 770142218)) || (((/* implicit */_Bool) arr_37 [i_0] [i_1] [4] [i_11]))))) : (1110369962))))))));
                                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((var_16) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_10]))))))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [8])) ? ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (arr_4 [i_0] [2] [i_0]))))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(unsigned char)6])))))));
                    var_40 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1]))))))));
                    var_41 = ((((((/* implicit */_Bool) 3256512951U)) ? (((/* implicit */int) arr_40 [8LL] [i_0])) : ((~(((/* implicit */int) (_Bool)1)))))) ^ (((((/* implicit */_Bool) -556940227)) ? (((/* implicit */int) (unsigned short)49152)) : (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                {
                    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32170)) || (((/* implicit */_Bool) (signed char)-3))));
                    var_43 ^= ((/* implicit */unsigned char) var_9);
                    var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_1] [i_13]))));
                }
                var_45 = ((/* implicit */int) (((!(((/* implicit */_Bool) -29)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_39 [(unsigned char)2] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) (unsigned short)1609)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (max((((/* implicit */unsigned int) (unsigned char)236)), (177412682U)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_15 = 4; i_15 < 9; i_15 += 3) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            {
                                arr_56 [i_0] [i_1] [i_0] [i_15] [(short)6] = ((/* implicit */int) 3115292958U);
                                var_46 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_55 [(unsigned char)8] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [(short)3] [i_0] [(short)3] [i_1] [i_0])) && (((/* implicit */_Bool) 1463446494)))))) : (arr_37 [i_0] [i_1] [(unsigned short)12] [6])));
                                var_47 ^= ((/* implicit */short) arr_12 [i_0] [i_0] [(unsigned char)2] [6U]);
                            }
                        } 
                    } 
                    var_48 = ((/* implicit */long long int) (-(((2147483647) - (((/* implicit */int) (_Bool)1))))));
                }
            }
        } 
    } 
    var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((var_0) ^ (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_12)) ? (var_12) : (5045648919173190631LL))))))));
    /* LoopSeq 1 */
    for (long long int i_17 = 2; i_17 < 11; i_17 += 2) 
    {
        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */_Bool) (signed char)-109)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_17 - 1] [i_17 + 1] [i_17])))))));
        var_51 = ((/* implicit */_Bool) 1463446506);
    }
}
