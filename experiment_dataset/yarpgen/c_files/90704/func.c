/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90704
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
    for (short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    var_10 = ((/* implicit */unsigned char) var_5);
                    var_11 = ((/* implicit */unsigned short) arr_5 [16] [i_1] [i_2] [16]);
                }
                /* LoopSeq 1 */
                for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    arr_8 [i_1] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) (short)23641)) : (1437413231)))));
                    arr_9 [(_Bool)1] [14ULL] [6ULL] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 17085987389904412502ULL))) ? (((/* implicit */unsigned int) 843407067)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)2] [(short)14] [3ULL]))) : (4294967295U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-32742)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_4 [i_0]))))))) : (((((/* implicit */_Bool) 111869051U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)20154), ((short)15872))))) : (arr_5 [i_3] [i_1] [i_0] [i_0])))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (short)127;
                }
                arr_11 [7U] = ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [8ULL] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 463539347)) : (((((/* implicit */_Bool) var_4)) ? (11050854220768894946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_4 = 4; i_4 < 15; i_4 += 3) 
                {
                    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [14] [i_1 + 2] [i_0 - 1])) ? (((/* implicit */int) arr_12 [i_4 - 1] [i_1] [i_1 + 2] [i_0 - 1])) : (((/* implicit */int) arr_12 [i_4 - 1] [(short)14] [i_1 + 2] [i_0 - 1]))));
                    arr_14 [i_0] = arr_4 [17U];
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (int i_6 = 4; i_6 < 15; i_6 += 2) 
                        {
                            arr_20 [(short)2] [(signed char)4] [9ULL] [i_5] [i_5] = ((/* implicit */short) 33030144U);
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)12] [16] [i_4] [i_5])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((int) 4294967273U))));
                        }
                        for (short i_7 = 2; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned int) (short)-388);
                            arr_23 [i_0] [i_1] [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */signed char) 240U);
                        }
                        for (short i_8 = 2; i_8 < 16; i_8 += 2) /* same iter space */
                        {
                            arr_27 [(short)15] [(short)15] [i_4] [(short)15] [14ULL] [14ULL] = ((/* implicit */short) arr_1 [i_4]);
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3331799479U)) ? (((/* implicit */int) arr_0 [i_4 - 2])) : (((/* implicit */int) arr_0 [i_4 - 1])))))));
                            arr_28 [8] = ((/* implicit */unsigned char) ((short) arr_0 [(signed char)12]));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_5] [i_5 + 2] [i_8 + 2] [i_5])) ? (((/* implicit */int) (unsigned short)22166)) : (arr_7 [i_5] [i_5 + 2] [i_8 + 1] [(unsigned short)13]))))));
                        }
                        for (short i_9 = 2; i_9 < 16; i_9 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28556)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) ((unsigned short) arr_26 [(short)8])))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) -47443404)))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            var_19 = arr_19 [(short)3] [(short)3] [(short)3] [10] [i_5 + 4] [i_4 - 2] [11];
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 4; i_10 < 15; i_10 += 1) 
                        {
                            arr_35 [(short)0] [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 - 1])) / (((/* implicit */int) arr_0 [i_10 + 3]))));
                            var_20 = ((/* implicit */int) arr_12 [(short)16] [i_1] [i_4] [i_1]);
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((short) (unsigned short)6144)))));
                        }
                        for (unsigned int i_11 = 3; i_11 < 14; i_11 += 4) /* same iter space */
                        {
                            arr_38 [i_0] [i_11] [i_0] [i_5] [i_0] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 315961927U)))))));
                            var_22 ^= ((/* implicit */short) arr_33 [i_0] [i_0] [i_0] [i_5] [5]);
                        }
                        for (unsigned int i_12 = 3; i_12 < 14; i_12 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) arr_1 [(unsigned short)1]);
                            var_24 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_5] [7])) >= (((/* implicit */int) (short)15))))) % (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                        }
                    }
                    for (short i_13 = 2; i_13 < 17; i_13 += 1) 
                    {
                        var_25 = (signed char)-124;
                        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_1 + 2] [i_13 + 1] [i_0 - 4] [i_4 - 2])) ? (((((((/* implicit */int) var_4)) + (2147483647))) << (((arr_25 [i_13] [(_Bool)1] [i_0]) - (1506039851U))))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [(short)10] [i_0])) >= (((/* implicit */int) (short)6144)))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_22 [i_1]))));
                        arr_45 [i_0] [(short)11] [i_0] = ((((/* implicit */int) arr_12 [11] [5] [i_13] [i_13 - 1])) <= (((/* implicit */int) arr_12 [i_13] [i_13] [i_13] [i_13 - 2])));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 4; i_14 < 16; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_52 [i_0] [(short)8] [i_0] [i_14] [i_15] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_25 [(unsigned short)12] [i_14] [i_4])))));
                                arr_53 [i_15] [i_14] [i_15] [i_15] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_1] [i_4] [(signed char)15] [(short)8])) <= (((/* implicit */int) (short)-19715)))) ? (((((((/* implicit */int) arr_26 [i_15])) + (2147483647))) >> (((((/* implicit */int) var_3)) - (13219))))) : (((/* implicit */int) arr_50 [i_15] [i_15] [i_4 - 4]))));
                            }
                        } 
                    } 
                    arr_54 [i_0] = arr_32 [i_0] [i_0] [i_0] [(short)3] [9] [i_0] [(_Bool)1];
                }
                /* vectorizable */
                for (int i_16 = 3; i_16 < 17; i_16 += 2) 
                {
                    var_28 ^= ((/* implicit */short) ((((/* implicit */int) var_6)) & (255)));
                    arr_58 [i_0] [i_16] [(short)6] = ((/* implicit */short) ((signed char) arr_55 [(unsigned short)12] [i_0 + 1] [(short)11] [15U]));
                    var_29 = ((unsigned int) ((int) arr_57 [i_16] [i_16] [i_16]));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_16] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(short)16])) : (((/* implicit */int) arr_57 [i_16] [(short)3] [i_16 - 2]))));
                }
                /* vectorizable */
                for (unsigned short i_17 = 2; i_17 < 15; i_17 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_0]))) < (((((/* implicit */_Bool) (short)16383)) ? (arr_22 [i_17]) : (((/* implicit */unsigned int) -1))))));
                    var_32 = var_2;
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31744)))))))));
                    var_34 = (~(((/* implicit */int) arr_1 [i_17])));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_18 = 3; i_18 < 19; i_18 += 3) 
    {
        arr_64 [i_18] = ((/* implicit */unsigned int) arr_63 [(short)5] [(short)5]);
        arr_65 [i_18] [i_18] = ((/* implicit */int) min((arr_63 [1] [1]), (arr_62 [i_18])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_19 = 2; i_19 < 21; i_19 += 1) 
        {
            arr_68 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_66 [i_18] [i_18 + 1])) ? (((/* implicit */int) arr_66 [i_18] [i_18 - 1])) : (((/* implicit */int) arr_66 [i_18] [i_18 - 1]))));
            /* LoopSeq 1 */
            for (short i_20 = 3; i_20 < 21; i_20 += 3) 
            {
                arr_71 [i_18] [14U] [20ULL] [i_20] &= ((/* implicit */_Bool) arr_66 [2U] [2U]);
                /* LoopSeq 2 */
                for (short i_21 = 2; i_21 < 19; i_21 += 1) /* same iter space */
                {
                    arr_74 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_62 [i_18])) ? (((/* implicit */int) (short)9719)) : (((/* implicit */int) arr_66 [i_18] [(short)16])))) * (((/* implicit */int) arr_63 [i_18 + 1] [i_19 - 2]))));
                    /* LoopSeq 3 */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        var_35 ^= ((/* implicit */unsigned char) arr_67 [i_20]);
                        arr_79 [(_Bool)1] [0] [i_20] [6U] [i_18] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */int) arr_72 [i_22] [i_21] [i_20] [i_20] [i_19] [(unsigned short)20])) >= (((((/* implicit */_Bool) (short)-1780)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_77 [i_18]))))));
                    }
                    for (int i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        var_36 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_75 [i_23] [(short)7] [i_20] [1] [i_19] [i_18 - 1])) ? (arr_78 [i_18] [18] [i_20] [18U] [i_20 - 3] [18U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112)))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_18])) ? (((/* implicit */int) arr_61 [i_18])) : (((/* implicit */int) arr_61 [i_18]))));
                    }
                    for (unsigned long long int i_24 = 3; i_24 < 18; i_24 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) arr_61 [i_18]);
                        var_39 = ((/* implicit */unsigned long long int) ((signed char) arr_76 [i_18] [(_Bool)1] [i_19 - 2] [i_24]));
                    }
                    var_40 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6802456435046111779ULL)) ? (15154739245248080122ULL) : (((/* implicit */unsigned long long int) 1231732121))))) ? (((/* implicit */int) arr_70 [i_19] [i_20])) : (((/* implicit */int) arr_63 [i_18 + 2] [i_18 - 1]))));
                }
                for (short i_25 = 2; i_25 < 19; i_25 += 1) /* same iter space */
                {
                    var_41 = arr_78 [i_19] [i_19] [i_19 - 1] [i_18] [i_25] [i_19];
                    arr_89 [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)3726)) ? (arr_76 [i_18] [i_18 + 3] [i_25 + 1] [i_19 - 2]) : (1089968687U)));
                }
                var_42 = ((/* implicit */short) max((var_42), ((short)-4354)));
                arr_90 [(short)9] [i_18] [0] = ((/* implicit */short) ((985855753U) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_61 [i_18]))))));
            }
        }
        var_43 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_62 [i_18])) ^ (((((/* implicit */int) var_3)) - (((/* implicit */int) var_6))))))), (arr_84 [9] [i_18])));
    }
}
