/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8657
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */_Bool) 4595561395795625677LL);
                arr_6 [3LL] [(_Bool)1] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (short i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_4))));
                var_15 = ((/* implicit */short) 4595561395795625701LL);
                var_16 = ((/* implicit */_Bool) -4595561395795625698LL);
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 4595561395795625655LL)) || (((/* implicit */_Bool) 4595561395795625655LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 4595561395795625680LL)) ? (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53582))) : (-4595561395795625681LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_3] [i_3])))))))));
                                var_19 += ((signed char) ((_Bool) var_2));
                                var_20 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 - 2])))))), (((((/* implicit */int) arr_7 [i_3 - 2])) >> (((((/* implicit */int) arr_7 [i_3 + 1])) - (28487)))))));
                                arr_21 [i_2] [i_3] [i_4] [i_6] = ((/* implicit */short) ((min((1336274595U), (((/* implicit */unsigned int) (unsigned short)62626)))) & (((unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)36169)))))));
                                arr_22 [i_5] [i_5] [(_Bool)1] [i_3] [i_5] |= max((min((arr_17 [i_3 - 2] [i_3 - 3] [i_3 - 3] [i_3 + 1] [i_3 - 3] [i_5]), (arr_17 [i_3 - 3] [i_3 - 3] [i_3 - 3] [i_3 + 1] [i_3 + 1] [i_5]))), (((/* implicit */unsigned short) ((signed char) min((var_7), (var_8))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)54674)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64))) : (4250163436U)));
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_18 [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 2]))));
                            arr_33 [i_8] [(unsigned short)12] [i_3 - 2] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) var_4)) >= (4595561395795625655LL)));
                        }
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_7 + 2] [i_3] [i_3] [i_3 + 1])) || (var_2))))));
                        arr_34 [i_2] [i_2] [i_3] [i_7] [(unsigned short)0] [(unsigned short)11] = (unsigned short)53582;
                        arr_35 [i_3] [i_3] [(_Bool)1] [13U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3 - 1])) && (((/* implicit */_Bool) arr_9 [i_3 - 3]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                    {
                        arr_38 [i_2] [i_10] &= ((/* implicit */unsigned short) ((arr_25 [(_Bool)1] [(_Bool)1] [i_7 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)122))))));
                        arr_39 [i_2] [i_2] [i_3 - 1] [i_10] [18LL] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_10] [i_7])) : (((/* implicit */int) var_5)))) / (((/* implicit */int) (unsigned short)1536))));
                        var_24 = ((/* implicit */unsigned int) ((signed char) var_6));
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_12 [i_3 - 1] [i_3])));
                        var_26 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_3 - 3] [i_3 + 1] [i_7 + 3] [i_7 + 3]))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11] [i_7] [i_7 + 2] [i_3] [i_3] [i_2] [i_2]))) != (4595561395795625646LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)504)) ? (4595561395795625655LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (arr_12 [i_3 - 3] [i_11]))))));
                    }
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_7 + 2])) << (((((/* implicit */int) arr_42 [i_3 + 1] [i_7 - 1] [i_3 + 1] [i_3 + 1])) + (10)))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    var_29 ^= ((/* implicit */long long int) arr_19 [i_2] [i_3 + 1] [i_3 - 2] [(short)12] [i_3 + 1] [i_12]);
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1886329145U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46967))) : (-4595561395795625684LL)));
                    var_31 ^= ((/* implicit */unsigned short) var_9);
                    var_32 ^= ((/* implicit */unsigned short) ((short) arr_23 [(unsigned short)15] [i_3 + 1]));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 3; i_13 < 18; i_13 += 2) 
                    {
                        var_33 ^= ((/* implicit */unsigned short) (-(arr_29 [i_13 - 1] [i_13 - 3] [i_13 - 3] [i_2])));
                        var_34 = ((/* implicit */unsigned short) ((arr_40 [i_13 - 3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_3 + 1])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 3; i_14 < 17; i_14 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((arr_40 [i_3 + 1]) >= (((/* implicit */unsigned long long int) var_12))));
                            arr_54 [(unsigned short)14] [i_3] [i_12] [i_13 + 1] [(unsigned short)14] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_2] [i_3 - 3]))) | (var_12));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_14] [i_14] [(short)0] [i_14 - 1] [i_13 - 1] [i_3] [i_3]))) == (2399504580406949686LL)));
                            arr_55 [i_12] |= ((/* implicit */long long int) ((((((/* implicit */int) var_0)) == (((/* implicit */int) var_9)))) ? (((/* implicit */int) ((((/* implicit */int) arr_32 [i_3] [i_12])) >= (((/* implicit */int) var_11))))) : (((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)45962))))));
                            arr_56 [i_2] [i_12] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            arr_60 [i_3] [i_12] = ((/* implicit */short) ((unsigned short) arr_53 [i_15] [i_13 - 3] [i_13] [(signed char)2] [i_13 + 1] [i_13 - 3] [i_3 - 1]));
                            var_37 -= ((/* implicit */unsigned long long int) arr_23 [i_12] [i_12]);
                            arr_61 [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) arr_16 [i_3 + 1] [i_3 - 2] [i_13 - 3] [(unsigned short)11]);
                        }
                    }
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) ((-4595561395795625639LL) == (((/* implicit */long long int) 1736014567U)))))), (((((((/* implicit */long long int) 98304U)) | (4595561395795625678LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 3])))))));
                    arr_64 [(unsigned short)10] [(unsigned short)10] [i_3 + 1] [(unsigned short)10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16839117348531046458ULL)));
                    var_39 ^= ((/* implicit */_Bool) min((max((0ULL), (10722232819844930302ULL))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_11)), (4595561395795625646LL))), (((/* implicit */long long int) arr_62 [i_3 - 1] [i_3 - 1])))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        arr_69 [i_3] [i_3] = ((/* implicit */unsigned short) min((((unsigned int) var_3)), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)250)), (arr_49 [i_16] [i_2] [i_2])))))))));
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((signed char) arr_14 [i_3 - 3] [i_3 - 3] [i_16] [i_17]))), (min((((/* implicit */short) var_6)), (var_10)))))) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) var_1)), ((unsigned short)22))), (arr_19 [i_2] [i_3] [i_16] [i_17] [i_17] [(unsigned short)14])))) : (((/* implicit */int) (signed char)65)))))));
                        arr_70 [i_3] [i_16] [13U] [i_3] = ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) >= ((((_Bool)1) ? (-4595561395795625684LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14269))))));
                        arr_71 [i_2] [i_3 - 3] [(signed char)7] [i_3] = ((/* implicit */_Bool) arr_8 [i_16] [i_17]);
                        var_41 = ((/* implicit */unsigned short) var_9);
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_75 [9LL] [i_3 + 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) == (((/* implicit */int) ((18446744073709551602ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45962))))))));
                        var_42 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_16] [i_18 - 1])) || (var_7))));
                        var_43 = ((unsigned int) min((3687974931U), (((/* implicit */unsigned int) var_7))));
                        var_44 = ((/* implicit */unsigned char) ((unsigned int) ((max((((/* implicit */unsigned long long int) var_3)), (134217727ULL))) <= (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (4294967295U)))))));
                    }
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))) & (((/* implicit */int) ((short) var_8)))))) * (((((((/* implicit */_Bool) arr_20 [i_2] [(_Bool)1] [(short)16] [i_16] [i_2])) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10001)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))))));
                        var_46 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_16 [i_19 - 1] [i_19 - 1] [i_19] [i_19 - 1]), (((/* implicit */signed char) arr_59 [(signed char)16] [i_19 - 1] [i_19] [(signed char)16]))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) ((arr_45 [8ULL]) <= (((/* implicit */unsigned long long int) 3U))))) | (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (signed char)121)))))))));
                        var_47 = ((unsigned short) ((short) arr_16 [i_3 - 2] [i_3] [(_Bool)1] [i_19 - 1]));
                    }
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_48 = ((long long int) max((arr_82 [i_2] [i_20 - 1] [i_3 - 3] [i_20]), (arr_82 [i_2] [i_20 - 1] [i_3 + 1] [i_20 - 1])));
                        arr_83 [14U] [(signed char)2] [0U] [i_3] [(unsigned short)14] [(_Bool)1] &= ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */_Bool) arr_45 [(unsigned short)18])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_20 - 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_84 [i_3] [i_16] [i_3] [i_3 + 1] [(_Bool)0] [i_3] = ((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_63 [i_2] [i_3 + 1] [i_16] [i_20])));
                        var_49 = ((/* implicit */signed char) ((((-4595561395795625684LL) ^ (-4595561395795625684LL))) | (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))))));
                        var_50 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) ((_Bool) var_11))) : ((-(((/* implicit */int) arr_18 [i_2] [i_2] [i_3 - 2] [i_16] [i_16] [i_20] [i_20 - 1])))))), (((/* implicit */int) ((signed char) var_6)))));
                    }
                }
                var_51 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (8ULL))))) / (((/* implicit */int) ((unsigned short) arr_44 [0LL] [i_3 - 2])))));
            }
        } 
    } 
}
