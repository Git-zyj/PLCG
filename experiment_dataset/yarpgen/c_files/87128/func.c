/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87128
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
    var_10 &= (short)396;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (short)386))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((int) (-(-300839310))));
                    arr_8 [i_0 + 1] [i_0] [i_2] [i_0 + 1] = (unsigned char)107;
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_13 += ((/* implicit */unsigned char) 4256768529U);
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) -160723978));
        var_14 -= ((/* implicit */unsigned char) (+((+(arr_7 [i_3] [i_3] [i_3] [i_3])))));
        arr_13 [i_3] = ((/* implicit */_Bool) (((-((+(((/* implicit */int) (short)381)))))) - (((/* implicit */int) (unsigned short)59232))));
        /* LoopSeq 4 */
        for (int i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            arr_18 [3U] [i_4] = ((/* implicit */int) (_Bool)0);
            arr_19 [i_3] = ((/* implicit */short) min((((((/* implicit */int) arr_16 [i_3])) ^ (((/* implicit */int) arr_11 [i_3] [i_3])))), (((/* implicit */int) (_Bool)0))));
        }
        for (long long int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (short)-29437)))) ^ ((-(((/* implicit */int) arr_16 [i_3]))))));
            var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) (-(-1399920451)))) - (arr_21 [i_3])))));
        }
        for (long long int i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] [i_6 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)12829))));
            arr_25 [i_3] [(unsigned short)8] [i_6] = ((/* implicit */unsigned int) ((unsigned char) (~(((arr_7 [i_3] [i_3] [i_6] [i_6 + 1]) & (((/* implicit */int) (unsigned char)183)))))));
        }
        for (long long int i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) ((((-1934236014425909729LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)63636)) - (63636)))));
                var_18 = ((/* implicit */short) min((max((arr_22 [i_7]), (arr_22 [i_7]))), ((-(arr_22 [i_7])))));
                arr_31 [i_8] [i_7 - 1] [i_7] [i_7 - 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [(unsigned char)2] [(unsigned char)2] [i_7 - 1] [i_8]))))) ^ (arr_7 [13] [i_7] [i_7] [i_8])));
                var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_23 [i_7] [i_7] [i_7]))))) ^ (arr_5 [i_7 + 1] [i_7])))));
                /* LoopSeq 4 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_20 ^= ((/* implicit */short) (unsigned short)65153);
                    arr_36 [i_3] [i_8] [i_7] [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_5 [i_8] [i_9]);
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-394)), (((unsigned short) (_Bool)1))))) - (1942550960)));
                }
                for (unsigned char i_10 = 3; i_10 < 12; i_10 += 3) 
                {
                    arr_40 [i_8] [i_7] [i_8] [i_10] [i_7] |= ((/* implicit */short) var_6);
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)114))));
                    arr_41 [i_3] [i_7] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_7] [i_10 + 2] [i_10 + 1] [i_10 + 1])) ? (958969057U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8262)))))) ? (((((/* implicit */int) arr_35 [i_7] [i_7] [i_7 + 1] [i_7])) / (((/* implicit */int) arr_35 [i_7] [(_Bool)1] [i_7 - 1] [i_7])))) : (((/* implicit */int) ((_Bool) ((var_4) / (((/* implicit */long long int) 797581422U))))))));
                }
                for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned char)112)))) - (max((arr_4 [i_3] [i_3] [i_3]), (((/* implicit */int) (signed char)56)))))) ^ ((-(((/* implicit */int) (short)-12826)))))))));
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_30 [i_3] [i_7] [i_8] [i_11]))))));
                }
                for (int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) (unsigned char)99);
                        var_26 -= ((/* implicit */unsigned int) arr_42 [i_3] [i_7] [(unsigned char)12] [i_13]);
                        var_27 = ((/* implicit */long long int) ((((((/* implicit */int) arr_43 [i_7 + 1] [i_12] [i_8] [i_12] [i_13])) - (((((/* implicit */int) arr_23 [i_7] [i_12] [i_7])) ^ (((/* implicit */int) (short)12824)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12816)))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_47 [i_12] [i_7 + 1] [i_12] [i_12] [i_14] [i_7 + 1])) ? (3570631596U) : (arr_47 [(unsigned char)11] [i_7 - 1] [i_8] [i_12] [i_14] [i_7])))));
                        arr_56 [10LL] [i_7] [(unsigned short)3] [i_12] [i_14] [i_7] = ((/* implicit */long long int) (_Bool)1);
                        var_29 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-26595)))) ? ((-(((/* implicit */int) (short)397)))) : (((/* implicit */int) arr_48 [i_14] [i_7] [i_14]))))), ((~(min((((/* implicit */unsigned int) (unsigned char)93)), (arr_47 [i_14] [i_12] [(_Bool)1] [i_7] [i_7] [i_3])))))));
                        var_30 |= ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((short) (_Bool)1)))))));
                    }
                    arr_57 [i_7] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */long long int) (short)-12824);
                }
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_15 = 2; i_15 < 13; i_15 += 3) 
            {
                arr_62 [i_7] = ((/* implicit */unsigned char) (_Bool)1);
                var_31 = (-(((/* implicit */int) arr_20 [i_3] [0U])));
                var_32 = ((int) arr_49 [i_15] [i_15] [i_15] [i_15 - 1]);
                var_33 = ((((/* implicit */_Bool) arr_22 [i_7])) || (arr_42 [i_3] [i_3] [i_3] [i_15 + 1]));
            }
            for (unsigned short i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                /* LoopSeq 4 */
                for (signed char i_17 = 2; i_17 < 11; i_17 += 1) 
                {
                    var_34 &= ((/* implicit */long long int) (_Bool)1);
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) -1841776225))));
                }
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    arr_71 [i_3] [i_7] [i_16] [i_16] [i_7] = ((/* implicit */unsigned short) ((((arr_54 [i_7 - 1]) ? (arr_58 [i_3] [i_3] [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_7 + 1]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 958969048U)) ? (((/* implicit */int) arr_11 [i_7 - 1] [i_7])) : (((/* implicit */int) arr_11 [i_7 - 1] [i_7])))))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) max((-1841776225), (((/* implicit */int) ((unsigned char) (short)3187))))))));
                    arr_72 [8] [(_Bool)0] [(_Bool)0] [i_18] &= ((/* implicit */long long int) ((int) (unsigned short)33184));
                }
                /* vectorizable */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */long long int) ((((/* implicit */int) arr_74 [i_3] [i_3] [i_7])) ^ (arr_7 [(unsigned short)11] [(unsigned short)11] [i_7 + 1] [(unsigned short)11])));
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */int) arr_64 [i_7 - 1] [i_7 + 1] [i_19] [i_19])) - (((/* implicit */int) arr_64 [i_7 - 1] [i_7] [i_16] [12])))))));
                    arr_75 [i_3] [i_7] [i_3] [i_19] [(unsigned char)10] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_7 - 1] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_34 [i_7 - 1] [i_7 + 1] [i_7 + 1] [0U] [i_7 - 1] [i_7 - 1]))));
                    /* LoopSeq 3 */
                    for (signed char i_20 = 1; i_20 < 13; i_20 += 1) 
                    {
                        var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)28148)) ? (((/* implicit */int) (unsigned short)40519)) : (((/* implicit */int) (unsigned char)204)))) - (((/* implicit */int) arr_46 [i_3]))));
                        var_40 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) (signed char)77)))));
                    }
                    for (int i_21 = 0; i_21 < 14; i_21 += 3) 
                    {
                        var_41 = ((/* implicit */signed char) (-((+(1248939308)))));
                        arr_80 [i_7] [i_7 + 1] = ((/* implicit */unsigned short) arr_30 [i_19] [i_16] [i_7 + 1] [i_3]);
                    }
                    for (unsigned char i_22 = 0; i_22 < 14; i_22 += 4) 
                    {
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)396))))) ? (arr_47 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_16] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        var_43 = ((/* implicit */short) ((int) arr_79 [i_7 + 1] [i_7] [i_7] [i_22]));
                        arr_84 [i_7] [i_3] = ((/* implicit */signed char) var_8);
                    }
                    var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-20973)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (short)29413)))))));
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                {
                    var_45 = (short)29455;
                    var_46 = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned char)171)))) - (1248939308)));
                    var_47 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_3]))));
                    arr_89 [i_7] [(unsigned char)4] [i_23] [i_23] [i_7 + 1] [i_7] = (unsigned char)108;
                }
                /* LoopSeq 4 */
                for (long long int i_24 = 0; i_24 < 14; i_24 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_25 = 3; i_25 < 13; i_25 += 2) 
                    {
                        var_48 &= ((/* implicit */short) (-(var_4)));
                        var_49 -= ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_3 [i_25 - 3])) ? (arr_3 [i_25 - 2]) : (arr_3 [i_25 - 3]))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        var_51 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)97)) - (((/* implicit */int) (unsigned short)7756))))));
                        var_52 -= ((/* implicit */unsigned short) max((((((/* implicit */int) arr_87 [i_7 - 1])) ^ (((int) (unsigned short)6900)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) arr_7 [(short)12] [i_7] [i_7] [i_7])) - (arr_58 [i_7] [i_7] [i_24])))))));
                        arr_98 [i_3] [i_7] [i_7] [i_7] [i_7] [i_3] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                    }
                    var_53 -= ((/* implicit */short) arr_3 [i_3]);
                }
                for (unsigned char i_27 = 0; i_27 < 14; i_27 += 2) 
                {
                    var_54 = ((unsigned char) (-(-1248939320)));
                    var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) arr_50 [i_3] [i_27] [i_3] [i_27] [i_16]))));
                }
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) (short)13050))));
                    var_57 = (unsigned short)58671;
                    arr_104 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_77 [i_3] [i_7] [i_16] [i_7] [(_Bool)1] [i_7] [i_7 + 1]))))) ? (min((((/* implicit */unsigned int) 1265969365)), (arr_94 [i_7 + 1]))) : (max((((((/* implicit */_Bool) arr_55 [i_16] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_28]))) : (2310134254U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_7] [(short)0])) - (((/* implicit */int) arr_54 [(_Bool)0])))))))));
                    var_58 = ((/* implicit */_Bool) var_5);
                }
                /* vectorizable */
                for (int i_29 = 0; i_29 < 14; i_29 += 3) 
                {
                    arr_107 [i_3] [i_7] [i_3] [i_3] = ((/* implicit */unsigned char) 1994500782);
                    arr_108 [i_3] [(unsigned char)8] [i_16] [i_7] [(short)3] [i_7] = ((/* implicit */unsigned char) ((((2310134254U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8042))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7 - 1] [i_7])))));
                    arr_109 [i_7] [i_16] = ((/* implicit */signed char) ((arr_55 [i_3] [i_3]) >> (((arr_55 [i_29] [i_7 + 1]) - (5056447575474129097LL)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_30 = 1; i_30 < 13; i_30 += 2) 
                {
                    for (unsigned char i_31 = 0; i_31 < 14; i_31 += 2) 
                    {
                        {
                            var_59 = ((/* implicit */int) arr_54 [i_3]);
                            arr_116 [i_3] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) 1248939308);
                            arr_117 [i_7] [(_Bool)1] [i_16] [(_Bool)1] [i_31] = ((/* implicit */unsigned short) (_Bool)1);
                            var_60 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1389475077U)))) - ((~(((7354224277445556551LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_3] [i_7])))))))));
                        }
                    } 
                } 
            }
        }
    }
    var_61 -= ((/* implicit */int) (_Bool)1);
}
