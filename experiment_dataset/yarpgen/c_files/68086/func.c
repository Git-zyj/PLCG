/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68086
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) (_Bool)0))))) ? (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) var_2)))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)807))))) == ((~(arr_1 [i_0])))));
        var_21 -= ((/* implicit */short) var_16);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_5 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) var_7))) > ((~(((var_11) >> (((/* implicit */int) var_8)))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                arr_11 [i_3] [i_2] [i_3] |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) max((arr_8 [i_3] [i_3] [i_2]), (((/* implicit */unsigned short) arr_6 [i_2]))))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_7 [i_1] [i_1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_18 [i_5] [i_4] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)12288)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523)))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) : (var_11))) % (144115188075855871LL))))));
                    }
                    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        arr_21 [i_1] [i_1] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((13LL) > (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6]))))))));
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_2] [i_2] [i_3 - 2]))) > (-4712054343881113019LL)));
                    }
                    for (unsigned char i_7 = 1; i_7 < 13; i_7 += 2) 
                    {
                        var_23 |= ((/* implicit */_Bool) ((long long int) var_14));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)11)) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)11637)) : (((/* implicit */int) arr_8 [i_1] [i_4] [i_1]))))));
                    }
                    var_25 = -13LL;
                }
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (min((arr_3 [i_3]), (((/* implicit */unsigned long long int) (unsigned short)13))))))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            arr_36 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_1)) | (579015455938579106ULL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        {
                            arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)10532)) : (((/* implicit */int) (short)-29956)))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1069547520U)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (arr_17 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_11] [i_12])));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_8 - 1] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) arr_29 [i_8 + 1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_29 [i_8 - 1] [i_8 - 1] [i_8 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        {
                            var_30 = ((((((/* implicit */_Bool) arr_48 [i_1] [i_2] [i_1] [i_13] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_19)))) < (((/* implicit */int) ((signed char) arr_32 [i_1]))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) -6LL))));
                        }
                    } 
                } 
            }
            arr_49 [i_1] = ((/* implicit */unsigned short) arr_48 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2] [i_2]);
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_57 [i_1] [i_1] [i_15] [i_1] [i_17] = ((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) min(((short)-32747), (((/* implicit */short) (_Bool)1)))))), ((short)-32747)));
                            var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-2)) > (((/* implicit */int) arr_51 [i_17] [i_16] [i_2] [i_1])))))));
                        }
                    } 
                } 
            } 
            var_33 *= ((/* implicit */unsigned int) (((+(min((arr_48 [i_2] [i_2] [i_2] [i_1] [i_1]), (((/* implicit */long long int) var_9)))))) % (((/* implicit */long long int) var_1))));
        }
        /* vectorizable */
        for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 2) 
        {
            var_34 = ((/* implicit */unsigned char) ((arr_41 [i_18] [i_1] [i_18] [i_18] [i_1] [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 2; i_19 < 14; i_19 += 2) 
            {
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_66 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (short)9148))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [(short)3] [i_19] [i_20])))));
                        var_35 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)65523)) >> (((((/* implicit */int) var_8)) - (24))))) % (((/* implicit */int) arr_29 [i_1] [i_1] [i_20 - 1]))));
                    }
                } 
            } 
        }
        for (long long int i_21 = 0; i_21 < 15; i_21 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_22 = 0; i_22 < 15; i_22 += 2) 
            {
                for (unsigned short i_23 = 0; i_23 < 15; i_23 += 2) 
                {
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */short) max((max((((unsigned long long int) var_17)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2303591209400008704ULL))))))), (((/* implicit */unsigned long long int) arr_34 [i_1] [i_24 - 1] [7LL] [i_24 - 1] [i_24 - 1] [i_1]))));
                            var_37 ^= ((/* implicit */unsigned long long int) (short)0);
                            var_38 -= ((/* implicit */unsigned short) arr_67 [i_24 - 1] [i_24 - 1]);
                            var_39 = ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)179))));
        }
        arr_77 [i_1] = ((/* implicit */_Bool) (~(((unsigned long long int) (_Bool)1))));
        arr_78 [i_1] = ((/* implicit */unsigned char) (~(max(((+(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_2))))));
    }
    for (unsigned char i_25 = 0; i_25 < 23; i_25 += 2) 
    {
        arr_81 [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_79 [i_25]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)154), (((/* implicit */unsigned char) arr_79 [i_25])))))) : (((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [(short)17])))))));
        arr_82 [i_25] = ((/* implicit */unsigned long long int) (-(min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < ((-2147483647 - 1)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_26 = 0; i_26 < 23; i_26 += 3) /* same iter space */
        {
            var_41 = ((/* implicit */short) ((arr_79 [i_25]) ? (((((/* implicit */_Bool) var_14)) ? (281474976186368ULL) : (((/* implicit */unsigned long long int) arr_83 [i_26])))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-9533)) + (2147483647))) >> (((arr_83 [i_26]) - (3456888417U))))))));
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> ((((((~(2147483647))) - (-2147483628))) + (46))))))));
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 23; i_27 += 3) 
            {
                for (short i_28 = 0; i_28 < 23; i_28 += 2) 
                {
                    {
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (unsigned short)64019))));
                        arr_90 [i_25] [i_26] [i_27] [i_25] [i_27] [i_26] = ((/* implicit */long long int) (unsigned short)12288);
                        arr_91 [i_25] [i_26] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)60588)) ? (((/* implicit */unsigned long long int) (+(var_11)))) : (arr_88 [i_26] [i_26])));
                        var_44 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (arr_89 [i_27]))))));
                    }
                } 
            } 
            arr_92 [i_25] [i_26] = ((/* implicit */unsigned long long int) ((int) arr_88 [i_26] [i_26]));
        }
        for (short i_29 = 0; i_29 < 23; i_29 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_30 = 1; i_30 < 21; i_30 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_31 = 0; i_31 < 23; i_31 += 1) 
                {
                    for (unsigned char i_32 = 0; i_32 < 23; i_32 += 3) 
                    {
                        {
                            arr_102 [i_31] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
                            var_45 -= ((/* implicit */unsigned char) (-(((/* implicit */int) var_17))));
                            arr_103 [i_25] [i_31] [i_30] [i_31] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) != (var_3)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_33 = 0; i_33 < 23; i_33 += 1) 
                {
                    for (int i_34 = 2; i_34 < 20; i_34 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) % (((/* implicit */int) var_4))))));
                            arr_110 [i_25] [i_29] [i_30] [i_33] [i_33] [21LL] = ((/* implicit */unsigned char) (((_Bool)1) ? ((-(arr_89 [i_34 + 1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_35 = 0; i_35 < 23; i_35 += 2) 
                {
                    for (short i_36 = 3; i_36 < 19; i_36 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)16384))))) - ((-(((/* implicit */int) (_Bool)0))))));
                            arr_118 [i_36] = ((/* implicit */short) (~(((/* implicit */int) arr_87 [i_30] [i_30] [i_36 - 1]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                {
                    arr_122 [i_37] [i_30] [i_29] [i_25] [i_37] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_106 [i_29] [i_30] [i_37])) && (((/* implicit */_Bool) arr_101 [(short)5] [i_29] [(short)5] [i_37] [i_37])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17104))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_15)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_38 = 3; i_38 < 22; i_38 += 3) 
                    {
                        arr_126 [i_25] [i_37] [i_30] [i_38] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_0)));
                        var_48 = ((/* implicit */unsigned char) ((arr_83 [i_37]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_123 [i_25] [i_25] [i_25] [i_25])))));
                    }
                    arr_127 [i_25] [i_37] [i_30] [i_25] [i_25] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_80 [i_25]))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_89 [i_30])))));
                    var_49 = ((/* implicit */_Bool) var_1);
                }
                for (int i_39 = 1; i_39 < 22; i_39 += 2) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_87 [i_30 - 1] [i_30 + 2] [i_39 - 1])) : (arr_130 [i_30 - 1] [i_30 + 2] [i_39 - 1] [i_39 - 1]))))));
                    var_51 -= ((/* implicit */unsigned int) ((arr_117 [i_39] [i_39 - 1] [i_39 + 1] [i_25]) ? (((arr_104 [i_25] [i_29] [i_30] [i_39 - 1]) / (arr_104 [i_25] [i_29] [i_30] [i_29]))) : (arr_125 [i_25] [4ULL] [i_30] [i_39 + 1] [i_39] [i_39])));
                }
                for (int i_40 = 1; i_40 < 22; i_40 += 2) /* same iter space */
                {
                    var_52 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_115 [i_30 + 2]))));
                    var_53 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16403)) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_9))))));
                    var_54 *= ((/* implicit */_Bool) (unsigned short)2267);
                }
            }
            arr_133 [i_25] [i_25] [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-19058)) - (((/* implicit */int) (short)-1)))) + (((/* implicit */int) arr_95 [i_25] [i_29] [i_29] [i_29]))))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_84 [i_29] [i_29]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_6), ((unsigned short)12288)))))))));
        }
        for (short i_41 = 0; i_41 < 23; i_41 += 3) /* same iter space */
        {
            arr_137 [i_25] = (-(((/* implicit */int) ((_Bool) ((((arr_96 [i_41] [i_25] [i_25] [i_25]) + (2147483647))) >> (((((/* implicit */int) arr_135 [i_25] [i_41])) + (135))))))));
            arr_138 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) (-(((arr_116 [i_41] [i_25] [i_25] [i_25] [i_25]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_87 [i_25] [i_25] [i_25]))))) : (var_13)))));
        }
    }
}
