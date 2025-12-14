/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64538
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
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-8079))))), (1300355652223031330ULL)));
    var_14 = ((/* implicit */signed char) max((3431195907U), (((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_10))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) | (var_1)))) ? ((-(arr_0 [i_0]))) : (min((((/* implicit */unsigned long long int) (unsigned short)32766)), (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned long long int) -6765734060583016575LL)) : (1300355652223031330ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [6LL] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                                arr_15 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)56)))) == ((+(((((var_10) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_6 [i_0] [i_0] [2] [i_4])) - (127)))))))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1152780767118491648LL), (var_11)))) ? (((((/* implicit */_Bool) (short)0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)4018), ((unsigned short)65535)))))))) ? (((((/* implicit */_Bool) (unsigned short)3968)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1022))) : (-323995851774431128LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1]) != (((/* implicit */unsigned long long int) arr_4 [i_3 + 1] [i_3 - 1])))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3072)) ? (((/* implicit */int) (short)-3112)) : (723059404)));
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_1]))) : (var_5)))) ? ((-(1023ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(var_2)))), (((long long int) (short)-3100))))));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) <= ((+(1463220140137328151ULL))));
                }
            } 
        } 
        arr_21 [i_0] = (((_Bool)1) ? (max((min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 2931092062U)))), (((/* implicit */unsigned long long int) var_10)))) : (arr_8 [i_0] [5ULL] [i_0] [i_0] [5ULL] [i_0]));
        var_19 = ((/* implicit */int) ((unsigned int) (-((-(((/* implicit */int) arr_3 [i_0] [16] [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 8; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (unsigned char)48))));
                    var_21 = ((/* implicit */unsigned long long int) arr_19 [i_7 + 3] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_8] [i_7]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_11 = 1; i_11 < 7; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    for (unsigned int i_13 = 1; i_13 < 10; i_13 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                            var_23 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_7] [i_7 + 1]))));
                            var_24 = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) arr_6 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 3]);
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_10] [i_14] [i_15]))));
                            arr_47 [i_7] [i_7] = ((/* implicit */unsigned short) (+(arr_0 [i_7])));
                            var_27 = ((/* implicit */unsigned short) 1019ULL);
                        }
                        for (short i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            arr_50 [i_15] [i_15] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_38 [i_14] [i_14] [0ULL]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6)))) : (((unsigned int) arr_3 [i_7] [(signed char)17] [i_17]))));
                            var_28 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (2894603351082858511LL)))) ? (arr_48 [i_7] [i_7] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (274877906943LL) : (((/* implicit */long long int) var_4))))));
                        }
                        for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) 1023ULL))));
                            var_30 = ((/* implicit */unsigned int) ((short) var_5));
                            var_31 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7])))) ? ((+(var_12))) : (var_1)));
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (-(((1152780767118491646LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44))))))))));
                        }
                        var_33 = (~(((/* implicit */int) ((unsigned char) 3838238212U))));
                    }
                } 
            } 
        }
    }
    for (long long int i_19 = 0; i_19 < 23; i_19 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_20 = 0; i_20 < 23; i_20 += 4) 
        {
            arr_58 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] = ((/* implicit */long long int) ((499873646) >= (((/* implicit */int) (unsigned short)4095))));
            /* LoopSeq 3 */
            for (unsigned long long int i_21 = 1; i_21 < 21; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    for (unsigned short i_23 = 0; i_23 < 23; i_23 += 2) 
                    {
                        {
                            arr_65 [i_21] [i_20] [i_21] [i_21] [i_21 + 1] [i_22] [i_23] = ((((/* implicit */long long int) arr_63 [i_19] [i_19] [i_20] [i_21 - 1] [i_22] [i_22] [i_23])) - ((~(var_10))));
                            var_34 = (+(arr_63 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]));
                        }
                    } 
                } 
                var_35 -= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-7))));
                arr_66 [i_21] = (-(arr_62 [i_19] [i_20] [i_21]));
            }
            for (unsigned char i_24 = 0; i_24 < 23; i_24 += 4) 
            {
                var_36 = ((/* implicit */unsigned long long int) (-(arr_63 [i_24] [(signed char)0] [i_20] [i_20] [i_19] [i_19] [i_19])));
                arr_71 [i_19] [i_20] [i_24] [i_24] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 23; i_25 += 1) 
                {
                    for (unsigned short i_26 = 0; i_26 < 23; i_26 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9251)) ? (67108832U) : (1006632960U)));
                            var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-8384))));
                            var_39 = ((/* implicit */int) (~(arr_74 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
                            var_40 = var_2;
                            arr_79 [i_19] [i_20] [i_19] [i_25] [i_26] = ((/* implicit */unsigned int) arr_67 [i_25] [i_25] [i_25] [5U]);
                        }
                    } 
                } 
                var_41 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(1883864612))))));
            }
            for (unsigned short i_27 = 3; i_27 < 22; i_27 += 4) 
            {
                arr_83 [i_19] [i_19] [i_19] = ((/* implicit */long long int) ((int) var_7));
                var_42 = ((((/* implicit */int) arr_61 [i_27 + 1] [i_27 + 1] [i_27] [i_19])) / (((/* implicit */int) arr_60 [i_27 - 1] [i_27 - 2] [i_27 - 2] [i_27 - 2])));
            }
        }
        /* LoopSeq 3 */
        for (long long int i_28 = 3; i_28 < 20; i_28 += 4) 
        {
            /* LoopSeq 4 */
            for (long long int i_29 = 0; i_29 < 23; i_29 += 2) 
            {
                var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_4))))));
                /* LoopSeq 1 */
                for (short i_30 = 0; i_30 < 23; i_30 += 3) 
                {
                    var_44 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)39)), ((short)-7621)))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_78 [i_19] [i_28 + 2] [i_29] [i_30] [i_28 + 2] [i_19]), (((/* implicit */short) (_Bool)1)))))))) > (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) 6345634443964577686LL))), (max((var_0), (var_11))))))));
                    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) arr_64 [i_28] [i_28] [i_28 - 1] [i_28] [12LL] [i_28] [i_28 - 2])) + (arr_73 [i_28] [i_28 + 3] [i_28 - 2] [i_28 + 3] [12] [i_28]))), (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) arr_87 [i_28] [i_19] [i_28 - 1])))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_31 = 0; i_31 < 23; i_31 += 1) 
                {
                    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1426144510793972089ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_32 = 0; i_32 < 23; i_32 += 2) /* same iter space */
                    {
                        arr_97 [i_19] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)32))));
                        arr_98 [i_28] [i_28 - 2] [i_28] [i_28] [i_28] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) / (18446744073709551615ULL));
                        var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) (+(567193907U))))));
                    }
                    for (unsigned int i_33 = 0; i_33 < 23; i_33 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */short) var_9);
                        arr_103 [i_28] [i_28] [i_28] [i_28 - 1] = ((/* implicit */short) ((var_12) | (16616064289701667349ULL)));
                    }
                }
                arr_104 [i_19] [i_28] [i_19] = ((/* implicit */signed char) -4437089518867085302LL);
            }
            /* vectorizable */
            for (unsigned int i_34 = 4; i_34 < 22; i_34 += 3) 
            {
                arr_107 [i_19] [i_28] [i_34] = ((/* implicit */unsigned int) (-(arr_57 [i_34 - 4])));
                arr_108 [i_28] = ((/* implicit */int) arr_84 [i_28]);
            }
            for (unsigned short i_35 = 2; i_35 < 22; i_35 += 2) 
            {
                arr_112 [i_19] [i_28] [i_35 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (short)1024)), (17020599562915579519ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_19] [(signed char)19] [9LL] [9LL])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)1010))))) : (arr_63 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
                var_49 = ((/* implicit */short) var_12);
                var_50 = ((/* implicit */long long int) ((max((((/* implicit */long long int) arr_110 [i_28 - 1] [i_28] [i_35 + 1])), (var_10))) >= (min((max((var_9), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((unsigned int) 527165373912574734LL)))))));
                arr_113 [i_19] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3369413670U)) ? (arr_105 [i_35 - 2] [i_28 - 1]) : (arr_105 [i_35 + 1] [i_28 - 2])))) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (5ULL))), (((/* implicit */unsigned long long int) min(((short)-1), (arr_111 [i_28] [i_28] [i_28])))))) : (((/* implicit */unsigned long long int) (-(((long long int) (_Bool)1)))))));
                var_51 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_91 [i_19] [i_19] [3] [i_19])) ? (((/* implicit */int) arr_88 [i_35] [i_35] [i_28] [i_35])) : ((~(((/* implicit */int) arr_56 [i_19] [(_Bool)1] [(_Bool)1]))))));
            }
            for (signed char i_36 = 1; i_36 < 22; i_36 += 1) 
            {
                arr_116 [10U] [i_28] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_81 [i_36] [(unsigned short)10] [i_36 - 1] [i_36 - 1]))))) ? (((max((var_0), (((/* implicit */long long int) arr_105 [1ULL] [i_19])))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_85 [i_28] [i_28] [i_28]))))))) : (((/* implicit */long long int) ((arr_63 [i_36 - 1] [i_36] [i_36] [i_36] [18ULL] [18ULL] [18ULL]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_19] [i_28 + 1] [i_36 - 1]))))))));
                /* LoopNest 2 */
                for (long long int i_37 = 0; i_37 < 23; i_37 += 2) 
                {
                    for (long long int i_38 = 0; i_38 < 23; i_38 += 4) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_70 [i_19] [i_28])) ? (((/* implicit */int) arr_70 [i_19] [i_19])) : (((/* implicit */int) arr_70 [i_19] [i_19])))))))));
                            arr_122 [i_28] [i_36] [i_28] = ((((/* implicit */_Bool) min((((var_8) - (var_1))), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */long long int) (+(arr_67 [i_36 - 1] [i_28 + 3] [i_37] [i_28 + 3])))) : ((-(((9223372036854513664LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-20472))))))));
                            var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)120)) % (268435455)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-9)), ((~(var_9)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 31)) ? (((/* implicit */int) (short)-22803)) : (((/* implicit */int) (short)-30344))))), (18446744073709551610ULL))))))));
                            arr_123 [i_28] [i_28] [i_28 + 3] [i_28] [i_28 - 3] [i_28] [i_28] = (!(var_2));
                            arr_124 [i_19] [i_19] [i_19] [i_19] [i_28] [6ULL] [i_19] = ((/* implicit */unsigned short) max((((unsigned long long int) 233806069306193175LL)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (arr_76 [i_19] [i_28] [(signed char)15] [i_37] [i_28])))))))));
                        }
                    } 
                } 
            }
            var_54 = ((/* implicit */signed char) (-(((((var_8) * (var_12))) / (((/* implicit */unsigned long long int) arr_63 [i_19] [i_19] [i_19] [5LL] [i_28] [i_28] [i_28]))))));
        }
        for (unsigned short i_39 = 0; i_39 < 23; i_39 += 1) /* same iter space */
        {
            var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) max((((((/* implicit */_Bool) var_8)) ? (arr_53 [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_92 [i_19] [i_39]))))), (min((arr_53 [i_39]), (((/* implicit */long long int) arr_100 [i_19] [i_39] [i_19] [i_39] [i_19])))))))));
            arr_129 [i_39] = ((/* implicit */signed char) var_2);
            arr_130 [i_39] [i_39] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_39])) || (((/* implicit */_Bool) min((arr_53 [i_19]), (((/* implicit */long long int) arr_70 [i_19] [i_19])))))));
            var_56 = ((unsigned long long int) 13909938556955857599ULL);
            arr_131 [i_39] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_69 [(signed char)16] [(signed char)16] [13LL]))))) ? (arr_109 [i_19] [i_19] [i_19]) : (((17146388421486520286ULL) * (18ULL)))))));
        }
        for (unsigned short i_40 = 0; i_40 < 23; i_40 += 1) /* same iter space */
        {
            var_57 = ((/* implicit */long long int) min(((-(var_5))), (((/* implicit */unsigned long long int) arr_87 [i_19] [i_40] [i_19]))));
            var_58 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) ((int) arr_63 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))))), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
        }
        var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) (+(((arr_99 [i_19] [i_19] [i_19] [i_19] [(signed char)6] [i_19] [i_19]) % (((/* implicit */unsigned int) 1950688767)))))))));
        arr_136 [i_19] |= ((/* implicit */short) (~((~(((int) (unsigned char)54))))));
    }
}
