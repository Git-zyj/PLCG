/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74995
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)8191)), (4281501175U)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_12 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (arr_1 [i_0]));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (short)30298)))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_1] [i_2] [i_0]) : (arr_4 [i_0] [i_1] [i_1] [i_2])))));
                arr_8 [i_2] [i_1] [i_0] [(_Bool)1] = ((/* implicit */int) (unsigned short)65535);
                var_13 = ((/* implicit */int) (short)-21741);
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) var_9);
                    arr_12 [i_0] [i_2] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) ((1152921504606846975ULL) >> (((((((/* implicit */_Bool) -826449196)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (1152921504606846975ULL))) - (3100542421ULL)))));
                    arr_13 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0]);
                }
                for (long long int i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) arr_1 [i_0]);
                    var_16 = ((/* implicit */unsigned short) (((-(0))) & (((/* implicit */int) ((((/* implicit */_Bool) 826449192)) && (((/* implicit */_Bool) 4281501175U)))))));
                }
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 4; i_6 < 9; i_6 += 1) 
                    {
                        var_17 *= 2578819146U;
                        arr_22 [i_0] [i_1] [i_2] [i_6] [i_6] = ((arr_0 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8188)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_7] [i_1] [i_1] [i_2] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) arr_1 [i_0]);
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((-185828338) != (826449185))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_5]))) > (1716148144U)));
                        var_19 = ((/* implicit */long long int) (short)21739);
                    }
                    arr_29 [i_2] [i_1] [i_2] = 65528;
                    arr_30 [i_0] [i_1] [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_1] [i_1]))) | (arr_14 [i_0] [i_0])))));
                }
            }
            var_20 ^= ((/* implicit */_Bool) 4294967279U);
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (short i_10 = 3; i_10 < 8; i_10 += 2) 
            {
                {
                    arr_36 [i_10] [i_9] [i_0] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) var_10)) ? (var_9) : (1771519627))))) <= (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)-21758))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) var_10)) ? (2578819144U) : (((/* implicit */unsigned int) arr_1 [i_0])))))))))));
                    arr_37 [i_0] [i_9] [i_10] [i_0] &= ((/* implicit */_Bool) var_1);
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) -22);
    }
    /* vectorizable */
    for (unsigned short i_11 = 3; i_11 < 12; i_11 += 2) 
    {
        arr_42 [i_11] = ((/* implicit */int) (-(((arr_38 [i_11] [i_11]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_11 - 2] [i_11])))))));
        /* LoopSeq 1 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_23 *= ((/* implicit */int) arr_40 [i_11] [i_12]);
            arr_45 [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25917))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_12] [i_11]))) ^ (var_4)))));
            /* LoopNest 3 */
            for (unsigned short i_13 = 2; i_13 < 12; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    for (unsigned int i_15 = 3; i_15 < 9; i_15 += 1) 
                    {
                        {
                            arr_54 [i_11] [i_11] [i_13] [(unsigned short)10] [i_13] [i_15] [i_15 + 2] = (-(((((/* implicit */_Bool) arr_51 [i_13] [i_15])) ? (((/* implicit */int) arr_51 [i_13] [i_12])) : (14))));
                            arr_55 [i_11] [i_13] [i_13] [i_14] [i_15] = ((/* implicit */unsigned long long int) var_9);
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) > ((-(arr_53 [i_11 - 3] [i_12 - 1] [i_13] [i_14] [i_15]))))))));
                            arr_56 [i_11] [i_12 - 1] [i_13 - 1] [i_13] [i_15] [i_11] = ((/* implicit */int) ((13620544224126634459ULL) - (((/* implicit */unsigned long long int) var_10))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)255)))) != (-22))))));
            /* LoopNest 2 */
            for (unsigned int i_16 = 4; i_16 < 11; i_16 += 2) 
            {
                for (unsigned int i_17 = 2; i_17 < 12; i_17 += 2) 
                {
                    {
                        arr_61 [i_11] [i_12] [i_16 - 4] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_11 - 2] [2ULL] [i_11])) ? (-1595549970) : (((/* implicit */int) var_3))))) < (arr_50 [i_11] [i_12] [8ULL] [i_16])));
                        arr_62 [i_11] [i_12] [i_16] [i_12] = ((/* implicit */int) (~(var_1)));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)55)) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)924)) < (1643278668))))));
                arr_68 [i_11] [i_18] [i_19] [i_19] |= ((/* implicit */unsigned short) var_6);
                var_27 = ((((((/* implicit */int) (unsigned short)20137)) < (((/* implicit */int) (unsigned char)145)))) ? (((1771519627) + (((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) var_8)));
            }
            for (unsigned int i_20 = 0; i_20 < 13; i_20 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) /* same iter space */
                {
                    var_28 -= 7054975946379878154ULL;
                    var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (_Bool)1)) + ((-2147483647 - 1))))));
                    arr_78 [i_11 - 2] [i_18] [i_18] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1920992458)) ? (var_4) : (((/* implicit */unsigned int) -1918366981)))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_11 - 1] [i_18 - 1])) ? (((/* implicit */int) (unsigned short)57138)) : (var_10))))));
                }
                for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) 1890237000U))));
                    arr_83 [i_23] [i_20] [i_20] [i_20] [i_18] [i_11] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 3 */
                    for (unsigned char i_24 = 1; i_24 < 12; i_24 += 1) /* same iter space */
                    {
                        arr_87 [i_11] [i_11 - 1] [i_11] [i_11 - 3] [i_11 + 1] [i_11 - 3] = ((/* implicit */int) arr_44 [i_11]);
                        var_32 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) 8191)) / (5035570901948011602LL))) != (((/* implicit */long long int) ((/* implicit */int) ((arr_60 [i_11] [i_11] [i_11] [i_11]) == (arr_80 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])))))));
                        arr_88 [i_11 - 1] [i_18 - 1] [i_20] [i_23] [i_24] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))) - (6997709059405679525ULL))) != (((/* implicit */unsigned long long int) ((1006632960) | (var_2))))));
                    }
                    for (unsigned char i_25 = 1; i_25 < 12; i_25 += 1) /* same iter space */
                    {
                        var_33 |= ((/* implicit */unsigned short) arr_90 [i_11] [i_18 - 1] [i_23] [i_23] [0] [i_25] [2]);
                        var_34 ^= ((/* implicit */unsigned short) 0);
                        arr_92 [i_11] [i_18] [i_20] [i_23] [i_25] = ((/* implicit */int) ((arr_38 [i_18] [i_18]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_11] [i_18] [i_20] [i_23] [i_25 + 1] [i_20])))));
                    }
                    for (unsigned char i_26 = 1; i_26 < 12; i_26 += 1) /* same iter space */
                    {
                        arr_95 [i_11] [i_11] [i_11 - 1] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1162289998))))) != (((/* implicit */int) ((arr_73 [i_11] [i_18] [i_18] [i_26]) != (((/* implicit */unsigned long long int) -1771519627)))))));
                        arr_96 [i_26] [i_18 - 1] [i_20] [i_26] [3] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)29851)))) / (1162289994)));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | ((-2147483647 - 1))))) ? (824553351) : (16380)));
                        var_36 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_53 [i_11] [i_11] [i_11] [0] [i_11])) | (arr_80 [i_11] [i_18] [i_20] [i_23] [i_26] [i_23])));
                        arr_97 [i_18] = ((/* implicit */int) (((((_Bool)1) ? (2260723850U) : (((/* implicit */unsigned int) -1288053025)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_27 = 0; i_27 < 13; i_27 += 2) 
                {
                    var_37 = ((/* implicit */int) ((11391768127329673444ULL) != (((/* implicit */unsigned long long int) var_10))));
                    var_38 += ((/* implicit */long long int) arr_57 [i_27] [i_20] [i_18] [i_11]);
                }
            }
            for (unsigned int i_28 = 0; i_28 < 13; i_28 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 13; i_29 += 3) 
                {
                    for (short i_30 = 1; i_30 < 11; i_30 += 4) 
                    {
                        {
                            var_39 |= ((/* implicit */short) -1771519627);
                            var_40 = ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)64611)) | (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_109 [i_28] [i_18] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1288053040) : (((/* implicit */int) ((1835008) <= (((/* implicit */int) (unsigned short)55621)))))));
            }
            for (unsigned int i_31 = 0; i_31 < 13; i_31 += 4) /* same iter space */
            {
                arr_113 [i_31] [i_31] [i_18] [i_11 + 1] = 1850903186;
                var_41 = ((/* implicit */_Bool) 1771519627);
            }
            var_42 -= ((/* implicit */unsigned short) ((((86593698) ^ (2147483627))) >= (((/* implicit */int) (unsigned char)47))));
        }
    }
    for (unsigned int i_32 = 2; i_32 < 19; i_32 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_33 = 0; i_33 < 21; i_33 += 4) 
        {
            for (int i_34 = 0; i_34 < 21; i_34 += 1) 
            {
                {
                    var_43 = ((/* implicit */unsigned char) (unsigned short)38124);
                    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)38124)) >> (((((((/* implicit */_Bool) 2146435072U)) ? (1806186226593666323ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (1806186226593666292ULL))))) | (1162289997))))));
                }
            } 
        } 
        var_45 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_114 [i_32] [i_32 - 1]))) | (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_119 [i_32] [i_32 + 2] [(unsigned short)2] [i_32]))))), (524160ULL)))));
    }
    for (unsigned int i_35 = 1; i_35 < 16; i_35 += 3) 
    {
        arr_122 [i_35] [i_35] = ((/* implicit */long long int) min((((/* implicit */int) var_5)), ((+(((/* implicit */int) ((((/* implicit */int) var_6)) <= (var_10))))))));
        arr_123 [i_35] [i_35] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (((((/* implicit */_Bool) arr_118 [i_35] [i_35 - 1] [12LL])) ? (((/* implicit */unsigned long long int) var_10)) : (2612760302357086477ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_114 [i_35] [i_35 - 1])))))) : ((~(2345485242U)))));
        arr_124 [i_35] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_121 [i_35] [i_35])) == (var_0))) ? (((((/* implicit */int) arr_116 [i_35] [i_35])) + (((/* implicit */int) (unsigned char)12)))) : ((~(((/* implicit */int) (unsigned char)167)))))))));
        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((((/* implicit */_Bool) -1)) ? (-1162290013) : (((/* implicit */int) arr_119 [i_35] [i_35] [i_35] [i_35])))) | (((/* implicit */int) (unsigned short)2032)))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_36 = 3; i_36 < 18; i_36 += 4) 
    {
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2345485242U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (((-(((/* implicit */int) arr_119 [i_36 + 1] [i_36] [i_36] [i_36])))) < (((/* implicit */int) (_Bool)0)))))));
        var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) min((9196800452149374083LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9315901603851194653ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_116 [i_36] [i_36]))))) <= (13306554667558998172ULL)))))))));
        var_49 = ((/* implicit */short) ((((9196800452149374083LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_116 [i_36] [i_36 - 2]))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_119 [i_36 + 1] [i_36 - 3] [i_36 - 3] [i_36 + 1]), (var_6)))) < (((/* implicit */int) arr_117 [i_36] [i_36 - 2]))))))));
        /* LoopSeq 1 */
        for (_Bool i_37 = 1; i_37 < 1; i_37 += 1) 
        {
            var_50 = ((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9))))))) >= (((((((/* implicit */int) arr_126 [i_36 + 1] [i_37 - 1])) <= (1288053002))) ? (268435455) : (((/* implicit */int) arr_117 [i_37] [i_36]))))));
            /* LoopNest 3 */
            for (unsigned char i_38 = 3; i_38 < 18; i_38 += 3) 
            {
                for (unsigned short i_39 = 0; i_39 < 19; i_39 += 1) 
                {
                    for (unsigned int i_40 = 0; i_40 < 19; i_40 += 4) 
                    {
                        {
                            var_51 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_116 [i_36 - 1] [i_36])) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) 1381111544)))))));
                            var_52 = ((/* implicit */int) arr_137 [i_36 - 3] [i_36] [(short)9] [i_37] [i_38] [i_39] [i_40]);
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_41 = 0; i_41 < 14; i_41 += 3) /* same iter space */
    {
        var_53 = ((/* implicit */unsigned char) arr_133 [i_41] [i_41] [i_41]);
        arr_140 [i_41] = ((/* implicit */long long int) var_9);
        arr_141 [i_41] [i_41] = ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_114 [(short)5] [i_41]))) ^ (17188335062001550595ULL))), (((/* implicit */unsigned long long int) -410563040)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29834)) + ((-2147483647 - 1))))) | (((arr_132 [i_41] [i_41] [i_41]) % (((/* implicit */unsigned long long int) var_2)))))))))));
    }
    for (int i_42 = 0; i_42 < 14; i_42 += 3) /* same iter space */
    {
        var_55 = 410563024;
        var_56 = ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_5))))))) + (min((((((/* implicit */int) (unsigned short)50579)) / (((/* implicit */int) (unsigned char)198)))), (((/* implicit */int) var_6)))));
    }
}
