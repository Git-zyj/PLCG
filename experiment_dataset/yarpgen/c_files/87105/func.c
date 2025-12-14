/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87105
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned short) arr_0 [i_2])))))));
                    var_12 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_3)), (min((1270864938U), (((/* implicit */unsigned int) arr_5 [i_2 + 2] [i_2 + 3] [i_2 + 3]))))));
                    var_13 = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        arr_10 [i_3] |= ((/* implicit */int) min((((/* implicit */unsigned long long int) 3024102357U)), (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (12979980734718300952ULL) : (18165668513858994660ULL))))));
        arr_11 [i_3] = ((/* implicit */short) var_1);
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) (signed char)73);
        arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_8 [i_3] [i_3]), (((/* implicit */int) arr_3 [i_3]))))) ? (arr_6 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 18165668513858994660ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) : (var_2))) > (var_7)))))));
        var_14 = ((/* implicit */unsigned short) 2046574579U);
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
    {
        var_15 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_8 [i_4] [i_4]) : (arr_8 [i_4] [i_4])))), (max((((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])), (var_6))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                var_16 = arr_3 [i_4];
                arr_22 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_3);
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    var_17 += ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)37))));
                    var_18 = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_14 [i_4] [(signed char)11])))) / (((((/* implicit */_Bool) arr_9 [i_4] [(_Bool)1])) ? (((/* implicit */int) arr_7 [i_4] [i_7 + 2] [i_7 + 2] [i_7 - 1])) : (((/* implicit */int) var_3)))));
                    arr_26 [i_7 + 3] [i_7 - 1] [i_6] [i_4] [i_4] = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_3 [i_6])))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_31 [i_8] = ((/* implicit */unsigned int) var_8);
                            var_19 = ((/* implicit */unsigned long long int) var_8);
                            var_20 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)11))))) : (((((/* implicit */_Bool) (short)8176)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29210))))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned long long int) (+((+(arr_6 [0ULL] [i_5] [i_5])))));
            }
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_5] [i_5] [i_4] [i_5])) ^ (((/* implicit */int) arr_15 [i_4]))));
            /* LoopNest 2 */
            for (long long int i_10 = 4; i_10 < 11; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    {
                        arr_38 [i_4] [i_4] [i_4] [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_4] [i_10 + 1] [i_10 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_11] [i_10 - 2] [i_11])))));
                        /* LoopSeq 1 */
                        for (int i_12 = 3; i_12 < 9; i_12 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) var_10);
                            var_24 &= ((/* implicit */int) var_3);
                        }
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_37 [i_4] [i_11] [i_10 - 1] [i_11]))));
                    }
                } 
            } 
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_26 -= ((/* implicit */unsigned short) arr_7 [i_13] [i_4] [11] [i_4]);
            arr_44 [i_4] = ((/* implicit */long long int) ((((var_10) && (var_10))) ? (13157051288232531616ULL) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_42 [i_4] [i_4])))), (((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4] [i_4] [6U] [i_4])) ? (1578721061) : (arr_8 [i_4] [i_13]))))))));
            arr_45 [i_13] [i_4] [i_4] = ((/* implicit */int) max((((((/* implicit */_Bool) max((var_6), (var_7)))) && (arr_33 [i_4] [(unsigned short)2] [i_4] [i_4]))), ((_Bool)0)));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_27 += ((/* implicit */unsigned int) (~(((max((var_2), (((/* implicit */unsigned long long int) arr_43 [i_4])))) & (((var_10) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [(short)1] [i_14] [i_14] [(_Bool)1] [i_14])))))))));
            var_28 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_3 [i_4]))))), (arr_15 [i_4])));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_34 [i_15 + 2] [i_14] [i_4] [i_4] [i_4]))) * (((((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_14] [i_4])), (arr_9 [i_14] [i_4])))) ? (((((/* implicit */_Bool) arr_15 [i_14])) ? (((/* implicit */int) arr_28 [i_4] [i_4] [i_14] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_16 [(unsigned short)8])))) : (((/* implicit */int) var_5))))));
                /* LoopSeq 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) max(((short)-11916), (((/* implicit */short) ((((/* implicit */int) arr_49 [i_16] [(unsigned short)10] [i_4] [i_4])) > (((/* implicit */int) arr_1 [i_16])))))))) ? (((/* implicit */int) ((signed char) (unsigned short)35090))) : ((~(((/* implicit */int) arr_17 [i_4] [i_4] [i_4]))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_31 = ((/* implicit */int) (unsigned char)25);
                        arr_56 [i_14] [i_14] [i_15] [i_14] [i_14] = ((/* implicit */int) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_14] [(_Bool)1])) && (((/* implicit */_Bool) arr_14 [i_14] [i_15 - 1])))))));
                        var_32 ^= ((/* implicit */int) arr_34 [i_4] [i_4] [9] [8U] [i_4]);
                        var_33 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_54 [i_4] [i_14] [(unsigned short)6] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_15] [i_15 - 1] [i_15 + 2]))) : (max((((/* implicit */unsigned long long int) var_8)), (arr_19 [i_17]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_54 [i_15 - 1] [i_17] [9LL] [i_17 - 1])))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_51 [i_15 + 3] [i_15] [i_15 + 2] [i_15 + 1])), (arr_18 [i_15 + 1])))) ? (max((((/* implicit */unsigned long long int) ((arr_2 [i_18]) && (((/* implicit */_Bool) var_3))))), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [(signed char)23] [i_14] [i_16]))))));
                        arr_61 [i_4] [i_14] [i_4] [i_16] [i_18] = (!(((/* implicit */_Bool) var_1)));
                        var_35 &= ((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)36325)) : (((/* implicit */int) arr_36 [i_15 + 2])))), (((/* implicit */int) arr_41 [i_15 - 1] [i_15 + 2] [i_15 + 3] [i_15 - 1] [i_15]))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) var_8);
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [i_19] [i_19]))))))))) : (((((/* implicit */_Bool) arr_62 [i_15] [i_15 + 2] [i_15 + 3] [(_Bool)1] [i_15 + 1])) ? (arr_62 [i_15] [(short)3] [i_15 + 3] [i_15 + 1] [(short)3]) : (arr_62 [i_15 + 2] [i_15] [i_15 + 2] [(_Bool)1] [i_15 + 2])))))));
                        arr_64 [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_4] [i_15] [i_15])) * (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_4] [i_4])) && (arr_2 [(_Bool)1])))))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_67 [i_14] [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned long long int) var_5);
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) arr_25 [i_20] [i_16] [i_16] [i_15 + 1] [i_4] [i_4]))));
                        var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [(unsigned char)2] [i_20]))))) && (((/* implicit */_Bool) min(((short)11915), (((/* implicit */short) (signed char)-64))))))) ? (((((/* implicit */_Bool) arr_43 [i_15 + 3])) ? (min((arr_50 [i_16]), (((/* implicit */long long int) arr_65 [i_20] [(_Bool)1] [i_16] [i_16] [i_15] [i_4] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (arr_6 [i_20] [i_16] [i_4])));
                    }
                    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        var_40 = ((/* implicit */signed char) 6322828003782670084ULL);
                        arr_70 [i_21] [i_21] [i_15 - 1] [i_21] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)66)) - (arr_23 [i_15] [i_15 - 1] [i_15])));
                    }
                    var_41 = ((/* implicit */_Bool) ((max((((/* implicit */int) arr_46 [i_15 + 3] [i_4] [i_4])), (-1766999178))) / (((/* implicit */int) ((_Bool) max((((/* implicit */short) arr_0 [i_14])), (var_5)))))));
                }
                for (unsigned char i_22 = 0; i_22 < 12; i_22 += 4) 
                {
                    arr_73 [i_22] [i_14] [i_22] [(short)10] [i_22] = ((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_14])), (((var_10) ? (((/* implicit */int) ((1025719716U) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) arr_57 [(unsigned short)11] [6ULL] [i_4] [i_4] [i_14] [(unsigned short)11] [i_22]))))));
                    var_42 += ((/* implicit */signed char) var_3);
                    var_43 |= ((/* implicit */_Bool) var_7);
                    arr_74 [i_4] [i_4] [i_4] [i_4] [i_4] [(short)8] = ((/* implicit */int) max(((-(arr_27 [i_15 + 1] [i_15] [i_15 + 2] [i_15 + 2]))), (((/* implicit */long long int) min((((((/* implicit */_Bool) -553797159)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)4)))), (((/* implicit */int) arr_63 [i_15] [i_15 + 1] [i_15 + 3] [i_15] [i_15])))))));
                }
                for (unsigned short i_23 = 4; i_23 < 11; i_23 += 2) 
                {
                    arr_77 [i_4] [i_4] [i_14] [(short)9] [i_15 + 2] [i_23] = ((/* implicit */long long int) 14612049765098395555ULL);
                    arr_78 [i_4] [i_14] [i_14] [i_15] [(unsigned short)5] [i_23 - 2] = ((/* implicit */unsigned int) min((((unsigned char) arr_40 [i_4] [i_4] [i_14] [i_14] [i_4])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(1270864938U)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_72 [i_4] [i_14] [i_14] [i_14] [i_4] [i_15 + 3])), (arr_39 [i_23 + 1] [i_23 - 4] [i_15 - 1] [i_4] [i_14] [i_4] [i_4])))))))));
                    var_44 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max(((-(arr_6 [i_14] [i_14] [i_14]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_4])))))))), (((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) : (min((((/* implicit */unsigned long long int) arr_59 [i_4] [i_4] [i_4])), (arr_62 [i_4] [i_14] [i_4] [i_4] [i_14])))))));
                    var_45 *= ((562915593682944LL) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_68 [i_23])) ? (((/* implicit */int) arr_18 [(unsigned char)8])) : (((/* implicit */int) arr_4 [i_23 - 1]))))))));
                }
            }
        }
    }
    var_46 = ((/* implicit */_Bool) var_7);
}
