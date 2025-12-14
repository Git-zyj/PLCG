/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99787
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)255)))) & (((/* implicit */int) (unsigned char)96))))) ? (min(((-(var_5))), (arr_2 [i_1] [i_1] [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((long long int) (unsigned char)61));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((unsigned char) var_18));
    var_21 = ((/* implicit */unsigned int) (unsigned char)0);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) (+((-(var_13)))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (-22LL)))) || (((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2]))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_18 [i_4] [i_4] [(unsigned char)1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (arr_17 [i_4 + 1] [1U] [i_4 - 1] [i_4 - 1]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4 - 3] [i_4] [i_4 - 3])))))));
                            arr_19 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) : (2199023124480LL)));
                            var_24 = ((/* implicit */long long int) max((var_24), (17784095510171753LL)));
                            /* LoopSeq 2 */
                            for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) 
                            {
                                arr_22 [i_2] [i_3] [i_3] [i_5] |= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4LL)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned char)70)))))));
                                var_25 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4261412864LL)) ? (arr_20 [i_2] [i_3] [i_4 + 1] [i_5] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)118))))) : (((((/* implicit */_Bool) arr_0 [i_4 - 3])) ? (((/* implicit */long long int) 3919146249U)) : (var_3))))), (((/* implicit */long long int) (unsigned char)0)));
                            }
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                            {
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4 - 2] [i_4 - 1] [i_4 + 1])) || (((/* implicit */_Bool) arr_15 [(unsigned char)1] [i_4 - 3] [i_4 + 1] [i_4 - 3])))))));
                                var_27 = ((/* implicit */unsigned int) (~(arr_6 [i_2])));
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) : (67108863U))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)129)) - (((/* implicit */int) var_6)))) >> (((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) arr_14 [i_9] [i_3])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_12 [i_3] [i_9] [i_10])), (4227858432U)))) : (arr_14 [i_8] [i_9])))));
                                arr_33 [i_2] [i_2] [i_3] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != ((+(arr_7 [i_9])))));
                                var_30 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_6 [i_3]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_2 [i_3] [i_3] [i_10]))))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) min(((~(var_17))), (((min((arr_20 [i_8] [i_8] [i_8] [i_8] [i_8]), (0U))) / (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)165), ((unsigned char)151)))))))));
                    var_32 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((arr_8 [1LL]), (((/* implicit */unsigned int) (unsigned char)0)))))))));
                }
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                    {
                        arr_39 [i_2] [i_2] = ((/* implicit */unsigned char) ((0LL) >> (((9057921503037469863LL) - (9057921503037469858LL)))));
                        arr_40 [i_3] [i_12] = ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
                        {
                            arr_43 [i_2] [i_3] [5U] [i_12] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)3)))) + (((/* implicit */int) (unsigned char)194))));
                            var_33 = ((/* implicit */unsigned int) ((unsigned char) arr_12 [i_2] [i_2] [i_2]));
                        }
                    }
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
                    {
                        arr_47 [2U] [i_3] [(unsigned char)1] [i_14] = var_7;
                        arr_48 [i_2] [10LL] [i_2] [i_2] = ((/* implicit */unsigned int) -2111621866032246117LL);
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned char) (+(var_4)));
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)199)))))));
                        }
                        for (unsigned int i_16 = 3; i_16 < 10; i_16 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((arr_50 [(unsigned char)7] [i_3] [i_11] [i_14] [i_16 - 1]) >> (((arr_28 [i_2] [i_2] [i_11] [i_14]) - (7217787255311144777LL))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_16 - 2] [i_16 + 3] [i_16 - 1] [i_16 + 2])))))))))));
                            arr_54 [i_16] [i_14] [5LL] [i_3] [i_2] = ((0U) << (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_3] [i_16] [i_14] [i_14] [8U] [i_3] [i_2]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) >= (2435682296661174619LL)))))));
                            arr_55 [i_2] [i_3] [i_11] [i_14] [i_16 - 2] = ((/* implicit */unsigned char) arr_51 [i_2] [i_3] [i_11] [i_11] [i_14] [i_16] [i_16 + 2]);
                            arr_56 [i_3] [i_11] [i_11] [i_16 + 3] &= ((/* implicit */long long int) min((((((/* implicit */int) var_15)) << (((arr_4 [i_16 + 2] [i_14]) - (7632271554270960554LL))))), (((/* implicit */int) ((unsigned char) var_13)))));
                        }
                        for (unsigned char i_17 = 4; i_17 < 12; i_17 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) max((var_37), (((((/* implicit */long long int) 1769141931U)) ^ (arr_14 [i_11] [12LL])))));
                            var_38 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (unsigned char)56)) : ((~(((/* implicit */int) var_18)))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [6U])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) : (var_2)))))));
                            var_39 = ((/* implicit */unsigned char) 3758096384U);
                            var_40 = arr_26 [i_14] [i_14];
                        }
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 0U))) || (((/* implicit */_Bool) (~(max((arr_28 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) (unsigned char)114)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) ((unsigned char) (unsigned char)24)))));
                        var_43 &= ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_3]));
                    }
                    var_44 &= ((/* implicit */unsigned char) var_2);
                    var_45 = ((/* implicit */long long int) var_12);
                }
                for (unsigned char i_19 = 1; i_19 < 12; i_19 += 4) 
                {
                    arr_65 [i_2] [i_19] [i_19 + 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_6)), (max((var_9), (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2067471299U)))))));
                    arr_66 [i_19] [i_3] [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
                    var_46 = ((/* implicit */long long int) var_13);
                    var_47 = ((/* implicit */long long int) var_7);
                    /* LoopSeq 2 */
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_21 = 0; i_21 < 13; i_21 += 2) 
                        {
                            arr_71 [i_2] [i_19] [i_19] [(unsigned char)0] [i_19] [i_19] = var_14;
                            var_48 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_3] [i_19] [i_20] [i_21]))) > ((+(((4226418695U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))));
                        }
                        /* vectorizable */
                        for (long long int i_22 = 0; i_22 < 13; i_22 += 2) 
                        {
                            var_49 &= ((/* implicit */long long int) var_0);
                            var_50 = ((/* implicit */unsigned char) ((arr_31 [i_19 - 1] [i_19 + 1] [i_19 + 1] [i_19 - 1] [i_19 + 1]) & (510653049U)));
                            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [12LL])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62)))));
                        }
                        for (unsigned char i_23 = 0; i_23 < 13; i_23 += 4) 
                        {
                            var_52 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_52 [i_2] [1U] [i_20] [i_23])) - (((/* implicit */int) (unsigned char)40))));
                            var_53 = ((/* implicit */unsigned int) min((var_53), (2119106392U)));
                            var_54 &= ((/* implicit */unsigned int) var_12);
                        }
                        var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) ((unsigned int) ((unsigned char) (unsigned char)24))))));
                    }
                    for (unsigned char i_24 = 2; i_24 < 12; i_24 += 1) 
                    {
                        var_56 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) 2067471299U)))));
                        arr_79 [i_2] [i_3] [i_19] [i_24 + 1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)113)))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_19 + 1] [i_19 - 1] [i_19 - 1])) : (((/* implicit */int) max((var_16), ((unsigned char)69))))))));
                        var_57 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_69 [i_19] [i_19] [i_19 + 1] [i_19] [i_19 + 1])) ? (8823131832069690532LL) : (min(((-(arr_17 [i_2] [i_2] [i_2] [i_2]))), (var_2)))));
                        var_58 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -68719476736LL)) ? (((/* implicit */int) arr_44 [i_2] [i_2] [i_19 - 1] [i_2] [i_24])) : (((/* implicit */int) var_12)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_52 [i_2] [i_3] [i_19 - 1] [i_24 - 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) ^ (1891620917100970390LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))))))))));
                        var_59 -= ((/* implicit */unsigned char) -1296229370632535158LL);
                    }
                }
                for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
                {
                    var_60 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_82 [i_25] [i_3])) ? (arr_20 [i_2] [i_3] [i_2] [i_25] [i_25]) : (var_9))) > (arr_20 [i_3] [(unsigned char)2] [i_3] [i_3] [i_3])));
                    arr_84 [i_3] [i_2] = ((/* implicit */unsigned char) arr_74 [i_2] [i_2] [i_2] [i_3] [i_25]);
                    var_61 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)179))));
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 1; i_26 < 10; i_26 += 3) 
                    {
                        for (unsigned int i_27 = 1; i_27 < 12; i_27 += 3) 
                        {
                            {
                                var_62 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (3681334124870207949LL)))) ? (max((var_3), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) arr_64 [i_3] [i_26 + 1] [i_26 + 1] [i_26]))));
                                arr_89 [i_27] [i_3] [i_25] [i_26 + 1] = ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_28 = 2; i_28 < 12; i_28 += 4) 
                    {
                        for (unsigned int i_29 = 1; i_29 < 12; i_29 += 3) 
                        {
                            {
                                arr_94 [i_2] [2LL] [i_2] [i_2] [i_2] [(unsigned char)0] [i_2] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 3452474720U)) : (var_8))))), (((/* implicit */long long int) var_9))));
                                var_63 = arr_3 [i_3] [i_28];
                                arr_95 [i_2] [i_3] [i_25] [i_28 + 1] [i_29] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) ((unsigned int) (unsigned char)135)))))));
                                arr_96 [i_25] [i_28 - 2] [i_29] = min((((/* implicit */long long int) min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned char)168))))), (((8392427432118787829LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_30 = 0; i_30 < 11; i_30 += 4) 
    {
        arr_99 [i_30] = ((/* implicit */long long int) var_9);
        var_64 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_88 [i_30] [i_30] [i_30] [i_30] [i_30] [(unsigned char)9] [i_30]))))) << (max((((0LL) << (((((/* implicit */int) (unsigned char)199)) - (138))))), (arr_81 [i_30] [i_30] [i_30])))));
        var_65 = arr_63 [i_30] [i_30] [i_30];
        var_66 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4232197588U)) ? (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) (unsigned char)118))))) ? (((/* implicit */int) max((arr_93 [i_30] [11U] [i_30] [i_30] [i_30]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) < (var_9))))))) : (((/* implicit */int) ((unsigned char) arr_69 [i_30] [i_30] [i_30] [i_30] [i_30])))));
    }
    /* vectorizable */
    for (unsigned char i_31 = 0; i_31 < 11; i_31 += 2) /* same iter space */
    {
        var_67 = ((/* implicit */unsigned char) (-(62769707U)));
        var_68 = (~(2338902233U));
    }
    /* vectorizable */
    for (unsigned char i_32 = 0; i_32 < 11; i_32 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_33 = 0; i_33 < 11; i_33 += 2) 
        {
            var_69 = (+((-(arr_57 [i_32] [i_32] [i_32] [i_32] [i_32]))));
            var_70 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_34 [i_32] [i_33] [i_33])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_32] [(unsigned char)10] [i_33] [i_33]))) : (arr_4 [i_32] [i_33]))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))) ^ (var_7))) - (1887567199U)))));
        }
        for (unsigned char i_34 = 0; i_34 < 11; i_34 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_35 = 0; i_35 < 11; i_35 += 2) 
            {
                for (unsigned char i_36 = 1; i_36 < 9; i_36 += 3) 
                {
                    {
                        arr_115 [i_34] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) < (0U)));
                        arr_116 [(unsigned char)6] [i_34] [i_36 + 2] = ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_36] [i_36 + 1] [i_36]))))) ^ (arr_91 [i_35] [i_36] [i_36 + 1] [i_36 + 2] [i_36 - 1] [(unsigned char)12]));
                    }
                } 
            } 
            var_71 = ((/* implicit */long long int) min((var_71), (((/* implicit */long long int) (unsigned char)62))));
            /* LoopSeq 4 */
            for (unsigned char i_37 = 0; i_37 < 11; i_37 += 4) 
            {
                arr_119 [i_34] [i_34] [i_34] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 4232197588U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                var_72 -= ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (unsigned char)192)))));
            }
            for (long long int i_38 = 2; i_38 < 10; i_38 += 1) 
            {
                var_73 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))))))));
                arr_122 [i_34] = (unsigned char)255;
                var_74 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8392427432118787829LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_80 [i_38 + 1] [i_38 - 1] [i_38 - 1])));
            }
            for (unsigned char i_39 = 0; i_39 < 11; i_39 += 2) /* same iter space */
            {
                arr_127 [i_32] [i_34] [(unsigned char)3] [i_34] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))) & (((((/* implicit */_Bool) var_3)) ? (arr_107 [i_34] [i_34]) : (var_14)))));
                var_75 = ((/* implicit */long long int) min((var_75), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_49 [i_32] [i_32] [i_32] [i_32] [i_32] [i_32] [i_32])) : (((/* implicit */int) arr_49 [i_32] [i_32] [i_34] [i_34] [i_34] [i_39] [i_39])))))));
            }
            for (unsigned char i_40 = 0; i_40 < 11; i_40 += 2) /* same iter space */
            {
                var_76 ^= ((/* implicit */unsigned int) ((7992363065274465506LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                var_77 = ((/* implicit */unsigned char) arr_53 [i_32] [i_32] [3U] [3U] [3U]);
                var_78 = ((/* implicit */unsigned char) min((var_78), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_93 [i_32] [i_34] [i_40] [i_40] [i_40])))))));
            }
        }
        arr_131 [i_32] [i_32] |= ((((((/* implicit */long long int) ((/* implicit */int) var_0))) + (8392427432118787831LL))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_108 [i_32] [i_32]))) : (arr_28 [i_32] [i_32] [i_32] [i_32]))));
    }
}
