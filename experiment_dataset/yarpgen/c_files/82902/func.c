/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82902
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
    var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1692215045)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_13 &= ((/* implicit */unsigned short) 6781900700019819613LL);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_14 ^= ((/* implicit */unsigned long long int) ((short) ((var_10) || (((/* implicit */_Bool) (-(var_11)))))));
                        arr_11 [i_0] [i_0] [i_2] [(unsigned short)9] = ((/* implicit */signed char) max((var_11), (((/* implicit */long long int) arr_5 [i_0]))));
                    }
                } 
            } 
            var_15 -= ((/* implicit */short) ((long long int) min((arr_9 [i_0 - 3] [i_1] [i_1] [(unsigned short)8]), (((/* implicit */unsigned long long int) var_7)))));
        }
        arr_12 [i_0 - 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1] [i_0 - 3]))))) + ((-(var_3)))));
        arr_13 [i_0] = var_1;
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            arr_16 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) max((-14), (((/* implicit */int) var_0))))))));
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((min((arr_15 [i_0] [i_0 + 2] [i_5 - 1]), (arr_15 [i_0] [i_0 - 1] [i_5 + 2]))), (max((((/* implicit */unsigned char) arr_10 [i_5 + 1] [i_0] [i_5 - 2] [i_5])), (arr_15 [i_0] [i_0 - 2] [i_5 + 3])))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (((-(-6781900700019819610LL))) != (((6781900700019819586LL) / (-6781900700019819608LL)))))) >> (((/* implicit */int) ((-6LL) > (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) arr_3 [i_0] [i_5] [i_0]))))))))));
                        var_18 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) / (arr_2 [i_0] [i_0 + 1] [i_5 - 2])))));
                    }
                } 
            } 
            arr_21 [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((749517177) / (((/* implicit */int) (unsigned char)131)))) & (((/* implicit */int) arr_0 [i_0 + 1])))));
        }
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            arr_24 [i_0 + 2] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0 - 2])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 2) 
                {
                    for (int i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_19 -= ((/* implicit */short) ((((/* implicit */int) (short)11835)) << (((((var_3) + (1381354650402568411LL))) - (17LL)))));
                            arr_32 [i_0 - 3] [16] [(_Bool)1] [i_9 - 2] [i_10 + 1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9 + 1] [i_10 + 1] [i_0 - 4]))) / (arr_1 [i_0])));
                            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) 16300005943409127287ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_11 = 1; i_11 < 18; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 3; i_12 < 18; i_12 += 2) 
                    {
                        arr_37 [i_0 + 1] [i_0] [i_8] [i_11] [(unsigned char)18] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_11 - 1] [i_11 - 1] [i_8] [i_12 + 2] [i_12 - 2] [i_7] [(short)0]))));
                        var_21 = ((/* implicit */int) var_6);
                        arr_38 [i_11 - 1] [i_11 + 1] [i_11] [i_0] [i_11] [i_11] = ((/* implicit */unsigned long long int) (((+(var_5))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_12 + 1] [i_12 + 2])))));
                        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -6781900700019819620LL)) & (9496705296021486407ULL)));
                    }
                    var_23 |= ((int) ((-5861608207523384161LL) & (var_3)));
                    arr_39 [i_0 - 4] [i_7] [i_8] [i_0] [i_11 + 1] = ((/* implicit */unsigned int) ((signed char) (-(var_7))));
                    var_24 = ((/* implicit */unsigned char) ((_Bool) 3488137043497894266ULL));
                }
                arr_40 [i_0] [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)9] [i_7]))) | (var_3)));
            }
            for (int i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                arr_44 [i_7] [i_13] [i_0] = ((/* implicit */unsigned short) (~(var_8)));
                var_25 = ((/* implicit */unsigned char) arr_8 [i_13] [i_0 + 1]);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    for (unsigned short i_16 = 1; i_16 < 19; i_16 += 2) 
                    {
                        {
                            var_26 = var_3;
                            arr_53 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) + (2696121599U)))) || (((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0 - 1]))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) (~(arr_20 [i_14])));
            }
            var_28 |= ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)14)) / (((/* implicit */int) (short)-22478)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) & (arr_8 [i_7] [i_7])))))))));
        }
        arr_54 [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_41 [i_0 - 2] [i_0] [i_0] [i_0 - 2]))))));
    }
    for (short i_17 = 1; i_17 < 11; i_17 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_18 = 0; i_18 < 13; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned short i_20 = 0; i_20 < 13; i_20 += 3) 
                {
                    {
                        arr_66 [i_17] [i_17] [i_18] [i_19] [(unsigned char)10] [i_20] &= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)13399))));
                        var_29 ^= ((/* implicit */unsigned long long int) var_0);
                        arr_67 [i_17] [i_18] [(unsigned short)0] [i_20] = ((/* implicit */unsigned int) ((unsigned long long int) -6781900700019819619LL));
                        /* LoopSeq 3 */
                        for (unsigned char i_21 = 0; i_21 < 13; i_21 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) max((var_4), ((((-(4960523945789880151ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17 + 1] [i_17 + 2])))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (~(max((arr_26 [(unsigned short)16] [i_17 - 1] [i_17 - 1]), (((/* implicit */long long int) (unsigned char)7)))))))));
                            arr_71 [i_18] [i_17] = ((/* implicit */unsigned long long int) arr_68 [i_17 + 1] [i_18] [i_17 + 1] [i_20] [(signed char)2] [i_21]);
                            arr_72 [i_17] [i_18] [i_19] = ((/* implicit */unsigned long long int) arr_52 [i_17 + 1] [i_17] [i_17 + 2] [i_17]);
                            var_32 = ((/* implicit */short) ((unsigned short) arr_8 [i_19] [i_21]));
                        }
                        for (unsigned char i_22 = 0; i_22 < 13; i_22 += 3) /* same iter space */
                        {
                            arr_75 [i_17] [i_18] [(unsigned short)0] [i_19] [i_18] [(unsigned short)0] = ((/* implicit */signed char) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_62 [i_17] [11] [i_17])))))))));
                            var_33 = (+(max((((/* implicit */unsigned int) arr_70 [i_17] [i_18] [i_17] [i_17 + 2] [i_22] [(unsigned short)4] [(unsigned short)4])), (var_7))));
                            arr_76 [i_17] [i_17 - 1] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */int) var_8);
                        }
                        /* vectorizable */
                        for (unsigned char i_23 = 0; i_23 < 13; i_23 += 3) /* same iter space */
                        {
                            arr_79 [i_17] [i_17] [i_17] [i_17] [i_23] = ((/* implicit */unsigned long long int) ((unsigned short) arr_27 [i_17 + 1] [i_17] [0U]));
                            var_34 = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) arr_51 [i_17] [i_18] [i_19] [i_23] [i_17])))));
                            var_35 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_52 [i_17 + 1] [i_17 + 1] [i_17 + 1] [(unsigned char)12]))));
                        }
                    }
                } 
            } 
            arr_80 [10] &= arr_27 [i_18] [(unsigned short)4] [i_17];
        }
        for (unsigned char i_24 = 0; i_24 < 13; i_24 += 2) 
        {
            arr_83 [i_17] = ((/* implicit */int) arr_64 [i_17 + 1] [i_17 + 1] [i_17 + 2]);
            arr_84 [i_17] [i_24] [i_24] = ((/* implicit */long long int) arr_49 [i_17] [i_17]);
        }
        for (short i_25 = 1; i_25 < 12; i_25 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_26 = 0; i_26 < 13; i_26 += 2) 
            {
                for (unsigned short i_27 = 2; i_27 < 10; i_27 += 2) 
                {
                    for (long long int i_28 = 1; i_28 < 11; i_28 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) -1956193322);
                            var_37 = ((/* implicit */unsigned int) ((min((var_4), (arr_1 [i_17]))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) / (14958607030211657355ULL)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_29 = 0; i_29 < 13; i_29 += 4) 
            {
                for (int i_30 = 3; i_30 < 11; i_30 += 2) 
                {
                    {
                        arr_99 [i_17] [i_25] [i_29] [i_17] = ((/* implicit */unsigned char) var_9);
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & ((+(-880224017))))))));
                        arr_100 [i_30] [i_17] [i_17] = ((/* implicit */signed char) ((((((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)65531)))) + (2147483647))) << (((((((/* implicit */int) (unsigned char)7)) % (273858612))) - (7))))) == (((/* implicit */int) ((_Bool) arr_94 [i_29] [i_17 + 2] [i_29] [i_30] [i_30])))));
                    }
                } 
            } 
            var_39 ^= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_33 [i_17 - 1] [i_25] [i_25 + 1] [i_17 + 1] [i_17] [i_17 - 1])))));
        }
        arr_101 [i_17] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_10)), (var_3))), ((+(max((((/* implicit */long long int) var_5)), (var_8)))))));
    }
    for (unsigned int i_31 = 0; i_31 < 22; i_31 += 4) 
    {
        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((max((var_5), (var_7))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))) + (max((((/* implicit */unsigned long long int) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253)))))), (max((((/* implicit */unsigned long long int) (unsigned char)148)), (var_6))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_32 = 0; i_32 < 22; i_32 += 3) 
        {
            for (unsigned char i_33 = 3; i_33 < 20; i_33 += 1) 
            {
                {
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) var_4))));
                    /* LoopSeq 1 */
                    for (int i_34 = 0; i_34 < 22; i_34 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_35 = 1; i_35 < 20; i_35 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_103 [i_32] [i_32]))));
                            arr_116 [i_31] [i_32] [i_31] [i_33 + 2] [i_34] [i_35] [i_35] = ((/* implicit */unsigned long long int) (-(var_5)));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_113 [i_33 + 2] [i_35] [i_35 + 1] [i_32] [i_35])) || (((/* implicit */_Bool) ((unsigned char) var_7)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_36 = 4; i_36 < 19; i_36 += 2) 
                        {
                            var_44 = ((/* implicit */short) ((int) (short)21));
                            var_45 ^= ((/* implicit */unsigned short) var_9);
                        }
                        for (int i_37 = 0; i_37 < 22; i_37 += 3) 
                        {
                            arr_121 [i_34] [i_34] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_112 [i_31] [i_32] [i_31] [i_32] [i_31] [i_34])), (var_5)))) == (((var_3) ^ (((/* implicit */long long int) var_5))))))), (max((((/* implicit */long long int) arr_119 [i_31] [i_33 - 3] [i_34] [i_34] [i_34] [14ULL])), (var_8)))));
                            var_46 = ((/* implicit */long long int) max((max(((short)23752), (((/* implicit */short) arr_109 [i_33 + 1] [i_37] [i_32] [i_34])))), (max((arr_120 [i_31] [i_33 - 1] [i_32] [i_34] [i_37] [i_34]), (((/* implicit */short) arr_112 [i_31] [i_33 - 3] [i_33] [i_34] [i_32] [i_34]))))));
                            arr_122 [i_37] [i_37] [i_37] [i_32] [i_37] = ((/* implicit */short) arr_112 [i_31] [(signed char)5] [i_33] [i_31] [i_32] [i_31]);
                            var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) var_9))));
                        }
                        var_48 += ((/* implicit */signed char) 10142572655636979278ULL);
                        var_49 ^= ((/* implicit */int) arr_117 [i_31] [i_32] [i_33] [i_32] [i_31]);
                        /* LoopSeq 3 */
                        for (long long int i_38 = 1; i_38 < 19; i_38 += 2) 
                        {
                            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-3)) * (((/* implicit */int) arr_103 [i_31] [i_33 + 2]))))) || (((/* implicit */_Bool) var_8))));
                            var_51 -= ((/* implicit */short) var_1);
                            var_52 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)6)))) && (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) == (((((/* implicit */unsigned long long int) arr_123 [i_33 + 2] [i_32] [i_32] [i_32] [0ULL])) | (var_6)))))));
                        }
                        for (signed char i_39 = 0; i_39 < 22; i_39 += 2) 
                        {
                            arr_128 [i_31] [i_31] [i_31] [i_31] [i_31] [i_32] = (~(arr_127 [i_33 + 2] [i_33] [i_32] [i_33] [i_33 + 2] [i_33 + 1]));
                            var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3083534413U)))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) / (var_8)))))) && (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6))))));
                        }
                        for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
                        {
                            var_54 = ((/* implicit */long long int) arr_131 [i_31] [i_33 + 1]);
                            var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_8) | (arr_105 [i_31]))), (((/* implicit */long long int) ((int) 3083534409U)))))) || (((/* implicit */_Bool) (-((+(((/* implicit */int) arr_131 [i_33] [21ULL]))))))))))));
                        }
                    }
                }
            } 
        } 
        var_56 = ((/* implicit */_Bool) ((max((min((((/* implicit */long long int) (unsigned short)59092)), (var_8))), (((/* implicit */long long int) arr_123 [i_31] [i_31] [i_31] [i_31] [i_31])))) & (((/* implicit */long long int) min((arr_129 [i_31] [i_31] [i_31]), (arr_129 [i_31] [i_31] [i_31]))))));
        /* LoopSeq 1 */
        for (int i_41 = 1; i_41 < 21; i_41 += 1) 
        {
            var_57 -= ((/* implicit */unsigned char) (((-(arr_113 [i_41 - 1] [i_41 + 1] [i_41] [i_31] [i_41]))) | (((/* implicit */int) max((((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_111 [i_31] [i_31] [i_31] [i_41] [i_41] [i_31]))))), (var_10))))));
            var_58 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) var_2))), (((var_6) - (var_6)))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (var_5))))) != (arr_118 [i_41] [i_31] [i_41 + 1] [i_41 + 1] [i_41])))));
        }
        /* LoopNest 3 */
        for (long long int i_42 = 1; i_42 < 21; i_42 += 4) 
        {
            for (unsigned char i_43 = 0; i_43 < 22; i_43 += 3) 
            {
                for (signed char i_44 = 2; i_44 < 18; i_44 += 2) 
                {
                    {
                        arr_144 [4] [i_42] [i_42] [i_42] [i_42] [i_42] = ((/* implicit */int) var_4);
                        arr_145 [0ULL] [i_42] [i_43] [i_44] [i_44] = ((/* implicit */unsigned short) arr_103 [i_31] [i_31]);
                    }
                } 
            } 
        } 
    }
}
