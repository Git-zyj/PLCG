/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84537
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [11U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-14) <= (((/* implicit */int) (short)-21398)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((var_9) % (var_9)))) : (arr_0 [i_1 + 2]))))))));
                var_11 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1]))) > (((((/* implicit */_Bool) (+(((/* implicit */int) (short)21397))))) ? (max((((/* implicit */unsigned long long int) var_7)), (arr_2 [(unsigned short)4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_5 [i_0] [12]))))))));
                var_12 ^= ((/* implicit */_Bool) (-(((unsigned int) arr_5 [i_0] [(_Bool)1]))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (~(max((((/* implicit */int) var_8)), (((var_9) / (((/* implicit */int) (unsigned short)23589))))))));
    var_14 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        for (short i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            {
                arr_11 [3ULL] [(_Bool)1] [(short)8] = ((/* implicit */int) ((unsigned int) min(((+(((/* implicit */int) (unsigned short)23577)))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)17)), ((short)-23625)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)21365)) & (((/* implicit */int) arr_4 [i_2 + 1]))));
                }
                for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_24 [i_7] [6] [2LL] [i_6] [i_7] [(unsigned short)8] [(_Bool)1] &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_7 [i_7])) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23625))) : ((+(3212073721757524872ULL)))))));
                                var_17 = ((/* implicit */unsigned char) 1261607074948522574LL);
                                var_18 -= ((/* implicit */unsigned int) ((max((arr_16 [i_5] [i_5] [i_3] [i_3 + 1]), (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) >> (((max((max((((/* implicit */unsigned long long int) arr_13 [i_2] [i_5] [i_7])), (arr_2 [6U]))), (((/* implicit */unsigned long long int) (short)-21387)))) - (18446744073709530167ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_2 - 1])) : (((/* implicit */int) arr_12 [i_2 + 1])))))));
                            var_20 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 240332871)) ? (3212073721757524866ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19367))))));
                            var_21 = ((arr_22 [i_2] [i_2] [(unsigned short)3] [i_5] [i_3] [i_5]) <= (arr_27 [0LL] [i_2] [2U] [i_2 - 1] [i_8]));
                            arr_30 [i_2] [i_8] [i_8] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_8] [(signed char)10] [i_8] [11U] [7] [i_3 + 1])) ? (arr_23 [11] [(unsigned short)3] [i_8] [i_8] [i_8] [i_5] [i_3 + 1]) : (arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [9U] [i_3 + 1])));
                        }
                        for (signed char i_10 = 3; i_10 < 11; i_10 += 1) 
                        {
                            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)26709)) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_13 [i_3 - 1] [1ULL] [i_3 - 2]))));
                            var_23 = ((/* implicit */_Bool) ((((15234670351952026743ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [14U]))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */int) (_Bool)1))))));
                            arr_35 [6] [i_3] [(unsigned short)8] [6LL] [i_8] [10LL] &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_3 - 2] [i_2 + 1] [i_10 - 2])) : (((/* implicit */int) var_8))));
                            arr_36 [3U] [i_8] [i_5] [i_3] [2U] = arr_1 [i_5];
                            var_24 = ((/* implicit */_Bool) (-((-(var_9)))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) (-(arr_26 [i_5])));
                            arr_39 [(short)2] [i_3] [i_5] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))));
                            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_33 [i_2] [i_3 + 1] [i_5] [i_8] [i_11]))));
                        }
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_2] [i_2 + 1] [(_Bool)1] [i_3 - 2]) : (arr_14 [(_Bool)1] [i_2 + 1] [i_2] [i_3 + 1])));
                        /* LoopSeq 4 */
                        for (short i_12 = 2; i_12 < 10; i_12 += 1) 
                        {
                            arr_43 [(signed char)7] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_5] [i_5] [i_5]))) != (arr_18 [i_2] [i_5] [(unsigned short)5])));
                            var_28 -= ((/* implicit */unsigned int) var_6);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) var_9);
                            var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_2] [4] [i_5] [i_8] [i_13])) ? (arr_9 [i_3] [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_45 [6ULL] [(_Bool)1] [i_8] [i_8] [(_Bool)1] [0]) : (((/* implicit */int) var_5)))))));
                            arr_46 [i_5] = ((/* implicit */signed char) arr_1 [i_5]);
                            var_31 = ((/* implicit */unsigned int) (unsigned char)233);
                        }
                        for (short i_14 = 2; i_14 < 10; i_14 += 3) /* same iter space */
                        {
                            arr_50 [i_5] [i_5] [i_5] = ((/* implicit */int) arr_8 [i_3]);
                            arr_51 [i_5] [i_5] [i_5] = ((/* implicit */int) ((unsigned long long int) arr_32 [i_2] [i_3] [i_14 + 2] [i_8] [i_2 + 1] [i_3 - 2]));
                        }
                        for (short i_15 = 2; i_15 < 10; i_15 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) 0ULL);
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_8] [i_15 + 2])) ? (((/* implicit */int) arr_19 [i_2 + 1] [i_8] [i_15 + 2])) : (((/* implicit */int) var_8)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 4; i_16 < 10; i_16 += 2) 
                        {
                            var_34 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_21 [(_Bool)1] [i_2] [i_2 - 1] [i_3] [i_3 - 1])) : (((((/* implicit */int) arr_38 [i_5] [5U] [(unsigned char)0] [i_8])) - (((/* implicit */int) arr_32 [i_16] [(unsigned short)4] [i_5] [i_3] [6] [i_2]))))));
                            var_35 = ((/* implicit */unsigned int) (((-(0U))) == (arr_41 [i_5] [i_3 - 1] [(unsigned short)6] [i_2 - 1] [i_5])));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9115637031343185076LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_2] [(signed char)7] [(unsigned char)4] [i_8] [i_16]))) : (3212073721757524874ULL)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_2)) ? (arr_16 [i_2] [i_2] [i_2] [i_2]) : (15234670351952026750ULL)))));
                        }
                    }
                }
                /* vectorizable */
                for (short i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 1; i_18 < 9; i_18 += 2) 
                    {
                        for (short i_19 = 4; i_19 < 8; i_19 += 3) 
                        {
                            {
                                var_37 = ((((/* implicit */int) (!(var_5)))) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)41946)) <= (((/* implicit */int) (unsigned char)47))))));
                                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23594)) ? (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (unsigned short)28031)) : (arr_44 [i_2] [(_Bool)1] [i_2] [i_2]))) : (((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))));
                                var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) arr_18 [i_2] [8ULL] [i_19]))));
                            }
                        } 
                    } 
                    var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2089692158)) < (((unsigned long long int) (unsigned short)41960))));
                    var_41 = ((/* implicit */unsigned long long int) arr_63 [i_17] [i_17] [i_17] [i_3] [i_2]);
                    var_42 &= ((/* implicit */int) ((var_4) ? (arr_2 [(unsigned short)16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [9LL] [(short)2] [i_3] [i_3] [i_17] [i_17])))));
                }
                for (short i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
                {
                    arr_69 [i_2] [i_3] [(short)8] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_52 [(unsigned short)10] [2])) : (((/* implicit */int) (short)-27869))))))))));
                    arr_70 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21397)) ? (var_7) : (((int) arr_47 [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 - 2]))));
                }
                var_43 = ((/* implicit */unsigned int) var_2);
                /* LoopSeq 1 */
                for (short i_21 = 0; i_21 < 12; i_21 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_22 = 0; i_22 < 12; i_22 += 3) 
                    {
                        for (long long int i_23 = 3; i_23 < 11; i_23 += 3) 
                        {
                            {
                                var_44 ^= ((/* implicit */signed char) max((max(((~(((/* implicit */int) (signed char)-83)))), (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_3])))), (((int) arr_48 [i_21]))));
                                arr_78 [(unsigned char)9] [i_22] [i_3] [i_21] [(short)11] [i_23] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32433))))), (((/* implicit */unsigned int) arr_59 [(signed char)6] [i_3 - 1] [9] [i_3]))))), ((-(((5381362450318711249ULL) >> (((((/* implicit */int) (unsigned short)33119)) - (33078)))))))));
                                arr_79 [i_22] [(short)10] [i_21] [i_3] [i_22] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_23 [10LL] [i_3 + 1] [i_21] [i_2 + 1] [i_21] [i_23 - 1] [(signed char)9])) ? (arr_23 [10] [i_3 + 1] [i_21] [i_2 - 1] [i_23] [i_23 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_21] [i_23 - 2] [i_23]))))));
                                arr_80 [10] [i_22] [(signed char)11] [i_21] [(signed char)4] [i_22] [i_23] = ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_24 = 4; i_24 < 11; i_24 += 4) 
                    {
                        var_45 -= ((/* implicit */unsigned char) (+(arr_81 [i_2 + 1] [i_2] [i_24] [i_24 - 1])));
                        var_46 = ((/* implicit */long long int) (-(((/* implicit */int) (short)30382))));
                    }
                }
            }
        } 
    } 
}
