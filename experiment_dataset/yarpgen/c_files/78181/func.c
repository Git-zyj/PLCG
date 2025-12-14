/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78181
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
    var_19 = -3819670097334346000LL;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-8132)), ((unsigned short)32050)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_2 [i_1] [i_1 - 1])) | (((/* implicit */int) (unsigned short)33488))))))));
                                arr_10 [(_Bool)1] [i_3] [i_3] [8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32050)) ? (-6859782743378663576LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((((_Bool)1) ? (-2940775275768236987LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))) : (((((/* implicit */_Bool) (unsigned char)187)) ? (arr_5 [i_3 - 1] [i_3 - 1] [i_1 + 2] [i_3 + 1]) : (arr_5 [i_3 - 2] [i_3 - 2] [i_1 - 1] [i_1])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    arr_14 [3LL] [i_1] [i_1] [i_1] &= ((/* implicit */short) (unsigned short)33485);
                    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_13 [i_1 + 2] [i_1] [i_1 + 2]))))) ? (1641553561U) : (((/* implicit */unsigned int) ((/* implicit */int) min((min(((unsigned short)36894), (((/* implicit */unsigned short) (_Bool)1)))), (arr_6 [i_1 + 2])))))));
                    var_23 = ((/* implicit */long long int) arr_11 [i_0] [(unsigned short)12] [i_5]);
                }
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    var_24 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) 5933948750254943886ULL)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        arr_19 [i_6] [i_1 + 2] [i_6] [i_7] = ((/* implicit */unsigned short) 2147483642);
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_7])) << (((var_18) - (1893638144))))), (((((/* implicit */_Bool) (unsigned short)28641)) ? (((/* implicit */int) (unsigned short)32050)) : (((/* implicit */int) (unsigned short)28934))))))) ? (((((/* implicit */_Bool) 13394572706394347372ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51714))) : (8485266796219666292ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_0] [(unsigned short)9] [(unsigned short)11]), (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27311))) : (max((var_5), (((/* implicit */long long int) arr_13 [18ULL] [18ULL] [0ULL])))))))));
                        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 3]), (arr_5 [i_7] [i_7 + 2] [i_7 + 2] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) : (max((((/* implicit */long long int) (unsigned char)8)), (-1LL)))));
                        arr_20 [i_0] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(var_8))))));
                    }
                    for (short i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        var_27 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_9 [i_0] [i_1] [i_6] [i_8]) <= (((/* implicit */long long int) ((/* implicit */int) var_4))))))))), (((arr_16 [i_6]) ? (((/* implicit */unsigned long long int) arr_15 [1LL] [i_1] [(_Bool)1] [19])) : (((((/* implicit */_Bool) var_13)) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 1; i_9 < 19; i_9 += 1) 
                        {
                            var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (short)-27348)) : (((/* implicit */int) (signed char)104))))) ? (((((/* implicit */_Bool) ((int) arr_13 [(short)0] [i_1] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) -3949516458735553955LL)) : (var_11))) : (((/* implicit */unsigned long long int) ((var_18) + (((/* implicit */int) arr_6 [i_6])))))));
                            var_29 = ((/* implicit */long long int) ((((-1088372830) & (((/* implicit */int) var_10)))) & (((/* implicit */int) (_Bool)0))));
                            arr_27 [i_8] [i_1] [i_6] [i_6] [i_6] [i_8 + 1] [i_0] = ((/* implicit */long long int) var_18);
                            var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */int) ((arr_12 [i_1 - 1] [i_1 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_8 - 1])))))) % (((/* implicit */int) arr_2 [i_1 + 1] [i_8 - 1]))))));
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_30 [17LL] [17LL] [i_6] [i_8] [i_10] [8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((-5249796129694804113LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (arr_5 [i_0] [i_0] [i_0] [(signed char)8])))))))));
                            arr_31 [i_6] [i_6] [i_6] [i_6] [i_10] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_12) <= (arr_18 [i_8 - 1] [i_1 + 2] [i_1 - 1] [8LL]))))) ^ (((long long int) var_11))));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_34 [9LL] [i_1] [3LL] [4ULL] [15U] [3LL]))))));
                            arr_35 [i_6] [i_6] [i_6] [i_1] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 2512603355U)) ? (var_5) : (arr_33 [i_8 + 1])));
                            arr_36 [i_11] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) var_12);
                        }
                    }
                    /* vectorizable */
                    for (short i_12 = 1; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            arr_42 [i_6] = ((/* implicit */int) (+(((3949516458735553954LL) / (arr_33 [(unsigned short)3])))));
                            var_32 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_40 [i_12] [i_12 - 1] [i_1 + 1] [i_1] [i_1] [i_1])))))));
                        }
                        for (signed char i_14 = 4; i_14 < 19; i_14 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) arr_38 [i_0] [17LL] [i_6] [i_6] [i_14 - 4]);
                            arr_45 [i_6] [(short)18] [i_12] [i_12] [i_12 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2646582784976593571ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3893)))));
                            arr_46 [i_0] [6ULL] [i_0] [i_6] [(unsigned char)17] = ((/* implicit */unsigned short) ((arr_22 [i_14 - 4] [i_14] [i_12 - 1] [i_0]) == (191079512871040917LL)));
                        }
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) arr_17 [1ULL] [i_12 - 1] [i_12 - 1] [i_12 - 1]))));
                        var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1636210180U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)0]))) : (var_7)));
                    }
                }
                /* LoopSeq 3 */
                for (int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    arr_51 [i_0] [i_1 - 1] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)254))));
                    /* LoopSeq 2 */
                    for (long long int i_16 = 3; i_16 < 18; i_16 += 4) 
                    {
                        arr_54 [i_0] [i_0] = ((/* implicit */int) max((((long long int) min((((/* implicit */unsigned int) (short)2050)), (2167479468U)))), (((/* implicit */long long int) arr_24 [17LL] [i_1] [17LL] [14ULL]))));
                        arr_55 [i_0] [i_0] [(short)7] = ((/* implicit */int) min((var_7), (((/* implicit */unsigned int) max(((short)15145), (((/* implicit */short) (signed char)41)))))));
                    }
                    for (short i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        arr_58 [7ULL] [i_1] [12] [i_17] [7ULL] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) arr_28 [(_Bool)1] [11] [i_1 + 2] [i_17] [i_1 + 2]))), (max((arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]), (-2940775275768236987LL)))));
                        arr_59 [8LL] [i_17] [i_15] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)41), ((signed char)-34))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_17])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_17]))))) ? (((/* implicit */unsigned long long int) var_16)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_11)))))));
                        arr_60 [i_17] [i_1] [(_Bool)1] [(short)5] [i_1] = ((((/* implicit */int) var_3)) == (((/* implicit */int) (!(((/* implicit */_Bool) -4129307544207654402LL))))));
                        arr_61 [i_0] [i_17] [i_1] [(unsigned short)8] [i_15] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_17] [8U]))) ? (((int) (short)-22432)) : (((/* implicit */int) ((unsigned short) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [13] [i_17])))) : (max((((/* implicit */unsigned int) (unsigned short)35875)), (2425177197U)))));
                        var_37 = ((/* implicit */long long int) var_1);
                    }
                }
                for (unsigned char i_18 = 1; i_18 < 18; i_18 += 1) 
                {
                    arr_66 [(unsigned short)2] [i_1] [i_18] = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) var_3)))) ? ((+(2567292906516905212ULL))) : (var_11))), (((((/* implicit */_Bool) ((((/* implicit */long long int) 716180261U)) + (-3949516458735553940LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59695))) : (arr_7 [i_0] [i_0])))));
                    arr_67 [12LL] [i_1] [i_18] = ((/* implicit */unsigned int) arr_28 [i_0] [i_1 + 1] [i_18 + 2] [i_0] [i_1 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 3; i_19 < 18; i_19 += 2) 
                    {
                        arr_72 [i_0] [i_19] [(signed char)11] [i_0] [i_19] [i_19 + 2] = ((/* implicit */signed char) 9961477277489885353ULL);
                        var_38 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))), (5766966374618071269ULL))));
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_18])) : (arr_38 [i_0] [i_19] [6ULL] [i_19] [i_0])))) && (((/* implicit */_Bool) 1710559815))));
                    }
                }
                for (long long int i_20 = 2; i_20 < 16; i_20 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 1; i_21 < 19; i_21 += 2) 
                    {
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_40 -= ((/* implicit */long long int) var_7);
                                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [(short)19])) ? (((((/* implicit */_Bool) (unsigned char)134)) ? (arr_48 [8U]) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) var_15)) ^ (((/* implicit */int) (unsigned short)4))))))) ? (max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_40 [(unsigned short)4] [i_1] [i_20] [i_1] [i_1] [(short)9])) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_0 [(short)5]))));
                                var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_20] [i_20] [(short)18])) ? (((unsigned long long int) 2127487845U)) : (((/* implicit */unsigned long long int) -4129307544207654392LL))))) ? (arr_70 [i_0] [12] [6LL] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        for (int i_24 = 3; i_24 < 17; i_24 += 3) 
                        {
                            {
                                var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) var_2))));
                                var_44 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_24 - 1] [i_0] [i_23] [(signed char)18] [i_20 - 2]))) : (var_0)))) ? (((((/* implicit */_Bool) (+(var_5)))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 2940775275768236994LL))))))) : (((((/* implicit */_Bool) arr_23 [i_23] [8U] [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1152921504606846975LL))))) : ((+(((/* implicit */int) (_Bool)1))))))));
                                arr_85 [i_20] [i_20] [i_24] [i_20] [i_20] = ((((/* implicit */_Bool) max((arr_80 [i_1] [i_1]), (((/* implicit */long long int) arr_76 [i_24] [i_24] [i_24 - 1] [i_20 + 3] [i_24]))))) ? (((long long int) -1144207009)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_2)))))));
                                var_45 -= min((((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_33 [i_24 + 1]))), (((/* implicit */long long int) ((signed char) ((unsigned char) arr_28 [i_24] [i_0] [i_0] [i_0] [i_0])))));
                                arr_86 [i_0] [i_1] [16LL] [i_23] [i_24] [i_24] [i_0] = ((/* implicit */unsigned int) 18394604047999226621ULL);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_46 = ((/* implicit */long long int) var_12);
}
