/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57492
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
    var_20 *= ((/* implicit */unsigned short) var_18);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 25740994U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (11811136089200799992ULL)))) ? (min((((((/* implicit */int) var_15)) + (((/* implicit */int) var_16)))), (((/* implicit */int) var_15)))) : (var_0)));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)38)) >> (((3691172849503741698ULL) - (3691172849503741669ULL)))))))) && (((arr_0 [i_0 + 1]) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))))));
        arr_2 [i_0] = ((/* implicit */short) var_10);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_18) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])))))) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 1])), (var_19))))));
            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) < (((/* implicit */int) var_15))))) != (((/* implicit */int) ((signed char) (short)-18379)))));
            var_25 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) / (9021145733113294279LL)));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_3))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_3] [i_3] [i_4 + 2] [i_2] = var_8;
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((25740994U) < (4015476896U))))) : (((arr_10 [i_0 + 1] [i_0 + 1]) - (arr_10 [i_0 - 1] [i_0 - 1])))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) 2982793389U)) && (((/* implicit */_Bool) 11811136089200799992ULL))));
            var_29 = ((((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_5] [i_0 + 1])) - (var_1));
            var_30 = ((/* implicit */unsigned int) var_1);
        }
    }
    var_31 = ((/* implicit */_Bool) (unsigned char)235);
    /* LoopSeq 4 */
    for (short i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_6]))) ? (var_18) : (((/* implicit */unsigned long long int) ((2147483641) * (((/* implicit */int) (short)0)))))))) ? (((((/* implicit */int) (unsigned char)49)) * ((+(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((short) var_7)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 3) 
        {
            var_33 += ((/* implicit */long long int) (-(var_0)));
            var_34 = (!(var_15));
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) 287999958)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_19 [(unsigned short)11] [i_6])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_4))));
            var_36 = ((/* implicit */unsigned char) ((short) arr_19 [i_6] [i_6]));
        }
        for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_9 = 3; i_9 < 23; i_9 += 1) 
            {
                var_37 = ((/* implicit */signed char) ((unsigned long long int) var_15));
                /* LoopNest 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            var_38 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((1312173895U), (((/* implicit */unsigned int) (unsigned char)240))))) >= (((((/* implicit */_Bool) arr_31 [i_9] [i_10] [i_10 - 1] [i_10 - 1] [i_11])) ? (((/* implicit */unsigned long long int) -1)) : (arr_17 [i_9 - 2])))));
                            var_39 = ((/* implicit */long long int) var_11);
                            var_40 = (signed char)13;
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) max((-13), ((+(((/* implicit */int) (signed char)-60)))))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */long long int) max((((/* implicit */int) ((short) -249208708))), (arr_23 [i_6] [i_8] [i_9 - 1])));
                var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1])) ? (((/* implicit */int) arr_35 [i_9 + 2] [i_9 + 2] [i_9] [i_9 - 3])) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_32 [i_9 - 2] [i_9 - 1] [i_9])))))))));
            }
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                var_44 = ((/* implicit */unsigned char) (signed char)-65);
                /* LoopSeq 3 */
                for (long long int i_13 = 2; i_13 < 24; i_13 += 1) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_19)))), (((((/* implicit */int) (unsigned char)192)) | (((/* implicit */int) arr_41 [i_6] [i_8] [i_12] [i_13 - 2] [i_13 - 2]))))));
                    var_46 = ((/* implicit */short) ((max((min((14353948091927934382ULL), (var_5))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))))) - (min((min((((/* implicit */unsigned long long int) var_14)), (var_18))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_19)), (var_0))))))));
                    var_47 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((2046513715U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44483))))))) | ((~(arr_40 [i_6] [i_8] [i_12] [i_13 - 1] [i_13 - 2])))));
                }
                /* vectorizable */
                for (long long int i_14 = 2; i_14 < 24; i_14 += 1) /* same iter space */
                {
                    arr_46 [i_6] [(unsigned short)17] [i_12] [i_6] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) (unsigned char)87))));
                    var_48 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -7943240454186121111LL)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))) << (((arr_18 [i_12] [i_14]) + (5923754179253621972LL)))));
                    var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -2294997853045771690LL))));
                    var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))))));
                    var_51 = ((/* implicit */unsigned short) arr_36 [i_14 - 2] [i_14] [i_14 + 1] [i_14 + 1] [i_14 - 2]);
                }
                for (long long int i_15 = 2; i_15 < 24; i_15 += 1) /* same iter space */
                {
                    var_52 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10112))) > (6635607984508751611ULL)));
                    var_53 |= (~((-(6912434830504688668LL))));
                    arr_50 [i_8] [i_8] [i_6] [10] [i_8] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_41 [(unsigned char)15] [(unsigned char)15] [(unsigned char)15] [i_15 - 2] [i_12]))));
                }
            }
            for (short i_16 = 1; i_16 < 24; i_16 += 4) 
            {
                var_54 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)13006))))), (max((var_18), (((/* implicit */unsigned long long int) arr_39 [(unsigned short)12])))))) >= (((/* implicit */unsigned long long int) var_14))));
                var_55 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_29 [3] [i_8] [i_8] [i_16])))))), ((~(((((/* implicit */_Bool) (unsigned char)0)) ? (0ULL) : (((/* implicit */unsigned long long int) 272678883688448LL))))))));
            }
            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((var_5) >= (5836666089925954213ULL))))) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-104)) != (((/* implicit */int) (short)-17788)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 25; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        {
                            var_57 |= ((/* implicit */short) ((unsigned char) (unsigned char)72));
                            var_58 = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
                        }
                    } 
                } 
                var_59 ^= ((/* implicit */_Bool) var_19);
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        {
                            var_60 = var_17;
                            var_61 = ((/* implicit */unsigned char) (short)-2083);
                            var_62 = ((/* implicit */long long int) (~(((unsigned int) var_14))));
                        }
                    } 
                } 
                var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) (~(arr_43 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                var_64 = ((((/* implicit */unsigned long long int) 0U)) + (10501498345004542490ULL));
            }
            for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_23 = 0; i_23 < 25; i_23 += 1) 
                {
                    var_65 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (unsigned char)255)))));
                    var_66 = ((/* implicit */signed char) max((var_66), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_6] [i_8] [i_22] [i_23] [i_8] [i_6]))) != (arr_63 [i_6] [i_8] [i_6] [i_23] [24LL])))) | (((/* implicit */int) max((arr_65 [i_6] [i_8] [i_22] [i_23]), (var_4)))))))));
                }
                /* LoopSeq 2 */
                for (signed char i_24 = 0; i_24 < 25; i_24 += 1) 
                {
                    var_67 = ((/* implicit */long long int) var_8);
                    var_68 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-104)) == (((/* implicit */int) (short)3085))));
                    var_69 ^= ((/* implicit */_Bool) var_18);
                }
                /* vectorizable */
                for (signed char i_25 = 2; i_25 < 24; i_25 += 3) 
                {
                    var_70 = ((/* implicit */signed char) var_2);
                    var_71 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)2)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_72 = ((((/* implicit */_Bool) arr_60 [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25] [i_25 - 1])) ? (1023) : (((/* implicit */int) (signed char)4)));
                }
                var_73 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_15))))) < (((-1956418295) + (((/* implicit */int) (_Bool)1))))))) + (((/* implicit */int) ((unsigned char) (unsigned char)134)))));
            }
            for (short i_26 = 0; i_26 < 25; i_26 += 1) /* same iter space */
            {
                var_74 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)255))));
                var_75 ^= var_16;
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                    {
                        var_76 = ((/* implicit */short) ((unsigned short) var_14));
                        var_77 = ((/* implicit */short) var_13);
                    }
                    for (long long int i_29 = 1; i_29 < 22; i_29 += 4) 
                    {
                        var_78 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65527)) - (((/* implicit */int) (unsigned char)56))));
                        var_79 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (long long int i_30 = 1; i_30 < 24; i_30 += 4) 
                    {
                        var_80 = ((/* implicit */unsigned short) arr_31 [i_30 + 1] [i_30] [i_30] [i_30] [i_30]);
                        var_81 = ((/* implicit */short) ((unsigned long long int) arr_42 [(_Bool)1] [i_8] [i_8] [i_30 + 1] [i_30] [i_27]));
                    }
                    var_82 = ((/* implicit */int) max((var_82), (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)63))) <= (((((/* implicit */_Bool) arr_84 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))))))));
                    var_83 = ((/* implicit */signed char) (~(var_5)));
                    var_84 ^= ((/* implicit */unsigned long long int) ((short) arr_21 [i_26]));
                }
                /* vectorizable */
                for (unsigned char i_31 = 1; i_31 < 24; i_31 += 4) 
                {
                    var_85 = ((/* implicit */unsigned int) max((var_85), (((/* implicit */unsigned int) ((signed char) (signed char)31)))));
                    var_86 = ((/* implicit */unsigned long long int) max((var_86), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27385)) || (((/* implicit */_Bool) (unsigned char)255)))))));
                    var_87 = ((/* implicit */signed char) arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]);
                    var_88 = ((/* implicit */long long int) max((var_88), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7763)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (signed char)-120))))) & (var_5))))));
                    var_89 = ((/* implicit */short) (-(arr_45 [i_6] [i_8] [i_26] [i_31 - 1])));
                }
                var_90 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) ((unsigned int) var_7)))));
            }
            for (short i_32 = 0; i_32 < 25; i_32 += 1) /* same iter space */
            {
                arr_92 [(unsigned short)9] [i_8] [i_8] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                var_91 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) >= (var_0)))), (((((/* implicit */_Bool) var_3)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned short i_33 = 0; i_33 < 25; i_33 += 1) 
        {
            var_92 = ((((/* implicit */int) (unsigned short)57844)) - (((/* implicit */int) (unsigned char)59)));
            var_93 = ((/* implicit */unsigned long long int) var_17);
        }
    }
    for (short i_34 = 0; i_34 < 25; i_34 += 1) /* same iter space */
    {
        var_94 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_42 [i_34] [i_34] [i_34] [i_34] [i_34] [i_34])), (min((arr_38 [i_34] [i_34] [i_34]), (((/* implicit */unsigned int) var_9))))));
        arr_98 [i_34] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))) ? (((/* implicit */int) ((_Bool) arr_88 [13LL] [13LL] [13LL] [i_34] [13LL] [i_34]))) : (((/* implicit */int) var_12))));
    }
    for (short i_35 = 0; i_35 < 25; i_35 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_36 = 0; i_36 < 25; i_36 += 1) 
        {
            for (unsigned char i_37 = 0; i_37 < 25; i_37 += 3) 
            {
                for (short i_38 = 0; i_38 < 25; i_38 += 3) 
                {
                    {
                        var_95 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (short)-10365))) || (((/* implicit */_Bool) ((unsigned char) arr_62 [(unsigned char)18] [(unsigned char)18] [i_37] [i_37] [i_38] [(signed char)4] [i_38])))));
                        var_96 = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_35] [i_36] [(unsigned short)22] [i_37] [i_37] [i_37])) & (397469994))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_39 = 0; i_39 < 25; i_39 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
            {
                for (unsigned long long int i_41 = 0; i_41 < 25; i_41 += 1) 
                {
                    for (unsigned int i_42 = 0; i_42 < 25; i_42 += 1) 
                    {
                        {
                            var_97 = ((/* implicit */short) var_5);
                            var_98 = var_10;
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_43 = 0; i_43 < 25; i_43 += 4) 
            {
                for (unsigned long long int i_44 = 3; i_44 < 24; i_44 += 4) 
                {
                    for (long long int i_45 = 0; i_45 < 25; i_45 += 4) 
                    {
                        {
                            var_99 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                            var_100 *= ((/* implicit */signed char) arr_87 [i_35] [i_44] [20U] [i_44]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_46 = 1; i_46 < 21; i_46 += 1) 
        {
            var_101 ^= ((/* implicit */unsigned short) ((signed char) arr_22 [i_46 + 4] [i_46] [(unsigned short)0]));
            var_102 += ((/* implicit */unsigned short) arr_74 [i_35] [i_46] [i_46] [i_46 + 4]);
            var_103 = ((/* implicit */signed char) var_1);
            arr_130 [i_46] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))));
        }
        /* vectorizable */
        for (unsigned long long int i_47 = 0; i_47 < 25; i_47 += 1) 
        {
            var_104 += ((signed char) var_5);
            var_105 = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) var_4)))));
            var_106 = ((/* implicit */signed char) (unsigned short)57562);
            var_107 = ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)3968))))) : (((/* implicit */int) var_9)));
            var_108 ^= ((/* implicit */unsigned long long int) var_16);
        }
    }
    /* vectorizable */
    for (short i_48 = 0; i_48 < 25; i_48 += 1) /* same iter space */
    {
        var_109 = ((/* implicit */unsigned int) min((var_109), (((/* implicit */unsigned int) (signed char)-47))));
        var_110 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_69 [i_48] [3LL] [i_48]))));
    }
}
