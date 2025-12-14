/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58510
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-95)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) - (1)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = arr_0 [i_0 - 1];
                    var_18 += ((/* implicit */signed char) (_Bool)0);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((((/* implicit */int) ((((18446744073709551615ULL) * (arr_14 [i_3]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0))))))), ((~(var_0)))));
        var_20 |= ((/* implicit */unsigned long long int) ((int) var_11));
        var_21 += ((/* implicit */unsigned short) var_15);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_22 &= ((((/* implicit */_Bool) (short)-14737)) ? (arr_14 [(unsigned short)14]) : (arr_14 [(short)4]));
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
        {
            var_23 &= ((/* implicit */unsigned char) (~(arr_16 [10U])));
            var_24 &= ((/* implicit */short) ((arr_14 [(unsigned char)10]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8031390607586265493ULL)) && (((/* implicit */_Bool) (signed char)-29))))))));
            /* LoopSeq 1 */
            for (short i_6 = 3; i_6 < 18; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_25 &= ((/* implicit */short) var_8);
                        arr_28 [i_4] [i_4] [(_Bool)1] [i_7] [(signed char)3] = ((short) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))));
                        arr_29 [i_7] [i_4] [i_6] = ((/* implicit */long long int) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4] [i_6] [i_6] [i_6] [i_8 - 1])))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)115)) <= (((/* implicit */int) arr_31 [i_4] [i_4] [i_6 - 1] [i_6 - 2] [i_4] [i_9 + 1]))));
                        var_27 = ((/* implicit */int) ((short) arr_16 [i_4]));
                        arr_34 [i_4] [12U] [i_9] = 8031390607586265474ULL;
                    }
                    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_4] [i_10 + 1] [i_6] [2] [i_10 + 1] = ((/* implicit */short) 6104491691303219433LL);
                        var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_10 - 1] [i_5] [i_7] [i_7] [i_5] [i_6 - 3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))));
                        arr_39 [i_4] [i_5] [i_4] [i_7] [(signed char)16] [i_6] [i_10 - 1] |= ((/* implicit */signed char) ((arr_18 [i_4] [i_5] [i_6]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) var_0)))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((long long int) arr_36 [16])))));
                    }
                    var_30 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6 - 1] [i_4])) ? (arr_14 [i_4]) : (((/* implicit */unsigned long long int) arr_19 [i_6 + 2] [i_4]))));
                }
                /* LoopNest 2 */
                for (short i_11 = 2; i_11 < 18; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_32 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)115))));
                            var_33 += ((/* implicit */unsigned char) ((signed char) arr_24 [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_6 + 2] [i_6 + 2]));
                        }
                    } 
                } 
                var_34 = ((/* implicit */short) 18446744073709551613ULL);
                arr_45 [i_4] [i_4] = ((/* implicit */signed char) var_1);
            }
            arr_46 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 8031390607586265474ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6315690488136014303LL)));
        }
        for (short i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 2) 
            {
                var_35 = ((/* implicit */long long int) ((signed char) (short)26807));
                var_36 -= ((/* implicit */unsigned long long int) var_15);
                /* LoopSeq 2 */
                for (int i_15 = 1; i_15 < 19; i_15 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */int) var_12);
                    arr_56 [i_4] [i_13] [i_14] [i_15] = ((/* implicit */_Bool) ((short) var_7));
                    arr_57 [i_4] [i_14 - 1] [(short)14] &= ((/* implicit */unsigned short) (((+(-6315690488136014304LL))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5))))));
                    var_38 += ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) var_5)))));
                }
                for (int i_16 = 1; i_16 < 19; i_16 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_14 + 1] [i_16 + 1] [i_16 - 1] [i_16 - 1]))) > (((long long int) var_4))));
                    var_40 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [0U] [6] [i_4] [i_14 + 1] [i_14 + 1] [i_16 - 1]))));
                }
                arr_60 [i_4] [i_13] [i_14] = ((/* implicit */unsigned short) var_4);
            }
            for (signed char i_17 = 2; i_17 < 17; i_17 += 3) 
            {
                var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((unsigned long long int) arr_40 [i_17 - 2] [(signed char)6] [i_17 - 2])))));
                var_42 |= (-(((/* implicit */int) arr_32 [8U] [i_17 + 2])));
            }
            for (short i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                arr_66 [i_18] [i_4] [i_18] |= arr_20 [i_4] [(short)8] [i_18];
                var_43 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_18] [i_13])) << (((((((/* implicit */int) (short)-32112)) + (32141))) - (19)))));
                var_44 ^= ((/* implicit */short) arr_63 [(short)19] [i_18] [i_4] [i_4]);
                var_45 = ((/* implicit */long long int) ((((((/* implicit */int) arr_53 [i_18] [i_4] [i_4])) == (((/* implicit */int) var_9)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) 
            {
                arr_70 [(signed char)2] [i_13] [i_19] [i_19] &= arr_54 [i_4] [i_13];
                var_46 = ((/* implicit */unsigned short) -7266428659404485429LL);
            }
            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((var_0) / (2020637938))))));
            var_48 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-26793)) ? (((/* implicit */int) var_9)) : (-351418033))) >= (351418046)));
            var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) 7598333833265684961LL))));
        }
        for (long long int i_20 = 0; i_20 < 20; i_20 += 1) 
        {
            arr_73 [i_4] = ((/* implicit */short) (-(((int) -693586264))));
            /* LoopNest 2 */
            for (short i_21 = 4; i_21 < 17; i_21 += 3) 
            {
                for (unsigned short i_22 = 2; i_22 < 19; i_22 += 3) 
                {
                    {
                        var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) (~(((/* implicit */int) arr_65 [8LL])))))));
                        var_51 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                        arr_82 [i_4] [i_4] [i_21] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
                        arr_83 [i_4] [i_20] [i_21] [i_4] [i_22] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (((var_8) % (((/* implicit */long long int) 1600603989U))))));
                        var_52 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) arr_21 [i_21 + 3] [i_22 - 1] [i_22 - 2] [i_22 - 1]))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned char i_23 = 0; i_23 < 20; i_23 += 1) /* same iter space */
    {
        arr_87 [i_23] = ((/* implicit */long long int) var_5);
        arr_88 [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3173121586308567333LL)) ? (arr_14 [2LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_50 [i_23] [(signed char)14] [i_23]))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
    {
        var_53 = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned short) (short)127))) ? (((int) arr_75 [i_24] [i_24] [i_24])) : (((/* implicit */int) (short)-26810)))), (((/* implicit */int) arr_81 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]))));
        arr_91 [i_24] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) (-(2095282938U))))), (arr_79 [18LL] [i_24] [(_Bool)1] [18LL])));
    }
    /* vectorizable */
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
    {
        var_54 &= ((/* implicit */long long int) ((unsigned int) ((short) (unsigned short)28100)));
        var_55 = ((/* implicit */unsigned long long int) ((unsigned char) var_4));
        var_56 -= ((/* implicit */signed char) (~((-(((/* implicit */int) var_16))))));
        var_57 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)8955))));
        /* LoopNest 2 */
        for (unsigned short i_26 = 2; i_26 < 12; i_26 += 4) 
        {
            for (unsigned char i_27 = 0; i_27 < 13; i_27 += 2) 
            {
                {
                    arr_101 [i_27] [i_26 - 2] [i_25] [i_25] |= ((/* implicit */short) arr_15 [i_26] [i_26]);
                    var_58 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)0)) >> (((2095282943U) - (2095282935U)))))));
                }
            } 
        } 
    }
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
    {
        var_59 = ((/* implicit */signed char) ((((((long long int) var_4)) + (9223372036854775807LL))) >> ((+(((/* implicit */int) arr_0 [i_28]))))));
        /* LoopSeq 1 */
        for (short i_29 = 0; i_29 < 13; i_29 += 1) 
        {
            var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) ((((/* implicit */_Bool) min((2199684352U), (((/* implicit */unsigned int) arr_78 [i_28] [i_28] [i_29] [i_29] [i_29]))))) ? (((((/* implicit */_Bool) ((var_10) << (((/* implicit */int) var_12))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_5)))))) : (min(((-(((/* implicit */int) arr_47 [4LL])))), (((var_1) ^ (((/* implicit */int) (unsigned char)106)))))))))));
            var_61 = ((/* implicit */unsigned char) max((6907193512972607845LL), (((/* implicit */long long int) ((((((/* implicit */int) (short)-9397)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
            /* LoopSeq 1 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                arr_109 [(short)0] [i_29] [i_29] [i_28] = ((/* implicit */_Bool) (short)17225);
                var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) var_2))));
                arr_110 [i_28] = ((/* implicit */signed char) (+(max((351418023), ((~(((/* implicit */int) (signed char)-34))))))));
                arr_111 [i_28] [i_28] = ((/* implicit */unsigned int) ((arr_41 [i_28] [i_29] [i_29] [i_28] [i_30]) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_28]))) < (2199684357U)))), (min((var_5), (((/* implicit */unsigned short) (unsigned char)30))))))))));
                var_63 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((long long int) 8191))) : (((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (arr_74 [i_28] [i_28] [i_28]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((14672553346750800224ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16352)))))))))));
            }
            var_64 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))));
        }
    }
    var_65 = ((/* implicit */int) (_Bool)1);
    var_66 = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) var_11))) / (((/* implicit */int) var_6)))) & ((~(((/* implicit */int) var_4))))));
    var_67 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) / (((/* implicit */int) ((short) var_8)))));
}
