/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88713
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_0 + 1]));
        var_14 = ((/* implicit */unsigned long long int) ((var_4) % (max((min((var_5), (((/* implicit */unsigned int) arr_2 [i_0])))), (var_3)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_0)) & (arr_4 [i_1]))) >> (((max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_5)))) - (2515896570609732365ULL)))));
        var_15 -= ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_5 [i_1] [i_1]), (((/* implicit */short) var_8)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_16 *= ((/* implicit */unsigned int) (~((+((-(((/* implicit */int) arr_9 [i_2] [i_2]))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_10)), (((arr_4 [i_2]) ^ (var_12))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (~(((((var_7) * (var_7))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4 - 1] [i_4 - 1])))))));
                    var_19 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? (((/* implicit */int) arr_8 [i_4 - 1])) : (((/* implicit */int) arr_8 [i_4 - 1])))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_4 - 1])) : (((/* implicit */int) var_8))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4] [i_4] [i_4 - 1]))))) ? (var_0) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [i_4 - 1] [i_4] [i_4 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1])) + (24259))) - (27))))))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((unsigned long long int) arr_16 [i_5 + 1]));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_5 - 1] [i_7 + 1])) > (((/* implicit */int) arr_20 [i_5 + 1] [i_7 - 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_23 &= ((/* implicit */unsigned long long int) ((2116261288U) >> (((((/* implicit */int) (short)-27614)) + (27624)))));
                                var_24 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_7 - 2] [i_5 - 1])) % (((/* implicit */int) arr_20 [i_7 - 1] [i_5 + 1]))));
                                var_25 = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 += ((/* implicit */unsigned int) arr_23 [i_5] [0ULL] [i_5]);
    }
    for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_11 = 1; i_11 < 13; i_11 += 1) /* same iter space */
        {
            arr_34 [i_11] = ((/* implicit */unsigned long long int) (((+((~(((/* implicit */int) arr_33 [i_10 - 1] [i_11 - 1])))))) >= (((/* implicit */int) min((var_11), (var_9))))));
            arr_35 [i_11] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_8)))))) >> ((+(((/* implicit */int) ((_Bool) var_12)))))));
            arr_36 [i_10 + 1] [i_11] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((var_2), (((/* implicit */unsigned char) arr_29 [i_11 + 1])))))));
        }
        for (short i_12 = 1; i_12 < 13; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_13 = 1; i_13 < 11; i_13 += 3) 
            {
                var_27 -= ((/* implicit */short) arr_19 [10ULL] [0U]);
                var_28 += ((/* implicit */unsigned long long int) (~(max((arr_25 [i_10 + 1] [7ULL] [i_12 - 1] [i_13]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_13 - 1] [(_Bool)1] [i_12] [(_Bool)0] [(_Bool)1] [i_10])))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                var_29 = ((/* implicit */unsigned int) (~(arr_30 [i_10 + 1] [i_12 - 1])));
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    for (unsigned char i_16 = 1; i_16 < 10; i_16 += 4) 
                    {
                        {
                            var_30 = (_Bool)1;
                            var_31 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
                            var_32 = ((unsigned int) arr_31 [i_10 + 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        {
                            arr_56 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_12 + 1] [i_10 - 1] [i_10 + 1])) < (((/* implicit */int) var_10))));
                            var_33 = ((/* implicit */_Bool) var_6);
                            var_34 -= ((/* implicit */unsigned int) (~(arr_28 [i_10 - 1])));
                        }
                    } 
                } 
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) arr_21 [(_Bool)1] [i_14] [i_14]))));
                /* LoopSeq 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_59 [(short)6] [i_19] [i_14] [(short)6] = ((arr_32 [i_12] [i_10 + 1]) | (var_12));
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_36 = ((short) (short)11705);
                        arr_62 [i_20] [i_19] [i_14] [i_12] [i_19] [i_10] = ((/* implicit */unsigned long long int) arr_58 [i_10] [i_12] [i_14] [i_10] [(_Bool)1]);
                        var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_49 [(unsigned char)2] [i_10 - 1] [(unsigned char)2] [i_12 - 1] [i_20]))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        arr_65 [i_19] = ((/* implicit */short) ((((_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_19] [i_19] [i_19]))) : (var_7)));
                        arr_66 [i_19] [i_12] [i_19] [i_12] [i_21] = ((/* implicit */_Bool) var_11);
                        arr_67 [i_19] [i_14] [i_14] [i_14] [i_14] [1ULL] = ((/* implicit */unsigned int) ((_Bool) arr_22 [i_12 - 1] [10U] [i_10 - 1] [i_10 + 1]));
                        var_38 = ((/* implicit */short) (~(((/* implicit */int) (short)7847))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_10] [i_12] [i_12 + 1])) && (((/* implicit */_Bool) arr_22 [i_14] [i_14] [i_12 - 1] [i_12 - 1]))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_40 += ((/* implicit */unsigned long long int) (-(arr_16 [i_12 - 1])));
                        arr_70 [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_46 [i_10 + 1] [i_10 - 1] [i_12 + 1])) << (((/* implicit */int) arr_46 [i_10 - 1] [i_10 + 1] [i_12 - 1]))));
                    }
                }
                for (unsigned char i_23 = 0; i_23 < 14; i_23 += 1) 
                {
                    var_41 = ((/* implicit */short) (+(((/* implicit */int) arr_26 [i_23] [i_12 + 1] [i_10 - 1] [0ULL] [i_10 + 1] [i_10 + 1] [i_10 + 1]))));
                    arr_74 [i_23] [i_14] [i_23] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_71 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1] [i_10 + 1]))));
                    var_42 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [(_Bool)1] [i_10 + 1])) & (((/* implicit */int) arr_17 [(short)8]))));
                }
            }
            var_43 = ((/* implicit */unsigned int) arr_69 [i_12 - 1] [i_12 - 1] [i_12] [i_10] [i_10 + 1] [i_12]);
        }
        var_44 = ((/* implicit */unsigned long long int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 1]))))))));
        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) var_3))));
        /* LoopSeq 4 */
        for (short i_24 = 2; i_24 < 13; i_24 += 1) 
        {
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_24] [i_24 + 1] [i_24 - 2] [i_24] [i_24]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_6)) % (((/* implicit */int) var_8)))) - (((/* implicit */int) arr_26 [(unsigned char)0] [i_24 + 1] [i_24] [i_24] [i_24] [i_24 - 2] [i_24])))))));
            var_47 = ((/* implicit */unsigned int) arr_26 [i_10] [i_10] [i_10 - 1] [i_24] [i_10] [i_10 - 1] [i_10]);
        }
        for (unsigned int i_25 = 3; i_25 < 11; i_25 += 1) 
        {
            var_48 -= ((/* implicit */unsigned int) ((unsigned long long int) (((~(((/* implicit */int) var_6)))) >= (((/* implicit */int) arr_24 [i_10] [4ULL] [i_10] [(unsigned char)2] [i_10] [i_10])))));
            var_49 -= ((/* implicit */short) max(((-(((/* implicit */int) arr_22 [i_10] [i_10] [i_10 + 1] [i_25])))), (((/* implicit */int) var_8))));
        }
        for (unsigned char i_26 = 0; i_26 < 14; i_26 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_27 = 0; i_27 < 14; i_27 += 1) 
            {
                arr_87 [(_Bool)1] [(_Bool)1] |= ((/* implicit */short) arr_78 [i_10 - 1]);
                var_50 = ((arr_41 [i_27] [2ULL] [i_27]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_10] [i_10 + 1]))) == (arr_48 [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10 - 1]))))) : ((~(min((arr_1 [i_27]), (((/* implicit */unsigned long long int) arr_52 [i_27] [i_27] [i_27] [i_10 - 1])))))));
                /* LoopSeq 2 */
                for (unsigned char i_28 = 2; i_28 < 13; i_28 += 3) /* same iter space */
                {
                    var_51 *= ((/* implicit */_Bool) max(((-(2097152U))), (4294967271U)));
                    /* LoopSeq 3 */
                    for (short i_29 = 0; i_29 < 14; i_29 += 3) 
                    {
                        var_52 -= ((/* implicit */unsigned char) ((((((_Bool) (short)0)) ? (((/* implicit */unsigned long long int) arr_92 [i_10 + 1] [i_26] [i_26] [i_27] [i_28 - 1] [i_29])) : (((unsigned long long int) var_0)))) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), ((-(((/* implicit */int) (short)-2154)))))))));
                        var_53 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_63 [i_27] [9ULL] [i_27] [i_27] [i_27]) != (max((((/* implicit */unsigned int) arr_51 [i_29] [i_28])), (arr_78 [i_28])))))), (14084503229981023531ULL)));
                        arr_93 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 + 1] [i_26] = max((4862743255702701423ULL), (((/* implicit */unsigned long long int) var_8)));
                        arr_94 [i_29] [i_29] [i_29] [i_27] [i_26] = ((/* implicit */unsigned int) (short)3072);
                    }
                    for (short i_30 = 2; i_30 < 12; i_30 += 1) 
                    {
                        var_54 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_81 [i_30] [5ULL] [i_26]))));
                        var_55 = var_12;
                    }
                    for (unsigned int i_31 = 0; i_31 < 14; i_31 += 1) 
                    {
                        var_56 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) * (arr_44 [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10]))), (((unsigned int) (+(550937388U))))));
                        var_57 -= ((/* implicit */unsigned long long int) var_5);
                        var_58 = ((/* implicit */_Bool) arr_76 [i_28 - 1] [i_28 - 1] [i_27]);
                        var_59 &= ((/* implicit */short) ((((/* implicit */int) ((arr_40 [i_10 - 1] [i_10] [i_10]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) ((short) var_12)))));
                    }
                }
                for (unsigned char i_32 = 2; i_32 < 13; i_32 += 3) /* same iter space */
                {
                    arr_103 [i_10] [i_10 + 1] [i_10] [i_10] [i_10 + 1] [i_26] = ((/* implicit */unsigned long long int) ((short) ((_Bool) var_11)));
                    var_60 = ((/* implicit */short) min((var_0), (((/* implicit */unsigned int) arr_45 [i_27]))));
                    arr_104 [i_10] [(short)13] [i_26] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_10] [i_26] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_29 [i_27])) : (((/* implicit */int) (unsigned char)124)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                }
                var_61 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_18 [i_10 - 1] [i_10])))));
            }
            /* LoopNest 3 */
            for (unsigned int i_33 = 3; i_33 < 13; i_33 += 3) 
            {
                for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                {
                    for (unsigned long long int i_35 = 2; i_35 < 12; i_35 += 1) 
                    {
                        {
                            arr_113 [i_10] [i_26] = ((/* implicit */short) 15075653989567025757ULL);
                            var_62 = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_82 [3U]))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_36 = 2; i_36 < 11; i_36 += 1) 
        {
            var_63 = ((/* implicit */unsigned long long int) arr_61 [i_10]);
            var_64 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_10 - 1])) | (((/* implicit */int) arr_2 [i_10 - 1]))));
            var_65 = ((/* implicit */unsigned char) min((var_65), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_46 [i_10] [(short)0] [3ULL]))) >> (0U))))));
        }
    }
    for (unsigned long long int i_37 = 1; i_37 < 13; i_37 += 1) /* same iter space */
    {
        arr_119 [i_37 - 1] [i_37] = ((/* implicit */short) min((var_0), (((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned int) (short)17622)), (3276962642U)))))));
        var_66 = ((/* implicit */unsigned int) max((var_66), (((/* implicit */unsigned int) ((unsigned long long int) min((arr_85 [i_37 + 1]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_37] [i_37])))))))))));
        arr_120 [i_37] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (533429144U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), ((short)0))))) : ((+(var_7)))));
        arr_121 [i_37] = ((/* implicit */unsigned long long int) ((unsigned char) var_4));
        var_67 ^= ((/* implicit */unsigned long long int) var_4);
    }
    /* LoopSeq 1 */
    for (short i_38 = 1; i_38 < 15; i_38 += 4) 
    {
        arr_126 [i_38] [i_38] = ((/* implicit */unsigned int) (-(((unsigned long long int) arr_0 [i_38 + 1] [i_38 + 1]))));
        var_68 = ((/* implicit */unsigned char) min((min((arr_1 [i_38 - 1]), (((/* implicit */unsigned long long int) (unsigned char)77)))), (((/* implicit */unsigned long long int) var_9))));
        arr_127 [i_38] = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) arr_2 [i_38 + 1])))));
        /* LoopNest 3 */
        for (unsigned long long int i_39 = 0; i_39 < 16; i_39 += 4) 
        {
            for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
            {
                for (unsigned int i_41 = 2; i_41 < 14; i_41 += 3) 
                {
                    {
                        var_69 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-23873))) & (3085783437U)));
                        var_70 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) var_8)) : ((-((~(((/* implicit */int) var_11))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_42 = 1; i_42 < 1; i_42 += 1) 
                        {
                            arr_137 [i_38 + 1] [i_38 + 1] [0U] [0U] [i_39] [i_41] [i_42 - 1] &= arr_128 [13ULL] [i_40] [i_42 - 1];
                            arr_138 [i_38] [i_39] [i_40] [i_38] [i_41] [i_40] [i_42 - 1] = (+(var_3));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_43 = 1; i_43 < 15; i_43 += 4) 
                        {
                            var_71 = ((/* implicit */unsigned char) var_0);
                            arr_142 [i_38 + 1] [i_43] [(short)9] [i_40] [i_38 + 1] = ((short) var_6);
                        }
                    }
                } 
            } 
        } 
    }
}
