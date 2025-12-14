/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67386
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
    var_16 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned short) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_15)));
    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) var_15))))) ? (var_4) : (((/* implicit */int) var_14)))), (((((/* implicit */int) max((((/* implicit */short) var_10)), (var_2)))) + (((/* implicit */int) (short)-19456))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_14)), (var_12))) / (((/* implicit */long long int) (-(((/* implicit */int) (short)-19455)))))))) : (var_9)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_2), (var_7))), (((/* implicit */short) ((var_8) || (((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */int) max((max(((unsigned short)65533), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) var_1))))) : (((((/* implicit */int) var_10)) + (((((/* implicit */_Bool) -8414647021521027269LL)) ? (((/* implicit */int) (_Bool)1)) : (363690058)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [(short)19] [i_0]);
                arr_7 [(unsigned short)5] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_7);
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) min((4294967295U), (((/* implicit */unsigned int) -1872472119))));
                        var_20 = ((/* implicit */short) min((-363690058), (7)));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            arr_16 [i_4 - 1] [i_0] [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_15 [i_4] [i_0] [i_3] [i_2] [i_1] [i_0]))))), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)34816)), (-1)))) ? (((/* implicit */int) min(((short)-19456), (((/* implicit */short) var_6))))) : (((56626905) * (((/* implicit */int) var_6))))))));
                            arr_17 [i_0] [i_1] [11U] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) * (min((arr_8 [i_1] [i_2] [i_2] [i_4]), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))) : (var_3)))))));
                            var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_12)) ? (min((var_4), (((/* implicit */int) var_0)))) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)61023)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_13)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_2] [(signed char)12] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22)) && (((/* implicit */_Bool) var_5)))))));
                            arr_22 [(unsigned char)19] [i_1] [i_0] [i_3] [(unsigned char)19] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [(_Bool)1] [i_2] [i_5])) ? (((/* implicit */int) arr_11 [(unsigned short)18] [i_1] [i_3] [i_3])) : (((/* implicit */int) (short)-13964))));
                            arr_23 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [(_Bool)1] [(_Bool)1] [1U] [1U]);
                        }
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_2 [i_0]))))), (max((var_5), (((/* implicit */unsigned short) arr_9 [i_2] [i_1] [i_6] [i_3]))))))) ? (((/* implicit */int) max(((unsigned short)17), (((/* implicit */unsigned short) ((short) (unsigned short)13)))))) : (-1872472119)));
                            var_23 = ((/* implicit */unsigned short) max((((long long int) arr_20 [i_0] [20U] [i_2] [(short)13] [(short)13] [(short)7] [i_0])), (((/* implicit */long long int) arr_24 [i_6] [i_3] [i_2] [i_2] [i_0] [i_0] [i_0]))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) var_11))));
                            var_25 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) ^ (1187743765611951667LL)));
                        }
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)10615)), (((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)3773))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_11 [i_0] [(signed char)13] [i_2] [i_3])), (arr_12 [i_3] [1] [i_1] [4U])))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_5 [i_0])))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            arr_30 [i_0] [i_0] [11] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (min(((+(((/* implicit */int) arr_3 [i_1] [i_2] [(short)6])))), (((/* implicit */int) arr_18 [i_0] [15] [i_2] [i_2] [i_3] [i_7]))))));
                            arr_31 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_10 [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_7] [14ULL] [6] [0LL])) ? (((/* implicit */int) arr_11 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)3))))) : (((((/* implicit */_Bool) (short)31288)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19456))) : (-1LL)))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)24203))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1] [i_3] [i_7])), ((unsigned short)25811))))));
                        }
                        for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_26 -= ((/* implicit */unsigned short) (+((-(((/* implicit */int) (short)21014))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-21318))) ? (((/* implicit */int) max((arr_11 [i_1] [i_1] [i_3] [i_3]), (arr_11 [i_0] [i_1] [(_Bool)1] [i_3])))) : (((/* implicit */int) ((arr_5 [i_0]) > (arr_5 [i_0]))))));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), ((~(-1LL)))));
                        arr_39 [i_9] [i_2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((-363690043) / (arr_10 [i_0]))), (((((/* implicit */_Bool) ((var_10) ? (arr_15 [i_0] [i_1] [i_2] [i_1] [i_0] [i_9]) : (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [i_9]))))) ? (((/* implicit */int) min((((/* implicit */short) var_6)), (var_7)))) : (((/* implicit */int) var_1))))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((/* implicit */unsigned int) -1872472119)) : (4294967295U)))) >= (min((((/* implicit */unsigned long long int) (short)19456)), (6797761355333598626ULL))))))));
                        arr_40 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) var_8))) + (arr_8 [i_9] [i_2] [i_1] [i_0])))));
                        var_30 = ((/* implicit */int) var_2);
                    }
                    arr_41 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_7);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((var_15), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) arr_33 [i_0] [i_0])))))));
                        arr_44 [i_0] [i_1] [i_0] [i_2] [i_10] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((arr_8 [i_0] [(unsigned short)5] [i_2] [i_10]) >= (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_2] [i_10] [i_10])))))), ((unsigned short)6689)));
                    }
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12288)) ? (((/* implicit */int) (short)-19486)) : (((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16493))) : (1343557697U)))))) ? ((-(((((/* implicit */_Bool) arr_32 [i_0] [i_0] [3] [i_11])) ? (-363690057) : (((/* implicit */int) arr_35 [11LL] [i_1])))))) : (min((max((908764319), (arr_20 [i_0] [i_2] [i_2] [(unsigned short)17] [i_1] [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned short)0)))))))));
                        arr_47 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_2)))) ? (((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) var_14)))) : (((/* implicit */int) ((var_15) >= (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)39725)), (-363690054)))))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_33 = ((/* implicit */_Bool) var_7);
                        arr_51 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_0] [i_2] [i_1] [i_0] [i_0])) >= (((/* implicit */int) arr_46 [i_0] [i_1] [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_37 [i_2])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0])))))));
                        /* LoopSeq 1 */
                        for (short i_13 = 4; i_13 < 19; i_13 += 3) 
                        {
                            var_34 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_13 + 2] [i_13 + 2] [i_12])) * (((/* implicit */int) (unsigned short)58756))))));
                            var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3)) + (((((/* implicit */int) (unsigned char)56)) * (((/* implicit */int) (unsigned short)13826))))))) ? (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((var_15) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) : (min((arr_20 [i_13 - 2] [i_13 - 4] [i_13 + 2] [i_13] [i_13] [i_13] [i_13]), (((/* implicit */int) arr_25 [i_13 - 3] [i_13 + 1] [i_13 - 2] [i_13] [i_13] [(unsigned short)2]))))));
                        }
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) < (var_3)));
                    }
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        var_37 = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) arr_32 [i_14] [i_2] [i_1] [i_0]))), (arr_28 [i_0] [i_1] [i_2] [i_1] [i_0]))))));
                        var_38 |= ((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                        var_39 = ((/* implicit */short) (-((-(((/* implicit */int) arr_11 [i_14] [(short)5] [i_1] [i_0]))))));
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min(((unsigned short)51711), (max((((/* implicit */unsigned short) arr_28 [i_0] [i_1] [i_1] [i_2] [i_1])), ((unsigned short)13826)))))))))));
                        /* LoopSeq 4 */
                        for (short i_15 = 0; i_15 < 21; i_15 += 3) 
                        {
                            var_41 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned char)203)) == (1464891413))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
                            var_42 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) min(((short)2375), (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0] [i_0]))) % (arr_45 [i_0] [i_1] [i_1] [i_2] [i_14] [i_0])))))));
                            arr_59 [i_0] [i_14] [(short)15] [i_1] [i_0] = ((/* implicit */short) max((max((arr_50 [i_0] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_15] [i_15] [i_14] [i_2] [i_2] [i_1] [i_0])) && (arr_36 [i_0])))))), (arr_48 [i_0] [5LL] [i_0] [i_0])));
                        }
                        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            var_43 = ((/* implicit */int) arr_56 [i_0] [15U] [i_0] [(short)10] [i_16]);
                            var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_42 [i_0] [i_0] [i_0] [i_2] [i_14] [i_16]), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-9223372036854775807LL)))))))));
                            var_45 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)71)) >= (((/* implicit */int) (_Bool)0)))) ? ((+(((/* implicit */int) max(((unsigned short)3584), (((/* implicit */unsigned short) arr_52 [10] [i_1] [i_2] [i_14]))))))) : (((((/* implicit */_Bool) (short)18620)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (_Bool)1))))));
                            arr_62 [i_0] [i_16] [i_2] [i_14] [(_Bool)1] |= var_11;
                        }
                        for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
                        {
                            arr_65 [10LL] [i_0] [i_0] [(short)3] [(signed char)2] [i_14] [i_17] = ((/* implicit */unsigned short) ((((-8608047917408550332LL) ^ (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))) / (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_2] [i_2] [17LL] [i_2] [i_0] [17ULL])))));
                            arr_66 [i_2] [i_14] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) max((((/* implicit */short) var_8)), ((short)20772)))) : (max((((/* implicit */int) (unsigned short)25811)), (((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)15))))))));
                            arr_67 [(short)7] [i_1] [i_2] [i_14] [i_17] [i_0] = ((/* implicit */unsigned long long int) arr_57 [i_0] [(short)0] [i_0] [i_0] [i_0] [i_0]);
                            arr_68 [i_0] [i_0] [(_Bool)1] [i_14] = var_0;
                        }
                        for (short i_18 = 2; i_18 < 20; i_18 += 3) 
                        {
                            arr_71 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((arr_63 [(short)11] [(short)11] [i_18] [i_18] [i_18] [(short)3]) + (((/* implicit */long long int) ((/* implicit */int) min((max(((unsigned short)55175), (((/* implicit */unsigned short) var_10)))), (min(((unsigned short)51944), ((unsigned short)65357)))))))));
                            arr_72 [i_0] [i_1] [i_2] [i_14] [i_18] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)3598)), (arr_0 [i_18 + 1])))), (((arr_19 [i_14] [i_18 + 1] [i_18] [i_18]) % (arr_19 [(short)19] [i_18 - 2] [i_18 + 1] [i_18])))));
                        }
                    }
                    var_46 = ((/* implicit */short) (~((+(((/* implicit */int) min(((_Bool)1), (var_14))))))));
                    var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)12)) + (((/* implicit */int) arr_18 [(short)14] [i_0] [i_1] [i_1] [i_1] [i_2]))))))));
                }
                for (short i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 1; i_20 < 19; i_20 += 3) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_48 = ((((/* implicit */_Bool) (~(min((var_4), (((/* implicit */int) var_5))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) / (((/* implicit */int) var_13))))), (arr_74 [i_20 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) | (2938926459U)))));
                                var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_46 [i_0] [i_1] [i_19] [i_20] [i_21]))))) ? (((/* implicit */int) ((arr_38 [i_21] [i_20] [i_19] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) 8468646410441397006LL)) ? (((/* implicit */int) (short)21771)) : (118771536)))))));
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) < (max((363690067), (((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_19] [(_Bool)1] [i_1])))))));
                    /* LoopNest 2 */
                    for (long long int i_22 = 0; i_22 < 21; i_22 += 2) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 18; i_23 += 2) 
                        {
                            {
                                var_51 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)35960)), (4294967295U)))) ? (min((114459150U), (((/* implicit */unsigned int) (unsigned char)152)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (arr_34 [i_23] [i_19] [i_19] [i_1] [(short)20]))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32758))))) >= (((((/* implicit */_Bool) 1353995367U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25811))) : (var_15))))))));
                                var_52 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned short)58221))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) 1153506504)) : (1353995367U)))) : (max((((/* implicit */unsigned long long int) arr_64 [i_23 - 2] [i_0] [i_19] [i_19] [i_0] [i_0])), (var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_64 [8U] [i_0] [(short)0] [i_22] [i_22] [i_22])))), (var_14))))) : (arr_12 [i_0] [i_0] [i_0] [i_0])));
                                arr_86 [i_0] [i_1] [i_19] [i_0] [i_23] = ((/* implicit */_Bool) max((max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (unsigned short)4095)))), (((/* implicit */long long int) arr_0 [i_19]))));
                                var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_28 [(short)8] [i_1] [i_19] [i_22] [i_23]))) & (arr_45 [(unsigned short)10] [i_19] [i_19] [i_19] [10U] [i_19]))) + (var_3)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1353995352U)) : (17441147515583137366ULL))))))));
                            }
                        } 
                    } 
                    var_54 = ((/* implicit */_Bool) min(((+(((((/* implicit */int) var_11)) / (((/* implicit */int) var_13)))))), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (var_3)))) || (((/* implicit */_Bool) min((arr_50 [i_0] [i_19]), (((/* implicit */long long int) (short)7895))))))))));
                    var_55 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_1 [i_19])) && (((/* implicit */_Bool) var_15)))))) ? (var_3) : (((/* implicit */long long int) arr_10 [i_1]))));
                }
            }
        } 
    } 
}
