/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69357
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
    var_14 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)42128));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 8; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((_Bool) (short)-17353));
                    var_17 += min((max((var_3), (((/* implicit */unsigned int) arr_5 [i_2 - 4])))), (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) arr_5 [i_2 + 3])) : (((/* implicit */int) arr_5 [i_2 - 2]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_10 [i_0] [i_5 - 1] [i_5] [i_5 - 1])) || (((/* implicit */_Bool) ((short) 18446744073709551594ULL)))))));
                        arr_14 [i_0] [(short)8] [(unsigned short)10] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_12 [(_Bool)1] [i_3] [i_3] [i_3] [i_4] [i_5 + 1]), ((+(var_11))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) ((1843596333U) < (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) != (((/* implicit */int) arr_9 [2LL])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (signed char i_9 = 2; i_9 < 9; i_9 += 2) 
                        {
                            {
                                arr_24 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [i_0] [(unsigned short)7] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */short) arr_23 [i_9 + 2] [(signed char)9] [i_9 + 1] [i_8] [i_8])), (arr_9 [i_0])));
                                arr_25 [(short)10] [(signed char)4] [i_8] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_9 - 2] [(unsigned short)0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [3ULL] [i_0])))))))) : (((/* implicit */int) min((((_Bool) 21ULL)), (arr_7 [i_0]))))));
                                var_20 = ((/* implicit */signed char) ((arr_22 [(unsigned char)9] [(unsigned short)3] [i_7] [i_8] [9]) & (((var_12) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(0LL))) & (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (21ULL)))) : ((~(((var_8) & (((/* implicit */int) arr_4 [i_6] [i_6]))))))));
                }
            } 
        } 
        arr_26 [i_0] = ((/* implicit */unsigned int) (((-(((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) - (((/* implicit */unsigned long long int) min(((-(0LL))), (((/* implicit */long long int) max((arr_9 [(unsigned char)6]), (arr_8 [i_0] [i_0])))))))));
        /* LoopNest 3 */
        for (unsigned short i_10 = 2; i_10 < 7; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_36 [i_0] [(_Bool)1] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_10 + 2] [i_10 + 4] [(_Bool)1] [i_10] [(unsigned short)4] [1ULL]) == (arr_12 [i_10 + 3] [i_10 + 1] [i_10 - 2] [i_10 - 2] [8ULL] [4]))))) == (min((arr_2 [i_0] [i_10 + 3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_10 + 3] [(_Bool)1] [i_10 + 3])) : (((/* implicit */int) var_4)))))))));
                        arr_37 [i_12] [i_0] [i_0] [(unsigned char)8] = ((((/* implicit */long long int) 4294967295U)) != (1LL));
                    }
                } 
            } 
        } 
    }
    for (short i_13 = 3; i_13 < 11; i_13 += 3) 
    {
        arr_40 [i_13] [(signed char)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_13 - 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [10U]))) : (min((0U), (((/* implicit */unsigned int) arr_39 [i_13 - 3]))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (((~(((/* implicit */int) arr_39 [10U])))) != (((/* implicit */int) arr_38 [i_13 + 1]))))))))));
        var_23 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(min((var_13), (var_13)))))), (((((/* implicit */_Bool) arr_39 [(unsigned char)1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [(unsigned short)2])))))));
        /* LoopNest 2 */
        for (signed char i_14 = 2; i_14 < 10; i_14 += 3) 
        {
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_14 + 2] [i_14 + 2]))) != (var_7)))));
                    arr_48 [4U] [i_13] [i_15] = ((/* implicit */short) ((((((/* implicit */_Bool) 1843596333U)) ? (max((((/* implicit */unsigned int) (unsigned char)150)), (1843596333U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) & (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_41 [i_13] [i_13] [i_15])))) & (((/* implicit */int) var_10)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
    {
        arr_52 [i_16] = ((/* implicit */signed char) arr_50 [(unsigned short)15] [(unsigned short)15]);
        var_25 += ((/* implicit */_Bool) 18446744073709551580ULL);
        /* LoopSeq 4 */
        for (signed char i_17 = 1; i_17 < 14; i_17 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_18 = 3; i_18 < 15; i_18 += 3) 
            {
                var_26 *= ((/* implicit */unsigned int) arr_55 [(unsigned char)6] [(_Bool)1]);
                var_27 = ((/* implicit */int) ((((/* implicit */long long int) 4294967281U)) & (-7419113196202376038LL)));
            }
            for (unsigned int i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                arr_61 [i_19] [5LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_49 [i_17 + 2]))));
                var_28 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-772))) / (var_2))) < (((/* implicit */unsigned int) var_8))));
            }
            for (signed char i_20 = 1; i_20 < 15; i_20 += 2) 
            {
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_54 [i_17 - 1] [i_17 - 1] [i_20 - 1])))))));
                arr_64 [i_20] [i_17] [i_17 - 1] [i_20] = ((/* implicit */signed char) ((unsigned int) arr_58 [i_17 + 2] [i_20] [i_16] [(short)11]));
                /* LoopNest 2 */
                for (long long int i_21 = 3; i_21 < 15; i_21 += 2) 
                {
                    for (short i_22 = 1; i_22 < 13; i_22 += 1) 
                    {
                        {
                            arr_69 [i_16] [i_20] = ((/* implicit */signed char) (+(((/* implicit */int) arr_51 [i_22 + 1] [i_17 + 2]))));
                            arr_70 [i_16] [i_16] [i_16] [(signed char)1] [i_20] = ((/* implicit */signed char) arr_63 [i_22 + 3] [i_21 - 3] [i_21] [i_20 + 1]);
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */_Bool) ((arr_50 [i_16] [(unsigned char)9]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_16])))))) : (((((/* implicit */_Bool) var_1)) ? (1843596333U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_17 + 1] [i_16])))))));
        }
        for (unsigned long long int i_23 = 2; i_23 < 14; i_23 += 2) 
        {
            arr_74 [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_12) : (arr_65 [i_23 - 2] [i_23] [i_23 + 2])));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_10))))))))));
            var_32 *= ((/* implicit */short) arr_67 [i_23 + 2] [0LL] [i_23] [i_23] [i_23 + 1] [i_23 + 2]);
            arr_75 [i_16] [i_16] = ((/* implicit */unsigned short) arr_63 [i_16] [i_16] [i_23 - 2] [6U]);
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_59 [(_Bool)1] [i_23] [i_16]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_59 [i_16] [7ULL] [(unsigned short)7]))))))))));
        }
        for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 2) 
        {
            var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)105))));
            arr_79 [i_24] [i_24] [i_16] |= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_54 [i_16] [i_16] [i_16])) ? (var_12) : (((/* implicit */unsigned int) var_13)))));
            arr_80 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_62 [i_24] [i_24] [i_24] [i_24])) != (((/* implicit */int) (unsigned char)255))));
        }
        for (unsigned int i_25 = 1; i_25 < 14; i_25 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_26 = 0; i_26 < 16; i_26 += 3) 
            {
                var_35 = ((/* implicit */_Bool) min((var_35), (((((/* implicit */int) var_9)) == (((/* implicit */int) arr_54 [i_25 + 1] [i_25] [i_25]))))));
                var_36 ^= ((/* implicit */signed char) arr_58 [i_16] [(signed char)4] [8ULL] [i_25 - 1]);
                /* LoopSeq 1 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_82 [i_16])) * (((/* implicit */int) arr_78 [10ULL] [i_27])))));
                    var_38 = ((/* implicit */short) ((long long int) var_10));
                }
            }
            /* LoopNest 2 */
            for (unsigned int i_28 = 3; i_28 < 15; i_28 += 1) 
            {
                for (int i_29 = 1; i_29 < 14; i_29 += 1) 
                {
                    {
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_8)) : (0LL)))) : (((unsigned long long int) var_2))));
                        arr_94 [i_29] = ((/* implicit */unsigned short) ((-1LL) != (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        var_40 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5116))) * ((-(1762268663U)))));
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (+(arr_91 [(unsigned short)0] [i_25 + 2] [i_28 - 3]))))));
                    }
                } 
            } 
            var_42 *= ((((((/* implicit */_Bool) 2451370956U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (21ULL))) & (arr_91 [14ULL] [i_25 + 1] [(unsigned short)10]));
        }
    }
    for (unsigned int i_30 = 1; i_30 < 22; i_30 += 3) 
    {
        var_43 ^= ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 2 */
        for (short i_31 = 0; i_31 < 24; i_31 += 3) 
        {
            for (unsigned int i_32 = 1; i_32 < 23; i_32 += 2) 
            {
                {
                    arr_103 [14U] [14U] |= ((/* implicit */short) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_98 [i_30] [i_30] [i_30])) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((signed char) 32ULL))) : (((/* implicit */int) arr_98 [i_30] [i_31] [i_32 + 1]))))));
                    arr_104 [i_30] [i_30] = ((/* implicit */signed char) ((((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) arr_98 [4ULL] [i_32 - 1] [2LL]))))) == (var_2)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_33 = 0; i_33 < 24; i_33 += 2) 
        {
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                {
                    arr_111 [i_30] [(_Bool)1] [(unsigned short)17] [(unsigned short)18] = ((/* implicit */_Bool) (-(((1ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_44 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_110 [(_Bool)1] [i_30 + 2] [i_34])) & (var_13)))), (((((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) ? (var_2) : (((/* implicit */unsigned int) arr_107 [i_30 + 1] [i_30 + 1] [(unsigned short)8]))))));
                }
            } 
        } 
    }
    var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)31195))));
}
