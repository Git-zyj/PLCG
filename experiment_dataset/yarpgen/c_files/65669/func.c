/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65669
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_10 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (arr_0 [i_0])));
        arr_2 [7LL] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [(short)21]);
        var_11 = ((/* implicit */unsigned int) var_2);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_1)) : (arr_5 [i_1])))) <= (var_9)));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            var_14 = ((/* implicit */signed char) arr_8 [i_2] [i_1]);
            var_15 = ((/* implicit */unsigned char) var_1);
            var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) ? ((-(17732923532771328LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) var_1)))))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_17 = ((/* implicit */int) min(((+(((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (var_9)));
            arr_16 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_1 [i_3]))) % (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-88))))))))));
            var_18 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_3] [i_4] [i_3]))))) ? (((/* implicit */long long int) min((arr_11 [i_4]), (((/* implicit */unsigned int) arr_12 [12] [12]))))) : (max((arr_13 [i_3]), (((/* implicit */long long int) arr_14 [14ULL])))))), (((arr_8 [(_Bool)1] [i_4]) + (((/* implicit */long long int) var_1))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (short i_6 = 3; i_6 < 17; i_6 += 1) 
                {
                    {
                        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-(arr_5 [(unsigned short)7])))) : (((((/* implicit */_Bool) arr_21 [i_6])) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) arr_18 [i_4] [i_3]))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((((/* implicit */int) arr_22 [i_3] [i_5] [i_3] [i_7])) == (((/* implicit */int) var_2)))))))));
                            var_21 = (-(arr_23 [i_3] [i_4] [i_5] [i_6] [i_7] [i_5]));
                        }
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_2);
                            var_22 = ((/* implicit */int) max((((/* implicit */long long int) arr_0 [i_5])), (min((max((((/* implicit */long long int) var_0)), (var_9))), (((/* implicit */long long int) arr_1 [(signed char)4]))))));
                        }
                        for (long long int i_9 = 2; i_9 < 17; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) arr_30 [i_6] [i_4] [i_3] [i_4]);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_3])) ? (var_1) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [4U] [4U] [i_3]))) : (arr_5 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((+(((((/* implicit */_Bool) 1869024213056387691ULL)) ? (1869024213056387695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))))))));
                            arr_35 [i_3] [i_3] [i_9 - 1] = ((/* implicit */long long int) arr_28 [i_3] [i_3] [i_4] [i_4] [i_5] [i_6 - 3] [14U]);
                            var_25 = var_8;
                        }
                        var_26 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_26 [0LL])))) ? (min((((/* implicit */unsigned long long int) arr_6 [i_3] [14])), (arr_10 [(signed char)16]))) : (((/* implicit */unsigned long long int) var_6))))));
                        var_27 = ((/* implicit */unsigned int) (+(arr_34 [i_3] [i_3] [i_3] [i_3] [i_3])));
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (arr_31 [(short)6]))), (((/* implicit */unsigned long long int) var_3))))) ? (arr_33 [i_3] [i_3] [11U] [i_3] [i_3]) : (((/* implicit */long long int) var_0))));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_38 [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) (short)29714)), (arr_23 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] [i_3])));
            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)24695))));
        }
        /* LoopNest 2 */
        for (long long int i_11 = 2; i_11 < 17; i_11 += 2) 
        {
            for (long long int i_12 = 3; i_12 < 16; i_12 += 2) 
            {
                {
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3] [i_3])))))));
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_25 [i_3] [i_11] [i_11] [i_12]))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (short)29714)), (-6278515103258000422LL))) == (-8375972147965310582LL))))) | (max((((/* implicit */long long int) (short)-24695)), (6598363849426415500LL)))));
    }
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        arr_47 [i_13] = ((/* implicit */short) var_8);
        /* LoopSeq 2 */
        for (unsigned int i_14 = 1; i_14 < 20; i_14 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))));
                arr_53 [i_13] [i_13] [i_14] [14U] = ((/* implicit */unsigned short) arr_43 [i_13]);
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_13])) || (((/* implicit */_Bool) var_3)))))) : (arr_1 [i_13])));
            }
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((min((((/* implicit */unsigned int) arr_52 [4U] [18U] [i_16])), (((((/* implicit */_Bool) arr_0 [i_13])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) != (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_51 [i_13] [(unsigned char)12] [i_16]))))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    var_37 = ((/* implicit */long long int) var_1);
                    var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                }
                var_39 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_14])))))) ? (((arr_55 [(signed char)18] [i_14 + 2] [19U] [i_13]) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_13] [i_14] [i_13] [i_14])))))))));
            }
            for (long long int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 1; i_19 < 20; i_19 += 3) 
                {
                    for (signed char i_20 = 0; i_20 < 22; i_20 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_2), (((/* implicit */short) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))))) : (((((((/* implicit */int) var_5)) == (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))))));
                            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) max(((-(var_8))), (((/* implicit */unsigned int) min((max((((/* implicit */int) arr_51 [i_13] [(unsigned char)18] [i_20])), (arr_63 [2ULL] [i_19] [i_14] [2ULL]))), (((/* implicit */int) var_7))))))))));
                        }
                    } 
                } 
                var_42 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_62 [i_13] [i_13] [i_13] [i_18]))) & ((~(arr_65 [(unsigned char)15] [i_13] [i_14] [i_18])))));
                var_43 = ((/* implicit */short) var_8);
            }
            for (long long int i_21 = 0; i_21 < 22; i_21 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) arr_72 [i_13] [i_13]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned int) arr_50 [i_21] [i_14] [i_13]);
                        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_13] [i_14] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_13] [i_13] [i_13] [i_13])))))));
                        var_47 = ((/* implicit */long long int) var_5);
                        var_48 = ((/* implicit */unsigned short) (-(max((arr_52 [i_14] [i_14] [(unsigned short)2]), (((((/* implicit */_Bool) (short)24695)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
                        arr_78 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(511LL)))))) ? (max((((/* implicit */long long int) arr_59 [i_14] [i_14])), (arr_66 [i_21]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) arr_72 [i_21] [i_14])) : (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_13]) : (((/* implicit */unsigned int) var_1)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) (+((~(((/* implicit */int) var_3)))))))));
                        var_50 = ((/* implicit */long long int) ((16577719860653163926ULL) * (((/* implicit */unsigned long long int) 0))));
                        var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_64 [i_13] [i_14])) : (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) arr_74 [i_14] [i_14] [i_22] [i_22] [i_24] [i_14])))) : ((~(arr_71 [13] [i_22] [i_21] [i_13])))));
                    }
                    for (unsigned int i_25 = 0; i_25 < 22; i_25 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned int) arr_51 [i_13] [i_14] [i_21]);
                        var_53 = ((/* implicit */int) arr_74 [i_14] [i_22] [i_21] [i_14] [i_13] [i_14]);
                        var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) arr_45 [i_13])), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))))))));
                        var_55 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_13] [i_14] [i_14] [i_13] [i_25] [i_25])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_13] [(unsigned char)8]))) : (var_6)))))) ? (((/* implicit */unsigned long long int) (-(max((arr_57 [i_13] [(short)1] [i_13] [i_13] [i_13] [i_13]), (((/* implicit */unsigned int) arr_75 [(_Bool)1] [(_Bool)1] [3LL]))))))) : (arr_77 [i_13] [i_13] [i_13] [i_14] [i_22] [i_25])));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_26 = 0; i_26 < 22; i_26 += 1) 
                {
                    var_56 = ((/* implicit */long long int) arr_43 [i_13]);
                    var_57 = ((/* implicit */long long int) (-(var_6)));
                    var_58 = ((/* implicit */long long int) min((16577719860653163926ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
                }
                var_59 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [(_Bool)1] [i_14] [(_Bool)1])) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_50 [i_14] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_81 [(short)4] [i_13] [i_14] [i_14] [i_21]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_13] [i_14] [i_21] [i_14] [i_14] [(unsigned char)13])))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (!(arr_75 [8] [i_14] [13LL])))))))));
            }
            var_60 = var_2;
        }
        for (unsigned int i_27 = 2; i_27 < 20; i_27 += 1) 
        {
            var_61 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_70 [i_13] [i_13] [i_13] [i_27]))))))), (((((/* implicit */_Bool) 33554400)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [(short)11] [i_27] [i_13] [i_13]))) : (2374217849U)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_28 = 2; i_28 < 20; i_28 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_29 = 0; i_29 < 22; i_29 += 1) 
                {
                    var_62 = ((/* implicit */unsigned long long int) min((var_62), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_71 [i_13] [i_27] [(short)18] [i_29]) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_83 [(unsigned short)12]))))) : (((((/* implicit */_Bool) -33554400)) ? (((/* implicit */long long int) 1942696334U)) : (-439079411488857385LL))))))));
                    arr_93 [i_13] [i_27 - 2] [i_27] [i_29] = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 1 */
                    for (unsigned int i_30 = 3; i_30 < 21; i_30 += 3) 
                    {
                        var_63 = ((/* implicit */_Bool) max((var_63), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_56 [10U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [16U]))) : (arr_43 [(signed char)18]))))));
                        var_64 = ((/* implicit */unsigned int) var_5);
                        var_65 = ((/* implicit */long long int) arr_94 [i_13] [i_13] [10LL]);
                    }
                    var_66 |= ((/* implicit */long long int) var_4);
                    var_67 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (arr_44 [i_27] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_27] [i_28] [i_29]))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_13] [0LL] [0LL] [i_29])))));
                }
                for (long long int i_31 = 0; i_31 < 22; i_31 += 1) 
                {
                    arr_99 [i_27] [i_27] [i_28] [i_27] [i_27] = ((/* implicit */signed char) arr_96 [i_13] [i_31] [i_28 - 1] [i_31]);
                    var_68 = ((/* implicit */unsigned int) arr_66 [i_13]);
                }
                for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                {
                    var_69 = (i_27 % 2 == zero) ? (((/* implicit */unsigned int) ((((var_1) >> (((arr_77 [i_13] [i_13] [(short)7] [i_27] [17U] [(unsigned char)4]) - (8611973905131749039ULL))))) | (arr_52 [i_27] [i_27] [(short)11])))) : (((/* implicit */unsigned int) ((((var_1) >> (((((arr_77 [i_13] [i_13] [(short)7] [i_27] [17U] [(unsigned char)4]) - (8611973905131749039ULL))) - (10050766538520035787ULL))))) | (arr_52 [i_27] [i_27] [(short)11]))));
                    var_70 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_1 [i_13])))) ? (((/* implicit */int) arr_50 [i_13] [i_13] [i_28])) : ((~(((/* implicit */int) (short)31362))))));
                }
                var_71 = ((/* implicit */unsigned long long int) var_8);
                /* LoopNest 2 */
                for (short i_33 = 4; i_33 < 18; i_33 += 1) 
                {
                    for (short i_34 = 3; i_34 < 18; i_34 += 3) 
                    {
                        {
                            var_72 = ((/* implicit */short) min((var_72), (((/* implicit */short) var_6))));
                            var_73 = ((/* implicit */long long int) (+(var_1)));
                        }
                    } 
                } 
            }
            var_74 = ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_83 [i_27]))))) ? (arr_90 [i_27] [i_27] [i_27] [(unsigned short)8]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_62 [i_13] [i_27] [15U] [i_13])) >> (((((/* implicit */int) var_5)) - (6148)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_56 [i_27])) << (((arr_72 [i_27] [i_13]) - (1278136063)))))));
            var_75 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13332490145645569110ULL)) ? (1869024213056387690ULL) : (((/* implicit */unsigned long long int) 9223372036854775800LL)))))));
            arr_108 [(signed char)16] [i_27] = ((/* implicit */unsigned short) max((min((arr_60 [i_13] [i_13] [i_27]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_100 [i_13] [i_27] [i_27]))))))), (((/* implicit */unsigned int) var_4))));
        }
    }
    var_76 = ((/* implicit */_Bool) max((var_76), (((((/* implicit */_Bool) 13332490145645569120ULL)) || (((/* implicit */_Bool) (short)-25019))))));
    var_77 = ((/* implicit */short) max((var_77), (((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))));
    var_78 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8))) << (((0) % (((/* implicit */int) (short)-31362))))))) : (var_9)));
}
