/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9655
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2])))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                    arr_10 [i_0] [i_2] = ((/* implicit */long long int) (+(((unsigned int) var_7))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 24; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1] [i_3] [7U] [7U] [i_5] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)25785)) ? (arr_13 [i_4 - 1] [i_4 - 1] [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_7 [i_1 + 1]))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_13 [12] [i_1 - 2] [i_1 - 2] [i_4 + 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_6 = 3; i_6 < 24; i_6 += 3) 
                    {
                        arr_21 [i_0] [0LL] [i_6 - 1] = ((/* implicit */unsigned int) min((((var_10) < (((/* implicit */unsigned int) arr_15 [i_6 + 1] [16] [i_3] [i_6] [i_6] [20LL] [i_1 - 2])))), (((8056377270822692871LL) <= (((/* implicit */long long int) arr_15 [i_6 - 3] [i_1] [i_6] [i_0] [i_0] [i_1] [i_1 - 2]))))));
                        arr_22 [i_0] [23LL] [i_1 + 1] [i_3] [i_3] [0ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -2443560863365673683LL))));
                        arr_23 [16ULL] [21U] [i_3] [10ULL] &= ((/* implicit */int) 8056377270822692871LL);
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_7] [i_3] [i_6] [i_0] = ((/* implicit */unsigned int) ((int) ((((arr_1 [i_1 - 2]) + (9223372036854775807LL))) >> (((arr_0 [i_6 - 2]) + (171965152))))));
                            arr_27 [i_7] [i_6] [i_3] [i_1] [i_7] = -8056377270822692885LL;
                            arr_28 [i_6] [5LL] [20LL] [i_6] [i_7] = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)31219))))) ? (32767LL) : (((((/* implicit */long long int) arr_15 [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2])) - (arr_25 [i_1 + 1] [i_1] [i_1 - 2]))));
                            var_16 -= ((/* implicit */unsigned long long int) (~(((arr_24 [i_6 - 3] [i_6] [i_6 - 2] [i_6 - 2] [i_6 + 1]) >> (((arr_24 [i_6 - 1] [0U] [i_6 + 1] [i_6 - 2] [i_6 + 1]) - (7728585601833959231LL)))))));
                        }
                        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-31219))))), (var_2)));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_31 [i_8] [i_1 - 2] [i_3] [i_8] [i_8] = max((((/* implicit */long long int) arr_20 [11LL] [i_1] [i_3])), (3120551653840971442LL));
                        var_18 *= (((~(arr_25 [i_1 - 1] [i_1 - 2] [i_1 - 1]))) * (((/* implicit */long long int) ((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 2]))))))));
                        arr_32 [14LL] [i_1] [i_1] [i_8] = ((/* implicit */long long int) 1143871915);
                    }
                    var_19 -= ((/* implicit */int) ((max((((/* implicit */long long int) arr_14 [i_1 - 2])), (((((/* implicit */_Bool) 4294967295U)) ? (-3120551653840971419LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [21] [i_1 - 1]))))))) <= (((/* implicit */long long int) 4294967295U))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            arr_41 [i_10] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_1] [i_9] [i_1 + 1])) ? (arr_25 [i_1] [i_1] [i_1 + 1]) : (((/* implicit */long long int) arr_20 [21LL] [i_1] [i_1 + 1]))));
                            arr_42 [i_10] = ((/* implicit */unsigned int) (+(18343789700467264283ULL)));
                        }
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            var_20 ^= ((/* implicit */long long int) arr_0 [i_0]);
                            arr_45 [6U] [i_1] [i_3] [i_9] [i_11] = 8056377270822692895LL;
                        }
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_21 = arr_44 [i_0] [5ULL] [i_1] [i_3] [i_9] [i_0];
                            var_22 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4294967293U)) < (12580378354075730923ULL)));
                        }
                        var_23 += ((/* implicit */short) ((((/* implicit */int) var_14)) | (((/* implicit */int) (_Bool)1))));
                        arr_49 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((4294967295U) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_11))));
                        /* LoopSeq 3 */
                        for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 3120551653840971415LL)) ? (((/* implicit */long long int) arr_40 [i_13] [i_1] [i_1] [14LL])) : (arr_25 [i_3] [i_3] [(short)2])))))));
                            var_25 -= ((/* implicit */int) ((arr_35 [i_3] [i_1] [i_3] [i_3]) <= (-8056377270822692851LL)));
                            arr_54 [i_0] [i_1] [13LL] [i_1] [i_0] [i_9] [i_13] = ((/* implicit */long long int) ((short) arr_20 [i_1 + 1] [i_1 - 2] [i_1 - 1]));
                        }
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            arr_57 [i_14] [i_1] [i_14] [i_14] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 1] [8U])) ? (((/* implicit */unsigned int) arr_16 [i_1 - 1] [i_1 + 1] [12LL] [i_1 + 1] [i_1])) : (3866927290U)));
                            arr_58 [i_0] [i_1] [i_1] [i_0] [i_14] [i_14] = ((var_13) - (((/* implicit */long long int) 2009352533)));
                            var_26 ^= ((/* implicit */unsigned long long int) ((unsigned int) arr_30 [i_0] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2]));
                            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8056377270822692871LL)) ? (((/* implicit */long long int) 2047U)) : (1844813296060914715LL)))) ? (((/* implicit */int) (_Bool)1)) : (arr_20 [i_0] [12U] [i_3])));
                            arr_59 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) >= (-6489739239254824846LL))))));
                        }
                        for (int i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            var_28 = ((/* implicit */short) ((var_13) == (((/* implicit */long long int) arr_50 [i_0] [i_0] [(short)3] [14LL] [i_1 - 2] [i_1 + 1] [i_1 - 2]))));
                            var_29 ^= (_Bool)1;
                        }
                    }
                    arr_64 [i_3] [24ULL] [24ULL] [i_0] = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_44 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_3]))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 25; i_18 += 3) 
                        {
                            var_30 &= arr_67 [0LL] [0LL] [i_18];
                            arr_72 [i_18] = ((/* implicit */unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_15 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_76 [i_0] [i_0] [i_16] [i_17] [i_19] &= ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) arr_44 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1] [i_1])) >= (var_10))));
                            arr_77 [i_0] [i_0] [i_1] [i_16] [i_17] [i_1] [i_19] |= ((/* implicit */unsigned long long int) arr_63 [i_0] [i_1] [i_0] [22]);
                            arr_78 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = var_11;
                            arr_79 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned int) 5378914491784215994LL);
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_12))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
                        {
                            var_32 = ((/* implicit */long long int) 8379074949319478175ULL);
                            arr_83 [i_0] [i_1] [i_1] [(short)21] [i_20] [i_1] [(_Bool)1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_19 [i_1 - 2] [i_1 + 1] [i_1 + 1])))) ? (((var_9) ^ (((/* implicit */unsigned long long int) arr_19 [i_1 - 2] [i_1 + 1] [i_1 + 1])))) : (((/* implicit */unsigned long long int) arr_19 [i_1 - 2] [i_1 + 1] [i_1 + 1]))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_21 = 0; i_21 < 25; i_21 += 3) 
                        {
                            arr_86 [i_0] [15LL] [15LL] [i_21] [15LL] [i_0] = ((/* implicit */long long int) arr_43 [3LL]);
                            var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1))))), (((unsigned long long int) (-9223372036854775807LL - 1LL)))));
                            var_34 = arr_3 [(_Bool)1];
                            arr_87 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1713992244U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12171))) : (arr_2 [i_1 - 1]))) - (((/* implicit */long long int) (~(-2147483642))))));
                        }
                        var_35 ^= ((/* implicit */long long int) var_3);
                    }
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) 8405570309457283440LL))));
                    var_37 ^= ((/* implicit */unsigned int) ((var_1) | (min((((((/* implicit */_Bool) 17592186044415LL)) ? (arr_3 [i_0]) : (-8056377270822692872LL))), (((((var_13) + (9223372036854775807LL))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775769LL))) + (89LL)))))))));
                }
                for (int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    var_38 += ((/* implicit */long long int) (-(3805453400U)));
                    arr_91 [15] = ((17592186044415LL) >= (((/* implicit */long long int) ((/* implicit */int) var_14))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 4) 
                    {
                        arr_96 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) max(((-(arr_82 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] [i_22]))), ((+(arr_82 [i_0] [2U] [i_22] [2U] [i_0] [i_22] [i_22])))));
                        /* LoopSeq 1 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) -3120551653840971443LL))));
                            var_40 = ((/* implicit */long long int) min((var_40), (arr_5 [i_24])));
                        }
                    }
                    for (short i_25 = 0; i_25 < 25; i_25 += 3) 
                    {
                        var_41 += ((/* implicit */long long int) ((arr_85 [i_0] [i_1 + 1] [i_1] [i_0] [i_25]) - (((/* implicit */unsigned int) (+(-1))))));
                        arr_102 [i_0] [i_0] [i_22] [i_22] = ((/* implicit */unsigned int) 4829773751877899701LL);
                    }
                    /* LoopNest 2 */
                    for (long long int i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        for (int i_27 = 1; i_27 < 24; i_27 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned int) min((((((3120551653840971442LL) ^ (((/* implicit */long long int) arr_68 [i_1] [i_22] [i_26] [i_27])))) ^ (-1154768789506549770LL))), ((+(arr_101 [i_27])))));
                                var_43 = ((/* implicit */short) (-(((arr_90 [i_0] [i_27 - 1] [i_22] [i_1 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_97 [i_1] [i_27 + 1] [i_22] [i_1 - 2] [i_27 + 1])))))));
                                arr_107 [i_1] [i_26] [i_27] = ((/* implicit */long long int) (-(min((var_6), (((/* implicit */unsigned long long int) arr_35 [i_0] [i_1 - 1] [i_27 - 1] [i_27 - 1]))))));
                                arr_108 [i_1 - 2] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_100 [i_1 - 1] [i_1 - 2]))) : (arr_51 [i_27 - 1] [i_1 - 1] [i_22] [22LL] [i_1 - 1])))) == (max((((/* implicit */unsigned long long int) (short)31219)), (9056050828163723689ULL)))));
                                arr_109 [i_0] [i_1] [i_1 + 1] [(short)21] [i_0] [i_1 + 1] = ((/* implicit */unsigned int) var_14);
                            }
                        } 
                    } 
                    arr_110 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) min((arr_81 [i_0] [(short)18] [i_22] [i_1 - 2] [i_0]), (arr_46 [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [i_1 - 2])));
                }
                arr_111 [i_0] [12U] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-31219))));
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
    var_45 &= ((/* implicit */unsigned int) 2466065537689327920LL);
    var_46 &= ((/* implicit */unsigned int) var_9);
    var_47 = ((/* implicit */short) max((var_47), ((short)(-32767 - 1))));
}
