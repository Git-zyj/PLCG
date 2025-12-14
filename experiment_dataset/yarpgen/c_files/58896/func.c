/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58896
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
    var_16 = ((/* implicit */long long int) (unsigned short)18656);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_17 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_9)));
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                arr_9 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0]);
                /* LoopSeq 1 */
                for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                    var_18 |= ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_0] [i_1]);
                    var_19 = ((/* implicit */unsigned int) ((int) (_Bool)1));
                    /* LoopSeq 4 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 2] [i_0] [i_3 + 1] [i_3 + 2])) < (((/* implicit */int) arr_2 [i_1] [i_1]))));
                        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [11LL] [i_3] [i_0] [11LL] [i_0]))))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_0] [i_3 + 2] [i_5] = -597112518;
                        arr_19 [i_5] [i_5] [i_2] [i_5] [i_5] &= ((/* implicit */unsigned char) (+(var_6)));
                        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_0] [i_3 + 2] [i_2] [i_3] [i_5]))));
                        arr_20 [i_0] [i_1] [i_3 + 3] [i_3] [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) arr_2 [i_5] [i_3 + 3]);
                        arr_21 [i_0] [(short)1] [(short)1] [i_1] [i_2] [(short)1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((var_1) - (2135723946506890248ULL))))) : (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_7))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_2] [i_0] [i_6] = ((/* implicit */int) ((unsigned short) arr_24 [i_3 + 1] [i_0] [i_3 + 3] [i_0] [i_3 + 2]));
                        var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_3 + 3] [i_6])))))))));
                    }
                    for (long long int i_7 = 4; i_7 < 9; i_7 += 3) 
                    {
                        var_23 |= ((/* implicit */unsigned char) ((var_11) || (((/* implicit */_Bool) var_8))));
                        var_24 = ((/* implicit */short) ((((/* implicit */long long int) var_12)) != (arr_28 [i_3 - 1] [i_3] [i_3 + 2] [i_0] [i_7 - 1])));
                        var_25 = ((/* implicit */int) min((var_25), ((+(((/* implicit */int) arr_1 [i_1] [i_3 + 2]))))));
                        arr_31 [i_0] [(unsigned short)6] [i_1] [i_3] &= ((/* implicit */_Bool) var_12);
                        var_26 = ((/* implicit */_Bool) (+(var_15)));
                    }
                }
                arr_32 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_1]))));
            }
            for (short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_8))))));
                            var_28 ^= ((/* implicit */short) var_2);
                            var_29 = ((/* implicit */unsigned char) var_13);
                            var_30 = ((/* implicit */unsigned short) var_1);
                        }
                    } 
                } 
                var_31 += ((/* implicit */long long int) var_12);
                var_32 = arr_1 [i_1] [i_8];
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (short i_12 = 1; i_12 < 8; i_12 += 2) 
                    {
                        {
                            arr_48 [i_0] = ((/* implicit */_Bool) var_8);
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (short)377)))))));
                            var_34 += var_14;
                            var_35 = ((/* implicit */unsigned char) var_15);
                        }
                    } 
                } 
            }
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_14 = 1; i_14 < 11; i_14 += 4) 
                {
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [(unsigned char)4] [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_0])) ? (((var_2) << (((5956760792430799271LL) - (5956760792430799271LL))))) : (((/* implicit */long long int) -597112518))));
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        var_37 ^= ((/* implicit */unsigned int) var_5);
                        var_38 = ((/* implicit */unsigned char) arr_46 [i_0] [i_1] [i_13] [i_14] [i_1]);
                        arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_14 - 1] [i_14 + 1] [i_0] [i_14 - 1]))) ^ (var_4)));
                    }
                }
                for (short i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned char) arr_42 [i_0] [i_1] [i_0]);
                        var_40 = ((/* implicit */short) var_8);
                    }
                    arr_64 [i_16] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
                    var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (+(arr_6 [i_16] [i_13] [i_1] [i_16]))))));
                }
                for (long long int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    var_42 = ((/* implicit */unsigned int) var_7);
                    arr_69 [i_0] [i_0] [(_Bool)1] [i_18] = ((/* implicit */int) var_5);
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 2; i_19 < 10; i_19 += 3) 
                    {
                        arr_72 [i_1] [i_0] [i_18] = (-(((/* implicit */int) arr_62 [2] [i_1] [i_1] [i_18] [i_0])));
                        var_43 |= ((/* implicit */signed char) (+(arr_42 [i_13] [i_18] [i_19 + 1])));
                    }
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        arr_75 [i_20] [i_0] [i_13] [i_1] [i_13] [i_0] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_18] [i_20])) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (var_3)));
                        var_44 *= ((/* implicit */_Bool) ((var_2) + (((/* implicit */long long int) ((unsigned int) var_5)))));
                        var_45 |= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_55 [i_1] [i_13] [i_18] [i_20])))))));
                    }
                    arr_76 [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_0])) ? (arr_41 [i_0]) : (arr_41 [i_0])));
                }
                arr_77 [i_0] [i_1] [i_13] |= ((/* implicit */int) var_2);
            }
        }
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 2) 
        {
            var_46 = ((/* implicit */long long int) var_12);
            var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) var_8))));
        }
        for (unsigned short i_22 = 1; i_22 < 11; i_22 += 4) 
        {
            var_48 = ((/* implicit */unsigned int) arr_13 [i_22 + 1] [i_22] [i_22 - 1] [i_22] [i_22 + 1]);
            arr_84 [i_0] = ((/* implicit */long long int) max(((unsigned short)46892), (arr_67 [i_22] [i_0])));
            arr_85 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)254))))) ? (((arr_47 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))))) : (((((/* implicit */_Bool) arr_41 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) 11)) ? (3182202575U) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) var_3))));
        }
        arr_86 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_45 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0]))) : (var_4)))))) / ((-(var_8)))));
        arr_87 [i_0] [i_0] = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) (unsigned char)2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1)));
    }
    for (unsigned int i_23 = 0; i_23 < 13; i_23 += 4) 
    {
        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) arr_88 [i_23]))));
        /* LoopNest 2 */
        for (int i_24 = 3; i_24 < 10; i_24 += 4) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    arr_95 [i_24] [i_23] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_93 [i_23] [i_24] [i_24 - 1] [i_25])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_93 [i_23] [i_24] [i_24 + 3] [i_23]))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_93 [i_23] [i_24] [i_24 - 3] [i_24 - 2]))))))));
                    var_50 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_9))))))) % (((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_92 [i_23] [i_23] [i_24]))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_90 [i_23] [i_23])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 0; i_26 < 13; i_26 += 2) 
                    {
                        for (unsigned short i_27 = 0; i_27 < 13; i_27 += 2) 
                        {
                            {
                                var_51 = ((/* implicit */long long int) arr_94 [i_24] [i_24 - 3] [i_25] [i_27]);
                                var_52 = ((/* implicit */unsigned char) var_14);
                            }
                        } 
                    } 
                    var_53 = (i_24 % 2 == 0) ? (((((/* implicit */int) ((max((((/* implicit */long long int) arr_96 [i_23] [i_23] [i_25] [i_25] [i_25] [i_24])), (5956760792430799271LL))) != (((/* implicit */long long int) var_4))))) >> ((((+(((/* implicit */int) arr_100 [i_24 + 1] [i_24] [i_24] [i_24 - 3] [i_24] [i_24 - 1])))) - (80))))) : (((((/* implicit */int) ((max((((/* implicit */long long int) arr_96 [i_23] [i_23] [i_25] [i_25] [i_25] [i_24])), (5956760792430799271LL))) != (((/* implicit */long long int) var_4))))) >> ((((((+(((/* implicit */int) arr_100 [i_24 + 1] [i_24] [i_24] [i_24 - 3] [i_24] [i_24 - 1])))) - (80))) + (70)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_28 = 0; i_28 < 13; i_28 += 2) 
        {
            arr_103 [i_23] = ((/* implicit */signed char) (-(arr_96 [i_23] [i_23] [i_23] [i_23] [i_28] [i_23])));
            var_54 += ((/* implicit */signed char) (~(arr_96 [i_23] [i_28] [i_23] [i_23] [i_23] [i_23])));
            var_55 = ((/* implicit */short) ((((/* implicit */_Bool) arr_96 [i_23] [i_28] [i_28] [i_28] [i_28] [i_23])) && (((/* implicit */_Bool) var_4))));
            var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) ((arr_89 [i_28]) / (((/* implicit */long long int) ((/* implicit */int) arr_102 [i_23]))))))));
            var_57 = ((/* implicit */int) ((((/* implicit */_Bool) arr_97 [(signed char)12])) ? (var_2) : (((/* implicit */long long int) arr_96 [i_23] [i_23] [i_28] [i_28] [i_28] [i_23]))));
        }
    }
    var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) (+((~(((/* implicit */int) ((short) var_9))))))))));
}
