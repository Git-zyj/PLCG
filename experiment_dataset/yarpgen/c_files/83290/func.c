/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83290
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
    var_18 += ((/* implicit */long long int) (((~((~(var_7))))) == (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))), (((/* implicit */long long int) ((var_17) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29986))))))))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_6)) : (((var_14) ? (4294967295U) : (1560254669U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_11)))) - (((/* implicit */int) var_13)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_20 += ((/* implicit */_Bool) max((((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) arr_2 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_21 = ((/* implicit */int) max((((arr_4 [i_0]) < (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (signed char)57)) < (((/* implicit */int) (unsigned short)39239))))));
            arr_5 [i_1] = ((/* implicit */long long int) var_6);
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                var_22 = ((/* implicit */signed char) max((min((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (268435455U))), (arr_9 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) var_15))));
                var_23 = ((/* implicit */short) ((unsigned short) max((var_8), (((/* implicit */unsigned short) var_14)))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_5 = 3; i_5 < 6; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_17 [i_4] [i_5] [i_5 + 2] [i_5 - 2] [i_5 + 4])), (14270452631766107888ULL))), (2752713803942392116ULL)));
                        arr_20 [i_0] [i_2] [i_3] [i_4] [i_5 - 3] [i_4] = ((/* implicit */unsigned long long int) var_10);
                        arr_21 [i_0] [i_0] [i_2] [i_3] [i_4] [i_5 - 3] [i_2] = ((((((/* implicit */unsigned int) min((arr_14 [i_5] [i_3] [i_2] [i_0]), (var_6)))) % (((unsigned int) var_15)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_5 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 1])) : (arr_11 [i_0] [i_5 + 1] [i_0])))));
                        var_25 += ((/* implicit */_Bool) arr_16 [i_0] [i_0]);
                    }
                    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((long long int) -2147483634))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 8711813612226088734LL)) ? (arr_7 [1ULL] [1ULL]) : (((/* implicit */long long int) arr_23 [(signed char)4] [(unsigned short)2] [(_Bool)1] [(signed char)4] [i_0]))))))));
                        arr_26 [i_0] [i_2] [i_3] [i_2] &= ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_2 [i_6])), (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3] [i_2] [i_2] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14)))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_27 += ((/* implicit */unsigned long long int) arr_6 [6U] [i_2]);
                        arr_29 [i_3] [(unsigned char)0] [i_3] = (+(((/* implicit */int) var_2)));
                        var_28 = ((/* implicit */unsigned long long int) var_17);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 2; i_8 < 9; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [9U] [i_8 + 1])) ? (var_7) : (((/* implicit */long long int) (~(810943280))))));
                        var_31 = ((/* implicit */short) var_5);
                    }
                }
            }
            var_32 = ((/* implicit */_Bool) ((int) (unsigned short)10668));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                arr_35 [1U] [1U] [1U] [i_9] = ((/* implicit */unsigned long long int) min((((unsigned char) arr_14 [i_0] [(unsigned short)6] [i_2] [i_9])), (((/* implicit */unsigned char) var_4))));
                arr_36 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */short) (!((!(((/* implicit */_Bool) 4294967272U))))));
                arr_37 [i_0] [1U] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_6)) : (14270452631766107888ULL))) ^ (((/* implicit */unsigned long long int) (~(var_7))))))) ? (((/* implicit */long long int) ((((_Bool) arr_23 [i_2] [i_2] [i_2] [i_9] [i_9])) ? (((/* implicit */int) ((unsigned short) (signed char)-98))) : (((int) var_17))))) : (min((max((var_16), (var_0))), (((/* implicit */long long int) var_14))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_10 = 2; i_10 < 9; i_10 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_11 = 1; i_11 < 7; i_11 += 2) 
            {
                arr_43 [i_10 - 1] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11 + 3]))) == (var_3)));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_11 + 3] [i_10 - 2])) ? (arr_8 [i_11 + 3] [i_10 - 2]) : (((((/* implicit */_Bool) var_10)) ? (-1479288649) : (((/* implicit */int) arr_18 [i_0] [4U] [i_10] [i_10] [i_11]))))));
                var_34 = ((/* implicit */signed char) ((arr_12 [i_11 + 2] [i_11 - 1] [i_11 - 1] [i_11]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_13 = 1; i_13 < 9; i_13 += 2) 
                {
                    var_35 = ((/* implicit */signed char) arr_45 [i_13 - 1] [i_10 - 2] [i_10 + 1]);
                    var_36 = ((/* implicit */unsigned int) ((_Bool) arr_41 [i_13 - 1] [4U] [i_13] [i_13 - 1]));
                    var_37 = ((/* implicit */unsigned char) ((signed char) (unsigned short)18810));
                    var_38 = ((((((/* implicit */int) var_1)) == (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) (unsigned char)233)) ? (1U) : (((/* implicit */unsigned int) -821029610)))));
                }
                var_39 = ((/* implicit */unsigned int) (unsigned short)56158);
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) arr_47 [i_15] [i_15] [i_14] [9U] [i_0]);
                    arr_52 [(_Bool)1] [2] [i_14] [i_15] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_10 - 2] [i_10 + 1] [i_10 - 1]))) == (var_7)));
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 810943280)) ? ((-(((/* implicit */int) arr_31 [i_0] [i_10] [i_10] [i_15] [i_15])))) : (((/* implicit */int) var_11))));
                }
                /* LoopSeq 1 */
                for (signed char i_16 = 2; i_16 < 7; i_16 += 2) 
                {
                    var_42 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (unsigned short)46741)) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29982))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    arr_55 [i_0] [(unsigned short)1] [i_14] [i_0] [i_10 + 1] = ((/* implicit */unsigned long long int) arr_11 [i_16 + 2] [i_14] [(signed char)5]);
                    var_43 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned long long int) arr_42 [i_10 + 1] [i_14] [i_16 + 2])) : (arr_30 [i_10 - 1] [i_0])));
                }
                var_44 = ((/* implicit */unsigned long long int) arr_32 [i_0] [i_10]);
                arr_56 [i_0] [i_0] = ((/* implicit */short) ((arr_17 [i_14] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) ((signed char) arr_19 [i_0] [i_0] [i_10 + 1] [6])))));
                    var_46 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(unsigned char)7] [i_10 + 1] [i_10 - 1] [i_10 - 1]))));
                }
                for (unsigned int i_19 = 1; i_19 < 9; i_19 += 4) 
                {
                    arr_65 [i_19] [i_17] [i_10 + 1] [1U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_54 [(signed char)2] [i_0])))));
                    var_47 = ((/* implicit */_Bool) max((var_47), (((var_12) < (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 4) 
                    {
                        var_48 = ((/* implicit */signed char) arr_61 [i_0] [i_0] [i_0] [(unsigned short)4]);
                        arr_68 [i_0] [i_10 - 1] [i_0] [i_19] [i_20] = ((/* implicit */int) (!(((/* implicit */_Bool) var_17))));
                        var_49 = ((/* implicit */short) (((+(((/* implicit */int) var_1)))) * (((/* implicit */int) (_Bool)0))));
                    }
                    for (int i_21 = 3; i_21 < 8; i_21 += 2) 
                    {
                        var_50 = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)7)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)12813))))) : (var_16)));
                        var_51 = arr_70 [i_21 - 2] [i_21 + 2] [i_21] [i_19 + 1];
                        arr_71 [i_0] [i_21] [i_0] [i_21] [i_17] [i_19] [i_17] = ((/* implicit */long long int) (+(((int) -1479288634))));
                        var_52 ^= ((/* implicit */unsigned long long int) ((_Bool) arr_18 [i_0] [i_10 - 1] [i_21] [i_21] [i_21 - 3]));
                    }
                    for (short i_22 = 1; i_22 < 7; i_22 += 4) 
                    {
                        arr_74 [(unsigned char)6] [(unsigned char)6] [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)1)))) ^ (var_12)));
                        var_53 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (-1286510282) : (((/* implicit */int) (signed char)-8)))) == (arr_61 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (unsigned int i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        arr_79 [i_23] [8ULL] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) ((_Bool) arr_25 [i_19] [i_10 - 2] [i_19 - 1] [i_10 - 2] [i_10] [i_10 - 1]));
                        var_54 = ((/* implicit */unsigned char) (unsigned short)64489);
                    }
                }
                for (unsigned long long int i_24 = 1; i_24 < 9; i_24 += 2) 
                {
                    arr_82 [i_24 + 1] [i_17] [i_10] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_8)) ? (17347307723268591262ULL) : (((/* implicit */unsigned long long int) var_12))))));
                    arr_83 [i_0] [(signed char)2] [5LL] [i_24 - 1] = ((/* implicit */long long int) ((unsigned int) arr_24 [i_0] [(_Bool)1] [i_10 - 2] [i_24 - 1] [i_10 - 2]));
                }
                for (unsigned long long int i_25 = 1; i_25 < 6; i_25 += 4) 
                {
                    var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_67 [i_25 - 1] [i_17] [i_10] [i_0] [i_0])) / (((/* implicit */int) (short)12813))))) ? (((/* implicit */unsigned int) arr_14 [i_25 + 2] [i_25 + 1] [i_25 + 2] [i_25])) : (((((/* implicit */_Bool) 7740653725516835467ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20838)))))));
                    arr_86 [i_10 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (0ULL))) - (((/* implicit */unsigned long long int) arr_9 [i_0] [i_10 - 1] [i_10 - 2] [(short)8]))));
                }
                arr_87 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) var_6);
            }
            var_56 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_11))));
            /* LoopSeq 3 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                var_57 = ((/* implicit */_Bool) ((int) arr_16 [(signed char)6] [i_0]));
                arr_90 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_0] [i_10] [i_26] [i_10] [i_10]))) : (11832161178197588306ULL)))));
                arr_91 [i_0] [i_0] [i_10 - 2] [6LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_89 [i_0] [i_10 + 1] [i_26]))) ^ (arr_23 [i_26] [i_26] [(unsigned char)2] [(short)9] [i_26]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_67 [4] [i_10 - 1] [i_10] [i_10 - 1] [i_10]))))));
            }
            for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 2) 
            {
                var_58 = ((/* implicit */signed char) var_9);
                /* LoopSeq 1 */
                for (long long int i_28 = 0; i_28 < 10; i_28 += 4) 
                {
                    arr_97 [i_10] [6LL] [i_10] = (+(arr_19 [i_0] [i_0] [i_27] [i_28]));
                    /* LoopSeq 2 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        arr_102 [(_Bool)0] [(_Bool)0] [6U] [i_28] [i_29] = ((/* implicit */int) (+(var_0)));
                        arr_103 [i_29] [i_28] [i_10] [i_10] [i_0] &= ((/* implicit */long long int) ((short) arr_51 [i_10 - 2] [i_10 - 2]));
                        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_27] [i_10 + 1] [i_10])) ? (arr_42 [i_29] [i_10 - 2] [i_0]) : (arr_42 [i_29] [i_10 - 1] [i_10])));
                    }
                    for (signed char i_30 = 0; i_30 < 10; i_30 += 2) 
                    {
                        var_60 = ((/* implicit */unsigned char) max((var_60), (((/* implicit */unsigned char) ((unsigned short) var_11)))));
                        var_61 = ((/* implicit */short) (+(var_3)));
                    }
                }
                arr_107 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) 1730260146763879767ULL))));
            }
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                arr_111 [i_31] [i_31] = ((/* implicit */unsigned short) var_15);
                /* LoopSeq 2 */
                for (unsigned long long int i_32 = 3; i_32 < 9; i_32 += 3) 
                {
                    arr_115 [i_10 - 1] [3ULL] [i_10 - 2] [i_31] [i_10 + 1] = ((signed char) arr_61 [i_32 - 1] [(unsigned char)1] [i_32 - 3] [i_10 + 1]);
                    arr_116 [i_0] [i_31] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (1021902321U)))));
                }
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    var_62 = ((/* implicit */signed char) ((unsigned short) var_17));
                    arr_121 [i_31] = ((/* implicit */unsigned int) (((~(18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
            }
        }
        arr_122 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 536868864U)) ? (((/* implicit */int) (unsigned short)40196)) : (((/* implicit */int) (_Bool)1))))) ? (min((18255926864081389566ULL), (((/* implicit */unsigned long long int) (unsigned short)54646)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)119)))))))));
    }
    var_63 ^= ((/* implicit */signed char) var_0);
}
