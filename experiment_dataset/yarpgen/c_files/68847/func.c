/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68847
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((8921987094687261480ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20607))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [7ULL] [i_0 + 3])))));
        arr_5 [(_Bool)1] |= ((/* implicit */unsigned long long int) var_2);
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_1)))))));
        var_14 = ((/* implicit */int) (-(9524756979022290135ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_6 [i_1] [i_1 - 1]))));
            var_15 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (short)13641))))));
            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((9524756979022290136ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) max(((short)24686), (((/* implicit */short) arr_11 [i_2]))))) : (((/* implicit */int) max((var_1), (var_1))))))) : ((+((+(8921987094687261480ULL)))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_24 [i_1] [i_4] [i_4] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) max((((unsigned long long int) arr_16 [i_1] [i_1 + 3] [i_1 + 1])), (min((((/* implicit */unsigned long long int) var_5)), (arr_10 [i_1 + 2])))));
                        var_17 = ((/* implicit */int) max((var_17), ((+((~(((/* implicit */int) (short)13))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */int) (+(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_27 [i_1] [i_1 + 3] [13] [(short)0] [i_3] [i_4] [i_6])) : (0ULL))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))) <= (var_2)));
                    }
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) min((max((((/* implicit */short) var_1)), ((short)-13642))), (((/* implicit */short) arr_26 [i_1] [i_1] [i_1] [i_3] [i_4]))))))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_1))))))))) - ((~(var_3)))));
                }
                var_22 -= ((/* implicit */signed char) (~(((((/* implicit */int) max((((/* implicit */short) var_1)), (var_12)))) - (((/* implicit */int) (unsigned short)15360))))));
                var_23 &= ((/* implicit */unsigned char) ((_Bool) (short)-24687));
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (short)-2364))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 11512373788575604848ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)13641)))))))))));
            }
            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)2))));
        }
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            var_26 = max(((+(var_2))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))));
            var_27 = ((/* implicit */unsigned int) var_12);
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (var_11) : (((/* implicit */unsigned long long int) ((2248997555U) / (((/* implicit */unsigned int) arr_17 [i_1] [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 2])))))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (short)-3))));
        }
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_30 = ((/* implicit */unsigned short) (~(((unsigned int) var_6))));
            var_31 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1 + 3])) - (var_11)))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] = ((/* implicit */unsigned int) arr_36 [i_9]);
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? ((+(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            arr_42 [i_9] [i_10] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) arr_39 [(_Bool)1] [i_10] [i_9]));
            arr_43 [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))));
        }
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            arr_47 [i_9] = ((/* implicit */int) var_6);
            var_33 -= ((/* implicit */int) ((((unsigned int) var_0)) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
            arr_48 [i_9] [i_11] [i_11] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)12)))) || (((/* implicit */_Bool) var_1))));
            var_34 = ((/* implicit */unsigned long long int) var_2);
        }
    }
    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            var_35 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 8921987094687261480ULL)) && (((/* implicit */_Bool) arr_52 [14]))))), (((unsigned char) arr_54 [i_13]))));
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) arr_37 [i_12] [i_13]))))))))));
                var_37 -= ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)1)), (((((/* implicit */int) (short)24686)) + (((/* implicit */int) (_Bool)1))))));
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64029)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))))));
                /* LoopSeq 3 */
                for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (arr_39 [i_12] [i_13] [i_14])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_45 [(unsigned char)6] [i_14] [i_13])))) ? (8921987094687261480ULL) : (min((var_3), (((/* implicit */unsigned long long int) var_2)))))))));
                    var_40 = ((/* implicit */_Bool) min((((unsigned long long int) (short)-4300)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_3))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))));
                    var_41 ^= ((((var_3) + (((/* implicit */unsigned long long int) arr_45 [i_13] [i_13] [i_15])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_12] [i_15] [i_14])) ? (arr_45 [i_12] [i_14] [i_15]) : (arr_45 [i_15] [i_15] [i_15])))));
                    var_42 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))));
                    /* LoopSeq 4 */
                    for (short i_16 = 2; i_16 < 15; i_16 += 2) /* same iter space */
                    {
                        arr_62 [i_12] [i_13] [i_14] [i_14] [i_12] = min((0ULL), (((/* implicit */unsigned long long int) (short)-24687)));
                        arr_63 [i_12] [i_12] [i_12] [10ULL] [5ULL] [i_12] = ((/* implicit */unsigned int) ((int) ((unsigned int) (short)-24687)));
                    }
                    /* vectorizable */
                    for (short i_17 = 2; i_17 < 15; i_17 += 2) /* same iter space */
                    {
                        arr_67 [(signed char)14] [i_13] [i_14] [0] [i_14] &= ((/* implicit */int) (!(((((/* implicit */int) (unsigned short)64029)) <= (((/* implicit */int) var_7))))));
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_17 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) (unsigned short)5898))));
                    }
                    /* vectorizable */
                    for (short i_18 = 4; i_18 < 15; i_18 += 2) 
                    {
                        var_44 ^= ((/* implicit */unsigned short) var_10);
                        arr_71 [i_12] [i_13] [i_13] [i_12] [i_13] = ((/* implicit */short) (~(var_3)));
                    }
                    for (unsigned int i_19 = 0; i_19 < 16; i_19 += 4) 
                    {
                        arr_75 [i_12] [i_13] [i_12] [i_15] [i_12] [i_19] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((2822734977U) & (var_2))))), (((/* implicit */unsigned int) ((short) (unsigned short)65535)))));
                        var_45 &= min((((/* implicit */unsigned long long int) (~((~(var_2)))))), ((~(((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8718))))))));
                    }
                }
                for (int i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    arr_79 [i_12] [i_13] [i_13] [i_12] = ((/* implicit */signed char) min(((~(var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) (unsigned char)86)))) : ((~(((/* implicit */int) var_7)))))))));
                    arr_80 [i_12] [i_12] [6] [i_13] [i_12] [i_20] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)64034)))), (((/* implicit */int) ((((var_8) ? (var_3) : (var_11))) <= (((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_2)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 1; i_21 < 15; i_21 += 1) 
                    {
                        arr_83 [(short)2] [i_12] [(short)15] [2ULL] [i_13] [i_12] [i_12] = ((/* implicit */unsigned short) (signed char)40);
                        var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((13), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64034))))))))));
                    }
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))), (max((var_6), (((/* implicit */unsigned long long int) 4294967295U))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_82 [(short)7] [i_14] [(short)11] [i_14] [i_13] [i_13] [(unsigned char)12]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_22 = 0; i_22 < 16; i_22 += 2) 
                    {
                        arr_86 [i_22] [i_13] [i_12] [i_12] = ((/* implicit */_Bool) var_12);
                        var_48 = ((/* implicit */unsigned char) (!(((_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-13642))))));
                        arr_87 [i_12] [9ULL] [i_13] [i_12] [i_20] [i_22] [i_22] = ((/* implicit */unsigned long long int) arr_85 [i_12] [i_12] [i_13] [i_14] [i_14] [i_20] [i_22]);
                    }
                    for (unsigned char i_23 = 3; i_23 < 14; i_23 += 2) 
                    {
                        var_49 = ((/* implicit */short) (((!(((/* implicit */_Bool) 89957786)))) || (((/* implicit */_Bool) ((unsigned long long int) 16411488269486055159ULL)))));
                        var_50 = ((/* implicit */unsigned long long int) (signed char)0);
                        arr_91 [i_12] [i_12] [i_14] [(signed char)10] [11ULL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 2) 
                    {
                        var_52 ^= ((/* implicit */signed char) ((arr_65 [(short)12] [i_13] [i_13] [14U]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))));
                        arr_96 [i_12] [i_24] [(_Bool)1] [i_20] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)13641))));
                        var_53 += ((/* implicit */short) (((+(var_11))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (short)23254)) : (((/* implicit */int) (unsigned short)5902)))))));
                    }
                }
                for (signed char i_25 = 0; i_25 < 16; i_25 += 4) 
                {
                    var_54 |= ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 1290892019))))), (var_1)));
                    var_55 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_64 [i_12] [i_25] [i_14] [i_13] [i_12] [i_12] [i_12])), (-2147483638))))));
                }
                var_56 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_5))))))), ((+(max((var_6), (((/* implicit */unsigned long long int) var_2))))))));
            }
            var_57 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))) + ((~(((unsigned long long int) (_Bool)1))))));
        }
        for (unsigned char i_26 = 0; i_26 < 16; i_26 += 2) 
        {
            /* LoopNest 3 */
            for (int i_27 = 1; i_27 < 15; i_27 += 3) 
            {
                for (unsigned short i_28 = 0; i_28 < 16; i_28 += 1) 
                {
                    for (unsigned char i_29 = 0; i_29 < 16; i_29 += 1) 
                    {
                        {
                            arr_110 [i_27 + 1] [i_27] [15U] [i_12] [i_27 + 1] = ((/* implicit */short) var_2);
                            arr_111 [i_12] [i_12] [(_Bool)1] [i_12] [i_12] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-24687)))))))), (((((/* implicit */int) arr_46 [i_27 + 1] [i_27 - 1] [i_27 - 1])) - (((/* implicit */int) ((((/* implicit */_Bool) 1417561444U)) || (((/* implicit */_Bool) var_11)))))))));
                            var_58 = ((/* implicit */short) min((((/* implicit */unsigned long long int) 1290892019)), (min((7084341241750269064ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                            var_59 -= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (unsigned char)252)), (arr_56 [i_26] [i_27 + 1]))), (((/* implicit */unsigned long long int) ((unsigned short) var_6)))));
                        }
                    } 
                } 
            } 
            var_60 = ((/* implicit */unsigned long long int) arr_90 [i_12] [i_12]);
            var_61 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)(-32767 - 1))), (((((/* implicit */_Bool) arr_99 [i_12] [i_26] [i_26])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)13642))))))), (min((var_3), (var_3)))));
        }
        /* vectorizable */
        for (short i_30 = 0; i_30 < 16; i_30 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (arr_54 [i_12]))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_90 [i_30] [i_30]))))) : ((-(((/* implicit */int) var_8)))))))));
                /* LoopSeq 2 */
                for (signed char i_32 = 2; i_32 < 13; i_32 += 3) 
                {
                    arr_118 [i_12] [i_30] [i_12] [i_32] [(unsigned short)1] [i_12] = ((/* implicit */_Bool) (+(1290892019)));
                    var_63 ^= ((/* implicit */unsigned short) 443848589U);
                    var_64 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_90 [i_30] [i_30]))));
                    arr_119 [(signed char)2] [i_12] [i_31] = (!(((/* implicit */_Bool) (unsigned char)63)));
                    var_65 = ((/* implicit */_Bool) max((var_65), (((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)0)))))))));
                }
                for (unsigned long long int i_33 = 0; i_33 < 16; i_33 += 1) 
                {
                    var_66 = ((/* implicit */unsigned int) (signed char)-68);
                    arr_122 [i_12] [i_12] [i_31] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                }
            }
            var_67 = ((/* implicit */short) ((unsigned int) var_8));
        }
        var_68 += ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_90 [(short)8] [i_12]))))), (((((/* implicit */int) arr_90 [0U] [i_12])) - (((/* implicit */int) arr_90 [(_Bool)1] [i_12]))))));
        arr_123 [i_12] [(_Bool)1] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (2539464254U)));
    }
}
