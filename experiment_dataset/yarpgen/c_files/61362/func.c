/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61362
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15462571507712419295ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32340)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32340))) : (79322405U)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28923))) : (arr_2 [i_0])))));
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) & (1509788755U))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(2809573156U)))) ? (1812167802U) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(signed char)5]))))) ? (var_7) : ((~(var_7)))))));
        var_13 = -1006547679;
    }
    for (int i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (-(((arr_4 [i_1 - 2]) ^ (((/* implicit */unsigned int) arr_3 [i_1 + 1])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_9 [(signed char)12] [i_2] [(unsigned char)2])) ? (((/* implicit */unsigned int) arr_9 [i_1] [(short)4] [i_3])) : (var_7)))));
                    var_16 = ((/* implicit */unsigned int) (+(arr_6 [i_3] [i_1 - 2])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
        {
            var_17 ^= ((/* implicit */short) (-((-(((/* implicit */int) (short)-1564))))));
            arr_18 [i_4] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)36)) ? (arr_11 [i_4]) : (arr_11 [i_4])));
        }
        for (int i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_18 = ((/* implicit */short) (-(arr_16 [i_6 - 2] [i_6] [4U])));
                arr_23 [14U] [6U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (short)-28923)) : (((/* implicit */int) (short)-865))));
                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [14] [i_6 - 2] [i_7])) ? (((/* implicit */int) arr_19 [i_4] [i_6 + 1] [i_7])) : (((/* implicit */int) arr_19 [i_4] [i_6 - 2] [i_4]))));
            }
            for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        {
                            var_20 ^= ((/* implicit */signed char) ((arr_14 [i_6]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)219)) ? (arr_28 [i_4] [i_6] [i_9] [i_6]) : (var_2))))));
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)207))))) || (((/* implicit */_Bool) arr_28 [i_6] [i_6 + 1] [i_6] [i_9]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_6 + 1] [i_6 + 1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 4; i_11 < 16; i_11 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) var_6);
                    var_24 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4])) >> (((/* implicit */int) arr_13 [i_11 - 3]))));
                    arr_34 [i_4] [i_4] [i_6] [i_8] [(signed char)10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -717008188)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)31))))) : ((-(((/* implicit */int) (signed char)-114))))));
                }
                var_25 *= ((/* implicit */signed char) (-(arr_12 [i_6 + 1])));
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    var_26 += ((/* implicit */short) var_5);
                    var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_6 + 1])) && (((/* implicit */_Bool) arr_16 [i_6 - 2] [i_6] [i_6 + 1]))));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (unsigned char)43))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 1])) ? (var_8) : (var_0))))));
                }
            }
            var_30 += ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_4] [i_4] [i_4] [7] [i_6 + 1]))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 2; i_14 < 15; i_14 += 1) 
                {
                    for (unsigned int i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_39 [i_4] [i_14] [i_14]))));
                            var_33 += ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 1332871945)) : (851289948U))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)87)) ? (571956407) : (((/* implicit */int) (short)-24692)))))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 2) 
        {
            for (short i_17 = 2; i_17 < 16; i_17 += 2) 
            {
                {
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_4] [i_16] [i_17 + 1])) & (((((/* implicit */_Bool) (short)-32747)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (_Bool)1))))));
                    var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_4] [14U] [i_4]))));
                    arr_52 [i_4] [i_16] [i_16] = ((/* implicit */short) (-(((((/* implicit */_Bool) 400961395)) ? (arr_11 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1566)))))));
                    arr_53 [i_17] [i_17 + 1] [i_17 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1938784250U)) ? (arr_27 [i_16 - 1]) : (arr_27 [i_16 - 1])));
                }
            } 
        } 
        var_36 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
        var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_17 [i_4]) : (((((/* implicit */_Bool) 1323438415)) ? (arr_25 [i_4] [i_4] [i_4]) : (((/* implicit */int) (short)-18128))))));
        /* LoopSeq 1 */
        for (short i_18 = 1; i_18 < 14; i_18 += 4) 
        {
            arr_56 [i_18] [i_18] = ((/* implicit */unsigned int) (~(arr_27 [i_18 - 1])));
            arr_57 [i_4] [i_18 + 1] = ((/* implicit */int) var_6);
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_19 = 2; i_19 < 18; i_19 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_20 = 0; i_20 < 19; i_20 += 3) 
        {
            var_38 = ((/* implicit */int) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (short i_21 = 0; i_21 < 19; i_21 += 4) 
            {
                var_39 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_19 - 2])) ? (((/* implicit */int) arr_59 [i_19 + 1])) : (((/* implicit */int) arr_59 [i_19 + 1]))));
                var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1597225739U)) ? (((((/* implicit */_Bool) -637924478)) ? (arr_60 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_21]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_21]))))))));
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 19; i_22 += 4) 
                {
                    for (unsigned char i_23 = 3; i_23 < 17; i_23 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_66 [i_19 + 1] [i_23 - 3] [i_23 - 3])))))));
                            arr_69 [i_21] [i_23] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -405431966)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (unsigned char)81))));
                        }
                    } 
                } 
            }
        }
        for (int i_24 = 0; i_24 < 19; i_24 += 4) 
        {
            var_42 = ((/* implicit */short) (+(((/* implicit */int) arr_65 [i_19] [(signed char)4] [(signed char)4] [i_19 - 1]))));
            /* LoopNest 2 */
            for (signed char i_25 = 3; i_25 < 18; i_25 += 4) 
            {
                for (signed char i_26 = 2; i_26 < 18; i_26 += 3) 
                {
                    {
                        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_19 + 1])) ? (arr_60 [i_19 - 2]) : (arr_60 [i_19 - 2]))))));
                        var_44 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_63 [i_19 + 1]))))));
                        /* LoopSeq 2 */
                        for (short i_27 = 0; i_27 < 19; i_27 += 3) 
                        {
                            arr_80 [i_26] [i_24] = ((/* implicit */signed char) 20U);
                            var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_19 - 1] [i_25 - 1] [i_26] [i_26] [i_19])) ? (arr_78 [i_19] [i_25 - 2] [i_27] [i_24] [i_19]) : (arr_78 [(_Bool)1] [i_25 + 1] [i_25] [i_26] [i_24]))))));
                            var_46 *= ((/* implicit */unsigned char) (signed char)-126);
                            var_47 = (~(((/* implicit */int) arr_59 [i_25 - 3])));
                            var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) arr_71 [i_19 + 1] [i_25 - 1] [14])) : (((/* implicit */int) (short)18128))));
                        }
                        for (short i_28 = 0; i_28 < 19; i_28 += 3) 
                        {
                            var_49 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)194)) : (-2145282045)))) || (((/* implicit */_Bool) (unsigned char)17))));
                            arr_85 [i_24] [i_26] [(unsigned char)14] = ((/* implicit */short) (-(arr_60 [i_24])));
                        }
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)28442))))) ? (((/* implicit */int) (short)-7626)) : (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-35))))));
        }
        /* LoopSeq 1 */
        for (signed char i_29 = 0; i_29 < 19; i_29 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_30 = 0; i_30 < 19; i_30 += 2) 
            {
                arr_90 [i_19] [i_29] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4643478300003165518ULL)) ? (3062996881U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28449)))));
                var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) arr_64 [i_19 - 1] [i_19 + 1]))));
                var_52 += ((/* implicit */unsigned int) ((208529336) != (1208383972)));
                var_53 = ((/* implicit */signed char) arr_70 [i_30]);
            }
            for (unsigned char i_31 = 0; i_31 < 19; i_31 += 1) 
            {
                var_54 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (short)5923)) : (((/* implicit */int) arr_81 [i_19 + 1] [i_29] [i_31] [i_31] [i_31] [i_29])))) + ((-(((/* implicit */int) arr_82 [i_19 + 1] [i_19] [i_19 - 2] [i_29] [i_31]))))));
                var_55 += ((/* implicit */signed char) (~(((/* implicit */int) (short)-28435))));
                var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1987707898)) ? ((-(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_79 [i_31] [i_19 + 1])))));
                /* LoopNest 2 */
                for (unsigned char i_32 = 3; i_32 < 18; i_32 += 2) 
                {
                    for (int i_33 = 0; i_33 < 19; i_33 += 4) 
                    {
                        {
                            arr_101 [i_31] [i_29] [i_31] [i_32 - 1] [i_33] [(short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_92 [i_19 - 2] [i_31] [9])) + (2147483647))) << (((((-637926395) + (637926425))) - (30)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)28442))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_92 [i_19] [i_31] [i_19 - 2])) : (arr_78 [i_19 + 1] [i_19 - 2] [i_19 - 1] [i_19] [i_31])))));
                            var_57 = ((/* implicit */int) min((var_57), (((/* implicit */int) (!(((/* implicit */_Bool) arr_97 [i_19] [i_19] [i_19] [i_19] [i_19] [(signed char)15] [i_19 + 1])))))));
                            var_58 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_98 [i_19] [i_19] [i_31] [i_31] [i_33])) ? (arr_78 [i_19] [(unsigned char)16] [i_31] [i_31] [i_33]) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_19] [i_33] [i_33] [i_32 - 1] [i_19]))) : (var_2))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_92 [i_19 - 1] [i_33] [i_19])) + (2147483647))) >> (((((/* implicit */int) var_9)) - (133))))))));
                        }
                    } 
                } 
                var_59 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)343)) ? (arr_100 [i_19] [12] [i_19 + 1] [i_19] [i_19 - 2]) : (-326001577)));
            }
            var_60 ^= ((/* implicit */signed char) var_8);
            var_61 = ((/* implicit */short) arr_70 [i_19 - 1]);
        }
    }
}
