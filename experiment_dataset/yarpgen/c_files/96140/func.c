/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96140
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
    var_17 = ((/* implicit */_Bool) ((unsigned char) var_0));
    var_18 = ((var_3) ? (((/* implicit */int) max((var_9), (var_3)))) : (((((/* implicit */int) ((short) var_14))) * (((/* implicit */int) var_12)))));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */int) arr_3 [i_0] [i_1]);
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max(((unsigned char)22), (((/* implicit */unsigned char) min(((signed char)-65), (((/* implicit */signed char) (_Bool)0))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) (signed char)65);
                        var_22 += ((/* implicit */_Bool) ((int) (_Bool)1));
                        var_23 *= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        arr_18 [(unsigned char)6] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) (unsigned char)121);
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_0])))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0 - 3] [i_1] [i_2 + 3] [i_3] [i_5])) ? (((((/* implicit */_Bool) arr_11 [(short)6] [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (523264))) : (((/* implicit */int) arr_10 [(unsigned char)1] [i_2] [i_3]))));
                        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_2 + 3])) ? (arr_11 [i_0 - 3] [i_2 - 1]) : (((/* implicit */int) arr_10 [i_0 + 1] [i_2 - 1] [i_2 - 1]))));
                    }
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((short) 1073741824U)))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4341)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)66), (((/* implicit */unsigned char) (signed char)-78)))))) : (((((/* implicit */_Bool) ((short) arr_11 [i_2] [i_3]))) ? (((((/* implicit */_Bool) -728847426)) ? (3846291639U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1)))))))));
                }
                arr_19 [i_2] [0] [6U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 3])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)124))))) : ((+(((long long int) arr_4 [i_0]))))));
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) 1289476900))));
            }
            for (short i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (arr_11 [i_0] [i_0 - 2])))) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
                var_31 -= ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) (short)-27484)))));
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) 4095))));
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) 2135722587)) ? (((/* implicit */int) max((((/* implicit */short) arr_5 [i_0 - 3])), ((short)8192)))) : (984848264))))));
            }
            for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)233)))) | (((unsigned int) (signed char)8))))) ? (arr_23 [2U] [i_0] [i_0]) : (((/* implicit */long long int) ((int) ((unsigned short) var_3))))));
                arr_24 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)135))) || (((/* implicit */_Bool) 2147483584))));
            }
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) max((((((/* implicit */_Bool) min(((short)25528), (((/* implicit */short) (signed char)-65))))) ? (((/* implicit */long long int) ((int) arr_16 [i_0] [i_1] [i_1] [i_0] [i_0] [(unsigned char)4]))) : ((~(arr_2 [i_0]))))), (((/* implicit */long long int) max((((arr_8 [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) arr_1 [i_1]))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                arr_27 [i_0] [i_1] [i_8] [i_0] = arr_12 [i_0 + 1];
                arr_28 [14U] [i_1] [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)7)) * (((/* implicit */int) arr_5 [i_1]))))));
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_8 + 3]))));
                    arr_31 [i_9] [(signed char)19] [i_9] [(_Bool)1] [i_9] [i_9] = ((int) arr_29 [i_0 + 1]);
                    var_37 = ((/* implicit */unsigned char) ((arr_7 [i_8 + 3]) ? (((/* implicit */int) arr_0 [i_0])) : (((arr_11 [i_0] [i_0]) ^ (((/* implicit */int) arr_0 [14]))))));
                    arr_32 [i_0] [i_1] [i_8] [i_9] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                }
                for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    arr_35 [i_0] = (unsigned char)54;
                    var_38 = ((/* implicit */short) min((var_38), ((short)-6266)));
                }
            }
            for (short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        {
                            arr_42 [i_0] [i_1] [i_11] [i_11] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_8 [i_1] [i_1] [i_12] [i_13]))) ? (((/* implicit */int) (unsigned char)66)) : (((((/* implicit */_Bool) arr_29 [i_11])) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (((/* implicit */int) ((unsigned char) arr_40 [i_13] [i_13] [i_11] [i_12] [6LL] [i_13] [(_Bool)1])))))));
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (arr_37 [7] [i_0 - 2] [i_11])))) ? (((/* implicit */long long int) 3221225472U)) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)24)) * (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0]))))) ? (((arr_39 [i_12] [i_12] [i_11] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_11] [i_11] [i_11]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-65)), ((unsigned short)65529))))))))))));
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_37 [i_0 - 1] [i_0 - 1] [i_0])))) ? (min((arr_37 [i_0 - 2] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)155)))) : (arr_37 [i_0 - 2] [i_1] [15U]))))));
                            var_41 -= ((/* implicit */unsigned short) (+(((arr_33 [i_0] [i_1] [i_0 - 2] [i_12] [i_13]) / (((/* implicit */int) (unsigned char)54))))));
                            arr_43 [i_0] [i_13] [i_13] [i_0 - 3] = var_10;
                        }
                    } 
                } 
                var_42 = ((/* implicit */_Bool) ((unsigned char) max((arr_34 [i_0] [i_1] [i_11] [(unsigned short)15]), (arr_34 [i_0] [i_1] [i_11] [i_11]))));
                arr_44 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned char)19] [i_0] [i_0])))) - (((/* implicit */int) ((arr_16 [i_11] [i_11] [i_11] [i_11] [(unsigned char)13] [i_11]) || (((/* implicit */_Bool) arr_2 [i_0])))))))) ? (((int) ((((/* implicit */_Bool) arr_30 [i_0])) && (((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_11]))))) : ((~(((/* implicit */int) (unsigned char)196))))));
            }
            var_43 |= ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_33 [i_0] [(unsigned short)9] [i_1] [i_1] [i_1]))))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
        {
            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) arr_13 [i_0 - 3] [(unsigned char)3] [i_0 - 3] [i_0] [i_0 - 1]))));
            arr_47 [i_0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)-16384))))));
            var_45 += ((/* implicit */unsigned char) (((!(arr_12 [i_14]))) && (arr_7 [i_0])));
        }
        /* LoopSeq 1 */
        for (int i_15 = 1; i_15 < 16; i_15 += 3) 
        {
            arr_51 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */int) min((arr_45 [i_0 + 1]), (arr_45 [i_0 - 1])))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_45 [i_0 - 1]))))));
            var_46 = ((/* implicit */_Bool) (unsigned short)7);
            var_47 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((((/* implicit */int) arr_45 [i_0])) + (((/* implicit */int) (unsigned short)58543))))))) == (max(((+(arr_37 [i_15] [i_15 + 1] [(signed char)7]))), (((/* implicit */unsigned int) (~(arr_14 [i_0 - 3]))))))));
        }
    }
    for (short i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
    {
        var_48 = ((/* implicit */unsigned char) ((unsigned int) ((arr_34 [i_16] [i_16] [i_16] [i_16]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) : (((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */long long int) arr_8 [i_16] [i_16] [i_16] [i_16])) : (arr_23 [7U] [i_16] [(_Bool)1]))))));
        var_49 = ((/* implicit */unsigned short) ((((int) (_Bool)0)) < (((((/* implicit */int) arr_9 [i_16] [i_16] [i_16] [i_16])) + (((/* implicit */int) var_5))))));
        var_50 += ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) ^ (8969113357083170119LL)))) ? (((/* implicit */long long int) max((((/* implicit */int) (short)-10611)), (max((((/* implicit */int) arr_16 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])), (arr_33 [i_16] [i_16] [i_16] [i_16] [i_16])))))) : (min((arr_2 [i_16]), (((/* implicit */long long int) (unsigned char)64)))));
    }
    for (short i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
    {
        var_51 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) ((unsigned char) (short)-4311))) : (((((/* implicit */_Bool) 1073792567U)) ? (((/* implicit */int) (unsigned short)5132)) : (((/* implicit */int) (unsigned char)184))))))) : (max((((/* implicit */unsigned int) arr_10 [i_17] [i_17] [i_17])), (((((/* implicit */_Bool) arr_0 [i_17])) ? (arr_37 [i_17] [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))))))));
        var_52 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-5955)) ? (((/* implicit */int) (short)8882)) : (522517841)))));
        var_53 -= ((/* implicit */short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56725)))))))), (arr_29 [i_17])));
    }
    for (short i_18 = 0; i_18 < 17; i_18 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_19 = 0; i_19 < 17; i_19 += 4) 
        {
            for (unsigned char i_20 = 0; i_20 < 17; i_20 += 3) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_54 -= ((/* implicit */unsigned char) arr_41 [i_18] [i_19] [i_20] [i_21]);
                        arr_67 [i_21] [i_19] [i_20] [i_20] [i_20] [i_21] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (unsigned int i_22 = 0; i_22 < 17; i_22 += 2) 
                        {
                            var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) (_Bool)1))));
                            var_56 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned short)48942))));
                            arr_70 [i_18] [i_21] [i_20] [i_22] = ((/* implicit */_Bool) max((((arr_64 [i_18] [i_21]) ? (((/* implicit */int) arr_64 [i_21] [i_21])) : (((/* implicit */int) arr_64 [i_21] [i_21])))), (((/* implicit */int) ((((/* implicit */int) arr_64 [i_18] [i_21])) < (((/* implicit */int) arr_64 [i_21] [i_21])))))));
                            arr_71 [i_22] [i_18] [i_19] [(short)14] [i_19] [i_19] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_18] [i_19] [(short)1])) - (((/* implicit */int) arr_10 [i_18] [i_18] [(unsigned char)11]))))) ? (((/* implicit */int) arr_10 [(short)4] [i_21] [15U])) : (((/* implicit */int) arr_10 [i_20] [i_19] [i_18]))));
                        }
                    }
                } 
            } 
        } 
        var_57 = arr_16 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18];
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 17; i_24 += 1) 
            {
                {
                    arr_77 [i_18] [i_23] [i_24] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_41 [i_24] [i_23] [i_18] [i_18])) ? (3626816591U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))))));
                    var_58 = ((/* implicit */unsigned char) arr_17 [14] [14] [i_18] [i_23] [i_24]);
                    /* LoopSeq 3 */
                    for (unsigned char i_25 = 0; i_25 < 17; i_25 += 2) 
                    {
                        var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((737616022) >= (((/* implicit */int) (_Bool)1)))))) > (32766U))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_18])), (max((((/* implicit */unsigned short) arr_58 [i_24] [i_25])), ((unsigned short)8502)))))) : (((/* implicit */int) min((arr_52 [i_23] [i_23]), (arr_52 [i_24] [i_25])))))))));
                        var_60 = ((/* implicit */unsigned char) var_12);
                    }
                    for (unsigned char i_26 = 2; i_26 < 14; i_26 += 2) /* same iter space */
                    {
                        var_61 ^= ((/* implicit */unsigned char) arr_14 [i_23]);
                        var_62 ^= ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_5 [i_26])), (min((((/* implicit */unsigned int) (signed char)25)), (arr_73 [i_18]))))), (((/* implicit */unsigned int) ((arr_7 [i_18]) ? (arr_8 [i_26 + 1] [i_26 + 1] [i_26] [i_26 - 2]) : (((arr_7 [i_18]) ? (((/* implicit */int) arr_66 [i_18] [i_23])) : (((/* implicit */int) var_9)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_27 = 2; i_27 < 14; i_27 += 2) /* same iter space */
                    {
                        var_63 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_18])) ? (((/* implicit */int) arr_29 [i_24])) : (((/* implicit */int) arr_29 [i_24]))));
                        var_64 = ((/* implicit */_Bool) max((var_64), (((/* implicit */_Bool) ((unsigned char) (unsigned char)170)))));
                        var_65 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1))));
                        arr_87 [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_78 [i_18] [i_23] [i_27 + 1] [i_24])) ^ (((/* implicit */int) arr_16 [i_18] [i_18] [i_27 + 1] [i_27 - 2] [i_27 - 2] [i_24]))));
                    }
                }
            } 
        } 
        arr_88 [i_18] [i_18] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_10 [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_74 [(unsigned char)14] [i_18] [i_18])))));
    }
}
