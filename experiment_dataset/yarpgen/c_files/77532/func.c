/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77532
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_13))));
            var_16 *= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8259931401585304302ULL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned char)152))))), (531539450U)))) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_0] [2LL])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */int) (signed char)-89)) >= (((/* implicit */int) (signed char)85)))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    var_18 *= ((/* implicit */unsigned char) var_5);
                    var_19 &= ((/* implicit */_Bool) (-(arr_14 [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((((/* implicit */int) var_0)) / (var_5)))))) * (((-4075464868313355036LL) / (((/* implicit */long long int) var_5))))));
                }
                var_21 *= ((/* implicit */short) ((var_7) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) (signed char)-102))))) ? (((((/* implicit */int) (signed char)80)) & (((/* implicit */int) (signed char)89)))) : (((var_10) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (short)13911)))))))));
                var_22 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)32768)))), (max((((/* implicit */int) var_4)), (var_3)))))), (((long long int) (unsigned short)32767))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [4ULL] [i_0] [12] [i_0] [i_5] [i_5 - 1]))))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
                }
            }
            /* vectorizable */
            for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)115)) >> (((133776075U) - (133776062U))))))));
                var_26 += ((/* implicit */int) arr_15 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0]);
                var_27 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] [i_6 + 1]))));
            }
            var_28 *= ((/* implicit */unsigned char) var_12);
        }
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    var_29 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((max((var_14), (((/* implicit */int) arr_13 [i_0])))), (((/* implicit */int) (_Bool)0))))), (((long long int) var_1))));
                    var_30 &= ((/* implicit */signed char) (unsigned short)32772);
                    var_31 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)3)), (3672304739U)));
                }
                for (unsigned char i_10 = 3; i_10 < 11; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_32 *= ((/* implicit */_Bool) ((signed char) ((((var_13) || (var_1))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_11] [i_0] [i_0])) || (var_13)))) : (((/* implicit */int) arr_2 [i_7])))));
                        var_33 |= ((/* implicit */int) (+(516096U)));
                        var_34 += ((/* implicit */unsigned int) max((min((13142357963163181133ULL), (((/* implicit */unsigned long long int) (signed char)-24)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)172)) / (((/* implicit */int) max(((unsigned char)97), (((/* implicit */unsigned char) arr_4 [i_0]))))))))));
                    }
                    var_35 *= ((/* implicit */unsigned char) min((-2125404255), (((/* implicit */int) (unsigned char)128))));
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)88)) || (((/* implicit */_Bool) -54389507)))))));
                    var_37 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((var_14) + (((/* implicit */int) var_10))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_7] [i_10 - 2] [i_7]))) * (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_7] [i_0] [i_8] [i_10 - 2])) ? (((/* implicit */unsigned long long int) var_7)) : (3171986955872883722ULL)))))));
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) var_11))));
                }
                for (int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    var_39 |= ((/* implicit */unsigned int) var_12);
                    var_40 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 133776090U)) && (((/* implicit */_Bool) (signed char)-101))))) >> (((((long long int) arr_27 [i_12] [i_8] [i_7] [i_0])) - (100LL)))));
                }
                /* vectorizable */
                for (long long int i_13 = 3; i_13 < 12; i_13 += 2) 
                {
                    var_41 *= ((/* implicit */unsigned long long int) ((((int) (signed char)114)) != (((/* implicit */int) arr_26 [i_0] [i_7] [i_8] [i_8] [i_13 - 1] [i_13 - 3]))));
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned int) min((var_42), ((~(((unsigned int) 1269033970))))));
                        var_43 |= ((/* implicit */unsigned long long int) ((arr_29 [i_0] [i_0] [i_0] [i_0] [i_14] [i_13] [i_13 - 2]) / (((/* implicit */int) arr_24 [i_13 - 2]))));
                    }
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) 6757033525739052981LL))));
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 528646463U)) ? (((/* implicit */int) (short)-26178)) : (((/* implicit */int) (unsigned short)5121)))) < (((((/* implicit */int) arr_33 [i_15] [(short)4] [(unsigned char)6] [i_7] [i_0])) & (var_14))))))));
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (short)-15420)) : (((/* implicit */int) (unsigned char)172))))) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (short)-15431)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_24 [i_13 - 1])))))));
                        var_47 -= ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_0] [(short)12] [i_0] [(short)12] [i_13 - 3] [i_13 - 3])) + (-571074699)));
                    }
                    var_48 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_32 [i_0] [i_7] [i_8] [i_13] [i_7] [i_13 + 1]))));
                }
                /* LoopSeq 2 */
                for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    var_49 += ((/* implicit */int) max((((5597279785585096249ULL) << (((arr_0 [i_0] [i_7]) - (285451589U))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_7]))));
                    var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) var_13))));
                }
                for (long long int i_17 = 0; i_17 < 14; i_17 += 1) 
                {
                    var_51 *= ((/* implicit */_Bool) ((long long int) min((((((/* implicit */int) (signed char)112)) | (((/* implicit */int) arr_13 [i_0])))), (((/* implicit */int) arr_15 [i_0] [i_7] [i_8] [i_0] [i_17] [i_8])))));
                    var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) var_3))));
                    var_53 *= ((/* implicit */signed char) 471756030U);
                }
                var_54 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_8])) & (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))), ((~(((/* implicit */int) var_2))))))));
                var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) ((var_7) % (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (arr_9 [i_7] [i_7])))))))));
            }
            for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 2; i_19 < 10; i_19 += 2) 
                {
                    for (unsigned char i_20 = 1; i_20 < 13; i_20 += 3) 
                    {
                        {
                            var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_0] [(short)13] [6U] [i_19 + 2])) ? (((unsigned int) 2030618704028157288LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_12)))))))))))));
                            var_57 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-82)) ? (2251799813685248LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)21803))))))) && (((/* implicit */_Bool) ((((arr_41 [i_0] [i_7] [i_18] [i_19] [i_20 - 1] [i_18]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_13 [i_0]))))))))));
                            var_58 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_19 + 2])) % (((((/* implicit */_Bool) 2495001031U)) ? ((-(-2030618704028157288LL))) : (((long long int) (unsigned short)40779))))));
                        }
                    } 
                } 
                arr_52 [i_0] [i_7] [i_7] [i_18] |= ((/* implicit */unsigned int) var_1);
                /* LoopNest 2 */
                for (unsigned int i_21 = 2; i_21 < 13; i_21 += 4) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_60 = ((/* implicit */long long int) arr_53 [i_0] [i_0] [i_18] [i_21]);
                            arr_59 [i_21] [i_21] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)55))));
                            var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) ((var_10) ? ((~(((/* implicit */int) arr_22 [i_21 - 2] [i_21 + 1] [i_21 - 1] [i_21 - 1])))) : ((~(((/* implicit */int) (unsigned short)1920)))))))));
                        }
                    } 
                } 
                var_62 |= ((/* implicit */unsigned int) ((_Bool) ((short) ((unsigned int) (_Bool)1))));
            }
            /* vectorizable */
            for (unsigned int i_23 = 0; i_23 < 14; i_23 += 1) /* same iter space */
            {
                var_63 &= ((/* implicit */signed char) 4053883486804487970ULL);
                arr_64 [i_0] [i_7] [i_7] [i_7] |= ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)65535)))) + (((((/* implicit */int) arr_24 [i_23])) / (var_14)))));
                arr_65 [i_0] [i_7] [i_0] |= (~(arr_9 [i_0] [i_7]));
            }
            /* LoopNest 3 */
            for (signed char i_24 = 0; i_24 < 14; i_24 += 1) 
            {
                for (unsigned char i_25 = 0; i_25 < 14; i_25 += 3) 
                {
                    for (long long int i_26 = 0; i_26 < 14; i_26 += 1) 
                    {
                        {
                            var_64 += ((/* implicit */unsigned char) (short)22086);
                            arr_74 [i_0] [i_7] [(signed char)2] [i_25] [i_0] [i_24] [12] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_4)))))) : ((((!(((/* implicit */_Bool) arr_36 [i_25])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)95)) || (var_10)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_49 [(signed char)4] [i_7] [i_24] [i_25] [(signed char)4] [i_0] [i_25])) || (((/* implicit */_Bool) 4160765139U)))))))));
                            var_65 = ((/* implicit */long long int) min((var_65), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)24851)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : (((((/* implicit */unsigned long long int) 2606370521U)) ^ (5304386110546370456ULL))))))));
                        }
                    } 
                } 
            } 
            var_66 += ((/* implicit */short) 2322801820544016929LL);
        }
        /* LoopNest 2 */
        for (unsigned int i_27 = 2; i_27 < 11; i_27 += 2) 
        {
            for (int i_28 = 2; i_28 < 11; i_28 += 2) 
            {
                {
                    var_67 |= ((/* implicit */unsigned int) max(((-(var_14))), (((/* implicit */int) var_0))));
                    /* LoopSeq 2 */
                    for (int i_29 = 0; i_29 < 14; i_29 += 1) 
                    {
                        var_68 *= ((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((((((/* implicit */int) (signed char)-50)) - (((/* implicit */int) var_9)))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) var_1))))))));
                        var_69 = ((/* implicit */short) min((var_69), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (((unsigned short) arr_79 [i_0] [i_28] [i_29]))))) && (((/* implicit */_Bool) min((max((((/* implicit */int) (_Bool)0)), (-349112246))), (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_0] [i_27] [i_0] [i_29])) || (((/* implicit */_Bool) (signed char)95)))))))))))));
                        var_70 *= ((/* implicit */unsigned int) ((((var_10) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((_Bool) var_9))) : (((((/* implicit */_Bool) arr_69 [i_27])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((var_0), (var_9))))))));
                        var_71 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_0)) : (min((var_6), (var_6)))))) && (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (var_6)))) && (((/* implicit */_Bool) arr_73 [i_27 - 1] [i_27] [i_28 + 1] [i_28] [i_29] [i_27 - 1] [i_29]))))));
                        var_72 *= ((/* implicit */int) ((var_7) / (((8751171852694567163LL) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_30 = 2; i_30 < 13; i_30 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_31 = 1; i_31 < 12; i_31 += 3) 
                        {
                            arr_85 [i_31] [i_0] [8LL] [2U] [i_0] [2U] &= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-48)) - (((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) arr_34 [i_0])) ? (((/* implicit */int) (unsigned short)30448)) : (((/* implicit */int) (unsigned short)16384))))));
                            var_73 += ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_33 [i_31 + 2] [i_28 + 1] [i_30 - 1] [i_30 - 2] [i_27 + 1]))));
                        }
                        for (unsigned short i_32 = 0; i_32 < 14; i_32 += 4) 
                        {
                            var_74 *= ((/* implicit */short) ((8U) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31)) > (((/* implicit */int) (short)-15431))))))));
                            var_75 |= ((/* implicit */_Bool) ((signed char) ((arr_84 [i_0]) + (((/* implicit */int) var_0)))));
                        }
                        for (short i_33 = 1; i_33 < 12; i_33 += 4) 
                        {
                            var_76 &= ((((/* implicit */_Bool) arr_36 [i_33 + 2])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_3 [i_33 + 2] [i_28]));
                            var_77 = ((/* implicit */long long int) min((var_77), (((/* implicit */long long int) ((arr_18 [i_28 - 2] [i_30 - 1] [i_30 - 1] [i_33 - 1]) % (((/* implicit */int) var_2)))))));
                        }
                        var_78 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 13142357963163181156ULL)) ? (arr_68 [i_27] [i_27]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76)))));
                    }
                    var_79 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_78 [i_27 + 2] [i_27 - 1] [i_28] [i_28 + 1]))))));
                    var_80 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (3051173690U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_27] [5LL] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_28])) : (arr_10 [i_0]))))))));
                    var_81 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_0] [i_27 - 2] [i_28 - 2] [i_27 - 2])) ? (((arr_63 [i_27] [i_27 - 1] [i_28 - 1] [i_28 + 3]) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_63 [i_27] [i_27 - 1] [i_28 + 2] [i_28]))));
                }
            } 
        } 
    }
    var_82 += ((/* implicit */signed char) (((~(((/* implicit */int) var_9)))) & (min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), ((~(((/* implicit */int) var_12))))))));
}
