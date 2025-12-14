/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87276
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */long long int) min(((~(-1997088929))), (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) >= (((long long int) arr_0 [i_0 - 1])))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) arr_7 [i_2] [i_1] [i_0]);
                            var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_2] [i_4])) ? (((/* implicit */unsigned long long int) max((arr_5 [i_3] [i_2]), (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))))) : ((+(arr_2 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_12 [i_0] [i_1] [i_2] [i_1] [i_4])))))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_0] [i_1] [i_2]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_3] [i_1]))) : (var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_7 [i_0] [i_1] [i_4])))))) : (max((((/* implicit */unsigned int) min(((short)19527), (((/* implicit */short) arr_9 [i_0] [i_1] [i_2]))))), (var_9)))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((int) (unsigned short)50176));
                            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_8))));
                        }
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_21 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6] [i_3] [i_2] [i_1] [i_0] [i_0]))) - (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_3]))))), (min((var_8), (((/* implicit */long long int) arr_19 [i_6] [i_3] [i_2] [i_1] [i_0]))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((long long int) arr_11 [i_0] [i_0] [i_2] [i_3]));
                            arr_22 [i_2] [i_6] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) arr_12 [i_6] [i_1] [i_2] [i_1] [i_0]);
                        }
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned char) 1480408555U));
                            arr_27 [i_7] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -2573690823469545492LL)))) : (2814558740U))));
                            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_8)), (arr_1 [i_0] [i_1])));
                        }
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            arr_30 [i_1] = ((unsigned short) max((arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_14))));
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (arr_11 [i_0 + 1] [i_1] [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_29 [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50176))) > (4168481330U))))))) : (((/* implicit */unsigned long long int) var_10))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            arr_35 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1 - 1] [i_0 + 1]);
                            arr_36 [i_9] [i_1] [i_9] [i_9] [i_9] = (i_1 % 2 == 0) ? (((/* implicit */int) ((arr_24 [i_0] [i_1] [i_2] [i_3] [i_3] [i_9]) << (((arr_2 [i_1] [i_1]) - (17678871536734841992ULL)))))) : (((/* implicit */int) ((arr_24 [i_0] [i_1] [i_2] [i_3] [i_3] [i_9]) << (((((arr_2 [i_1] [i_1]) - (17678871536734841992ULL))) - (5593934467270846612ULL))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    var_25 = ((unsigned int) (short)-6397);
                    var_26 = ((/* implicit */long long int) ((((unsigned long long int) arr_6 [i_0] [i_10])) ^ (((/* implicit */unsigned long long int) (~(1480408579U))))));
                }
                arr_41 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)6414)) ? (((/* implicit */unsigned long long int) ((long long int) (short)-19519))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_10]))) : (arr_24 [i_0] [i_10] [i_10] [i_10] [i_10] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                var_27 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (~(1480408586U)))))));
                var_28 = ((/* implicit */_Bool) ((long long int) var_4));
                var_29 = 2814558740U;
            }
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) arr_0 [i_0]);
            arr_45 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (-(arr_33 [i_12] [i_12])));
            var_31 = ((unsigned long long int) (~(((/* implicit */int) arr_0 [i_12]))));
        }
        for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_33 [i_13 - 1] [i_0 + 1])) ? (((/* implicit */long long int) arr_33 [i_13 + 1] [i_0 - 1])) : (var_2))));
            /* LoopSeq 1 */
            for (long long int i_14 = 2; i_14 < 8; i_14 += 1) 
            {
                arr_52 [i_13] [i_13] [i_13] [i_0] = ((/* implicit */long long int) (+(arr_28 [i_0])));
                arr_53 [i_0] [i_13] [i_13] [i_14] = ((/* implicit */long long int) (~(((/* implicit */int) arr_32 [i_0] [i_13] [i_14] [i_14]))));
                arr_54 [i_0] [i_0] [i_13] = ((/* implicit */short) (+(min((var_2), (((/* implicit */long long int) arr_5 [i_0 + 1] [i_0]))))));
            }
        }
    }
    for (short i_15 = 0; i_15 < 12; i_15 += 4) 
    {
        arr_58 [i_15] = ((/* implicit */int) (unsigned short)6247);
        arr_59 [i_15] = ((/* implicit */unsigned int) arr_50 [i_15] [i_15] [i_15] [i_15]);
        /* LoopSeq 3 */
        for (int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            arr_62 [i_16] [i_16] [i_16] = ((/* implicit */signed char) arr_51 [i_15] [i_16] [i_15]);
            arr_63 [i_15] [i_15] [i_16] = ((/* implicit */unsigned short) arr_49 [i_15]);
            arr_64 [i_16] = ((((/* implicit */_Bool) min((arr_42 [i_15] [i_16]), (arr_42 [i_15] [i_15])))) ? (((long long int) 2814558716U)) : (((/* implicit */long long int) ((/* implicit */int) ((arr_42 [i_15] [i_16]) >= (arr_42 [i_15] [i_16]))))));
            arr_65 [i_15] [i_16] [i_15] = ((/* implicit */int) ((signed char) arr_18 [i_15] [i_15] [i_15] [i_15] [i_16]));
            var_33 = ((/* implicit */unsigned long long int) arr_44 [i_15] [i_16] [i_16]);
        }
        for (unsigned char i_17 = 1; i_17 < 8; i_17 += 2) 
        {
            arr_70 [i_15] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11612325249065685794ULL)) ? (((/* implicit */int) arr_43 [i_17 + 1])) : (((/* implicit */int) arr_43 [i_15]))))) ? ((+(((/* implicit */int) arr_43 [i_15])))) : (((arr_43 [i_15]) ? (((/* implicit */int) arr_43 [i_17 + 4])) : (((/* implicit */int) arr_43 [i_15]))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_18 = 1; i_18 < 11; i_18 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    arr_79 [i_15] [i_17] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_18 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6402))) : (arr_55 [i_18 + 1])));
                    arr_80 [i_19] [i_18] [i_17] [i_15] = ((/* implicit */unsigned long long int) arr_32 [i_15] [i_17] [i_18] [i_19]);
                }
                for (unsigned int i_20 = 2; i_20 < 11; i_20 += 2) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-6397)) ^ (((/* implicit */int) (short)-6397))));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-1675882190158946787LL)));
                    arr_83 [i_20] [i_18] = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_18] [i_20 + 1] [i_17] [i_18] [i_17] [i_18 + 1])) != (arr_34 [i_18 - 1] [i_17] [i_20 + 1])));
                    arr_84 [i_15] [i_18] [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_15] [i_17] [i_18]))));
                }
                arr_85 [i_18] [i_18] [i_17] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_17 - 1] [i_18])) ? (arr_68 [i_17 - 1] [i_17]) : (((/* implicit */long long int) arr_73 [i_17 - 1] [i_18] [i_18] [i_18 - 1]))));
                arr_86 [i_15] [i_17] [i_18] = (signed char)-46;
            }
            for (unsigned char i_21 = 1; i_21 < 11; i_21 += 4) /* same iter space */
            {
                arr_89 [i_15] [i_15] [i_17] [i_21] = ((/* implicit */long long int) (short)(-32767 - 1));
                arr_90 [i_21] [i_17] [i_21] = ((int) (signed char)26);
            }
            for (unsigned short i_22 = 0; i_22 < 12; i_22 += 1) 
            {
                var_36 = ((/* implicit */unsigned char) var_9);
                var_37 = ((/* implicit */long long int) var_11);
            }
            /* vectorizable */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                arr_95 [i_23] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_15])) : (((/* implicit */int) arr_71 [i_15] [i_17] [i_17] [i_23]))))));
                arr_96 [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) -3104765440088953105LL)) && (((var_8) != (((/* implicit */long long int) 126485966U))))));
                var_38 |= ((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_71 [i_15] [i_17] [i_23] [i_23])))));
            }
            var_39 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2903348079U)), (((long long int) 3387048223461907737ULL))));
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            arr_100 [i_15] [i_15] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            /* LoopNest 2 */
            for (unsigned long long int i_25 = 1; i_25 < 11; i_25 += 4) 
            {
                for (long long int i_26 = 2; i_26 < 9; i_26 += 2) 
                {
                    {
                        arr_105 [i_25] [i_24] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_81 [i_15] [i_24] [i_25] [i_26])) >= (arr_67 [i_15] [i_24] [i_25])))) * (((/* implicit */int) ((short) arr_5 [i_25] [i_26])))));
                        /* LoopSeq 2 */
                        for (long long int i_27 = 0; i_27 < 12; i_27 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_98 [i_26] [i_24] [i_24]) << (((arr_44 [i_15] [i_26] [i_25]) - (1687260392U)))))) * ((~(arr_12 [i_15] [i_24] [i_25] [i_25] [i_27])))));
                            var_41 = ((/* implicit */unsigned char) arr_102 [i_25] [i_24]);
                        }
                        for (signed char i_28 = 4; i_28 < 8; i_28 += 4) 
                        {
                            arr_112 [i_15] [i_15] [i_24] [i_25] [i_25] [i_28] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (var_5) : (arr_87 [i_24] [i_25] [i_26] [i_28]))))));
                            var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5640707292764786079ULL))));
                            var_43 = ((/* implicit */unsigned short) ((arr_101 [i_25 - 1] [i_24] [i_25]) >= (((/* implicit */unsigned int) var_3))));
                            arr_113 [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_108 [i_28] [i_24] [i_25] [i_26] [i_25]) ? (arr_3 [i_25]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((long long int) 1480408579U))) : ((+(arr_2 [i_25] [i_26])))));
                        }
                    }
                } 
            } 
        }
    }
    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))) : (var_9)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_29 = 0; i_29 < 10; i_29 += 2) 
    {
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_102 [i_29] [i_29])) ? (arr_102 [i_29] [i_29]) : (arr_102 [i_29] [i_29])));
        arr_116 [i_29] = ((int) ((((/* implicit */unsigned long long int) 1480408555U)) >= (arr_56 [i_29])));
        /* LoopSeq 1 */
        for (unsigned long long int i_30 = 1; i_30 < 9; i_30 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_31 = 3; i_31 < 9; i_31 += 1) 
            {
                arr_122 [i_30] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)101)) >> (((((/* implicit */int) (short)6401)) - (6375)))));
                var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((long long int) var_12)))));
                /* LoopSeq 1 */
                for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                {
                    arr_125 [i_32] [i_31] [i_29] = ((/* implicit */unsigned int) arr_124 [i_32]);
                    var_47 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_14)))));
                    arr_126 [i_32] [i_31] [i_30] [i_29] = ((/* implicit */unsigned long long int) ((_Bool) arr_119 [i_30 + 1]));
                }
            }
            for (unsigned long long int i_33 = 0; i_33 < 10; i_33 += 1) 
            {
                arr_131 [i_29] [i_29] [i_30] [i_33] = ((/* implicit */unsigned long long int) (+(((long long int) arr_72 [i_29] [i_30] [i_33] [i_30]))));
                var_48 = ((/* implicit */short) (unsigned char)45);
            }
            arr_132 [i_30] [i_30] [i_29] = ((/* implicit */unsigned long long int) ((short) ((unsigned char) arr_19 [i_29] [i_29] [i_29] [i_29] [i_30])));
        }
        var_49 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (unsigned short)36847)))));
    }
    for (unsigned short i_34 = 1; i_34 < 19; i_34 += 1) 
    {
        arr_136 [i_34] &= ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_133 [i_34])) ? (((/* implicit */int) (short)-6402)) : (((/* implicit */int) var_13)))))) << (((((/* implicit */int) ((126485966U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-6402)))))) | (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
        arr_137 [i_34] [i_34] = ((/* implicit */_Bool) max((min((arr_134 [i_34] [i_34 - 1]), (arr_134 [i_34] [i_34 - 1]))), (max((min((((/* implicit */unsigned long long int) arr_133 [i_34])), (arr_134 [i_34] [i_34]))), (((/* implicit */unsigned long long int) (-(arr_135 [i_34]))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_35 = 1; i_35 < 12; i_35 += 2) 
    {
        for (unsigned char i_36 = 1; i_36 < 13; i_36 += 4) 
        {
            for (long long int i_37 = 1; i_37 < 14; i_37 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_38 = 1; i_38 < 12; i_38 += 2) 
                    {
                        for (signed char i_39 = 0; i_39 < 15; i_39 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */int) min(((-(var_7))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) var_15)))), (((((/* implicit */int) arr_140 [i_39])) >= (((/* implicit */int) arr_140 [i_35])))))))));
                                var_51 = ((/* implicit */unsigned char) 1480408578U);
                                arr_150 [i_35] [i_36] [i_37] [i_38] [i_36] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((4168481329U), (1480408578U))))));
                                var_52 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_146 [i_35 + 3] [i_39])) && (((/* implicit */_Bool) arr_146 [i_35 - 1] [i_35])))))));
                                arr_151 [i_35] [i_36] [i_37] [i_38] [i_39] [i_38] = ((/* implicit */unsigned long long int) arr_139 [i_38] [i_35]);
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) (~(arr_143 [i_37] [i_37] [i_36] [i_35]))))));
                }
            } 
        } 
    } 
}
