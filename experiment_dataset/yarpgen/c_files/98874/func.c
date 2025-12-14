/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98874
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
    var_16 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((1481465540U) * (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-22523)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_1 [i_1] [i_0]))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                arr_7 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((var_15) ? (3012317954U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))))));
                arr_8 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-111)) % (((/* implicit */int) (short)16900))))) : (((((/* implicit */_Bool) arr_6 [13] [i_1] [i_2] [i_1])) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (var_12)))));
            }
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) var_6))))))));
        }
        for (int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)127)))))));
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_19 &= ((/* implicit */unsigned long long int) (signed char)111);
                arr_15 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */signed char) 2685889801U);
                /* LoopSeq 4 */
                for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((var_8) % ((~(arr_3 [i_0])))));
                    var_20 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_16 [i_0] [2U])) ? (576460752303422464LL) : (((/* implicit */long long int) arr_3 [i_3]))))));
                    var_21 = ((/* implicit */long long int) arr_4 [i_0] [i_3 + 1] [13U]);
                }
                for (signed char i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
                {
                    arr_21 [i_6] [i_3 - 2] [i_3] [i_4] [i_3 - 2] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1] [i_6 - 1]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_3 + 1] [i_6]))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */int) (signed char)0)) != (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3 - 2] [i_7]))))));
                        arr_24 [(unsigned char)13] [i_6 + 1] [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-99);
                        arr_25 [i_0] [i_6] = ((/* implicit */unsigned char) ((0) == ((-(((/* implicit */int) (unsigned char)0))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) 2147483647)) > (388899432U)))) != ((~(((/* implicit */int) (signed char)-26))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (var_14)));
                        arr_28 [i_0] [i_3 - 1] [i_3] [i_6] [i_0] = ((/* implicit */long long int) (-(744505211U)));
                        arr_29 [i_0] [i_0] [i_4] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3954368356U)) ? (arr_27 [i_0] [i_3 - 2] [i_6] [i_0] [i_0] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-57)))))) ? (((/* implicit */unsigned long long int) ((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [i_4] [i_6] [i_6]))) : (17376948411707200353ULL)))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                    {
                        arr_34 [i_6] [i_6] [i_4] [i_3 + 1] [i_6] = ((/* implicit */unsigned int) (signed char)-10);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_3 - 2] [i_3 - 2] [i_4] [i_6 + 2] [i_6 + 3]))) & (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [(signed char)15] [i_0])) ? (((/* implicit */unsigned long long int) var_11)) : (5258334839540406542ULL))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */long long int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) % (((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_0)))));
                        arr_37 [i_6] [i_6] [i_0] [i_6] = ((/* implicit */unsigned long long int) 3997640828U);
                    }
                    for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_42 [i_6] [i_11] [i_0] [i_4] [i_3 - 1] [i_6] = ((/* implicit */unsigned int) ((arr_35 [i_6 + 2] [i_6]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_35 [i_0] [i_6]))));
                        var_28 = ((/* implicit */unsigned int) var_6);
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127))))) >= (755582735924506712ULL)));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (unsigned char)251))));
                    }
                }
                for (signed char i_12 = 1; i_12 < 17; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_49 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_19 [i_0] [i_12 + 2] [i_4] [(short)0] [i_13])))));
                        var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [9ULL] [i_0] [i_0])) ? (var_3) : ((-(((/* implicit */int) var_4))))));
                    }
                    for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -526497590)) ? (13573637210728453687ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109)))));
                        var_32 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_41 [i_0] [i_3] [i_4] [i_12 + 3] [i_12] [i_14]))))));
                        arr_53 [i_14] [i_12] [i_4] [i_3] [i_0] = ((/* implicit */short) ((var_6) != (((/* implicit */unsigned long long int) ((int) arr_9 [i_4])))));
                    }
                    arr_54 [i_0] [i_3 + 1] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_3] [i_4] [(short)0] [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) var_3))))) && (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 3991242355U))))));
                    /* LoopSeq 1 */
                    for (int i_15 = 2; i_15 < 17; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_55 [i_0] [i_0])) / (((/* implicit */int) arr_19 [i_0] [i_0] [18LL] [(unsigned short)12] [i_15 + 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_14))) | (arr_31 [i_15] [i_3 - 2] [i_15] [i_3 - 2] [i_15] [i_3] [(signed char)2]))))))));
                        var_34 *= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_0]))) < (0ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (short)-19059))))) : (((/* implicit */int) ((arr_22 [i_0] [i_3 - 2] [i_3] [(signed char)13] [i_12 + 3] [i_15] [i_0]) < (((/* implicit */int) arr_0 [i_0] [(_Bool)1])))))));
                        var_35 = ((/* implicit */_Bool) (~(arr_3 [i_15 - 2])));
                        var_36 = ((/* implicit */signed char) 810392850U);
                    }
                    arr_57 [i_4] [i_4] [i_4] [i_4] = arr_43 [(signed char)11] [i_12] [i_4] [i_12 + 3];
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_61 [i_0] [i_0] [i_16] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)(-127 - 1));
                        var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_0] [i_0] [i_4] [i_0] [i_16]))))) == (((/* implicit */unsigned int) ((arr_23 [i_16] [i_12] [i_4] [i_3] [10]) & (((/* implicit */int) (_Bool)0)))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_65 [i_0] [i_0] [i_3] [i_0] [i_12 + 3] [6U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_58 [i_0] [i_3] [i_12 - 1] [i_12 + 2] [i_3])) > (((((/* implicit */_Bool) 2147483635)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_12] [15LL]))))));
                        arr_66 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_11);
                    }
                }
                for (signed char i_18 = 1; i_18 < 17; i_18 += 3) /* same iter space */
                {
                    arr_71 [i_0] [18ULL] [i_4] [i_18] [i_3] [i_3 - 1] = var_2;
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) -7725637981330328213LL))));
                    var_39 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_69 [i_0] [i_0])) : (1073740800U)))));
                    var_40 = ((short) ((((/* implicit */_Bool) arr_17 [i_3] [(unsigned char)18])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)29))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_19 = 0; i_19 < 20; i_19 += 1) /* same iter space */
                {
                    arr_75 [i_19] [i_3] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) arr_58 [i_3] [i_3 + 1] [(_Bool)1] [i_3] [i_19]);
                    var_41 += ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_39 [i_0] [i_3 - 2] [i_4] [4U] [i_4]))))));
                }
                for (unsigned char i_20 = 0; i_20 < 20; i_20 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_3] [i_3 - 1] [i_20] [i_20])) + (((/* implicit */int) arr_17 [i_0] [(unsigned char)16]))));
                        var_43 ^= ((/* implicit */signed char) var_13);
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        arr_83 [i_0] [i_20] [i_4] = ((/* implicit */unsigned char) arr_39 [i_3] [i_3 - 1] [(signed char)6] [(signed char)14] [18]);
                        var_44 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767))));
                        var_45 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) + (4597545816083994030ULL)));
                    }
                    var_46 ^= ((/* implicit */unsigned int) var_2);
                }
            }
            for (unsigned char i_23 = 0; i_23 < 20; i_23 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_24 = 0; i_24 < 20; i_24 += 3) /* same iter space */
                {
                    arr_88 [i_24] [i_23] [i_3 + 1] [i_0] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-26))));
                    /* LoopSeq 2 */
                    for (unsigned int i_25 = 0; i_25 < 20; i_25 += 2) 
                    {
                        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) var_0))));
                        arr_91 [i_0] [i_0] [i_0] [i_0] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_58 [i_3 + 1] [9LL] [i_3 - 2] [i_3] [i_3])) << (((((((/* implicit */int) arr_5 [i_3 + 1] [i_3 - 2] [i_3 - 1])) + (31104))) - (11)))));
                        arr_92 [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (unsigned char)15)) : (var_10)))) ? (((/* implicit */int) arr_39 [i_0] [i_3] [i_3 + 1] [i_24] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    }
                    for (unsigned char i_26 = 0; i_26 < 20; i_26 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((arr_51 [i_0] [i_3 - 2] [(_Bool)1] [i_23] [i_24] [i_26] [i_0]) | (6232149454750858627LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_39 [i_0] [i_26] [i_23] [i_24] [i_26])) <= (((/* implicit */int) arr_84 [i_0] [i_3 - 1]))))))));
                        arr_95 [i_24] [i_24] [i_24] = ((/* implicit */short) arr_41 [7U] [i_3] [2ULL] [i_24] [i_3] [i_24]);
                    }
                }
                for (long long int i_27 = 0; i_27 < 20; i_27 += 3) /* same iter space */
                {
                    arr_98 [(unsigned char)14] [i_3 + 1] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_3] [i_3] [i_0])) ? (((8752283572653602214LL) | (8752283572653602214LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_74 [0LL] [i_23] [i_3] [i_3] [i_0] [0LL])))));
                    var_49 = ((/* implicit */unsigned long long int) min((var_49), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_23])))))) : (((((/* implicit */_Bool) 5115460730969230755LL)) ? (arr_62 [i_0] [i_3] [i_23] [i_23] [9] [i_3]) : (((/* implicit */unsigned long long int) var_8))))))));
                }
                for (long long int i_28 = 0; i_28 < 20; i_28 += 3) /* same iter space */
                {
                    arr_102 [i_0] [i_0] [i_28] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3906067863U)) ? (((((((/* implicit */int) arr_70 [i_0] [i_3 - 1] [i_0] [i_28])) + (2147483647))) >> (((((/* implicit */int) arr_99 [14U] [14U])) - (217))))) : (((/* implicit */int) arr_20 [i_0] [i_3] [i_3 + 1] [11U]))));
                    /* LoopSeq 2 */
                    for (short i_29 = 0; i_29 < 20; i_29 += 4) /* same iter space */
                    {
                        arr_107 [i_0] [(_Bool)1] [i_28] = ((/* implicit */unsigned int) arr_81 [i_0] [8LL] [i_0] [8LL] [i_29]);
                        arr_108 [i_28] [i_28] [i_23] [i_3] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-121)) * (((/* implicit */int) var_9))));
                        var_50 &= ((/* implicit */long long int) (short)-1);
                    }
                    for (short i_30 = 0; i_30 < 20; i_30 += 4) /* same iter space */
                    {
                        arr_111 [i_0] [i_0] [i_28] [i_23] [i_28] [9U] = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_28])) % (((/* implicit */int) arr_46 [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1] [(short)17]))));
                        arr_112 [i_0] [i_0] [i_0] [i_0] [i_28] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))) != (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_0] [i_3 - 1] [i_3] [i_23] [9U] [i_30]))) : (833940891U)))));
                    }
                }
                var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) : (var_11)));
            }
            for (signed char i_31 = 4; i_31 < 17; i_31 += 4) 
            {
                var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) arr_93 [i_31] [i_3 - 1] [i_3 - 1] [i_31]))));
                var_53 = (short)13499;
            }
        }
        var_54 = ((((var_10) >= (((/* implicit */int) arr_35 [i_0] [(short)10])))) ? (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_109 [i_0] [18ULL] [i_0] [i_0] [i_0])) + (72))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_90 [i_0] [i_0] [(signed char)6] [i_0] [i_0]))) != (arr_27 [4ULL] [i_0] [(unsigned char)6] [i_0] [0U] [0U] [(short)10])))));
    }
    var_55 = ((/* implicit */int) var_5);
    var_56 ^= ((/* implicit */long long int) var_6);
}
