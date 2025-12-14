/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55742
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned int) var_1)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned long long int) ((unsigned short) ((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_2 [i_1] [i_0]));
            arr_8 [i_0] [10U] [i_1] = ((/* implicit */unsigned int) var_14);
            arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_0])))));
        }
        arr_10 [i_0] [(_Bool)0] = ((/* implicit */long long int) min(((~(max((((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_0] [i_0])), (arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((1088191789U) <= (var_4))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((arr_1 [i_3 - 1]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_3])))) * (((/* implicit */int) arr_5 [i_0] [11LL]))));
                    var_19 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_13 [i_3] [i_0])), (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_3])) ? (-8437032698490522593LL) : (((/* implicit */long long int) arr_16 [i_3 - 1] [i_2] [i_2] [i_0])))))), (((/* implicit */long long int) ((arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1]) != (arr_12 [i_3 - 1] [i_3] [i_3 - 1]))))));
                    var_20 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)45910))))));
                    var_21 = ((/* implicit */_Bool) 18446744073709551611ULL);
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 -= ((/* implicit */long long int) ((_Bool) (unsigned short)3));
                        var_23 = max(((((_Bool)0) ? (var_0) : (1577831886U))), (((arr_18 [i_4] [i_2] [i_3 - 1] [i_4] [i_3 - 1]) ? (var_1) : (var_1))));
                        arr_22 [i_3] [4ULL] [i_3 - 1] [i_3] [i_3] [i_3 - 1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_3] [i_0]);
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_0]))))) ? (((/* implicit */int) arr_18 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_2])) : ((+(((/* implicit */int) (unsigned short)0)))))) : (((((/* implicit */int) (unsigned short)10)) * (((/* implicit */int) (unsigned short)65524)))))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_5 + 2]))) ? (((arr_18 [7U] [i_5 + 3] [i_5] [i_5 + 3] [i_5]) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned short)65524))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65509), ((unsigned short)65499))))) % ((+(arr_12 [i_2] [i_3 - 1] [i_5 + 3])))));
                            arr_30 [i_2] [i_3] = ((/* implicit */unsigned int) max((arr_14 [i_3 - 1] [i_3 - 1] [i_5 + 2]), (((0ULL) - (((/* implicit */unsigned long long int) arr_25 [(_Bool)1] [i_3 - 1] [i_3] [13ULL] [i_3]))))));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) (+((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43001))) - (var_1)))))));
                        var_28 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [i_0]);
                        var_29 += min((max((arr_17 [i_0] [i_2] [i_7]), (((/* implicit */unsigned int) (_Bool)1)))), (max((((/* implicit */unsigned int) var_8)), (var_4))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) 23U)) ? (var_12) : (((((((/* implicit */_Bool) (unsigned short)4)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_0] [i_0]))))) & (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2]))))))))))));
                        var_31 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65527)) || (((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_2] [i_7])))) ? (((/* implicit */int) arr_5 [i_0] [9ULL])) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)27))))))))));
                    }
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (min((((/* implicit */long long int) arr_18 [8U] [i_8] [i_3 - 1] [i_8] [i_2])), (arr_25 [i_0] [i_0] [i_3 - 1] [i_8] [i_0])))));
                        arr_38 [i_3] [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) min((min((arr_28 [i_3 - 1] [i_2] [i_2] [i_2]), (arr_28 [i_3 - 1] [i_2] [i_3] [i_8]))), (((((/* implicit */_Bool) arr_32 [i_3 - 1] [i_8] [7LL] [i_8] [i_8] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_3 - 1] [i_0] [i_0]))) : (arr_28 [i_3 - 1] [i_2] [i_3] [i_8])))));
                        var_33 = ((((/* implicit */_Bool) max((max((arr_21 [i_0] [i_2] [i_2] [i_2] [i_0]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) arr_18 [i_2] [i_2] [i_3 - 1] [i_3 - 1] [i_0]))))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ ((+(var_1)))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    {
                        var_34 -= ((/* implicit */_Bool) min((arr_29 [i_9] [i_9] [i_9] [i_12] [5U] [i_9] [i_12]), (arr_20 [i_10])));
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_35 = ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)51323)) ? (23U) : (4294967272U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) * (min((((/* implicit */long long int) var_7)), (max((857751144872777508LL), (((/* implicit */long long int) arr_0 [i_12])))))));
                            arr_55 [i_9] = ((/* implicit */long long int) (unsigned short)65503);
                        }
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_36 = ((((/* implicit */_Bool) arr_54 [i_10] [i_10] [i_11] [i_12] [i_14])) ? (((((/* implicit */_Bool) 3263174056U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (arr_48 [i_9] [i_10] [(_Bool)1]));
                            var_37 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3263174056U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_20 [(_Bool)1])))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))));
                        }
                        arr_59 [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_50 [i_9] [i_10] [i_11] [i_12]);
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (arr_34 [i_9] [i_9] [i_9] [0U]) : (1048576U)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [2U] [i_9] [i_15])) ? (((/* implicit */unsigned long long int) var_12)) : (((18446744073709551601ULL) / (((/* implicit */unsigned long long int) arr_31 [i_9] [i_9] [12ULL] [i_10] [i_15]))))));
                arr_63 [(_Bool)1] [5LL] [i_10] [i_15] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_33 [i_9]) | (arr_28 [i_9] [i_9] [i_10] [i_15])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_9]))))) : (var_12))) <= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)62051), ((unsigned short)18017)))))));
            }
            for (unsigned int i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                arr_67 [i_10] [i_10] [i_16] [2U] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((536869888U), (((/* implicit */unsigned int) (unsigned short)65500))))) ? (arr_53 [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) 4293918717U)))), (((/* implicit */unsigned long long int) 0U))));
                arr_68 [(unsigned short)10] [i_10] [i_10] [i_16] = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 18446744073709551613ULL)))) - (arr_48 [0ULL] [i_10] [i_16]))) : (((/* implicit */unsigned long long int) max((3751782531U), (((var_1) - (var_5)))))));
                arr_69 [i_10] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(arr_45 [i_10] [i_10])))), (((long long int) ((((/* implicit */_Bool) arr_49 [i_16] [i_10] [i_16] [i_16])) ? (17890268962307292241ULL) : (arr_62 [i_9] [(_Bool)1]))))));
                arr_70 [i_16] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_2 [i_9] [i_9])));
                var_40 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) var_9))) * (var_14))));
            }
            /* LoopNest 2 */
            for (unsigned short i_17 = 3; i_17 < 14; i_17 += 1) 
            {
                for (unsigned int i_18 = 2; i_18 < 11; i_18 += 2) 
                {
                    {
                        var_41 += ((/* implicit */unsigned long long int) arr_18 [i_9] [i_9] [i_9] [3U] [i_9]);
                        arr_78 [i_9] [i_9] [12ULL] [13U] [i_17] = ((((/* implicit */_Bool) arr_46 [i_9] [i_17 - 2] [i_17])) ? (arr_46 [i_17] [i_17 - 3] [i_9]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)9))))));
                        var_42 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16367))) % (min((((/* implicit */unsigned long long int) -1449517171400223340LL)), (min((((/* implicit */unsigned long long int) -2046160581094351586LL)), (10376849568168806768ULL))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 2) 
        {
            var_43 += ((/* implicit */unsigned short) ((unsigned int) 47U));
            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_9] [i_19] [i_9])))))));
            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((arr_44 [i_19]) % (((/* implicit */unsigned long long int) arr_31 [i_19] [10ULL] [i_9] [10ULL] [(_Bool)1])))))));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_46 = ((/* implicit */long long int) ((unsigned int) max((4294967249U), (((/* implicit */unsigned int) (unsigned short)65523)))));
            arr_86 [i_9] [i_9] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((4294967248U) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_47 [i_20]) <= (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_9] [i_20]))))))))) : (max((((unsigned int) 3279005466U)), (((/* implicit */unsigned int) ((unsigned short) arr_21 [i_9] [i_9] [i_20] [i_20] [i_20])))))));
            var_47 = ((/* implicit */unsigned long long int) arr_71 [i_20] [i_20]);
        }
        arr_87 [2U] [i_9] = ((/* implicit */_Bool) arr_76 [i_9] [i_9] [i_9]);
        var_48 *= ((/* implicit */_Bool) ((unsigned int) 46U));
    }
    for (unsigned int i_21 = 0; i_21 < 15; i_21 += 2) /* same iter space */
    {
        var_49 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), (0U)));
        arr_91 [i_21] = ((/* implicit */unsigned long long int) arr_72 [i_21] [i_21] [i_21]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_22 = 3; i_22 < 11; i_22 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_23 = 0; i_23 < 15; i_23 += 1) 
            {
                var_50 = ((/* implicit */_Bool) (~(4294967250U)));
                var_51 -= ((/* implicit */unsigned int) (~(arr_75 [i_21] [i_21] [i_22 - 3] [i_21])));
            }
            for (unsigned int i_24 = 0; i_24 < 15; i_24 += 3) 
            {
                arr_100 [i_21] [i_22 - 2] [i_22 - 2] [i_24] = ((/* implicit */_Bool) var_1);
                arr_101 [i_21] [i_21] = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 15; i_25 += 4) 
                {
                    for (long long int i_26 = 0; i_26 < 15; i_26 += 2) 
                    {
                        {
                            var_52 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_21])) ? (18446744073709551588ULL) : (((/* implicit */unsigned long long int) arr_47 [i_24]))));
                            arr_106 [i_21] [i_24] [i_24] [i_25] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_22] [i_22 - 2] [i_22 - 1] [i_22 - 3] [i_22 - 3])) ? (arr_54 [i_22] [i_22 + 1] [i_22] [i_22 - 3] [i_22 - 2]) : (arr_54 [i_22] [i_22 + 3] [i_22] [i_22 + 2] [i_22 + 2])));
                            var_53 = arr_62 [6ULL] [i_22];
                            var_54 = ((/* implicit */long long int) arr_24 [i_22 + 3] [4U] [1U] [i_22 - 2]);
                            arr_107 [i_21] [i_22] [i_24] [5ULL] [i_22] [i_25] [i_22] = ((/* implicit */unsigned int) ((3545988329U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526)))));
                        }
                    } 
                } 
            }
            for (unsigned int i_27 = 1; i_27 < 13; i_27 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_28 = 2; i_28 < 13; i_28 += 4) 
                {
                    arr_112 [i_21] [i_27] [i_27] [i_27] [i_28] = 1048585U;
                    var_55 += ((/* implicit */_Bool) arr_17 [14ULL] [i_22] [i_28]);
                }
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    var_56 -= ((/* implicit */_Bool) ((((/* implicit */long long int) arr_34 [i_22] [i_27] [i_22] [i_27 - 1])) / (arr_75 [i_22 - 3] [i_21] [i_27] [i_27])));
                    var_57 = ((/* implicit */unsigned int) ((unsigned long long int) var_0));
                    /* LoopSeq 4 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_21] [(_Bool)1] [i_27 - 1] [i_29] [i_30])) ? (((/* implicit */unsigned long long int) 3690246991U)) : (arr_79 [i_21] [i_22])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)12))));
                        var_59 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_73 [i_21] [i_22 + 1])) ? (arr_73 [i_21] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        var_60 = ((((/* implicit */_Bool) ((unsigned int) (unsigned short)65535))) ? (arr_117 [i_22 - 3] [i_27 + 2] [i_30] [i_29 - 1]) : ((~(3573075716U))));
                        arr_118 [i_21] [i_21] [i_27] [i_29] [i_27] = ((/* implicit */long long int) (-(((/* implicit */int) arr_111 [i_27] [i_22 - 1]))));
                    }
                    for (unsigned short i_31 = 4; i_31 < 14; i_31 += 2) 
                    {
                        var_61 = ((/* implicit */_Bool) max((var_61), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_21] [2ULL] [i_21] [i_31 - 4] [i_31])) ? (((/* implicit */unsigned long long int) (-(arr_83 [i_31 - 2] [i_21] [i_21])))) : (arr_39 [i_27]))))));
                        arr_122 [i_21] [i_22 + 4] [i_22 + 4] [12LL] [i_31 - 1] [i_27] = ((/* implicit */unsigned int) ((_Bool) arr_93 [i_21] [i_22 - 1]));
                        var_62 *= ((/* implicit */_Bool) arr_45 [i_22 + 1] [i_29 - 1]);
                        arr_123 [i_29 - 1] [i_29 - 1] [i_29] [i_29] [i_27] = ((/* implicit */long long int) ((_Bool) arr_105 [i_22 - 2] [i_22] [i_27 + 1] [i_27 + 2] [i_29 - 1] [i_29 - 1] [i_29]));
                    }
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        arr_127 [(_Bool)1] [i_27] [i_32] [i_29] [i_29] = ((/* implicit */unsigned long long int) 4294967249U);
                        var_63 = ((arr_64 [i_27 - 1]) << (((arr_64 [i_27 - 1]) - (2330159733U))));
                    }
                    for (unsigned short i_33 = 0; i_33 < 15; i_33 += 1) 
                    {
                        var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) ((arr_109 [i_21]) - (arr_109 [i_21]))))));
                        arr_130 [i_27] [i_22] [i_27] [i_29 - 1] [i_27] = ((/* implicit */_Bool) (unsigned short)0);
                    }
                    arr_131 [i_21] [i_22] [i_27] [i_27] [i_29] = ((/* implicit */unsigned int) ((_Bool) ((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                }
                arr_132 [i_27] [i_22] [11U] = ((/* implicit */unsigned short) var_6);
                var_65 -= ((/* implicit */unsigned int) (unsigned short)65501);
                var_66 = ((/* implicit */_Bool) max((var_66), (((/* implicit */_Bool) 10932495416743859182ULL))));
                /* LoopNest 2 */
                for (unsigned short i_34 = 0; i_34 < 15; i_34 += 1) 
                {
                    for (unsigned long long int i_35 = 3; i_35 < 13; i_35 += 2) 
                    {
                        {
                            var_67 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_117 [i_21] [i_22] [i_27] [i_34])) ? (((/* implicit */int) ((unsigned short) var_14))) : (((/* implicit */int) arr_15 [i_27 + 2] [i_35]))));
                            var_68 = ((/* implicit */unsigned short) ((_Bool) arr_13 [i_34] [i_35 + 2]));
                        }
                    } 
                } 
            }
            for (unsigned int i_36 = 2; i_36 < 13; i_36 += 1) 
            {
                arr_141 [i_21] [i_22] [i_22 + 3] [i_36] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_12 [i_36 - 2] [i_36 + 1] [i_36 - 2]))));
                var_69 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_21] [i_22 - 1] [i_36] [i_36 + 2] [i_36] [i_36])) ? (arr_32 [i_22] [i_22 - 2] [i_36] [i_36] [i_36] [i_22 - 2]) : (arr_32 [i_21] [i_22 - 2] [i_22] [i_36] [i_36] [i_22])));
            }
            arr_142 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1187778743U)) & (3071841705650981830LL)));
        }
    }
    var_70 = var_7;
}
