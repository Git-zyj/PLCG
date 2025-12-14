/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84421
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) 456923856)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)90), (((/* implicit */unsigned char) var_2))))))))) ? (((/* implicit */unsigned int) (-((~(456923856)))))) : (((((/* implicit */_Bool) min((-5264620821055682309LL), (((/* implicit */long long int) (unsigned char)115))))) ? (max((var_4), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((456923856) > (((/* implicit */int) (_Bool)1))))))))));
    var_14 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_15 += ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_0 + 1]))))), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = (+(min((((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((var_4) - (3651049330U)))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3))))) - (((((/* implicit */int) var_10)) >> (((/* implicit */int) var_5)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3797626891U)) ? (arr_9 [4U] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))))))));
                            var_18 = ((((/* implicit */int) (unsigned char)90)) + (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))));
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)15)))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (4240968162558874590LL)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [(unsigned short)7]))))) ? (((arr_13 [i_5]) << (((((/* implicit */int) var_0)) - (45))))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (-7787709128899238313LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))))))) : (((((((/* implicit */_Bool) var_9)) ? (arr_6 [i_2]) : (arr_14 [i_1] [(unsigned char)3] [i_3] [i_2] [i_2] [i_1] [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_3] [6U] [i_0])))))));
                            var_19 *= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)70))))));
                            var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1])))) ? ((+(arr_9 [i_0 - 2] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_6 [i_3]))))));
                        }
                        var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_14 [i_1] [i_0] [5LL] [i_0] [i_0 + 1] [i_2 + 1] [i_1])) ? (arr_14 [i_0] [i_1] [i_2 + 1] [(unsigned short)7] [i_0 + 1] [i_2 - 2] [i_2 + 1]) : (arr_14 [i_0 + 1] [0] [0] [0] [i_0 + 1] [i_2 + 1] [i_0 + 1]))), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_4)))), (((((/* implicit */int) arr_2 [i_2 - 1])) < (((/* implicit */int) var_1)))))))));
                        arr_19 [i_3] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1] [i_1])) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_11 [i_0 - 1] [i_0 - 1] [i_1])))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_22 = var_7;
                        var_23 *= ((/* implicit */signed char) max(((!((_Bool)1))), (var_3)));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_0 - 2] [i_0 - 2] [7] [i_0 - 2] = ((/* implicit */_Bool) (-((-(2253683453U)))));
                            arr_31 [1ULL] [i_1] [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_12))), (((/* implicit */unsigned long long int) ((((var_2) ? (arr_27 [i_2 - 2] [i_2 - 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [2LL] [2LL] [i_2]))))) / (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_2 [i_7]))))))))));
                        }
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((arr_29 [i_0] [i_1] [(unsigned char)8] [(unsigned char)8] [i_2] [i_1] [i_7]), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))))))))));
                        arr_32 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)22159)) ? (-907271752921604004LL) : (((/* implicit */long long int) arr_8 [i_7])))), (min((((/* implicit */long long int) var_10)), (9223372036854775790LL)))))) ? (((((/* implicit */int) arr_29 [i_0] [(_Bool)1] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2])) >> (((((/* implicit */int) arr_29 [i_0] [i_1] [i_0] [i_7] [i_0] [(_Bool)1] [i_7])) - (60625))))) : (((((/* implicit */_Bool) min((arr_17 [i_0 + 1] [i_1] [i_2] [i_2]), (((/* implicit */int) arr_4 [(_Bool)1]))))) ? (arr_10 [(unsigned short)6]) : (((/* implicit */int) var_8))))));
                        arr_33 [i_7] [9ULL] [i_1] [9ULL] = ((/* implicit */_Bool) arr_16 [i_0 + 1] [(short)10] [i_2] [9] [i_1]);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_37 [i_1] = ((((/* implicit */_Bool) arr_34 [i_0] [(unsigned char)9] [i_2 + 1] [i_0] [i_9])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 + 1] [i_0 + 1] [(unsigned short)5] [i_0 + 1] [i_2 - 2] [i_9]))) % (((arr_13 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_2 - 1] [i_0 - 1])), (arr_8 [i_0 + 1])))));
                        arr_38 [i_0 - 1] [i_1] [i_1] [i_9] = ((/* implicit */signed char) arr_8 [i_0 - 2]);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))), ((~(((((/* implicit */_Bool) (unsigned char)166)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)70)))))))));
                        var_26 *= ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_34 [i_0] [0] [i_2 - 1] [i_10] [i_0 + 1]))))));
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7633))) : (arr_5 [i_0])))) ? (((/* implicit */int) arr_42 [i_2 + 1] [i_0 + 1])) : ((+(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0] [i_0])) ? ((+(arr_17 [i_0 - 1] [4LL] [i_2] [i_0 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0 - 2])))))))) : (((((/* implicit */_Bool) (short)-3666)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) : (534773760U)))));
                        arr_43 [i_0] [i_1] [i_2] [(short)10] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)61)) ? (arr_27 [i_2 - 2] [i_1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                    {
                        var_28 += ((/* implicit */signed char) (~((~(((/* implicit */int) arr_2 [i_2 - 1]))))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)63)) % (((/* implicit */int) (unsigned short)65521)))))));
                        arr_47 [i_0 + 1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4)))), (arr_36 [i_0] [i_2 - 1] [i_0 + 1] [i_0 + 1] [i_1]))), (((/* implicit */unsigned long long int) (short)-22493))));
                        var_30 = ((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned char)107), (((/* implicit */unsigned char) arr_15 [i_2] [i_1] [0LL] [i_12] [i_0] [10U]))))), (((int) arr_1 [i_2 - 1]))));
                        var_31 = ((/* implicit */signed char) min(((((~(324012095U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        arr_51 [(unsigned char)7] [(short)3] [(unsigned short)4] = ((/* implicit */signed char) ((arr_6 [i_2 - 1]) / (((/* implicit */long long int) (~(arr_21 [i_0 - 1] [i_1] [i_0 - 1] [i_13]))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22516)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        var_33 |= ((/* implicit */signed char) (+((+(((int) (unsigned short)0))))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 767825191)) ? (((((/* implicit */_Bool) min((arr_7 [i_0 - 1] [i_2] [i_0 - 1]), (((/* implicit */unsigned char) var_8))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) * (255LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -99774168)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_0 + 1]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_27 [i_0 + 1] [i_2 + 1] [i_2 + 1]))))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4219862230U)) ? (((/* implicit */int) arr_7 [i_2 - 2] [(_Bool)1] [i_2 - 2])) : (99774167)))) ? (((/* implicit */int) min((arr_7 [i_2 - 2] [i_1] [i_0 - 1]), (arr_7 [i_2 - 2] [i_2 - 2] [2LL])))) : (((/* implicit */int) min((arr_7 [i_2 - 2] [i_1] [i_2 - 1]), (arr_7 [i_2 - 2] [i_2 - 2] [i_2])))))))));
                        arr_58 [(unsigned short)7] [(_Bool)1] [(_Bool)1] [i_15] = ((/* implicit */unsigned int) (+(((int) arr_17 [i_0] [i_0] [i_0 - 1] [i_0 - 1]))));
                        arr_59 [i_0] [i_0 - 1] [i_1] [i_2 + 1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (unsigned short)4205))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((((/* implicit */int) var_0)) >> (((-7787709128899238320LL) + (7787709128899238340LL)))))))) : (13469774370862522114ULL)));
                        var_36 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_53 [i_0] [i_1] [3U] [2U])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned short)23)))))) / (((unsigned int) arr_12 [10] [i_1] [i_2] [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533))))))))));
                        arr_60 [i_0] [i_1] [i_1] [(short)10] [i_15] [i_15] = arr_1 [5LL];
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            for (signed char i_17 = 2; i_17 < 10; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_52 [i_19] [i_19] [3]))));
                                arr_70 [i_17 - 1] [i_16] [i_18] [i_18] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned char)151)))) >> ((((-(7787709128899238319LL))) + (7787709128899238342LL)))))) ? (min((-809727998766909972LL), (((/* implicit */long long int) arr_48 [i_0 - 2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned short) (+(var_12)));
                    arr_71 [(short)8] [i_0] [(short)8] [8] = ((/* implicit */unsigned short) ((((arr_17 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_16]) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)151))))))) <= (((/* implicit */int) arr_66 [i_0 - 1]))));
                    arr_72 [i_0] [(_Bool)1] [(signed char)3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */signed char) arr_4 [i_0])), (var_8)))) ? (arr_10 [i_0 - 2]) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_16] [(unsigned short)7] [i_17] [i_0] [i_0]))) == (arr_8 [i_0 - 1])))))) / (((/* implicit */int) (unsigned short)22))));
                    var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)105))));
                }
            } 
        } 
        arr_73 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned short)3)), (arr_13 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_0] [1] [6LL] [i_0])) ? (((/* implicit */int) (unsigned short)65506)) : (((/* implicit */int) arr_46 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [7ULL])))))))) ? (((arr_4 [i_0 - 1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) : (((int) (unsigned short)65533)))) : (((/* implicit */int) arr_24 [i_0 - 2] [i_0] [i_0] [i_0]))));
        var_40 = ((/* implicit */int) var_12);
    }
    var_41 = ((/* implicit */int) var_1);
}
