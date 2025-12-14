/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57323
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((arr_1 [i_2 - 1]), (((((((/* implicit */_Bool) var_1)) ? (0ULL) : (((/* implicit */unsigned long long int) 1402613825U)))) / (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2 + 1])))))))));
                    arr_9 [i_0] [i_1] [9LL] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2]);
                    var_14 = ((/* implicit */_Bool) (short)8090);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 7; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_4 [i_3 - 2] [i_3 - 2] [i_4]))));
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_22 [3U] [i_4] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                            arr_23 [i_3] [i_7] [i_5] = ((/* implicit */unsigned char) arr_13 [i_6]);
                            var_16 = ((/* implicit */unsigned int) (signed char)-74);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_8 = 3; i_8 < 8; i_8 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) 5689384936037090783LL);
            arr_26 [i_8] [i_8 + 2] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_3 + 3] [(short)1] [i_8 - 1] [i_3]))));
            arr_27 [i_3 - 3] [i_3 - 3] [i_8] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (var_12)))));
        }
        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_3 - 3]))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                {
                    arr_32 [i_9] [(_Bool)1] = ((/* implicit */unsigned int) (!(arr_28 [i_3 + 3] [i_3 - 3])));
                    var_19 = ((((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9))) >= (var_9));
                    arr_33 [i_10] [i_9] &= ((/* implicit */unsigned long long int) arr_12 [i_3 - 2] [i_3 + 3]);
                    arr_34 [i_3 - 4] [i_9] [i_9] [i_10] = ((/* implicit */_Bool) arr_25 [i_3] [i_3 - 2] [i_10]);
                    var_20 ^= ((/* implicit */signed char) var_9);
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((var_9), (((/* implicit */unsigned int) var_6))))))) && (((/* implicit */_Bool) var_11))));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 1; i_13 < 22; i_13 += 1) 
                {
                    var_23 -= ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) - (arr_39 [i_13 + 1] [i_13 - 1] [i_13])))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) max((arr_37 [i_13]), (arr_37 [8U])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_40 [i_11] [i_12] [i_13])) == (arr_39 [i_13 - 1] [i_11] [i_11])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) /* same iter space */
                        {
                            arr_48 [i_11] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_36 [20LL])) ? (arr_38 [7U]) : (arr_46 [i_11] [7LL] [i_13] [(unsigned short)9] [12ULL]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                            arr_49 [i_13] = ((/* implicit */int) arr_45 [(_Bool)1] [i_12] [i_13 + 1] [i_15]);
                        }
                        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) var_8);
                            var_26 = ((/* implicit */unsigned short) (+(arr_47 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13] [i_14])));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */long long int) ((2784054744U) / (((/* implicit */unsigned int) arr_44 [i_11] [i_12] [i_11] [i_13 - 1] [i_14] [(signed char)6]))))) : (((((/* implicit */_Bool) arr_51 [i_11] [i_12] [i_13] [i_11] [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_50 [i_13]))))))));
                            var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_13] [i_13] [i_13 - 1] [i_14] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_13 - 1]))) : (2837010631U)));
                        }
                        var_29 = ((/* implicit */unsigned char) (+(arr_44 [i_11] [i_13 - 1] [i_13] [i_14] [i_12] [i_13])));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 2) 
                        {
                            arr_58 [i_11] [i_11] [i_11] [i_17] [i_13] [i_18] = ((/* implicit */_Bool) 1359262355U);
                            arr_59 [i_18] [i_12] [i_18] [i_12] [i_18] |= ((/* implicit */int) (short)6633);
                            arr_60 [(short)16] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_11] [i_12] [i_13] [i_17] [i_18])) ? (arr_42 [i_12] [i_12] [i_13] [i_13] [i_13 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_18] [i_17] [i_11] [i_11])))));
                            arr_61 [13ULL] [i_12] [i_13 + 1] [(unsigned short)3] [i_13] [i_18] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_43 [i_12] [i_13] [i_17] [i_18])) ? (15291767075408474663ULL) : (((/* implicit */unsigned long long int) arr_40 [i_11] [i_12] [i_13 + 1]))))));
                        }
                        for (signed char i_19 = 3; i_19 < 21; i_19 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) var_3);
                            var_31 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                            arr_64 [14ULL] [i_12] [i_13 - 1] [i_17] [i_13] [13] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_53 [i_19 + 1] [i_17] [i_13 + 1] [i_11])) ? (((/* implicit */int) var_11)) : (arr_53 [i_11] [i_11] [(signed char)4] [i_17])))));
                            var_32 -= ((/* implicit */unsigned int) (short)6420);
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) 11149537846478047147ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (449034352U))))));
                        }
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                        var_35 = ((/* implicit */unsigned long long int) var_6);
                        arr_65 [i_13] [22U] [i_13] [i_17] [i_11] [i_12] = ((/* implicit */int) var_7);
                    }
                    for (signed char i_20 = 2; i_20 < 22; i_20 += 4) 
                    {
                        arr_68 [16U] [i_13] [(short)8] [i_20] [i_12] [i_20] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_57 [i_12] [i_13] [i_20])) * (((/* implicit */int) arr_36 [i_11]))))) : (arr_51 [i_13 - 1] [i_13] [i_20] [5LL] [i_13] [i_20]))) >> (((/* implicit */int) max((arr_56 [i_11] [i_11] [i_20 + 1] [i_20] [i_13] [i_20]), (arr_56 [i_11] [i_12] [i_13] [i_11] [i_11] [i_12]))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_21 = 0; i_21 < 23; i_21 += 1) 
                        {
                            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_21])) ? (((/* implicit */unsigned long long int) ((arr_51 [i_11] [i_12] [2LL] [(short)10] [i_20] [i_21]) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((((/* implicit */unsigned long long int) arr_47 [i_13] [i_12] [i_13] [i_12] [i_12])) & (arr_39 [i_21] [i_12] [i_13 + 1]))))))));
                            var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_67 [i_11] [i_20] [i_13] [i_20]))) + ((-9223372036854775807LL - 1LL))))) ? ((+(((/* implicit */int) (short)24007)))) : ((-(((/* implicit */int) (signed char)93))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : ((((_Bool)0) ? (arr_42 [i_11] [3LL] [(_Bool)1] [i_11] [i_20 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [(_Bool)1] [(_Bool)1] [i_11] [i_13]))))));
                            arr_72 [i_11] [i_12] [i_11] [i_20] [i_13] = ((/* implicit */unsigned int) var_7);
                            var_38 = ((/* implicit */short) ((unsigned short) max((((/* implicit */signed char) arr_56 [i_11] [i_11] [i_13 - 1] [i_13 + 1] [i_20 + 1] [i_21])), (var_2))));
                        }
                        for (short i_22 = 0; i_22 < 23; i_22 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned short) arr_56 [i_22] [i_20] [i_20] [i_13] [i_12] [i_11]);
                            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_40 [i_12] [i_12] [i_13])) && (((/* implicit */_Bool) arr_40 [i_11] [i_13 - 1] [i_22])))) ? (arr_53 [i_11] [i_13] [i_20] [i_22]) : (((((/* implicit */_Bool) arr_43 [i_13 + 1] [i_20 + 1] [i_20 - 2] [i_20 - 2])) ? (((/* implicit */int) arr_43 [i_13 + 1] [i_20 + 1] [i_20 - 2] [i_20 - 2])) : (((/* implicit */int) arr_43 [i_13 + 1] [i_20 + 1] [i_20 - 2] [i_20 - 2])))))))));
                            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (+((-(var_12))))))));
                        }
                        for (long long int i_23 = 0; i_23 < 23; i_23 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned int) (unsigned short)4594);
                            arr_78 [i_13] [i_12] = ((/* implicit */unsigned char) max((min((var_12), (((/* implicit */unsigned long long int) arr_76 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_20 - 2] [i_20 - 2])))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_75 [i_11] [i_12] [i_13 - 1] [i_20 - 2] [i_13 - 1])), (var_7))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2406655407U)))))))));
                        }
                    }
                }
            }
        } 
    } 
}
