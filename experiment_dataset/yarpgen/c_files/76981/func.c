/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76981
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
    var_16 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_6 [i_0] [i_2] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) var_1)), (((((/* implicit */int) (signed char)12)) / (((/* implicit */int) (signed char)-6))))));
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == (arr_5 [i_3] [i_0]));
                    var_18 = ((/* implicit */short) var_0);
                    arr_11 [i_0] [(short)10] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_1])) > (((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [8ULL] [i_2])))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((((((/* implicit */int) (signed char)0)) + (((/* implicit */int) var_6)))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) <= (arr_5 [i_1] [i_2])))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    arr_14 [i_2] = ((/* implicit */_Bool) ((unsigned char) var_1));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) arr_12 [6] [6] [i_1] [i_1]);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_4] [i_4 + 1] [i_4] [(short)0] [i_0])) - (((/* implicit */int) arr_7 [(unsigned char)10] [i_4 + 1] [i_4 + 1] [i_4] [6]))));
                    }
                }
                arr_19 [i_2] [i_1] = ((/* implicit */long long int) var_4);
                arr_20 [(signed char)2] [i_2] [i_2] = (((((+(301636456))) / (((/* implicit */int) var_12)))) != (min((-1417556790), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_1] [i_0]))))))));
                var_21 -= ((/* implicit */unsigned int) arr_16 [i_1] [i_1]);
            }
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                arr_23 [i_6] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [(unsigned char)4] [(unsigned char)6] [i_1] [i_1] [i_1] [i_1] [(signed char)4]))));
                var_22 = ((/* implicit */int) (+(arr_5 [i_0] [i_6])));
                var_23 = min((arr_9 [7U] [(short)9] [i_6] [i_0] [i_6] [(short)9]), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) (signed char)-88)))) > (((/* implicit */int) (signed char)8))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((13339618612481882922ULL) >> (((/* implicit */int) (unsigned char)5))))) ? (min((arr_22 [i_0] [i_0] [i_1] [i_6]), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0] [i_1])), (arr_15 [10] [i_1] [i_1] [(_Bool)1] [i_0] [i_1] [i_1]))))))) ? (((unsigned int) (+(((/* implicit */int) arr_0 [(signed char)1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_12 [i_6] [2] [i_1] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))))))))));
            }
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
            {
                arr_27 [i_0] = ((/* implicit */signed char) var_1);
                arr_28 [(unsigned char)1] [i_7] [i_7] [i_7] &= ((/* implicit */short) (!(((1147339721) <= (((/* implicit */int) (_Bool)1))))));
                var_25 ^= ((/* implicit */short) (+(arr_24 [i_7] [(_Bool)1] [i_0] [i_0])));
                var_26 += ((/* implicit */unsigned long long int) -1417556794);
            }
            for (signed char i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    var_27 &= ((/* implicit */unsigned int) var_3);
                    arr_33 [i_9] = (+(((/* implicit */int) arr_31 [i_0] [i_0] [i_8] [i_1] [i_0] [i_1])));
                    var_28 ^= ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
                    var_29 ^= ((/* implicit */unsigned char) var_3);
                }
                /* LoopSeq 4 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 3; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        arr_41 [i_11 - 3] [i_8] [i_10] [i_8] [i_0] [i_0] |= min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))) != (var_4)))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_8] [i_10] [i_11])) + (((/* implicit */int) arr_0 [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_8])))) : (var_0))));
                        var_30 = ((/* implicit */unsigned char) ((signed char) min((arr_7 [i_11 - 3] [i_11] [i_11 - 1] [i_11] [i_11 - 3]), (var_13))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 3; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_30 [i_1] [(signed char)8] [i_12]);
                        var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_1] [i_8] [i_10] [i_8]))) < (5107125461227668697ULL))))));
                    }
                    for (unsigned int i_13 = 3; i_13 < 11; i_13 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (5992678346362985311ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_13 + 1])))))) ? (((/* implicit */int) max((arr_0 [i_13 + 1]), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) arr_4 [i_13 - 1] [i_13 - 3]))));
                        var_33 += ((/* implicit */_Bool) (((+(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_8 [i_0] [i_1] [i_8] [i_10])))))) + (((/* implicit */int) ((((/* implicit */int) (short)-4465)) <= (((/* implicit */int) arr_21 [i_13 + 1])))))));
                        arr_48 [i_0] [i_1] [i_8] [i_13] [i_13] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)81)) | (((/* implicit */int) arr_31 [i_0] [i_1] [i_8] [i_10] [i_10] [i_13 - 2]))))) >= ((+(arr_35 [i_13] [i_0] [i_8] [i_1] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5)))) ? (((((/* implicit */int) (unsigned short)60429)) - (((/* implicit */int) arr_32 [i_8] [i_1] [i_0])))) : ((+(((/* implicit */int) (unsigned char)29))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */int) ((arr_15 [i_14] [3] [i_14] [i_10] [i_14] [3] [3]) > (arr_15 [i_0] [i_10] [i_14] [i_8] [i_14] [i_0] [i_0])));
                        arr_52 [i_0] [i_0] [i_0] [i_14] [i_0] [(unsigned char)5] = ((/* implicit */unsigned char) arr_22 [i_8] [i_10] [i_8] [(short)0]);
                        arr_53 [i_0] [i_1] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_50 [i_0] [i_14] [i_8] [i_10] [i_10] [i_10] [i_14]) < (((/* implicit */int) arr_40 [i_0] [i_1] [i_0])))))));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_24 [i_0] [i_1] [i_10] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    var_36 = ((/* implicit */int) (!(((_Bool) arr_26 [i_8] [i_1]))));
                }
                for (short i_15 = 3; i_15 < 11; i_15 += 1) 
                {
                    arr_57 [i_0] [i_1] [i_8] [i_1] [i_0] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_13 [i_0]), (((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned short) var_6))))))))));
                    arr_58 [i_0] [i_15] [i_0] = ((/* implicit */unsigned char) (short)29076);
                    var_37 = ((/* implicit */unsigned long long int) min((((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_34 [i_1] [i_0] [i_0] [i_15]))), (min((arr_9 [i_0] [i_1] [(unsigned short)2] [i_15] [i_0] [i_1]), (arr_9 [i_0] [i_0] [i_8] [i_15] [i_8] [i_1])))));
                }
                /* vectorizable */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_15 [i_0] [i_1] [i_1] [i_16] [i_1] [i_1] [i_8]) : (((/* implicit */int) arr_2 [i_0]))));
                    arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((+(arr_34 [i_0] [i_0] [i_0] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)6]))))))));
                }
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    var_39 ^= ((/* implicit */unsigned char) arr_2 [i_17]);
                    /* LoopSeq 2 */
                    for (int i_18 = 3; i_18 < 9; i_18 += 2) 
                    {
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0])))) - ((-(((/* implicit */int) (signed char)-6))))))) ? (max((((/* implicit */int) (signed char)100)), (((((/* implicit */_Bool) var_8)) ? (773812229) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_14))));
                        arr_70 [i_17] = ((/* implicit */short) ((arr_50 [(unsigned char)0] [i_17] [i_18 - 2] [i_18 - 2] [i_17] [i_17] [i_18 - 2]) - (((((/* implicit */int) arr_39 [i_0] [i_1] [i_0] [i_18 + 1] [i_8] [i_0])) + (((/* implicit */int) (_Bool)1))))));
                        var_41 = ((/* implicit */short) var_10);
                        var_42 ^= ((/* implicit */unsigned int) arr_51 [i_0] [i_1] [i_8] [i_17] [i_1]);
                        arr_71 [i_17] [0U] [i_8] [i_1] [i_1] [i_0] [i_17] = ((/* implicit */unsigned char) var_5);
                    }
                    for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        var_43 ^= (~(min((((/* implicit */unsigned int) min((arr_49 [i_19] [i_19] [i_17] [i_1] [i_8] [i_1] [i_0]), (((/* implicit */signed char) var_11))))), ((+(arr_5 [i_1] [(unsigned char)2]))))));
                        arr_75 [i_17] [i_19] [i_19] [i_17] = ((/* implicit */unsigned short) (~(((unsigned int) arr_5 [i_0] [i_0]))));
                        arr_76 [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))) / (((arr_56 [i_0] [i_0] [i_8] [i_17] [i_19] [i_17]) / (arr_56 [i_0] [i_0] [i_1] [(_Bool)1] [i_17] [(unsigned char)2])))));
                        arr_77 [i_0] [i_17] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_32 [i_8] [i_8] [i_8]);
                    }
                    var_44 -= ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((((/* implicit */int) var_14)) >> (((((/* implicit */int) (signed char)-10)) + (22)))))))) - (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (arr_12 [i_17] [7U] [i_1] [7U])))));
                    arr_78 [i_17] [i_8] [i_8] [i_1] [i_0] [i_17] = ((/* implicit */_Bool) (~(max((((var_6) ? (((/* implicit */long long int) var_0)) : (5739406850060856257LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)25)), (arr_36 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_45 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) < (((((/* implicit */int) min(((short)-29071), (((/* implicit */short) var_7))))) - (((/* implicit */int) ((((/* implicit */int) var_1)) < (arr_60 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                }
                arr_79 [i_0] [(unsigned char)3] [i_8] &= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_66 [i_8]))))));
            }
            arr_80 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (4275831306111522604LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (max((2254227750U), (((/* implicit */unsigned int) var_3))))))) ^ (arr_24 [i_0] [i_0] [i_0] [(short)9])));
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 12; i_20 += 4) /* same iter space */
        {
            arr_83 [i_20] [i_20] [i_20] = (~(((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_20] [i_20] [i_20])))));
            var_46 = ((/* implicit */_Bool) max((var_46), (((((/* implicit */int) arr_59 [i_0] [i_20] [i_20])) <= ((-(((/* implicit */int) (signed char)-1))))))));
        }
        arr_84 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [2] [i_0] [i_0] [i_0] [i_0])))))))) || (((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])), (10280743819609431523ULL))))))));
        var_47 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_0]))) <= (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_67 [i_0] [10] [i_0] [i_0] [i_0]))) == (arr_24 [i_0] [i_0] [i_0] [i_0]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (short)-10177))) - (arr_13 [i_0])))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 4) 
            {
                for (unsigned char i_24 = 1; i_24 < 19; i_24 += 1) 
                {
                    {
                        arr_98 [i_24] &= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_97 [i_21] [i_22] [i_23] [i_24] [20ULL] [i_24 + 1])) * (((/* implicit */int) arr_97 [i_21] [i_22] [i_21] [i_22] [i_21] [i_24 + 1])))));
                        arr_99 [i_21] [i_21] [i_22] [i_23] [i_21] &= ((/* implicit */short) (!(((/* implicit */_Bool) -915140854))));
                    }
                } 
            } 
        } 
        var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_94 [(unsigned char)7] [i_21] [i_21]))));
        arr_100 [i_21] = (~(((((/* implicit */int) arr_96 [i_21] [i_21] [i_21] [i_21])) + (((/* implicit */int) arr_96 [i_21] [i_21] [i_21] [i_21])))));
    }
}
