/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69911
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
    var_16 *= ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) (~(799170671)));
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -463199257)) ? (((/* implicit */unsigned long long int) 799170671)) : (16144876129469565777ULL)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) -463199257)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37990))) : (2301867944239985838ULL))))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) var_0);
            var_21 &= ((arr_4 [(unsigned char)10] [(unsigned char)10]) << (((((unsigned long long int) 17870282349184017393ULL)) - (17870282349184017393ULL))));
            arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 + 1]);
            arr_9 [i_1] = ((/* implicit */signed char) ((arr_4 [i_1 - 1] [i_2]) / (arr_4 [i_1 - 1] [i_1])));
        }
        for (int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_22 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                arr_17 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 1] [i_1])) ? (arr_13 [i_1] [i_1] [i_1]) : (arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                var_23 = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_4]);
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            arr_25 [i_1] [i_1] = ((/* implicit */unsigned int) var_2);
                            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_1]))));
                            var_25 = arr_5 [i_1 - 1];
                        }
                    } 
                } 
            }
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            var_26 = (~(((/* implicit */int) var_1)));
                            arr_33 [i_1] [(signed char)2] [i_3] [i_3] [(unsigned char)12] [i_8] [i_9] &= ((/* implicit */int) var_3);
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_10 = 2; i_10 < 19; i_10 += 2) 
                {
                    var_28 *= arr_35 [i_1 + 1] [i_10] [i_10 - 1] [i_10];
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_10] [i_10 + 2] [i_10 + 1] [i_10] [i_10])) ? (arr_21 [i_7] [i_7] [i_10 + 2] [(unsigned char)8] [i_10]) : (((/* implicit */unsigned long long int) arr_22 [i_1] [i_1] [i_10 - 2] [i_10] [i_10])))))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        arr_39 [i_1] [i_3] [16ULL] [i_1] [i_1] = ((/* implicit */unsigned short) arr_20 [i_1] [i_1] [i_10] [4]);
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_15 [20ULL]))));
                        var_31 = ((((/* implicit */_Bool) arr_19 [i_10 - 2])) ? (arr_19 [i_1 + 1]) : (arr_19 [i_1 + 1]));
                        arr_40 [i_1] [i_11] [i_11] [i_1] [i_1] [18U] [i_1] |= ((/* implicit */_Bool) 1262324087U);
                    }
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (-8597098362766472212LL)));
                        arr_43 [i_12] [i_12] [i_7] [i_12] [i_12] [i_1] = ((/* implicit */signed char) arr_21 [i_1] [i_3] [i_3] [i_10] [i_12]);
                        arr_44 [i_1] [i_1] [(short)19] [i_10 - 1] [i_12] = ((/* implicit */unsigned char) ((unsigned long long int) (-2147483647 - 1)));
                        var_33 *= ((/* implicit */unsigned int) arr_16 [i_10 + 2] [i_3] [i_7]);
                    }
                }
                var_34 = arr_19 [i_7];
                arr_45 [i_1] [i_3] = (+(((((/* implicit */_Bool) arr_21 [(signed char)11] [i_1] [i_1] [i_3] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1])))));
                var_35 |= arr_23 [i_1] [20ULL] [i_3] [i_1];
            }
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned char) var_5);
                var_37 = ((/* implicit */signed char) ((int) 6095256183568273917LL));
            }
        }
        for (unsigned short i_14 = 3; i_14 < 19; i_14 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_15 = 1; i_15 < 17; i_15 += 2) 
            {
                var_38 = ((/* implicit */signed char) arr_49 [i_1]);
                var_39 = ((/* implicit */signed char) ((arr_51 [i_1] [i_15 + 3] [i_15]) / (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) arr_6 [i_1]))))));
                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])))))));
            }
            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                /* LoopSeq 3 */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    var_41 = ((((/* implicit */long long int) arr_30 [i_1] [i_1 - 1] [i_1] [i_16])) + (((((/* implicit */_Bool) arr_12 [i_1] [i_14])) ? (((/* implicit */long long int) arr_28 [i_1] [i_1] [i_16] [i_17])) : (var_10))));
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        arr_64 [i_16] [i_14] [i_14] [i_17] [i_18] [(short)10] |= ((/* implicit */unsigned short) ((unsigned char) arr_10 [i_1 + 1] [i_14 - 2]));
                        var_42 += var_9;
                        arr_65 [i_1] = ((/* implicit */unsigned long long int) arr_52 [(signed char)14] [(signed char)14] [i_17] [i_1]);
                    }
                }
                for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    var_43 *= (+(((unsigned long long int) var_10)));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */_Bool) 463199256)) ? (10199843189155387246ULL) : (((/* implicit */unsigned long long int) 6095256183568273906LL)))))));
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) var_12))));
                        arr_72 [i_1] [i_1] = ((((/* implicit */_Bool) arr_56 [i_1 - 1] [i_1 + 1] [i_1 - 1] [(unsigned char)9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_1] [i_14 - 2] [i_16] [i_19] [i_19] [i_1 - 1]))) : (((unsigned long long int) arr_19 [i_1])));
                        var_46 = 3345906959U;
                    }
                }
                for (long long int i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    arr_75 [i_1] [i_14] [i_1] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_61 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_14 - 2])) * (((/* implicit */int) var_13))));
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 21; i_22 += 3) 
                    {
                        arr_79 [i_1] [i_14] [i_14] [i_16] [i_16] [i_21] [i_22] = ((/* implicit */int) arr_55 [i_14] [i_16] [i_22]);
                        var_47 *= ((/* implicit */signed char) var_13);
                        var_48 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (arr_24 [i_22]) : (arr_24 [i_1 - 1])));
                    }
                    for (unsigned int i_23 = 0; i_23 < 21; i_23 += 4) 
                    {
                        var_49 = arr_20 [i_1 + 1] [i_1] [13ULL] [i_1];
                        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_14] [i_1] [i_14] [1ULL])) ? (arr_3 [i_1 + 1]) : (((/* implicit */int) arr_59 [i_1]))));
                    }
                    var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((unsigned int) var_14)))));
                    var_52 = ((/* implicit */int) max((var_52), (((((/* implicit */_Bool) arr_77 [i_1 - 1] [i_1] [i_14] [i_1] [i_14 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_81 [(unsigned short)10] [(unsigned short)10] [i_14 - 1]))))));
                }
                arr_82 [i_1] = ((/* implicit */unsigned short) ((int) var_3));
                var_53 = ((/* implicit */unsigned long long int) arr_35 [i_1 + 1] [i_1] [i_1 + 1] [i_14 - 2]);
                /* LoopNest 2 */
                for (unsigned char i_24 = 0; i_24 < 21; i_24 += 2) 
                {
                    for (unsigned char i_25 = 0; i_25 < 21; i_25 += 3) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_1 + 1] [i_14 - 2])) ? (arr_62 [i_1] [i_16]) : (((/* implicit */unsigned int) arr_46 [i_1 - 1] [i_14 - 1])))))));
                            arr_89 [i_1] [i_14] [i_16] [18] [i_25] = ((/* implicit */short) ((unsigned long long int) arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_14 + 2]));
                            var_55 = ((((/* implicit */_Bool) arr_67 [i_1] [i_24] [i_25])) ? (arr_67 [6LL] [i_14 + 1] [i_14 - 1]) : (arr_67 [i_1] [i_14 - 1] [i_16]));
                        }
                    } 
                } 
                var_56 = ((/* implicit */long long int) ((unsigned int) arr_28 [i_1] [i_14] [(signed char)8] [i_1]));
            }
            for (short i_26 = 1; i_26 < 20; i_26 += 2) 
            {
                var_57 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) var_9)) : (arr_36 [i_1 + 1] [i_1 + 1] [(unsigned char)2] [i_26])));
                var_58 ^= ((/* implicit */unsigned long long int) arr_83 [(unsigned char)5] [i_14 - 1] [i_14] [(_Bool)1]);
                var_59 = ((/* implicit */long long int) min((var_59), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)130)) ? (9650638489189494430ULL) : (((/* implicit */unsigned long long int) 387156178283969893LL)))))));
            }
            var_60 -= ((/* implicit */unsigned char) arr_55 [i_1] [i_1] [i_1]);
            var_61 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [18LL] [i_14 - 1] [12])) || (((/* implicit */_Bool) arr_38 [i_14] [i_14 + 2] [20]))));
        }
        var_62 = ((/* implicit */int) max((var_62), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)104)) ? (-2385669314980530138LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))))));
    }
    var_63 |= (+(((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
}
