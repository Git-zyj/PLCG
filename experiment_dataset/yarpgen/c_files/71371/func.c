/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71371
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
    var_15 += ((/* implicit */long long int) ((13850317867388181821ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    var_16 = ((/* implicit */unsigned long long int) var_2);
    var_17 = ((((long long int) 0LL)) / (((/* implicit */long long int) max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) var_5))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_18 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(arr_1 [i_0] [i_0])))), (max((((((arr_0 [(_Bool)1] [(_Bool)1]) + (9223372036854775807LL))) >> (((arr_1 [i_0] [i_0]) + (564518713))))), (((/* implicit */long long int) (-2147483647 - 1)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3])))));
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_1 + 1] [i_0 - 2]))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2] [i_2] [i_1]))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (var_1))))) | (max((arr_6 [i_3] [i_1] [i_1] [i_0]), (((/* implicit */long long int) (_Bool)0))))))))));
                        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 2]) == (arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_0 - 2]))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) (~(((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12659))) : (arr_6 [i_0] [i_0 + 1] [i_0 - 2] [i_0]))))));
        arr_9 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_5)))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)62))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_13 [i_5 - 1]) - (arr_13 [i_5 - 2])))) % (16LL)));
            var_26 = ((/* implicit */unsigned int) max((var_26), (min((3698215667U), (((/* implicit */unsigned int) (_Bool)1))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 2) 
                        {
                            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_11)))) : ((-(((/* implicit */int) (_Bool)1))))));
                            var_28 -= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */int) ((arr_22 [i_4] [i_6] [(unsigned char)9] [i_7] [i_8 + 2] [i_7] [i_8]) == (((/* implicit */long long int) arr_13 [i_4]))));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (~(arr_22 [i_6] [i_8 + 1] [i_8] [i_8] [i_8] [i_6] [i_5]))))));
                            var_31 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned char)80)))) ? (((/* implicit */int) var_3)) : (arr_11 [i_6] [(unsigned char)2])));
                        }
                        for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) arr_23 [(short)13] [(short)13] [i_6] [i_7] [24LL])) : ((-2147483647 - 1)))) : (((/* implicit */int) (_Bool)1))))) : (min((-956201684958348616LL), (((long long int) var_13))))));
                            arr_25 [i_7] [i_7] [i_6] [22LL] [i_7] = ((/* implicit */short) ((unsigned short) arr_22 [i_9] [i_9] [14LL] [i_9] [i_9] [i_9] [i_9]));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((((/* implicit */int) var_10)) <= (((/* implicit */int) min((((/* implicit */unsigned char) arr_24 [i_5] [i_5] [i_4] [i_7] [i_9] [i_5] [i_9])), (arr_23 [i_4] [i_5] [i_5] [i_7] [i_9])))))) ? (((((/* implicit */int) ((_Bool) var_5))) | (((/* implicit */int) arr_12 [i_4])))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) 2147483647)), (4173934789088280301LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (_Bool)1))))))))))));
                            var_34 = ((/* implicit */long long int) arr_10 [(short)0]);
                        }
                        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)190)) - (((arr_16 [9] [i_5] [i_5 + 2]) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_3))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) > (((((/* implicit */_Bool) arr_24 [i_5 - 1] [i_5 - 2] [i_5] [i_6] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (short)6096)) : (((/* implicit */int) (_Bool)1))))));
                            arr_30 [i_4] [i_5] [i_4] [i_7] [i_7] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)107))));
                            arr_31 [i_4] [(_Bool)1] [i_4] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_4] [i_5] [i_5 - 1] [i_7]))))) || (((/* implicit */_Bool) min((arr_15 [i_5 + 1]), (arr_15 [i_5 - 2]))))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_22 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5 - 2] [i_5])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3984300012U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4] [i_4]))) : (310667263U)))) ? (((/* implicit */int) var_11)) : (max((((/* implicit */int) var_6)), (arr_28 [i_4] [i_4] [i_7] [i_4]))))) : (((((/* implicit */int) (unsigned short)43261)) | (((/* implicit */int) min((arr_10 [i_4]), (((/* implicit */signed char) var_3)))))))));
                            var_37 = ((/* implicit */unsigned int) (!((_Bool)1)));
                        }
                        arr_32 [i_4] [i_7] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (unsigned char)64))))) - (min((arr_27 [i_4] [(unsigned short)10] [i_4] [i_5 - 1] [12] [12] [12]), (((/* implicit */unsigned int) arr_10 [i_4]))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23016)))))));
            var_39 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (2147483631) : (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_6)))))))) | (((((/* implicit */_Bool) arr_22 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5] [i_4] [i_4] [i_5])) ? (7231504023209908645LL) : (((/* implicit */long long int) ((int) arr_26 [i_5])))))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            var_40 = ((/* implicit */signed char) (-(max((min((((/* implicit */long long int) var_4)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((unsigned int) var_7)))))));
            arr_35 [i_4] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_11]), (((/* implicit */signed char) (_Bool)1)))))) : ((-(((arr_19 [i_4] [i_4] [i_11] [i_11]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_4] [i_4] [i_4])))))))));
            var_41 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_26 [6U])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)105)))), (((/* implicit */int) var_13)))) & (((((/* implicit */_Bool) (~(var_1)))) ? ((~(((/* implicit */int) var_12)))) : (arr_13 [i_4])))));
        }
        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))))) ? (min((((/* implicit */int) ((unsigned short) var_8))), (((((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [5])) | (((/* implicit */int) var_6)))))) : ((+(((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [(unsigned short)2] [i_4] [i_4])) ? (var_1) : (((/* implicit */int) var_13))))))));
        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (33550336U)))) : (((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) 3640944717U)) : (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_4] [i_4] [i_4])) / (((/* implicit */int) var_2))))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_12 = 4; i_12 < 13; i_12 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_13 = 2; i_13 < 15; i_13 += 2) 
        {
            var_44 = ((/* implicit */unsigned char) min((arr_14 [(signed char)9]), (var_12)));
            /* LoopSeq 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) -2897603854141672988LL))));
                var_46 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_12]) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_12 [i_12]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)133)), (var_5)))) : (((/* implicit */int) arr_43 [i_12 + 2] [i_13] [i_14] [i_14])))))));
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        {
                            var_47 |= ((/* implicit */long long int) min(((-(((/* implicit */int) var_7)))), (((((/* implicit */int) arr_44 [i_16 + 1])) * (((/* implicit */int) (_Bool)0))))));
                            var_48 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_33 [i_12] [i_13 + 1] [i_13 + 1])))));
                            var_49 ^= ((/* implicit */unsigned char) arr_7 [i_12] [i_13 - 1] [4LL] [i_15] [i_16 + 1]);
                            var_50 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_36 [i_15] [i_15])) ? (((/* implicit */int) var_7)) : (2042233424))), (((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)19))));
                            var_51 = ((/* implicit */int) arr_47 [i_12] [i_14]);
                        }
                    } 
                } 
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                var_52 = ((/* implicit */long long int) var_8);
                var_53 = ((/* implicit */unsigned short) ((7985463426474339762LL) / (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)12288)))))));
            }
            /* vectorizable */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                arr_58 [i_12] [i_13] [i_18] [i_13] = ((((/* implicit */_Bool) arr_23 [i_18] [13LL] [i_18] [13LL] [i_18])) ? (((((/* implicit */_Bool) 7114006661370008461ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7850914553470839170LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_12] [i_13] [i_18] [i_18])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12288))))));
                var_54 ^= ((/* implicit */signed char) (-(7114006661370008461ULL)));
                arr_59 [i_12 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_13 [i_12])))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : (((long long int) arr_55 [i_12] [i_13] [10U]))));
                arr_60 [i_12] = ((/* implicit */unsigned short) arr_12 [i_12]);
                arr_61 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)36106)) >= (((/* implicit */int) (_Bool)1)))))) + (0U)));
            }
            /* LoopSeq 1 */
            for (short i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                var_55 -= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_21 [i_12 - 4] [10U] [10U] [i_12] [i_12] [i_12])) ? (max((((/* implicit */long long int) 1396892305)), (-6LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_12] [(unsigned char)0] [i_13] [i_13] [i_13] [i_13] [(unsigned char)2])))))));
                arr_64 [i_12 - 3] [i_13] [(unsigned char)9] |= ((/* implicit */unsigned short) arr_38 [i_13]);
                arr_65 [i_12] [i_13] [i_19] = ((/* implicit */unsigned long long int) ((((arr_26 [i_13]) < (arr_26 [i_13]))) ? (arr_28 [i_12 - 3] [i_12 - 3] [i_12] [20U]) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((arr_20 [(_Bool)1] [i_19] [i_19] [(_Bool)1]), ((unsigned char)121)))) : (((/* implicit */int) var_14))))));
                arr_66 [i_12] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_12 - 3] [i_13 + 1]) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))))))) ? (((((/* implicit */_Bool) 437034178U)) ? (((/* implicit */int) arr_41 [i_12 - 3])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_12] [i_12 - 3] [i_13] [i_12])))))));
            }
            var_56 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2147483647)) <= ((-(7114006661370008458ULL)))));
        }
        var_57 = ((/* implicit */unsigned char) (((~(arr_27 [i_12] [i_12] [i_12] [i_12] [6] [i_12 + 2] [i_12]))) << (((((/* implicit */int) ((unsigned char) arr_27 [i_12] [i_12 + 2] [i_12] [i_12] [i_12] [i_12 - 3] [i_12]))) - (19)))));
        var_58 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) max((var_11), (((/* implicit */short) var_13)))))))), (min((arr_0 [i_12] [i_12 - 3]), (((/* implicit */long long int) var_13))))));
    }
}
