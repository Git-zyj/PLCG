/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97103
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
    var_18 = ((/* implicit */unsigned int) var_17);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) min(((-(((/* implicit */int) (unsigned short)27934)))), (((/* implicit */int) max(((unsigned char)249), (((/* implicit */unsigned char) (signed char)96)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((-546421175), ((~(((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)84)) >> (((((/* implicit */int) arr_5 [i_1])) - (19893)))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((var_11) << (((((/* implicit */int) var_4)) - (9)))));
        arr_9 [(signed char)12] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    arr_15 [i_1] [(_Bool)1] [i_3] = ((/* implicit */short) ((arr_10 [i_3] [12]) >= (arr_10 [i_3] [i_2])));
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_18 [(unsigned char)19] [(unsigned char)19] [i_3] [i_1] = ((/* implicit */signed char) (-(arr_10 [i_2] [i_1])));
                        arr_19 [i_4] &= ((/* implicit */unsigned short) (short)25275);
                        arr_20 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) (unsigned char)84))) : ((~(1864713036)))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        arr_23 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_1]))));
                        arr_24 [i_5] [(signed char)6] [i_2] [i_5] [(unsigned char)12] = ((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_3] [i_3] [i_3] [i_5]);
                        arr_25 [i_1] [i_2] [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned char) ((_Bool) var_8));
                        arr_26 [(short)6] [i_5] [(unsigned short)0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -21325445)) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((((/* implicit */_Bool) 16777215ULL)) ? (1043781816) : (((/* implicit */int) (unsigned char)16))))));
                        arr_27 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-90)) + (2147483647))) << (((((/* implicit */int) (unsigned short)3840)) - (3840)))))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [17ULL] [17ULL] [6ULL] [17ULL] [i_1]))))) : (((/* implicit */unsigned long long int) ((int) 3028019908U)))));
                    }
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 19; i_7 += 1) 
                        {
                            arr_32 [i_2] [(unsigned short)7] [i_1] [i_1] [i_2] [(unsigned short)7] = ((/* implicit */signed char) arr_14 [i_1]);
                            arr_33 [i_1] [i_6] [(unsigned short)12] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) 1043781841)) ^ (var_8)))));
                        }
                        arr_34 [(unsigned short)12] [14U] [i_3] [i_1] [14U] [i_1] = ((/* implicit */unsigned short) ((((arr_10 [i_1] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) >> (((/* implicit */int) var_5))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        arr_39 [i_8] = ((/* implicit */unsigned short) arr_22 [4U] [14] [4U] [i_8] [14LL]);
        arr_40 [i_8] = ((/* implicit */short) (+(12727432324116577190ULL)));
    }
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        arr_45 [i_9] [i_9] = ((/* implicit */unsigned long long int) var_0);
        arr_46 [i_9] = ((((/* implicit */_Bool) 2657610101U)) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)41521)))))) : (((int) (_Bool)1)));
    }
    /* LoopNest 3 */
    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
    {
        for (signed char i_11 = 1; i_11 < 22; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            {
                                arr_59 [i_14] [i_14] [20ULL] [i_14] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_58 [i_10] [i_10] [i_10] [18U] [i_10])))), (((/* implicit */int) (unsigned char)109))));
                                arr_60 [(unsigned short)11] [i_10] [(short)18] [(signed char)16] [(signed char)16] [i_10] = ((/* implicit */signed char) (-((+(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    arr_61 [i_12] [i_11] [i_11 + 2] = ((/* implicit */int) max((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46056))) % (2519895949U))) << (((((((/* implicit */_Bool) arr_49 [(short)1] [(short)1])) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) arr_48 [i_11])))) - (144))))), (((/* implicit */unsigned int) ((unsigned char) var_9)))));
                    arr_62 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) (unsigned char)96);
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 3; i_16 < 23; i_16 += 3) 
                        {
                            arr_69 [i_10] [i_10] [8U] &= ((/* implicit */_Bool) (~(3169664284U)));
                            arr_70 [i_15] [i_11] [i_12] [(_Bool)1] [i_16 + 1] = ((/* implicit */unsigned int) var_11);
                            arr_71 [i_10] [i_15] [i_12] [(unsigned char)1] [i_16] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_65 [i_16 + 2] [i_15] [i_11 + 1] [0LL] [i_15] [i_11 + 3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_16 - 1] [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11 + 2])) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_16 + 2] [i_11 + 3] [i_11 + 3] [i_11 + 1] [i_11 + 2]))))))));
                            arr_72 [i_15] [(unsigned short)4] [i_11] [i_11] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) (short)13851))));
                        }
                        arr_73 [(_Bool)1] [(unsigned char)2] [(unsigned short)16] [(signed char)6] [i_10] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_52 [i_10] [i_10] [i_11 - 1] [i_11 - 1])) + (((/* implicit */int) arr_52 [i_11] [i_11] [i_11 - 1] [i_11 + 3])))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_52 [i_11 + 3] [i_11] [i_11 + 2] [i_11 + 1]))))));
                    }
                    for (int i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        arr_77 [i_12] [i_12] [i_12] [i_10] [i_11 + 1] [i_10] = ((/* implicit */int) var_7);
                        arr_78 [i_17] [i_17] [(short)24] [(_Bool)1] [i_17] = ((/* implicit */short) max((((1266947387U) & (max((((/* implicit */unsigned int) (_Bool)1)), (3511208953U))))), (((/* implicit */unsigned int) var_12))));
                        arr_79 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] = ((((/* implicit */int) (signed char)-117)) + (((/* implicit */int) (unsigned short)26364)));
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            arr_83 [(signed char)11] [(unsigned short)18] [i_12] [(unsigned short)18] [(unsigned short)18] [(unsigned short)18] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned int) (signed char)-1)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
                            arr_84 [i_11 - 1] [i_17] = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) arr_63 [24ULL] [i_18 - 1] [i_11 - 1] [24ULL])));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_89 [i_19] [i_19] [i_19] [11U] [i_19] [i_19] [i_19] = ((/* implicit */signed char) (~(((((unsigned int) (unsigned short)28528)) & (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_19] [i_17] [i_12] [i_11] [i_10] [i_10])))))));
                            arr_90 [(short)15] [(short)15] [(short)15] [i_17] [(short)15] [i_19] &= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_58 [i_10] [(_Bool)1] [(signed char)24] [i_17] [i_11 + 1])))), (((((/* implicit */int) var_3)) & (((/* implicit */int) var_4))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_20 = 0; i_20 < 21; i_20 += 2) 
    {
        for (short i_21 = 0; i_21 < 21; i_21 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_22 = 2; i_22 < 17; i_22 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_101 [i_23] [(signed char)8] [5] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (unsigned short)65535)) : (-2095351365)));
                        arr_102 [i_22] [i_22] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_74 [i_20] [22] [i_22] [i_23])))));
                        arr_103 [i_20] [i_20] [i_21] [i_20] [i_22 + 2] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_88 [i_22] [i_22 + 1] [(signed char)6] [i_22 + 4]))));
                        arr_104 [i_21] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (signed char)-13)) % (((/* implicit */int) (signed char)-55)))) : (((/* implicit */int) arr_58 [i_20] [i_21] [i_22] [i_23] [i_22 - 1]))));
                        arr_105 [i_23] [4ULL] [(signed char)7] [i_20] [i_20] [i_20] &= ((/* implicit */signed char) ((((/* implicit */int) arr_49 [i_22 - 2] [i_22 + 2])) ^ (((/* implicit */int) arr_49 [i_22 - 2] [i_22 + 4]))));
                    }
                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 21; i_24 += 2) 
                    {
                        arr_109 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */int) var_5);
                        /* LoopSeq 2 */
                        for (signed char i_25 = 3; i_25 < 20; i_25 += 3) 
                        {
                            arr_113 [i_25] [i_24] [i_25] [i_22] [i_25] [i_20] [i_20] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_85 [i_20] [(short)23] [(short)23] [i_20] [i_20] [i_20])) : (((/* implicit */int) (short)(-32767 - 1))))));
                            arr_114 [i_20] [(short)19] [i_21] [(short)19] [i_22 + 3] [i_25] [(unsigned short)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7258)) ? (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_22 + 1] [i_22] [i_22] [i_22 - 2] [i_25 - 3]))) : (arr_97 [i_22 + 2] [i_22 + 3] [i_22 + 3] [i_22 + 4])));
                            arr_115 [i_20] = ((/* implicit */unsigned long long int) (~(arr_57 [i_21] [i_22 + 4] [i_25 - 1])));
                            arr_116 [i_21] [i_24] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) arr_88 [i_25] [i_25 - 1] [(unsigned short)24] [(short)8]))));
                            arr_117 [i_25] [(unsigned char)13] [i_21] [i_21] [(unsigned short)1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) >= (arr_57 [i_20] [2ULL] [i_20]))))) < (arr_93 [i_20] [i_20]));
                        }
                        for (int i_26 = 0; i_26 < 21; i_26 += 3) 
                        {
                            arr_120 [i_26] [i_26] = ((/* implicit */int) (~(var_0)));
                            arr_121 [i_22] [i_20] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_49 [i_20] [i_20])) * (((/* implicit */int) (short)32767)))));
                            arr_122 [(unsigned char)1] [i_26] [i_22 + 3] [i_26] [i_20] = ((/* implicit */_Bool) (-(((((/* implicit */int) var_12)) >> (((/* implicit */int) arr_107 [i_21] [(unsigned char)2] [5LL] [i_26]))))));
                            arr_123 [i_20] [i_20] [i_24] [i_22] [i_24] [i_24] [8ULL] = ((/* implicit */int) var_15);
                        }
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        arr_128 [i_27] [i_20] [i_22 + 3] [i_21] [i_20] [(signed char)16] = ((/* implicit */signed char) 3028019908U);
                        arr_129 [i_20] [i_20] [i_21] [i_20] [i_22 - 1] [i_27] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) ^ ((~(((/* implicit */int) (short)127)))))) % (((/* implicit */int) var_16))));
                        /* LoopSeq 2 */
                        for (int i_28 = 0; i_28 < 21; i_28 += 3) 
                        {
                            arr_132 [i_20] [i_28] [i_20] [i_27] [i_28] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (signed char)-13)) / ((+(-1253597931))))));
                            arr_133 [i_21] [i_22 + 1] [i_27] = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 315100992)) ? (-802587303) : (((/* implicit */int) (signed char)56))))));
                            arr_134 [i_21] = ((/* implicit */_Bool) ((signed char) (unsigned char)90));
                            arr_135 [i_20] [i_21] [i_22] [i_20] [i_20] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                        for (unsigned short i_29 = 0; i_29 < 21; i_29 += 3) 
                        {
                            arr_139 [i_20] [(unsigned short)17] [i_22] [(short)14] [i_29] [i_22] [i_22] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-55)), (var_12)))) ? (((/* implicit */int) max((arr_136 [(short)9] [i_27] [i_22] [i_22] [i_21] [i_21] [19ULL]), (((/* implicit */unsigned char) arr_100 [i_20]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_74 [i_20] [i_21] [i_20] [i_20])) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max(((signed char)-24), ((signed char)-1)))) : (((/* implicit */int) ((unsigned char) (signed char)127))))) : (((/* implicit */int) (unsigned short)65535))));
                            arr_140 [i_20] [i_20] [(unsigned char)17] [(short)2] [i_20] = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (signed char)-1)))));
                        }
                        arr_141 [(unsigned char)13] [i_22 + 2] [i_22 + 2] [i_21] [(unsigned short)3] &= ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)56137))))));
                    }
                    for (int i_30 = 0; i_30 < 21; i_30 += 3) 
                    {
                        arr_145 [i_20] [i_21] [i_22] [i_20] = ((/* implicit */_Bool) arr_55 [i_30] [i_22] [i_21] [6U]);
                        arr_146 [i_20] [(unsigned char)15] [i_21] [i_22] [(unsigned char)15] [(unsigned char)15] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)102))));
                    }
                    arr_147 [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_143 [1ULL] [i_21])) ? (((/* implicit */int) (_Bool)1)) : (var_13)))) || (((/* implicit */_Bool) arr_58 [i_20] [i_21] [(_Bool)1] [i_22 + 4] [i_22 + 3]))))) >> ((((~((((_Bool)1) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)-63)))))) - (27)))));
                    arr_148 [i_20] [i_21] [i_20] [i_22 - 1] = ((/* implicit */int) ((((((1903896676) + (((/* implicit */int) (_Bool)1)))) + ((-(var_13))))) != (((/* implicit */int) ((((/* implicit */int) arr_118 [i_20] [i_22] [i_22 + 4] [i_20] [i_22 + 4])) == (arr_94 [i_22 + 4] [i_22 + 1] [i_22 + 4]))))));
                }
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_32 = 1; i_32 < 20; i_32 += 3) 
                    {
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                        {
                            {
                                arr_157 [i_20] [(_Bool)1] [i_20] = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)7)))) + ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) : (6500910944405752676LL)))))));
                                arr_158 [i_32] [i_31] [13] [(unsigned char)1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_142 [i_32 - 1] [i_32 + 1] [i_32] [i_32 + 1] [i_32 + 1] [i_32]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_34 = 0; i_34 < 21; i_34 += 2) 
                    {
                        arr_162 [i_34] [i_31] [i_21] [i_20] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)16384))));
                        arr_163 [i_21] [3U] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) max((((((((/* implicit */int) (signed char)46)) + (((/* implicit */int) (short)-2056)))) - (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-2056)) : (((/* implicit */int) (unsigned char)140)))))), ((+(((/* implicit */int) (signed char)-12))))));
                    }
                }
                arr_164 [i_20] [i_21] = ((/* implicit */unsigned char) max((max((((4089623323U) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))))), (((3522310349U) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
            }
        } 
    } 
}
