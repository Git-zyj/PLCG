/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76022
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
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) var_1))), (((((/* implicit */_Bool) var_3)) ? (((var_11) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_8 [(signed char)6] [i_1] [i_2] [i_2] = ((unsigned long long int) ((var_16) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 3])) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_9))))) : ((~(arr_6 [i_2] [3U] [i_0])))))));
                }
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    arr_12 [i_3] = ((/* implicit */_Bool) arr_7 [i_3 - 1] [19ULL] [i_3] [i_1]);
                    arr_13 [i_0] [i_1 - 2] [i_3] = (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) var_4))))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    arr_16 [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_0] [(unsigned char)2] [(unsigned short)17] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned char) ((_Bool) arr_3 [i_1 + 2] [i_1 - 3] [i_1 + 1]));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            arr_21 [i_4] [i_1] [i_4] [i_5] [i_4] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_5 + 1] [i_6 + 2])) : (((/* implicit */int) arr_11 [i_1 - 1] [i_5 - 1] [i_6 - 1])));
                            arr_22 [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 3] [i_1 + 1]))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((/* implicit */int) arr_20 [i_1 + 2] [i_6] [i_0] [i_6] [i_0])))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_13))));
                        }
                    }
                    arr_23 [(unsigned char)18] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_19 [i_0] [i_4]))));
                    arr_24 [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) arr_10 [i_1 - 1] [i_1 - 3] [14U] [i_1]);
                    var_23 *= ((/* implicit */int) ((((unsigned int) var_4)) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11))))));
                }
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    arr_27 [i_0] [i_0] [i_1] [i_7] = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_1 - 2] [i_0]) != (arr_6 [i_0] [i_1 + 1] [i_7])));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_0])) ? (((/* implicit */int) min((var_0), (arr_5 [i_7])))) : (((/* implicit */int) var_7)))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned char) var_11)), (var_12))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_9)))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_18))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_8]))))) : (((/* implicit */int) ((unsigned short) arr_25 [i_8] [i_8] [(unsigned short)8])))));
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            var_26 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_10) && (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) arr_7 [i_8] [i_8] [i_8] [i_9]))))))))));
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_8] [i_9])) ? (((/* implicit */int) arr_3 [i_8] [i_8] [(short)21])) : (((/* implicit */int) arr_31 [i_8] [i_9] [i_8])))) > (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_31 [i_8] [i_8] [i_9]))))))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    {
                        arr_39 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (arr_0 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) ? (((long long int) min((((/* implicit */unsigned short) var_13)), (arr_11 [i_9] [i_10] [(short)20])))) : ((+((~(arr_6 [3U] [3U] [(unsigned char)10])))))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_8])) - (((/* implicit */int) var_9))))))))));
                    }
                } 
            } 
        }
        for (short i_12 = 1; i_12 < 13; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                var_29 -= ((/* implicit */signed char) min((((((/* implicit */unsigned int) arr_28 [i_12 + 1] [i_12 - 1])) - (var_16))), (((/* implicit */unsigned int) var_13))));
                var_30 *= ((/* implicit */int) ((((/* implicit */int) ((arr_26 [i_12 - 1] [i_12 + 1] [i_12 - 1]) || (var_5)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) var_10))))) != (((var_3) % (((/* implicit */unsigned long long int) arr_40 [(_Bool)1] [i_12] [i_13])))))))));
            }
            arr_46 [i_8] [i_8] = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_17)))) || (((/* implicit */_Bool) ((unsigned char) arr_31 [(_Bool)1] [i_12] [i_12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_26 [i_12 - 1] [i_12] [i_12 - 1]), (((var_18) > (((/* implicit */long long int) ((/* implicit */int) var_4))))))))) : (min((((unsigned int) arr_41 [i_8])), (((/* implicit */unsigned int) min((arr_20 [i_8] [4U] [i_8] [i_8] [i_8]), (arr_3 [i_8] [i_8] [i_8]))))))));
            arr_47 [i_8] [i_12 + 2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_14)))));
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_33 [i_12] [i_12] [i_12] [i_12 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_33 [i_12 + 1] [i_12] [i_12 + 2] [i_12 + 2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_12 - 1]))))))))));
        }
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_51 [i_14] &= ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_14] [i_14] [i_14]))) - (arr_40 [i_14] [i_14] [i_14]));
        arr_52 [i_14] |= ((/* implicit */unsigned short) var_16);
        var_32 = ((/* implicit */unsigned long long int) ((int) arr_35 [i_14] [i_14] [i_14] [i_14]));
        var_33 ^= ((/* implicit */unsigned short) ((unsigned long long int) var_4));
    }
    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
    {
        arr_57 [i_15] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((unsigned char) var_1))), (max((var_3), (((/* implicit */unsigned long long int) arr_54 [i_15])))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) arr_56 [i_15])) : (((/* implicit */int) arr_56 [i_15])))))));
        /* LoopSeq 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_61 [i_15] [i_16] [i_16] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_54 [i_16])) % (((/* implicit */int) arr_60 [i_15] [i_16]))))), (arr_58 [i_15])));
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                for (short i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 3; i_19 < 23; i_19 += 1) 
                    {
                        {
                            arr_70 [i_15] [i_15] [i_15] [i_15] [i_16] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_66 [i_16] [(unsigned short)16] [i_17] [i_18] [i_19])) - (((((/* implicit */_Bool) arr_63 [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_62 [i_16] [i_16] [i_19 - 3])) : (((/* implicit */int) arr_68 [i_15] [i_16] [i_15] [i_18] [i_16])))))));
                            arr_71 [i_15] [i_15] [i_17] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_13)) ? ((+(arr_65 [i_15] [i_17] [i_18] [i_19]))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                            arr_72 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_56 [i_15])))) ^ ((((!(var_10))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_69 [i_15] [i_15] [i_15] [18] [i_15]))))) : (((unsigned long long int) var_6)))))))));
        }
        /* vectorizable */
        for (unsigned short i_20 = 3; i_20 < 22; i_20 += 1) 
        {
            arr_77 [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_15] [i_15]))) : (arr_75 [i_15] [i_20 - 1] [i_15])));
            arr_78 [i_15] [i_20] [i_15] = ((/* implicit */int) var_4);
        }
        for (int i_21 = 2; i_21 < 23; i_21 += 1) 
        {
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_21 + 1] [i_21 + 1] [(short)2]))) : (max((((/* implicit */unsigned long long int) var_2)), (var_3)))))) ? (((/* implicit */int) ((_Bool) arr_56 [i_15]))) : (((((((/* implicit */long long int) ((/* implicit */int) var_13))) > (arr_65 [(short)23] [(short)23] [i_21] [i_21 + 2]))) ? (((/* implicit */int) ((unsigned short) arr_74 [i_15] [i_15] [22]))) : (((/* implicit */int) ((var_18) >= (((/* implicit */long long int) arr_59 [i_15] [12ULL])))))))));
            arr_81 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_15])) ? (((/* implicit */int) ((signed char) arr_67 [i_15] [(unsigned short)17] [i_21]))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_76 [i_15] [i_15] [i_21])) << (((((/* implicit */int) arr_64 [i_15] [i_15] [(unsigned short)8])) - (207)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_15]))) : (arr_75 [i_15] [i_15] [i_21 - 1])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_59 [i_15] [(signed char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))));
            arr_82 [i_15] [6U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_67 [i_15] [i_15] [i_15])) <= (((/* implicit */int) var_7))))))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) && (((((/* implicit */_Bool) arr_67 [i_15] [i_15] [i_21])) || (((/* implicit */_Bool) var_7))))))));
            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_21 - 2])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_15] [i_15]))))))));
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_22 = 2; i_22 < 23; i_22 += 2) 
        {
            arr_87 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_85 [i_22 - 2] [i_22 - 2] [i_22])) - (((/* implicit */int) arr_85 [i_22 - 2] [10ULL] [(_Bool)1]))))) ? (((((/* implicit */int) arr_85 [i_22 - 2] [i_22] [i_22 + 1])) * (((/* implicit */int) var_2)))) : (((/* implicit */int) ((arr_85 [i_22 + 1] [i_22] [i_22 - 1]) && (((/* implicit */_Bool) var_6)))))));
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_15] [i_15] [i_15] [i_22] [i_15])) ? (((/* implicit */int) ((unsigned short) arr_74 [6] [i_22] [10]))) : (((/* implicit */int) ((max((((/* implicit */long long int) arr_68 [i_15] [i_15] [i_15] [i_15] [i_22])), (var_18))) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_8)))))))))))));
        }
        /* vectorizable */
        for (unsigned int i_23 = 2; i_23 < 24; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (int i_24 = 3; i_24 < 24; i_24 += 1) 
            {
                for (unsigned int i_25 = 0; i_25 < 25; i_25 += 4) 
                {
                    {
                        arr_97 [i_23] = ((/* implicit */long long int) var_16);
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (-(arr_93 [i_25] [i_23 + 1] [i_25] [4U]))))));
                    }
                } 
            } 
            var_39 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) >> (((((/* implicit */int) arr_76 [i_15] [(unsigned short)17] [i_15])) - (25104)))));
            /* LoopSeq 2 */
            for (int i_26 = 1; i_26 < 23; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 25; i_27 += 4) 
                {
                    for (unsigned short i_28 = 3; i_28 < 21; i_28 += 1) 
                    {
                        {
                            arr_107 [i_28] [3ULL] [i_26 + 1] [i_27] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_66 [i_23] [i_23 - 2] [i_26 - 1] [(unsigned short)8] [i_28 + 2])) ? (((/* implicit */int) arr_68 [i_15] [i_23] [i_26] [i_28 - 1] [i_23])) : (((/* implicit */int) var_5))));
                            var_40 = ((/* implicit */int) ((long long int) ((_Bool) arr_89 [i_23] [i_23])));
                            var_41 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (var_16)))));
                            arr_108 [i_23] [i_23] [i_23] = ((/* implicit */short) ((_Bool) arr_102 [i_23] [i_26 + 1] [i_28] [i_28 - 1]));
                        }
                    } 
                } 
                var_42 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_103 [i_15] [20U] [4U] [20U]) < (((/* implicit */int) var_8)))))));
            }
            for (unsigned short i_29 = 1; i_29 < 24; i_29 += 4) 
            {
                arr_111 [i_15] [i_23] [i_29] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) >= (((/* implicit */int) ((unsigned char) var_2)))));
                var_43 ^= ((/* implicit */short) ((unsigned int) arr_110 [i_29 - 1] [i_23] [i_15]));
                /* LoopNest 2 */
                for (int i_30 = 2; i_30 < 24; i_30 += 4) 
                {
                    for (short i_31 = 0; i_31 < 25; i_31 += 4) 
                    {
                        {
                            arr_117 [i_15] [i_15] [i_15] [i_23] [(unsigned char)4] [i_15] [4LL] = ((/* implicit */signed char) ((((/* implicit */int) arr_68 [i_23 - 1] [i_23] [i_23] [i_23] [i_23])) < (((/* implicit */int) arr_68 [i_23 + 1] [i_23] [5U] [i_23] [i_23]))));
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */_Bool) arr_65 [i_15] [i_29 + 1] [i_23 - 1] [i_30 - 1])) ? (((/* implicit */int) arr_85 [i_15] [i_29 - 1] [i_23 - 2])) : (((/* implicit */int) var_8)))))));
                            var_45 = ((/* implicit */unsigned short) ((arr_112 [i_15] [i_23] [i_29] [i_30 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_112 [i_15] [i_23] [i_29 + 1] [i_31]))) : (var_16)));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            var_46 ^= ((/* implicit */short) max((((((/* implicit */_Bool) ((var_18) << (((/* implicit */int) var_11))))) ? ((+(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_106 [i_15] [i_15] [i_15] [18ULL] [i_15] [i_15]))))), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_1)))) == (((/* implicit */int) min((((/* implicit */short) var_10)), (arr_92 [i_15])))))))));
            var_47 -= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_92 [i_15]))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((arr_65 [i_32] [i_32] [8U] [8U]) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_11)), (var_14))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            arr_121 [i_32] &= ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_62 [10U] [i_32] [i_32]))))) ? (((/* implicit */int) min((arr_62 [(unsigned char)16] [i_32] [i_32]), (var_9)))) : (((/* implicit */int) min((arr_62 [(short)22] [i_15] [(short)22]), (arr_62 [14] [14] [i_32])))));
            arr_122 [i_15] [i_15] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_63 [(unsigned short)0] [(unsigned short)0] [i_15] [i_32]) : (((/* implicit */int) arr_85 [i_15] [i_32] [i_15])))));
        }
        for (unsigned int i_33 = 0; i_33 < 25; i_33 += 4) 
        {
            var_48 = ((/* implicit */_Bool) min((var_48), (arr_90 [i_15] [i_33])));
            arr_126 [i_15] [i_33] [13U] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_15)) == (((/* implicit */int) var_0)))));
        }
        var_49 -= ((/* implicit */short) (+(((int) arr_104 [(_Bool)1] [(_Bool)1]))));
    }
}
