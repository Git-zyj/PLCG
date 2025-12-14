/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58349
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
    var_14 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) var_13);
                    arr_8 [i_0] [(signed char)5] [i_0] = ((/* implicit */int) ((((((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_10)))) ? (arr_2 [i_0] [2LL] [i_2]) : (((/* implicit */long long int) min((var_8), (((/* implicit */int) arr_6 [i_0] [4] [(signed char)8] [i_2]))))))) + (9223372036854775807LL))) >> (((var_0) - (1808378573)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_3] [i_4] = (+(((((/* implicit */_Bool) ((var_2) + (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4]))))) ? (var_10) : (var_6))));
                                var_16 = ((/* implicit */int) min((((/* implicit */long long int) max((((var_2) >> (((((/* implicit */int) var_3)) + (43))))), ((-(2147483647)))))), (((((/* implicit */_Bool) arr_2 [(signed char)9] [i_1] [5LL])) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) var_10))))));
                                arr_14 [i_0] [i_2] [i_4] [(signed char)3] [5] = ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (max((arr_4 [i_0] [i_0] [6LL]), (var_5))) : (-1182310441)));
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_19 [i_0] [9] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5])))) | ((-(((/* implicit */int) arr_16 [i_0] [i_0] [i_5]))))));
            arr_20 [i_0] [(signed char)7] [i_5] = ((/* implicit */int) 0LL);
            var_18 += (+(arr_3 [i_0] [i_5]));
            arr_21 [2LL] [(signed char)1] [i_5] = (+(-1182310441));
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_0))));
        }
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_26 [12LL] [i_8] [i_9])) : (var_2))), (-1182310441)))))));
                            arr_32 [i_6] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */int) min((((((/* implicit */_Bool) 4965626277817590206LL)) ? (arr_30 [i_0] [i_6] [i_7] [i_8] [i_8] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [6LL] [(signed char)9] [(signed char)9]))))), (((/* implicit */long long int) min((var_11), (((/* implicit */int) arr_16 [i_9] [8LL] [i_7])))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((((/* implicit */_Bool) -1182310441)) ? (var_0) : (((int) arr_17 [i_0] [(signed char)8])))))))));
        }
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
            {
                arr_37 [i_0] [i_10] [i_11] = var_7;
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        {
                            arr_43 [2] [i_10] [i_11] [(signed char)11] [(signed char)7] &= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_11))) & (((int) -228093188))));
                            arr_44 [(signed char)0] [(signed char)7] [i_11] [0LL] [i_13] = ((/* implicit */signed char) var_8);
                            var_22 = ((/* implicit */signed char) (~((-(arr_18 [i_0] [i_11] [i_13])))));
                        }
                    } 
                } 
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (2131322598)))) ? (arr_18 [i_0] [i_10] [0]) : (((/* implicit */long long int) ((int) -1182310441))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((int) arr_1 [i_0])))));
                arr_45 [i_0] [i_10] [i_11] = ((/* implicit */signed char) 1182310445);
            }
            for (signed char i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
            {
                var_25 -= ((/* implicit */long long int) min((((((/* implicit */int) arr_40 [i_0] [i_10] [8LL] [i_14])) >> (((((/* implicit */int) var_3)) + (65))))), (var_0)));
                /* LoopNest 2 */
                for (signed char i_15 = 1; i_15 < 10; i_15 += 2) 
                {
                    for (long long int i_16 = 4; i_16 < 12; i_16 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (arr_24 [i_14] [i_15 - 1] [i_15])));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) arr_42 [i_0] [12] [i_14] [i_15 + 1] [i_16 - 3] [i_15])) ? (-1891019324839116713LL) : (((/* implicit */long long int) -1182310441))))));
                            var_28 |= max((-1182310441), (((int) (signed char)56)));
                        }
                    } 
                } 
            }
            var_29 = 1174256619661030307LL;
        }
        for (int i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            var_30 = ((signed char) max((arr_42 [(signed char)9] [i_17] [i_0] [i_0] [i_17] [i_17]), (((/* implicit */long long int) var_3))));
            arr_57 [i_0] |= ((/* implicit */signed char) min((-7828263215424097132LL), (35184103653376LL)));
        }
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-99)) && (((/* implicit */_Bool) -5213983629713578533LL))));
    /* LoopSeq 3 */
    for (signed char i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_19 = 2; i_19 < 8; i_19 += 1) 
        {
            arr_62 [(signed char)9] [i_19 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_19 + 3] [i_18])) && (((/* implicit */_Bool) arr_23 [i_19 + 4] [i_18]))));
            var_32 = ((/* implicit */signed char) (((+(((/* implicit */int) var_12)))) <= (((/* implicit */int) var_3))));
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                for (int i_21 = 4; i_21 < 11; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        {
                            arr_69 [i_18] [i_19] [4] [i_21 - 4] [i_20] = ((/* implicit */long long int) ((signed char) arr_15 [0] [(signed char)2] [i_20]));
                            arr_70 [i_22] [i_21 - 1] [i_19 + 2] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-92)) ^ (((/* implicit */int) (signed char)26))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */signed char) (-(arr_18 [2LL] [i_19 - 2] [i_19])));
        }
        var_34 = (signed char)-1;
    }
    for (signed char i_23 = 0; i_23 < 12; i_23 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (var_6) : (((/* implicit */int) var_1))))))) ? (arr_55 [i_23] [i_23] [i_23]) : (((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (var_8)))) ? (arr_15 [4] [i_23] [i_23]) : (arr_59 [i_23])))));
        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_23])) ? (var_6) : (arr_48 [i_23] [4LL] [i_23])))) ? (((/* implicit */int) arr_0 [12] [i_23])) : (var_11)))))));
    }
    for (int i_24 = 3; i_24 < 18; i_24 += 3) 
    {
        var_37 = ((/* implicit */int) ((long long int) (signed char)-92));
        /* LoopSeq 3 */
        for (long long int i_25 = 1; i_25 < 19; i_25 += 4) 
        {
            var_38 = ((/* implicit */int) max((var_38), (var_11)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_26 = 3; i_26 < 19; i_26 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_27 = 0; i_27 < 20; i_27 += 2) 
                {
                    arr_88 [i_25] = arr_82 [i_24 + 1] [(signed char)19] [i_25];
                    /* LoopSeq 4 */
                    for (long long int i_28 = 1; i_28 < 18; i_28 += 2) 
                    {
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) 1174256619661030307LL)) || (((/* implicit */_Bool) var_12))));
                        arr_93 [11LL] [i_28 + 2] [0LL] [i_25] [i_28 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_27])) ? (arr_90 [i_27]) : (((/* implicit */long long int) var_6))))) && (((((/* implicit */long long int) var_2)) >= (7828263215424097132LL)))));
                        var_40 |= ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                    }
                    for (int i_29 = 0; i_29 < 20; i_29 += 2) 
                    {
                        arr_96 [(signed char)11] [i_25] [i_26 + 1] [i_27] [i_29] = arr_81 [i_25 + 1] [i_29] [i_25] [i_29];
                        var_41 += ((/* implicit */long long int) arr_95 [15] [i_25] [5LL] [i_26 - 1] [13LL] [10LL]);
                    }
                    for (int i_30 = 0; i_30 < 20; i_30 += 3) 
                    {
                        var_42 = ((/* implicit */int) ((var_7) & (((-7828263215424097131LL) - (((/* implicit */long long int) var_10))))));
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_76 [i_24 + 1] [i_25])) ? (2147483647) : (var_8)));
                    }
                    for (signed char i_31 = 0; i_31 < 20; i_31 += 1) 
                    {
                        var_44 = ((/* implicit */signed char) (~(2146959360)));
                        arr_103 [i_24] [i_25 + 1] [i_26 - 1] [i_27] [i_26] [10LL] [i_25] = ((var_11) | (var_5));
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) var_13))));
                    }
                    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((int) arr_85 [i_27] [i_25 - 1])))));
                    arr_104 [0LL] [i_25] [(signed char)15] = arr_80 [(signed char)8] [1] [i_24 - 2];
                    var_47 = var_12;
                }
                for (signed char i_32 = 0; i_32 < 20; i_32 += 1) 
                {
                    arr_107 [(signed char)2] [i_25] [i_25] [7LL] = arr_84 [i_25 - 1] [i_24 + 2] [i_24 + 1];
                    var_48 = ((/* implicit */signed char) var_6);
                }
                for (int i_33 = 2; i_33 < 19; i_33 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_34 = 4; i_34 < 18; i_34 += 1) 
                    {
                        arr_113 [(signed char)11] [i_25] [4LL] [i_26] [i_25 - 1] [i_25] [i_24 - 2] = ((/* implicit */signed char) ((arr_78 [i_25 + 1]) - (arr_78 [i_25 + 1])));
                        arr_114 [i_24] [11] [i_26] [i_25] [17LL] = ((/* implicit */int) ((long long int) arr_108 [i_25]));
                    }
                    var_49 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_85 [i_33] [i_24 + 2])) && (((/* implicit */_Bool) arr_85 [i_33] [i_24 + 1]))));
                }
                arr_115 [18] [i_25] [1] [i_25] = ((/* implicit */long long int) arr_91 [i_24] [i_25 - 1] [7LL] [i_25 - 1] [i_25] [i_25 + 1] [i_24 - 3]);
                var_50 = ((/* implicit */long long int) (+(var_2)));
                arr_116 [i_25] [i_25] [i_26 - 3] [2LL] = ((/* implicit */signed char) var_6);
                arr_117 [i_25] = ((/* implicit */signed char) var_8);
            }
            for (int i_35 = 0; i_35 < 20; i_35 += 3) 
            {
                var_51 = ((/* implicit */int) min((var_51), (arr_94 [i_24 - 1] [10] [i_24 - 1] [6LL] [14LL] [i_24 - 2])));
                var_52 = ((/* implicit */long long int) (~(-1)));
            }
            /* vectorizable */
            for (int i_36 = 0; i_36 < 20; i_36 += 1) 
            {
                var_53 -= ((/* implicit */long long int) var_0);
                var_54 = (-(arr_75 [i_24 - 1]));
                /* LoopNest 2 */
                for (long long int i_37 = 3; i_37 < 17; i_37 += 1) 
                {
                    for (signed char i_38 = 0; i_38 < 20; i_38 += 1) 
                    {
                        {
                            var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) arr_112 [i_24 - 3] [14] [i_36] [4] [i_38]))));
                            var_56 = ((/* implicit */long long int) arr_100 [i_24 + 2] [i_25] [i_36] [i_37 - 3]);
                            arr_129 [i_24 - 3] [3] [i_36] [i_25] [i_38] = var_7;
                        }
                    } 
                } 
                var_57 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) arr_122 [i_24 - 2] [(signed char)11] [i_25] [i_36]))))));
            }
            var_58 = ((/* implicit */int) min((var_58), (var_11)));
        }
        /* vectorizable */
        for (int i_39 = 1; i_39 < 19; i_39 += 2) 
        {
            arr_132 [16LL] = ((/* implicit */long long int) var_0);
            arr_133 [i_24] [11LL] = ((/* implicit */signed char) ((long long int) (-(var_5))));
            /* LoopSeq 1 */
            for (int i_40 = 0; i_40 < 20; i_40 += 2) 
            {
                arr_137 [i_24] [(signed char)7] [i_40] = ((/* implicit */long long int) ((arr_126 [i_39 - 1] [i_24] [i_24 + 1]) - (0)));
                var_59 = ((/* implicit */signed char) max((var_59), (arr_100 [i_40] [i_39] [i_24 + 1] [6])));
                var_60 = arr_106 [i_24 + 1] [13LL] [(signed char)0] [i_39 + 1];
            }
        }
        for (long long int i_41 = 0; i_41 < 20; i_41 += 2) 
        {
            arr_140 [i_24] [9LL] [16LL] = ((/* implicit */signed char) (+(((int) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) (signed char)-1)))))));
            arr_141 [14] [i_41] [i_24] = ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) -2147483647))))) ? (-7828263215424097131LL) : (((/* implicit */long long int) ((arr_119 [i_24] [i_41] [i_24 - 1] [i_41]) / (1335054586)))));
        }
    }
    var_61 = ((/* implicit */int) var_1);
}
