/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66373
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
    var_13 = ((/* implicit */unsigned char) 2126644533U);
    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) var_8));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((signed char) (-(var_10))))) : ((+((-(((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_0]))))) | ((~(arr_4 [i_0] [i_0])))))) ? ((~(max((((/* implicit */unsigned int) -1)), (2168322762U))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((2693857891U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0 - 2]))))))))))));
                        arr_9 [i_0] [i_2] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0 + 1]))));
                        var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2]))))) > (arr_1 [i_0 - 2]))) ? (min((((((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2 + 1] [i_3])) | (-458970799))), (((((/* implicit */_Bool) 2168322783U)) ? (((/* implicit */int) (unsigned short)9)) : (var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_1 [i_3])))) || (((/* implicit */_Bool) var_6)))))));
                        arr_10 [i_0] [i_2] [i_2] [i_3] [i_0 - 2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1103309869U)) ? (((/* implicit */unsigned int) -1)) : (1103309847U))))))), (var_9)));
                        arr_11 [i_0] [i_1] [i_2 + 1] [i_0] [i_1] [i_1] |= ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65526), ((unsigned short)9))))) : (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned long long int) -2143059119)) : (arr_3 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((-(var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1103309844U))))))))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 19; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((short) (+(-1877365180)))), (((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))) ^ (var_10))))))))));
                        arr_15 [i_2] [i_1] [i_2 - 1] [i_4 - 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0])), (3191657413U)))))))));
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_2 - 1] = ((/* implicit */short) (-(min((((((/* implicit */_Bool) 2305842940494217216ULL)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned short)65507)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
                        arr_17 [i_0] [i_2] [i_2 - 1] [i_4 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                        arr_18 [i_0 - 1] [i_2] [i_2 - 1] [i_4 + 3] = ((/* implicit */signed char) arr_6 [i_2] [i_0] [i_2 - 1] [i_4 - 3]);
                    }
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_21 [i_0 + 1] [i_0 - 1] [i_1] [i_1] [i_2] [i_5] = ((/* implicit */signed char) min((((unsigned long long int) min((((/* implicit */unsigned int) var_7)), (4294967295U)))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)2064)))), (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)36)))))))));
                        arr_22 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2] [i_2] [i_0])) ? (max((arr_3 [i_1]), (arr_7 [i_0 + 2] [i_1] [i_2] [i_0 + 2] [i_5]))) : (var_9))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)254))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)96)) ? (72591341) : (-2087789960)))) : (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */unsigned long long int) 11U)) * (var_9)))))));
                            var_20 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-22)) | (((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) (unsigned short)9)))) : ((-(((/* implicit */int) (signed char)78))))))), (max((min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_5])), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-77)) && (((/* implicit */_Bool) var_8)))))))));
                        }
                    }
                    arr_25 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((signed char)-67), (arr_12 [i_2] [i_0] [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((var_21), ((-(3204398862U)))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_19 [i_0] [i_1] [i_2 + 1] [i_7] [i_1]), (((/* implicit */unsigned long long int) ((arr_30 [i_0 + 2] [i_1] [i_2 - 1] [i_1] [i_1] [i_8] [i_7]) & (((/* implicit */int) (signed char)-103)))))))) ? (max((arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_1]), (((/* implicit */unsigned long long int) arr_29 [i_0 + 2] [i_0] [i_0] [i_0 - 1] [i_1] [i_2 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63971))) / (11U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)38155)) / (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_26 [i_0 - 1])) != ((~(arr_19 [i_0] [i_0 + 2] [i_0] [i_0] [i_0]))))))));
        var_24 = (((!(((/* implicit */_Bool) min((((/* implicit */int) var_12)), (arr_26 [i_0])))))) ? (arr_29 [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1]) : ((-(((((/* implicit */int) (unsigned char)115)) << (((((/* implicit */int) (signed char)-84)) + (108))))))));
    }
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        arr_34 [i_9] = ((/* implicit */short) min((((((/* implicit */int) arr_12 [(signed char)16] [i_9] [i_9] [i_9] [i_9] [i_9])) != (((/* implicit */int) arr_12 [(signed char)10] [i_9] [i_9] [i_9] [i_9] [i_9])))), (((((/* implicit */_Bool) arr_3 [i_9])) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)93)))))))));
        arr_35 [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(arr_0 [i_9]))), (var_10))))));
        var_25 = ((/* implicit */short) arr_8 [i_9] [i_9]);
        var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (arr_1 [i_9]))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) || (((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_11 = 1; i_11 < 18; i_11 += 1) 
        {
            var_27 = ((4294967289U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11 + 1] [i_11 - 1] [i_11 - 1]))));
            var_28 = ((/* implicit */unsigned int) var_11);
        }
        for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((int) (~(arr_42 [i_12] [i_12])))))));
            /* LoopSeq 4 */
            for (unsigned int i_13 = 3; i_13 < 17; i_13 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_14 = 2; i_14 < 16; i_14 += 1) 
                {
                    arr_49 [i_10] [i_12] [i_14] [i_14] = ((/* implicit */signed char) 4294967290U);
                    arr_50 [i_14] [i_13 - 2] [i_12] [i_10] [i_14] = ((/* implicit */unsigned short) arr_43 [i_13] [i_12] [i_10]);
                }
                for (unsigned int i_15 = 1; i_15 < 15; i_15 += 3) 
                {
                    var_30 = ((/* implicit */unsigned short) (+(var_10)));
                    arr_54 [i_10] [i_13 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_12] [i_12])) ? (((/* implicit */int) arr_39 [i_10])) : (((/* implicit */int) (signed char)-67))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)165))))) : (((8388607ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5196)))))));
                    var_31 = ((/* implicit */unsigned short) ((signed char) ((arr_19 [i_10] [i_10] [i_12] [i_13 - 2] [i_15 - 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))));
                }
                for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    arr_59 [i_16] = ((/* implicit */unsigned short) var_5);
                    var_32 = ((/* implicit */int) var_11);
                    var_33 *= (~(((arr_3 [i_16]) * (613466364905899667ULL))));
                    var_34 = (signed char)-1;
                    arr_60 [i_12] [i_16] = ((/* implicit */unsigned long long int) (+(var_6)));
                }
                var_35 = ((/* implicit */unsigned int) -1378421158);
                arr_61 [i_10] [i_12] [i_13 - 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_10] [i_12] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_2 [i_13])) : (((/* implicit */int) var_1))))) ? (arr_30 [i_10] [i_10] [i_12] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13]) : (((/* implicit */int) arr_40 [i_13 - 2] [i_13 - 2] [i_13 - 3])));
                arr_62 [i_10] [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-71))));
            }
            for (signed char i_17 = 1; i_17 < 16; i_17 += 1) /* same iter space */
            {
                arr_66 [i_17 - 1] [i_17] [i_10] = (-(3960921277U));
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_10] [i_12] [i_17 + 3] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_12] [i_10])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)72))))) : (((unsigned int) var_8))));
                arr_67 [i_10] [i_12] [i_17] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_52 [i_10] [i_12] [i_10] [i_17 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_52 [i_10] [i_12] [i_17] [i_17 + 1])) + (120))) - (18)))));
                arr_68 [i_10] [i_10] [i_17] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_17 + 2] [i_17 + 3] [i_17] [i_17] [i_17] [i_17])) ? (((arr_43 [i_10] [i_10] [i_10]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)120))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_12] [i_12] [i_12] [i_10])))));
            }
            for (signed char i_18 = 1; i_18 < 16; i_18 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_19 = 1; i_19 < 17; i_19 += 1) /* same iter space */
                {
                    arr_75 [i_10] [i_10] [i_12] [i_18] [i_10] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_19 [i_10] [i_10] [i_12] [i_18 - 1] [i_19 + 2])) ? (((/* implicit */unsigned long long int) 15728640U)) : (arr_43 [i_12] [i_18] [i_19 + 2])))));
                    arr_76 [i_18] [i_12] [i_18 - 1] [i_18 + 2] [i_12] = ((/* implicit */unsigned short) arr_74 [i_10] [i_12] [i_18 + 1] [i_19 + 2]);
                }
                for (int i_20 = 1; i_20 < 17; i_20 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) arr_40 [i_18 + 3] [i_20] [i_20 - 1]);
                    var_38 = ((/* implicit */unsigned long long int) 131071);
                    arr_79 [i_20 + 2] [i_18] [i_18] [i_10] [i_12] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)165)) ? (arr_51 [i_20 - 1] [i_12]) : (((/* implicit */unsigned int) arr_29 [i_10] [i_10] [i_18 + 3] [i_18 - 1] [i_18] [i_20 - 1]))));
                    arr_80 [i_18] [i_18] = ((/* implicit */signed char) arr_24 [i_20 + 1] [i_20 + 1] [i_18] [i_10] [i_10]);
                }
                arr_81 [i_18] [i_12] [i_10] [i_18] = (-(((((/* implicit */_Bool) -1378421158)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_27 [i_18])))));
                arr_82 [i_10] [i_12] [i_18] &= ((/* implicit */short) ((1395499527) % (((/* implicit */int) (signed char)104))));
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-87))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6911))) : (arr_53 [i_18] [i_12] [i_10] [i_10])));
                arr_83 [i_18] [i_12] [i_10] [i_18] = ((/* implicit */int) (-(arr_43 [i_10] [i_12] [i_18 + 1])));
            }
            for (signed char i_21 = 1; i_21 < 16; i_21 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_22 = 0; i_22 < 19; i_22 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_23 = 1; i_23 < 16; i_23 += 4) /* same iter space */
                    {
                        arr_91 [i_23] [i_23] [i_21] [i_23] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_10])) ? ((~(((/* implicit */int) arr_85 [i_21])))) : (((/* implicit */int) ((arr_74 [i_12] [i_21 + 1] [i_22] [i_12]) == (2147483647))))));
                        arr_92 [i_23] [i_22] [i_23] [i_12] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_88 [i_23 + 3] [i_12] [i_21 + 3] [i_21 + 2] [i_21] [i_22])) ? (((/* implicit */int) arr_88 [i_23 + 3] [i_12] [i_21 + 3] [i_21 + 2] [i_10] [i_12])) : (((/* implicit */int) arr_88 [i_23 + 3] [i_12] [i_23 + 3] [i_21 + 2] [i_23] [i_23]))));
                    }
                    for (unsigned int i_24 = 1; i_24 < 16; i_24 += 4) /* same iter space */
                    {
                        arr_95 [i_24] [i_12] = ((((/* implicit */_Bool) arr_12 [i_24] [i_24 - 1] [i_24 + 1] [i_24 + 3] [i_24] [i_24 + 2])) ? (((/* implicit */int) arr_12 [i_24] [i_24 + 2] [i_24] [i_24 + 3] [i_24 + 2] [i_24 + 3])) : (-200628344));
                        var_40 = ((/* implicit */int) ((unsigned char) arr_87 [i_21 - 1] [i_24 + 1] [i_24 + 2] [i_24 + 1]));
                        var_41 = ((/* implicit */unsigned int) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_86 [i_10] [i_12] [i_21] [i_24]))))))));
                    }
                    arr_96 [i_10] [i_10] [i_12] [i_21] [i_22] |= ((/* implicit */short) arr_57 [i_12] [i_22]);
                }
                for (unsigned short i_25 = 2; i_25 < 17; i_25 += 3) 
                {
                    arr_99 [i_10] [i_10] [i_21 + 2] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_52 [i_25 + 2] [i_21 - 1] [i_21] [i_25])) + (2147483647))) << (((((((/* implicit */int) arr_52 [i_25 - 1] [i_21 + 2] [i_21 + 2] [i_10])) + (133))) - (31)))));
                    var_42 = ((/* implicit */short) ((9383693160457542669ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58604)))));
                }
                for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_27 = 0; i_27 < 19; i_27 += 1) 
                    {
                        var_43 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((-1395499515) ^ (((/* implicit */int) (signed char)-53)))))));
                        var_44 = ((/* implicit */unsigned char) var_4);
                    }
                    arr_107 [i_10] [i_10] [i_12] [i_26] [i_21 + 1] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2305330645U)) ? (((/* implicit */unsigned int) -544725165)) : (728872980U)));
                    var_45 = ((/* implicit */int) var_0);
                    var_46 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_21 + 3] [i_21 - 1] [i_21 + 1] [i_21 - 1]))));
                }
                arr_108 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (9363857879407124206ULL))))));
                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_30 [i_10] [i_12] [i_12] [i_21] [i_21] [i_21] [i_21]) >= (((/* implicit */int) arr_52 [i_10] [i_12] [i_12] [i_21 + 2]))))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65497))) >= (var_11))))));
                arr_109 [i_21 + 1] [i_12] = ((/* implicit */short) (+(728872994U)));
            }
        }
        var_48 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_104 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) (unsigned short)65499))))));
        arr_110 [i_10] = ((/* implicit */unsigned long long int) arr_97 [i_10] [i_10]);
    }
}
