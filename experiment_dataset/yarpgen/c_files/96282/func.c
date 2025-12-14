/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96282
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_13))));
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
            {
                var_20 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_2]) >> (((2791818050U) - (2791818039U))))))));
                /* LoopNest 2 */
                for (signed char i_3 = 3; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) == (2812406494U)))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3 + 1]))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_3 + 1])) | (((/* implicit */int) arr_8 [i_3 + 2]))));
                            var_23 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_3 - 2]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)230)) ? (1347508890U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))))) < (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [18U])))))));
                arr_13 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_8 [i_2]);
            }
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
            {
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                var_25 *= var_18;
            }
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
            {
                arr_19 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned long long int) (!(arr_12 [i_0] [i_1])));
                var_26 = ((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_6]));
            }
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
            {
                var_27 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0]))) != (1099444518912ULL));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_17 [i_0] [i_0] [i_7]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_7] [i_7] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1] [i_1])) * (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1]))))) : (((unsigned int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_29 = ((/* implicit */unsigned char) ((arr_4 [i_7]) << (((((/* implicit */int) arr_10 [i_0] [i_8])) - (31034)))));
                    arr_26 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_7])) ? (arr_11 [i_0] [i_0] [i_0]) : (arr_11 [i_1] [i_7] [i_8])));
                }
                /* LoopSeq 4 */
                for (int i_9 = 2; i_9 < 23; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 2; i_10 < 23; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_7] [i_7] [i_7] [i_10])) ? (arr_11 [i_0] [i_1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_7] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_7] [i_9] [i_10] [i_7])) ? (var_17) : (arr_31 [i_0] [i_1] [i_7] [i_9] [i_10] [i_10]))))));
                        var_31 = ((/* implicit */unsigned char) arr_2 [i_9 - 1] [i_9 - 1]);
                    }
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_0])) ? (arr_35 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_34 [i_0] [i_7]))));
                        var_33 = ((/* implicit */signed char) ((arr_23 [i_9 - 2] [i_9] [i_9] [i_9] [i_9]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9 - 1] [i_9] [i_9] [i_9] [i_9] [i_9])))));
                        var_34 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9 + 1] [i_9 + 1] [i_9 - 1] [(_Bool)1] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_9 - 2] [(signed char)5]))) : (arr_4 [i_9 + 1])));
                        arr_37 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9 - 1])) ? (((/* implicit */int) arr_9 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_9] [i_9 - 1])) : (((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 - 1]))));
                    }
                    arr_38 [i_1] [i_7] [i_7] = ((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_1] [i_7] [i_9] [i_9 - 2]);
                }
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) arr_2 [i_7] [i_7]);
                    arr_41 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_1] [i_12] [i_12])) ? (((/* implicit */int) arr_32 [i_0] [i_1] [i_7] [i_12] [i_12])) : (((/* implicit */int) var_11))));
                }
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17751428169221963202ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_0] [i_13] [i_13])))))) ? (((((/* implicit */_Bool) arr_11 [i_13] [i_1] [i_13])) ? (((/* implicit */int) var_0)) : (arr_5 [i_0]))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                    arr_45 [i_0] [i_1] [i_1] [i_1] [i_13] [i_13] = ((/* implicit */unsigned char) ((arr_5 [i_0]) / (((/* implicit */int) (unsigned char)140))));
                }
                for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((arr_8 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21514))) : (arr_34 [i_1] [i_14]))))));
                    arr_48 [i_0] [i_0] [i_0] [i_1] [i_7] [i_14] = ((/* implicit */unsigned char) var_1);
                }
            }
            var_38 = ((/* implicit */unsigned char) var_5);
        }
    }
    for (unsigned char i_15 = 2; i_15 < 22; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 2) 
            {
                {
                    var_39 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                    var_40 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_17] [i_16] [i_16])) ? (var_12) : (arr_31 [i_15] [i_15] [i_15] [i_15] [i_17] [i_17])))) ? (var_6) : (min((var_4), (((/* implicit */unsigned long long int) var_15))))))));
                    arr_55 [i_15] [i_16] [i_17] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_27 [i_15] [i_15] [i_15] [i_15] [i_17])) ? (((((/* implicit */_Bool) arr_50 [i_15])) ? (arr_23 [i_15] [i_15] [i_15] [i_15] [i_15]) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_43 [i_15] [i_15])) > (var_4))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_15]))))))));
                }
            } 
        } 
        arr_56 [i_15] = ((/* implicit */int) arr_17 [i_15] [i_15] [i_15]);
        /* LoopSeq 4 */
        for (unsigned int i_18 = 2; i_18 < 21; i_18 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_19 = 3; i_19 < 22; i_19 += 4) 
            {
                arr_61 [i_15] [i_15] [i_15] [i_15] = arr_20 [i_15] [i_15] [i_15];
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_58 [i_15] [i_15])))) != (((/* implicit */int) (unsigned char)32)))))) + (max((((/* implicit */long long int) arr_6 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_19 - 3])), (-244074103740544929LL)))));
            }
            /* vectorizable */
            for (unsigned int i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 23; i_21 += 2) 
                {
                    for (signed char i_22 = 0; i_22 < 23; i_22 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(10598589631798515032ULL)))) ? (((/* implicit */int) arr_12 [i_15 - 1] [i_18 - 1])) : (((/* implicit */int) arr_6 [i_18] [i_18 + 1] [i_18 + 1] [i_18]))));
                            var_43 = var_0;
                        }
                    } 
                } 
                arr_72 [i_15] [i_18] [i_18] [i_20] = ((/* implicit */unsigned char) (+(arr_54 [i_15 + 1] [i_18 + 2] [i_18 + 2])));
            }
            var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_63 [i_15] [i_15] [i_15] [i_15]))));
            arr_73 [i_15] = var_9;
            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_15] [i_15])) ? (3872755718U) : (arr_17 [i_18] [i_18] [i_18])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_15 + 1] [i_18] [i_18 - 1]))) : (((((/* implicit */_Bool) arr_27 [i_15 + 1] [i_15] [i_15] [i_18 - 1] [i_18])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_15 - 2] [i_15 - 2] [i_15] [i_18 + 2] [i_18 + 2])))))));
            arr_74 [i_15] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_44 [i_15])) ? (arr_44 [i_18]) : (arr_44 [i_18]))));
        }
        for (signed char i_23 = 0; i_23 < 23; i_23 += 2) 
        {
            var_46 = ((/* implicit */long long int) var_15);
            arr_77 [i_15] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_23] [i_23] [i_23] [i_15 - 1] [i_15 - 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)103)), (arr_35 [i_15] [i_15])))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_15] [i_23] [i_23])))))))) : (((((/* implicit */unsigned long long int) arr_54 [i_23] [i_15 - 2] [4LL])) / (((arr_35 [i_15 + 1] [i_23]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_15] [i_23] [i_15])))))))));
        }
        /* vectorizable */
        for (unsigned int i_24 = 3; i_24 < 22; i_24 += 2) 
        {
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_15 - 1] [i_15 - 2] [i_15 + 1])) ? (arr_78 [i_24 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_15 - 1] [i_15 - 2] [i_15])))));
            arr_81 [i_15] [i_24] [i_24] = ((/* implicit */unsigned int) var_18);
            /* LoopSeq 3 */
            for (signed char i_25 = 2; i_25 < 22; i_25 += 4) 
            {
                arr_85 [i_15] = ((/* implicit */unsigned char) (signed char)125);
                arr_86 [i_25] [i_24] = ((/* implicit */signed char) ((unsigned int) arr_28 [i_15 - 1] [i_15 - 1] [i_15] [i_25 - 1] [i_25] [i_25 - 1]));
            }
            for (signed char i_26 = 0; i_26 < 23; i_26 += 2) /* same iter space */
            {
                arr_89 [i_15] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)5] [i_26]))) & (arr_78 [(_Bool)1])))) && (((/* implicit */_Bool) arr_60 [i_15]))));
                /* LoopSeq 1 */
                for (unsigned int i_27 = 2; i_27 < 21; i_27 += 2) 
                {
                    arr_93 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) arr_75 [i_15] [i_24 - 1]);
                    arr_94 [i_15 - 1] [i_15] [13] [i_15 - 1] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_27] [i_27 - 1] [i_27 + 2])) ? (arr_18 [i_27] [i_27] [i_27 + 1]) : (arr_18 [i_27] [i_27] [i_27 + 2])));
                }
                arr_95 [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_76 [i_15 - 1] [i_24] [i_24 + 1])) ? (((/* implicit */int) arr_76 [i_15 + 1] [i_15 + 1] [i_24 + 1])) : (((/* implicit */int) arr_76 [i_15 + 1] [i_24 - 1] [i_24 - 3]))));
            }
            for (signed char i_28 = 0; i_28 < 23; i_28 += 2) /* same iter space */
            {
                var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_24 - 1]))) == (1248945203U))))));
                arr_100 [i_15] [i_15] = ((/* implicit */unsigned int) ((unsigned char) arr_70 [i_15] [i_24] [i_28] [i_15 - 1] [i_15]));
                var_49 = ((/* implicit */unsigned long long int) ((int) arr_88 [i_15 - 2] [i_15 + 1] [i_24 + 1]));
            }
            var_50 = ((/* implicit */unsigned char) arr_67 [i_15] [i_15] [i_15 - 2]);
        }
        for (unsigned char i_29 = 0; i_29 < 23; i_29 += 4) 
        {
            arr_104 [i_15] [i_15] [i_15] = ((/* implicit */signed char) var_18);
            var_51 *= ((/* implicit */signed char) (+(((/* implicit */int) min((arr_40 [i_15 + 1] [i_15 + 1] [i_15 + 1]), (arr_40 [i_15 - 1] [i_15 + 1] [i_15 - 1]))))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_30 = 0; i_30 < 12; i_30 += 4) 
    {
        var_52 = ((/* implicit */unsigned int) arr_107 [i_30]);
        var_53 = ((/* implicit */int) ((unsigned long long int) (unsigned char)253));
        /* LoopNest 2 */
        for (signed char i_31 = 1; i_31 < 9; i_31 += 2) 
        {
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        for (unsigned int i_34 = 2; i_34 < 10; i_34 += 3) 
                        {
                            {
                                arr_120 [i_30] [i_31] [i_31] [i_32] [i_31] [i_34 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_31] [i_31 - 1] [i_32])) ? (arr_11 [i_31] [i_31 - 1] [i_31 + 3]) : (arr_11 [i_31] [i_30] [i_32])));
                                var_54 = ((/* implicit */unsigned short) var_11);
                                var_55 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)-25)) ? (989151486U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_96 [i_30] [i_30] [i_30] [i_30])))))));
                            }
                        } 
                    } 
                    var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) arr_1 [i_31 + 1] [i_31 + 2])) - (58306)))));
                    var_57 = arr_17 [i_30] [i_30] [(_Bool)1];
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_35 = 0; i_35 < 12; i_35 += 4) 
        {
            for (signed char i_36 = 2; i_36 < 10; i_36 += 4) 
            {
                for (unsigned int i_37 = 1; i_37 < 11; i_37 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_38 = 1; i_38 < 11; i_38 += 3) 
                        {
                            var_58 = ((/* implicit */unsigned long long int) ((arr_71 [i_37 - 1] [i_37] [i_37 - 1] [i_37 - 1] [i_37 + 1] [i_37 - 1]) ? (arr_129 [i_37 - 1] [i_37] [i_37] [i_37] [i_37 + 1] [i_37]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_37 - 1] [i_37 - 1] [i_37] [i_37] [i_37 + 1] [i_37])))));
                            var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) ((arr_67 [i_37] [i_36 - 2] [i_36]) % (arr_129 [i_30] [i_36 + 1] [i_36 - 1] [i_36 + 1] [i_36 - 1] [i_30]))))));
                        }
                        arr_130 [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_42 [i_35] [i_35] [i_35] [i_37]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_39 = 1; i_39 < 20; i_39 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_40 = 2; i_40 < 22; i_40 += 4) 
        {
            var_60 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_98 [i_39])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(arr_54 [i_39] [i_40] [i_40 + 1]))))) >> (((max((max((arr_91 [i_39] [i_39] [i_39] [i_39] [i_39]), (((/* implicit */unsigned long long int) arr_57 [i_39] [i_40])))), (((/* implicit */unsigned long long int) arr_46 [i_40 - 2] [i_40 - 1])))) - (9142842075918356107ULL)))));
            var_61 = ((/* implicit */long long int) var_9);
            arr_138 [i_39] [i_39] [i_39] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((_Bool) var_8))), (arr_49 [i_39]))))));
        }
        arr_139 [i_39] [i_39] = ((unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_82 [i_39 + 3] [i_39] [i_39] [i_39]))))), (((unsigned char) var_2))));
        arr_140 [i_39] [i_39] = ((/* implicit */unsigned int) (signed char)25);
        /* LoopNest 2 */
        for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
        {
            for (signed char i_42 = 1; i_42 < 22; i_42 += 4) 
            {
                {
                    arr_148 [i_42] [i_42] = ((/* implicit */int) (((~((+(((/* implicit */int) arr_47 [i_42 + 1])))))) > (((/* implicit */int) ((((unsigned long long int) (signed char)(-127 - 1))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))));
                    var_62 = ((/* implicit */unsigned int) var_18);
                    arr_149 [i_42] = ((/* implicit */signed char) var_7);
                    var_63 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_49 [i_42]))));
                }
            } 
        } 
        var_64 = ((((/* implicit */_Bool) max(((~(422211595U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)228)))))))) ? (((min((2582688113425670939ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-125)), (268435200)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_16)))));
    }
}
