/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61426
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
    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (signed char)-59)))))) <= (max((((/* implicit */unsigned long long int) 2475481690U)), (min((17832911236565100554ULL), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */int) (~(min((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) var_8))))));
                    arr_10 [i_0] [2U] [i_2] [i_1] = (~((~(((/* implicit */int) arr_5 [i_0])))));
                }
            } 
        } 
        arr_11 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_4) : (((/* implicit */int) ((short) var_10)))))) ? (((((arr_2 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_8 [i_0]))) << (((/* implicit */int) (_Bool)1)))) : (min((min((((/* implicit */long long int) var_12)), (-1253913044905147080LL))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_1 [i_0])))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_4) : (((/* implicit */int) ((short) var_10)))))) ? (((((arr_2 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_8 [i_0]))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (min((min((((/* implicit */long long int) var_12)), (-1253913044905147080LL))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_1 [i_0]))))))));
        arr_12 [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_5 [(short)2]));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_14 -= ((/* implicit */int) var_7);
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_6] [i_4] [i_5 + 3] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13390)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        var_15 = (i_6 % 2 == zero) ? (((arr_3 [i_6]) << (((arr_3 [i_6]) - (4658095200620120946LL))))) : (((((arr_3 [i_6]) + (9223372036854775807LL))) << (((((((arr_3 [i_6]) - (4658095200620120946LL))) + (5470098471616348983LL))) - (28LL)))));
                        arr_26 [i_6] = ((/* implicit */short) ((unsigned int) var_12));
                        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (short)2757)))));
                        arr_27 [7U] [i_4] [i_6] [i_5] [i_6 - 1] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_6 [i_6] [i_5] [(short)6]))) % (((/* implicit */int) (short)13381))));
                    }
                    for (int i_8 = 2; i_8 < 9; i_8 += 2) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-13391)) || (((/* implicit */_Bool) arr_24 [i_6]))));
                        arr_30 [i_6] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) arr_29 [5U])) + (arr_20 [i_8] [i_3] [i_4] [i_3])))));
                        var_18 *= ((/* implicit */short) 9223372036854775807LL);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((long long int) arr_20 [i_6] [0] [i_6 - 1] [5ULL]));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_6])) >= (var_8)));
                        var_21 = ((/* implicit */unsigned int) ((9223372036854775807LL) + (((long long int) arr_16 [i_6] [i_6]))));
                        var_22 = ((/* implicit */unsigned char) ((unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (short)-13382)))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)17083)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_9] [(_Bool)1] [2U])) && (((/* implicit */_Bool) arr_18 [i_9] [(short)5] [i_5 + 3] [9LL]))))) : ((+(((/* implicit */int) var_1))))));
                    }
                    for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (unsigned char)244)))));
                        var_25 = ((/* implicit */short) ((arr_36 [i_10] [i_6] [i_6 - 1] [i_6] [i_5 + 2]) % (arr_23 [i_10] [i_6] [i_6 - 1] [6ULL] [(unsigned char)11] [i_4])));
                    }
                    var_26 *= ((((/* implicit */_Bool) -6442256529708170570LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-13391)));
                }
                var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))));
            }
            for (short i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    arr_41 [i_4] [i_4] [10LL] [(unsigned char)8] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_3 + 1] [(_Bool)1] [7ULL])) : (-2106186747)));
                    arr_42 [i_3 - 1] [i_12] [i_11] [i_4] [i_3] [i_3] = arr_18 [i_4] [i_4] [i_4] [i_3 - 1];
                    var_28 = ((/* implicit */short) ((arr_8 [i_4]) << (((((/* implicit */int) (unsigned char)70)) - (70)))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        arr_48 [(unsigned short)0] [i_3] [i_3] [i_11] [7LL] [(_Bool)1] [i_14] = ((/* implicit */short) ((((/* implicit */int) arr_37 [i_13] [i_4] [i_11] [i_3 + 1])) * (((/* implicit */int) arr_37 [(_Bool)1] [i_4] [i_3 - 1] [i_3 - 1]))));
                        var_29 *= ((/* implicit */short) ((9223372036854775807LL) - (((/* implicit */long long int) 2106186747))));
                        arr_49 [i_14] [i_11] [i_11] [i_4] [6LL] = ((/* implicit */long long int) (unsigned char)45);
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_3 + 1] [i_13] [i_11] [i_13] [i_14])) && (((/* implicit */_Bool) arr_32 [i_3 - 1] [i_4] [i_11] [(signed char)9] [10]))));
                        var_31 = ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) (unsigned short)35888)) : (((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1])));
                    }
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)50)) << (((6442256529708170569LL) - (6442256529708170551LL)))));
                    arr_50 [i_3] [i_3 - 1] [i_13] [i_3 - 1] = ((((/* implicit */long long int) ((/* implicit */int) arr_17 [(_Bool)1] [10] [i_3 + 1]))) >= (arr_3 [i_4]));
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_11]))) ? (((/* implicit */long long int) (~(-2106186747)))) : (-6133970958638099898LL)));
                        var_34 = ((/* implicit */long long int) arr_52 [i_15] [i_15] [i_3 + 1] [i_3] [(unsigned char)0] [i_3 - 1] [i_3 - 1]);
                        arr_53 [i_3] [i_4] [i_11] [1LL] [1] [1LL] [(signed char)7] = ((/* implicit */unsigned int) ((_Bool) arr_21 [i_3] [i_3] [0ULL] [i_3 + 1] [i_4]));
                    }
                    for (short i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) ((int) 2106186746));
                        arr_56 [i_4] [i_11] [i_16] = ((/* implicit */short) ((_Bool) arr_35 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]));
                    }
                }
                for (short i_17 = 1; i_17 < 10; i_17 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        var_36 = ((/* implicit */int) (+(((unsigned int) (unsigned char)244))));
                        var_37 = ((/* implicit */int) arr_47 [i_17 - 1] [i_17] [i_17 - 1] [i_17 - 1] [i_18]);
                        arr_61 [i_18] [9U] [i_11] [i_4] [(unsigned char)4] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                        var_38 = ((/* implicit */short) ((arr_52 [i_18] [i_18] [11] [i_17 + 2] [(_Bool)1] [i_3 - 1] [i_3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_39 = ((/* implicit */unsigned char) (~(arr_20 [9LL] [i_4] [i_11] [(unsigned char)11])));
                    var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967287U))));
                    arr_62 [i_3] [7ULL] [i_11] [(_Bool)1] [i_3] = (~(arr_51 [i_17 + 2] [i_17 + 1] [(signed char)0] [i_17] [i_17] [i_17]));
                    var_41 = ((/* implicit */unsigned int) arr_58 [(short)8] [(short)8] [(short)8]);
                }
                var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((long long int) arr_4 [(_Bool)1] [i_4] [i_3])))));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    for (unsigned short i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned long long int) arr_2 [i_4] [i_20] [i_11]);
                            var_44 = ((/* implicit */unsigned int) arr_51 [i_3 - 1] [i_4] [7LL] [i_19] [i_20] [i_4]);
                            arr_67 [(_Bool)1] [9LL] [i_4] [i_11] [1LL] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) -1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) : (((((/* implicit */long long int) 265042523U)) + (arr_8 [i_19])))));
                        }
                    } 
                } 
            }
            for (signed char i_21 = 1; i_21 < 11; i_21 += 1) 
            {
                arr_70 [i_3 - 1] [i_21] = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_6)))));
                var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_4] [i_21 - 1] [i_4] [i_4] [i_4]))) / (((long long int) (_Bool)1)))))));
                var_46 = ((/* implicit */short) (+(4106830543584204671ULL)));
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 12; i_22 += 1) 
                {
                    for (long long int i_23 = 2; i_23 < 11; i_23 += 2) 
                    {
                        {
                            arr_76 [i_3] [(_Bool)1] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_23 - 1] [(signed char)4] [(short)2] [(signed char)4] [i_3 + 1]))) : (arr_59 [i_3] [i_4] [i_4] [i_22] [i_23])))) ? (((arr_55 [i_3] [i_3] [0LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_3] [i_21] [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_77 [i_22] [i_21] [i_21] [i_3] = ((/* implicit */_Bool) (short)-13381);
                            arr_78 [i_3 + 1] [i_4] [(unsigned short)10] [(short)9] [i_21] = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) -5077021494909918616LL)) ? (201326592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13381))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_79 [(signed char)0] [i_4] [i_21] [i_21] [i_23] [i_23] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_75 [i_21] [i_4] [(short)11] [i_3] [i_21]))));
                            arr_80 [i_21] [2] [i_21 + 1] [i_21 + 1] [i_4] [0LL] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_75 [i_21] [i_4] [i_3 - 1] [i_23 - 2] [(short)7])) - (((/* implicit */int) arr_75 [i_21] [i_4] [6U] [i_23 + 1] [6U]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_24 = 0; i_24 < 12; i_24 += 1) 
            {
                var_47 = ((/* implicit */_Bool) 4173377755U);
                /* LoopSeq 1 */
                for (unsigned int i_25 = 2; i_25 < 9; i_25 += 1) 
                {
                    arr_87 [i_3] [i_3 - 1] [7U] [i_25 + 1] [11LL] = ((/* implicit */unsigned char) (~(71987225293750272LL)));
                    var_48 -= ((arr_64 [i_4] [i_4] [i_3 - 1] [i_25 - 1]) != (((/* implicit */int) arr_71 [i_3 + 1] [i_3 - 1] [i_4] [i_24] [(unsigned char)2])));
                    var_49 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)1))))));
                }
            }
            /* LoopNest 3 */
            for (unsigned char i_26 = 2; i_26 < 8; i_26 += 3) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                    {
                        {
                            arr_95 [i_28] [i_28] [i_27] [i_26] [(short)11] [i_3] = ((/* implicit */_Bool) (+(1073741824)));
                            var_50 = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
            } 
            arr_96 [i_3 - 1] [i_3 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_71 [i_3 + 1] [i_3] [i_4] [i_4] [(_Bool)1]))));
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            arr_101 [i_29] [i_29] [i_3] = ((/* implicit */long long int) (_Bool)1);
            var_51 = ((/* implicit */signed char) (short)13381);
        }
        for (long long int i_30 = 0; i_30 < 12; i_30 += 2) 
        {
            arr_104 [i_3 - 1] [i_30] = ((/* implicit */_Bool) (-(arr_93 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])));
            var_52 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (7150384644355575166LL))) ? (((/* implicit */unsigned long long int) ((long long int) arr_31 [i_30] [i_30] [i_3] [i_30] [i_3 - 1]))) : (var_7)));
            var_53 -= ((/* implicit */unsigned int) arr_1 [i_30]);
        }
        for (unsigned long long int i_31 = 1; i_31 < 10; i_31 += 1) 
        {
            arr_107 [i_3] [(short)4] = ((/* implicit */long long int) arr_57 [i_3 - 1] [(unsigned char)3] [i_31] [i_31] [(_Bool)1] [i_31 - 1]);
            arr_108 [3U] [i_31] = var_4;
        }
        var_54 = ((/* implicit */unsigned char) arr_40 [i_3] [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        var_55 = ((/* implicit */short) ((-6442256529708170570LL) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_32]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_33 = 0; i_33 < 14; i_33 += 2) 
        {
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                for (long long int i_35 = 0; i_35 < 14; i_35 += 4) 
                {
                    {
                        var_56 -= ((/* implicit */unsigned char) arr_2 [i_33] [i_33] [i_34]);
                        var_57 = ((/* implicit */_Bool) ((int) arr_115 [i_33] [(_Bool)0]));
                        arr_118 [i_34] [(short)11] [i_34] [i_34] = ((/* implicit */unsigned long long int) arr_1 [i_34]);
                        var_58 -= ((/* implicit */signed char) (~(((unsigned int) var_9))));
                        arr_119 [(_Bool)1] [i_34] [i_33] [i_34] [i_32] = ((/* implicit */long long int) arr_111 [i_35] [i_34]);
                    }
                } 
            } 
        } 
        var_59 = ((-6442256529708170561LL) / (((/* implicit */long long int) arr_6 [(short)10] [i_32] [(short)10])));
        /* LoopNest 3 */
        for (unsigned short i_36 = 0; i_36 < 14; i_36 += 1) 
        {
            for (unsigned long long int i_37 = 2; i_37 < 13; i_37 += 1) 
            {
                for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                {
                    {
                        arr_130 [i_32] [(short)11] [i_37] [i_38] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_37 - 1])))))) * (((5305773822848474385LL) | (((/* implicit */long long int) ((/* implicit */int) arr_126 [2U])))))));
                        var_60 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-2147483647 - 1))) / (6871239891900074569LL)));
                    }
                } 
            } 
        } 
        arr_131 [i_32] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 294820510)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
}
