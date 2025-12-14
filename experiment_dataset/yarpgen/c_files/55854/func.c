/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55854
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
    var_20 = ((/* implicit */unsigned char) var_15);
    var_21 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_2 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */int) (+(((((/* implicit */long long int) max((15U), (((/* implicit */unsigned int) (unsigned short)49498))))) - (max((((/* implicit */long long int) (unsigned short)16038)), (1183518056532430283LL)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)16020), (((/* implicit */unsigned short) (signed char)36))))) << (((var_15) - (7431276547683028509ULL)))))) ? (min((((/* implicit */long long int) (signed char)(-127 - 1))), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(signed char)5] [(signed char)5])) ? (((/* implicit */int) (short)17783)) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 1) 
                {
                    arr_13 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) (unsigned short)23)) : (var_7)))))));
                    var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_0))), (((/* implicit */unsigned int) ((_Bool) (unsigned short)16037)))))) ? (((/* implicit */long long int) (-(arr_0 [14] [i_1])))) : ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41))) : (9223372036854775807LL)))))));
                }
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) var_13);
                    arr_17 [6] [i_2] [i_2] &= max((((/* implicit */long long int) arr_2 [(signed char)20])), ((+(((((/* implicit */_Bool) 2050134837U)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_17))))));
                    arr_18 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) arr_6 [i_0] [i_1]);
                    var_24 = ((/* implicit */long long int) arr_10 [i_0]);
                    arr_19 [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1183518056532430283LL)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) (unsigned short)48711))));
                }
                arr_20 [i_0] [16ULL] [i_2] [i_0] = ((/* implicit */unsigned char) (-(140737488355328LL)));
            }
            /* vectorizable */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) arr_15 [i_0 + 1] [i_5] [(unsigned char)12] [(signed char)12] [i_0 + 1] [i_0])) >> (((((/* implicit */int) var_3)) - (29))))))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (arr_9 [i_0])));
                var_27 += ((/* implicit */unsigned long long int) arr_8 [14]);
                arr_23 [i_0 + 1] [i_1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((short) arr_15 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_1]));
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0])))));
            }
            var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0 - 1] [(unsigned short)9])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1]))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) arr_16 [i_6]);
            /* LoopSeq 4 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_30 = ((/* implicit */signed char) var_19);
                arr_30 [i_0] = ((/* implicit */long long int) arr_8 [i_0]);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */short) arr_33 [i_8] [i_0] [i_0] [i_0]);
                var_32 += ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_0 - 3] [i_0 - 3])) * (((/* implicit */int) var_18))))), (((((/* implicit */_Bool) var_2)) ? (((unsigned int) (unsigned short)65518)) : (((/* implicit */unsigned int) arr_0 [(short)14] [i_8]))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_8 [i_0])) > (((/* implicit */int) (signed char)42)))));
                var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59746))) : (((((/* implicit */long long int) (-2147483647 - 1))) + (var_1))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) != (((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0 - 1] [i_6] [i_9] [i_6 + 1]))) ^ (var_1)))))))));
                /* LoopSeq 4 */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        arr_44 [i_0] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) 3537166100202897858ULL);
                        var_35 = 4294967280U;
                        var_36 = ((/* implicit */unsigned char) arr_10 [i_10]);
                        var_37 = ((/* implicit */int) arr_22 [i_0 - 3]);
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_38 += ((/* implicit */unsigned short) ((26U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 - 2] [i_10])))));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (557871834U)));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_40 = ((/* implicit */_Bool) (signed char)-64);
                        var_41 = ((((/* implicit */_Bool) arr_25 [i_6] [i_10])) ? (((/* implicit */int) arr_29 [i_6 + 1])) : (((/* implicit */int) (unsigned char)237)));
                        var_42 ^= ((((/* implicit */_Bool) arr_6 [i_6 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [7] [i_0] [i_6 + 1] [i_0]))) : (arr_2 [i_9]));
                    }
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_43 = (((_Bool)0) ? (3861223514U) : (433743781U));
                        var_44 = ((/* implicit */int) (+(arr_2 [i_0])));
                        arr_52 [i_10] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (short)15975))));
                        var_45 = ((/* implicit */unsigned long long int) (((-(var_13))) >= (((/* implicit */long long int) arr_2 [i_10]))));
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)50)) ? (var_0) : (((/* implicit */unsigned int) -2147483637))))) ? (((((/* implicit */_Bool) (unsigned short)27901)) ? (arr_7 [i_0] [i_0] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) (~(433743781U))))));
                    }
                    var_47 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) - (((unsigned long long int) arr_29 [i_6 - 1]))));
                }
                for (signed char i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                {
                    var_48 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_34 [i_0 - 3] [i_6 - 2] [(short)9] [i_0]) << (((arr_34 [i_0 + 1] [i_6 + 1] [i_6 + 1] [i_0]) - (1911439666)))))) ? (min((arr_34 [i_0 - 3] [i_6 - 1] [i_6 - 1] [i_0]), (arr_34 [i_0 - 3] [i_6 - 2] [i_6 - 1] [i_0]))) : (((((/* implicit */_Bool) arr_34 [i_0 - 1] [i_6 - 2] [i_6 - 1] [i_0])) ? (arr_34 [i_0 - 1] [i_6 - 1] [i_6] [i_0]) : (arr_34 [i_0 - 2] [i_6 - 1] [i_6] [i_0])))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_34 [i_0 - 3] [i_6 - 2] [(short)9] [i_0]) << (((((((arr_34 [i_0 + 1] [i_6 + 1] [i_6 + 1] [i_0]) - (1911439666))) + (345264010))) - (29)))))) ? (min((arr_34 [i_0 - 3] [i_6 - 1] [i_6 - 1] [i_0]), (arr_34 [i_0 - 3] [i_6 - 2] [i_6 - 1] [i_0]))) : (((((/* implicit */_Bool) arr_34 [i_0 - 1] [i_6 - 2] [i_6 - 1] [i_0])) ? (arr_34 [i_0 - 1] [i_6 - 1] [i_6] [i_0]) : (arr_34 [i_0 - 2] [i_6 - 1] [i_6] [i_0]))))));
                    var_49 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_18))))));
                    var_50 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65512)) ? (arr_47 [i_6] [i_6] [(_Bool)1] [(_Bool)1] [5U] [(unsigned char)14] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6 - 2] [i_6 - 2] [i_6 - 2] [(unsigned short)15])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_29 [i_0 - 2]), (((/* implicit */signed char) arr_28 [i_0])))))) : (min((((/* implicit */unsigned int) ((unsigned char) arr_16 [i_6]))), (4294967291U)))));
                }
                for (signed char i_16 = 1; i_16 < 18; i_16 += 3) 
                {
                    var_51 = ((/* implicit */long long int) max((((/* implicit */int) arr_55 [i_0] [i_0] [i_0 + 1] [i_16] [i_16])), ((+(((/* implicit */int) arr_54 [i_0] [i_0] [i_0 + 1]))))));
                    arr_57 [i_0] = ((/* implicit */long long int) (+((+((~(0U)))))));
                    var_52 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((arr_29 [i_0 - 1]), (arr_29 [i_0 - 1])))), (((((/* implicit */_Bool) arr_7 [i_6 - 2] [i_0] [i_6 - 1])) ? (arr_16 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-71)))))));
                }
                for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    arr_61 [17U] [i_0] [i_0] [(unsigned short)4] = ((/* implicit */short) (-((+(((/* implicit */int) arr_25 [i_0 + 1] [i_0 + 1]))))));
                    var_53 = ((((/* implicit */_Bool) arr_27 [i_9])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_9] [18] [i_0] [i_17] [i_0] [i_0] [i_9]))) & (((((/* implicit */_Bool) -2147483645)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -2147483619)))))) : (((/* implicit */long long int) (~(((((/* implicit */int) arr_39 [i_0] [(signed char)20] [i_9] [i_6])) | (((/* implicit */int) (unsigned short)42))))))));
                    arr_62 [(signed char)20] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) 0U)), (((long long int) -5926033078106341580LL))))));
                    var_54 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_17] [i_0] [i_9] [(_Bool)1] [i_0])) ? (arr_21 [(unsigned short)20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [18U] [i_9]))) : (((((/* implicit */_Bool) 433743787U)) ? (-6518540327438307309LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                }
                var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
            }
            /* vectorizable */
            for (short i_18 = 0; i_18 < 21; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    for (long long int i_20 = 0; i_20 < 21; i_20 += 3) 
                    {
                        {
                            arr_70 [i_0] [i_0] = ((/* implicit */signed char) 4673955262981449851LL);
                            arr_71 [i_0 + 1] [(unsigned short)10] [i_0] [i_0 + 1] [(short)16] [18LL] = arr_54 [i_0] [i_6 + 1] [i_6 - 1];
                        }
                    } 
                } 
                var_56 = ((unsigned short) var_10);
                /* LoopSeq 1 */
                for (unsigned char i_21 = 0; i_21 < 21; i_21 += 3) 
                {
                    var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_6 + 1] [i_6])) ? ((+(((/* implicit */int) (signed char)70)))) : (((/* implicit */int) arr_58 [i_0 + 1] [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_22 = 1; i_22 < 18; i_22 += 3) 
                    {
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_55 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2])) : ((-2147483647 - 1))));
                        var_59 = ((/* implicit */unsigned short) arr_63 [i_0 - 2] [i_0] [i_0] [i_22]);
                        var_60 += ((/* implicit */unsigned int) ((unsigned short) (-9223372036854775807LL - 1LL)));
                    }
                    var_61 += ((/* implicit */signed char) arr_42 [i_18] [i_6]);
                }
            }
        }
        for (unsigned short i_23 = 1; i_23 < 20; i_23 += 3) 
        {
            var_62 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_4)))))), (((arr_77 [i_23 - 1] [i_23] [i_23 - 1]) ? (((/* implicit */int) arr_77 [i_23 + 1] [i_23 - 1] [i_23 + 1])) : (((/* implicit */int) arr_77 [i_23 - 1] [i_23] [i_23 - 1]))))));
            var_63 = ((5888159311056444717ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))));
            var_64 &= ((/* implicit */short) ((_Bool) var_7));
        }
    }
    for (unsigned long long int i_24 = 3; i_24 < 20; i_24 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_25 = 0; i_25 < 21; i_25 += 1) 
        {
            for (short i_26 = 0; i_26 < 21; i_26 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_27 = 4; i_27 < 18; i_27 += 2) 
                    {
                        var_65 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_41 [i_24] [i_25] [i_27] [i_26] [10ULL])), (max((((((/* implicit */_Bool) arr_51 [i_24] [i_24 - 2] [i_24 - 2] [16] [i_27] [6] [(signed char)14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_25] [i_25]))) : (arr_74 [i_24 - 1] [12LL] [12LL]))), (((/* implicit */long long int) arr_11 [i_24] [i_27] [i_24 - 1]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_28 = 0; i_28 < 21; i_28 += 3) 
                        {
                            var_66 = ((/* implicit */unsigned char) arr_15 [i_24] [(signed char)20] [i_24] [i_24 + 1] [i_24] [i_24 - 2]);
                            var_67 = ((/* implicit */unsigned char) min((var_67), (arr_76 [i_24 - 2] [i_24 + 1])));
                            arr_91 [i_24] [(_Bool)1] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned short) var_13);
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_29 = 0; i_29 < 21; i_29 += 3) 
                        {
                            var_68 = ((/* implicit */short) (+(((int) arr_40 [14ULL] [i_27] [i_27 - 3] [i_27] [i_27]))));
                            arr_94 [i_24 - 3] [i_25] [3U] [i_24] [i_29] = ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_55 [(signed char)12] [i_25] [i_26] [i_25] [i_24])) : (((/* implicit */int) arr_39 [(unsigned char)14] [i_26] [(unsigned char)14] [i_27]))))))), ((-(((unsigned int) var_2))))));
                        }
                        for (unsigned char i_30 = 2; i_30 < 18; i_30 += 3) 
                        {
                            arr_97 [i_24] [i_25] [i_26] [i_27] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? (arr_59 [i_30 + 2] [(_Bool)1] [i_27 + 3] [i_30 + 1]) : (arr_59 [i_26] [i_25] [i_27 + 3] [i_30 + 1])))));
                            var_69 -= ((/* implicit */short) ((unsigned short) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) (short)13))))));
                            var_70 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_11)), (max((arr_36 [i_27 - 3]), (((/* implicit */long long int) var_18))))));
                            var_71 = ((/* implicit */long long int) max((var_71), (((/* implicit */long long int) 2147483647))));
                        }
                    }
                    var_72 = min((((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned int) (unsigned char)247)), (var_0))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_24] [(short)14] [i_26] [i_24] [15] [i_25] [i_25])) ? (282586355344675813LL) : (arr_65 [14ULL] [i_24] [i_25] [i_26])))), (((((/* implicit */_Bool) 433743782U)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) 3779504354U)))))));
                    arr_98 [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) arr_14 [i_24] [i_25])), (((/* implicit */long long int) (+(((/* implicit */int) arr_72 [i_24] [i_25] [i_24] [i_26] [i_26])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27))))) : (min((2147483647), ((-(((/* implicit */int) arr_48 [(signed char)10] [i_24 - 1] [(signed char)10] [i_25] [19LL] [i_24] [i_26]))))))));
                    arr_99 [i_24] [i_25] [i_25] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) -5926033078106341580LL)) && (((/* implicit */_Bool) 4673955262981449851LL))))));
                }
            } 
        } 
        arr_100 [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_24] [i_24])) ? (((4611686018427387904ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_24] [i_24 - 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_24] [i_24 - 2]))))));
    }
    for (unsigned short i_31 = 0; i_31 < 22; i_31 += 1) 
    {
        var_73 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14749)) - (((/* implicit */int) arr_101 [i_31]))));
        arr_103 [(unsigned short)8] &= ((/* implicit */unsigned short) 677036916U);
    }
}
