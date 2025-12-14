/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65639
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) 52811532U)) && (((/* implicit */_Bool) var_13)))))));
        var_16 = ((/* implicit */signed char) min((((unsigned int) ((9223372036854775807LL) >> (((((/* implicit */int) (short)-25644)) + (25664)))))), (((/* implicit */unsigned int) -1338973625))));
        var_17 ^= ((/* implicit */unsigned long long int) ((int) ((unsigned int) 52811502U)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_1 [(_Bool)1] [i_0 - 1]));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        arr_19 [i_1] [(_Bool)1] [i_4] = ((/* implicit */long long int) min((max((max((((/* implicit */unsigned long long int) var_6)), (arr_18 [i_1] [i_3] [i_1]))), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2])))), (((/* implicit */unsigned long long int) (~(arr_6 [i_1]))))));
                        arr_20 [i_1] [i_4] [(_Bool)1] [(_Bool)1] [i_1] = 52811532U;
                    }
                } 
            } 
        } 
        arr_21 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_1 [(signed char)11] [i_1])))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))))) && ((!((_Bool)1)))))))));
    }
    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_5] [i_5] [9] [9])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))) & (((/* implicit */int) arr_15 [i_5] [i_5]))))), (((((/* implicit */_Bool) (unsigned short)50750)) ? (((/* implicit */unsigned long long int) ((arr_0 [i_6]) & (arr_6 [6])))) : (max((arr_17 [i_6] [6LL] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_6 [i_6])))))))))));
            var_19 = ((/* implicit */_Bool) ((var_10) ? ((-(((int) var_11)))) : (((((/* implicit */int) var_13)) + (((/* implicit */int) arr_15 [i_5] [i_6]))))));
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
            {
                arr_34 [i_5] [i_7] [i_7] [9] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) var_8)), (((signed char) arr_22 [(short)5]))))) <= ((+(((/* implicit */int) arr_29 [i_5] [i_7] [i_7]))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [(unsigned char)10] [i_8 + 1])) ? (arr_0 [i_8]) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_5])) || (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_26 [(short)7] [i_7])))))))) : (min(((+(arr_32 [i_7] [i_7]))), ((+(((/* implicit */int) (short)-10766))))))));
            }
            for (unsigned int i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
            {
                arr_37 [i_7] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (short)2902)))), (((/* implicit */int) (unsigned short)14786))));
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_5)), (var_14))))), (min((arr_33 [(_Bool)1] [i_7]), (((/* implicit */unsigned long long int) arr_14 [i_9 - 1] [i_9 - 1])))))))));
                    var_22 = ((/* implicit */unsigned int) (~(((arr_27 [i_7]) | (((/* implicit */long long int) ((/* implicit */int) (short)23329)))))));
                    arr_41 [i_5] [i_7] [i_9] [i_7] = ((/* implicit */unsigned int) arr_35 [i_7] [i_7]);
                }
            }
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_33 [i_7] [(unsigned char)10]))))))));
            var_24 -= (!(((/* implicit */_Bool) ((unsigned int) arr_18 [i_7] [i_7] [i_5]))));
        }
        arr_42 [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_38 [i_5] [i_5] [8] [i_5]), (((/* implicit */unsigned short) max((((/* implicit */signed char) var_6)), (var_3))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_6))))), (arr_18 [i_5] [6LL] [i_5])))));
        arr_43 [10U] = ((/* implicit */int) ((_Bool) min((((/* implicit */signed char) arr_2 [i_5])), (var_3))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 3; i_11 < 10; i_11 += 4) 
        {
            for (int i_12 = 2; i_12 < 10; i_12 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) max((var_14), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)23328)) ? (((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_3)))))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)-88))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50743)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-127))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)0))))))) || (((/* implicit */_Bool) 924264349))));
                }
            } 
        } 
    }
    for (signed char i_13 = 2; i_13 < 9; i_13 += 4) 
    {
        var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [(_Bool)0] [(_Bool)0]))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)5405)))))))) : (max((-6275675898652476680LL), (((/* implicit */long long int) (_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) arr_53 [i_13])) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 4242155764U)) ? (((/* implicit */int) (short)-16278)) : (((/* implicit */int) (short)-20680)))))))))));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */int) (short)32767)) <= (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_0 [i_13 - 2]))) / ((~(((/* implicit */int) arr_47 [i_13 + 1]))))));
                            arr_66 [i_13] [i_14] [i_15] [i_17] [i_18] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_22 [i_13 - 2])) + (((/* implicit */int) arr_22 [i_13 - 2])))));
                            arr_67 [i_14] = ((/* implicit */short) ((18446744073709551605ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14786)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_69 [i_13] [i_13 + 1] [i_19 - 1] [i_19] [i_19 - 1])) + (((/* implicit */int) arr_69 [i_13] [i_13 + 1] [i_19 - 1] [(signed char)7] [i_19 - 1]))));
                            var_32 = ((/* implicit */short) ((int) arr_26 [i_19 - 1] [i_19 - 1]));
                            arr_70 [i_14] [(short)9] [i_14] [1U] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_1)))));
                        }
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        arr_73 [i_13] [i_20] = ((/* implicit */short) ((unsigned char) ((arr_1 [i_13 - 1] [i_13 - 1]) ? (((/* implicit */int) arr_1 [i_13 - 1] [i_13 - 2])) : (((/* implicit */int) arr_1 [i_13 - 1] [i_13 + 1])))));
                        /* LoopSeq 2 */
                        for (int i_21 = 3; i_21 < 9; i_21 += 2) 
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_16 [i_20] [5])) ^ (((/* implicit */int) var_3))))))) <= (((arr_9 [i_20] [(_Bool)1] [(_Bool)1]) ^ (((/* implicit */unsigned long long int) arr_40 [i_13 - 2]))))));
                            var_34 = ((((_Bool) ((((/* implicit */int) var_3)) < (((/* implicit */int) (short)23328))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_13] [i_13 - 1] [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) arr_12 [i_13])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            arr_79 [i_13] [i_15] [i_20] [i_15] = ((/* implicit */_Bool) 11635369072896253158ULL);
                            arr_80 [i_13] [i_20] [i_15] [i_20] [i_13] [i_22 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 579483313)) ? (579483295) : (((/* implicit */int) (unsigned short)22103))));
                            arr_81 [i_20] [i_20] = ((/* implicit */short) (_Bool)1);
                            arr_82 [(unsigned short)1] [i_14] [i_20] [i_15] [i_15] [i_14] = ((/* implicit */unsigned int) ((int) arr_55 [i_15] [i_22 - 1]));
                        }
                        var_35 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_36 [i_13] [i_13])) ? (6811375000813298465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17373))))), (((/* implicit */unsigned long long int) 2012435499)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 + 1])))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        var_36 = (~(((/* implicit */int) max((arr_69 [i_13] [i_14] [(unsigned char)8] [i_13 - 2] [i_13]), (arr_69 [i_13] [i_13] [i_13] [i_13 - 1] [i_13])))));
                        var_37 = ((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) ((unsigned int) ((284770221U) < (1357159045U)))))));
                        arr_85 [i_13] [i_14] [i_14] [i_23] [i_23] = ((/* implicit */int) ((arr_76 [i_13]) | (((/* implicit */long long int) arr_75 [i_13] [i_13] [i_15] [i_15] [5]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 2; i_24 < 7; i_24 += 3) 
                    {
                        for (unsigned int i_25 = 3; i_25 < 9; i_25 += 1) 
                        {
                            {
                                var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_13] [3] [i_13] [(unsigned char)1] [i_13] [i_13] [0ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_60 [i_13 - 2])) >= (((/* implicit */int) arr_60 [i_13 - 2])))))) : (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_13] [i_14] [i_14] [i_15] [i_24 - 2] [i_24 - 2] [1]))) : (((unsigned int) var_2))))));
                                arr_90 [i_14] [i_14] [i_14] [i_24] [i_25] [i_24] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_24 + 1]))) % (((unsigned int) arr_4 [i_24 + 2]))));
                            }
                        } 
                    } 
                    arr_91 [(signed char)5] [(unsigned char)9] [i_14] [i_14] = ((/* implicit */long long int) arr_51 [i_14]);
                    var_39 = ((/* implicit */short) ((long long int) (-(0U))));
                }
            } 
        } 
        var_40 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-18180))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_13]))) <= (arr_76 [i_13 - 2]))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-17374)) : (((/* implicit */int) ((signed char) (short)17374))))))));
    }
    var_41 -= ((/* implicit */unsigned char) (+(var_9)));
}
