/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72191
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned short) var_7);
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_5))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max(((+(-8LL))), (((long long int) arr_1 [4LL])))))));
        var_19 = (~(((max((((/* implicit */int) arr_1 [(unsigned short)8])), (var_9))) << ((((+(arr_2 [(unsigned short)8] [i_0]))) - (4743457331369477481LL))))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_13 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1])) ? (max((arr_3 [8ULL] [8ULL]), (((/* implicit */unsigned int) (signed char)56)))) : (((/* implicit */unsigned int) min((-217106369), (arr_11 [i_1] [i_4 - 1]))))))) ? (((/* implicit */unsigned long long int) arr_7 [(unsigned char)13] [(_Bool)1] [i_3 + 1])) : (((((unsigned long long int) (unsigned char)54)) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (arr_10 [i_3]))))))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) (~((~(arr_11 [i_3 + 2] [i_4 + 1])))))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_10 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) -1391377056))))) : ((+(max((6494202598863336233ULL), (var_2)))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        arr_17 [i_5] |= ((/* implicit */signed char) var_6);
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (arr_7 [i_5] [i_5] [i_5])))) : (((/* implicit */int) (signed char)65))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_10 [(unsigned short)0]))));
        arr_18 [i_5] [i_5] = ((/* implicit */signed char) -381932274);
        var_23 = ((/* implicit */int) max((var_23), ((~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)32767)) : (arr_11 [(signed char)1] [i_5])))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        arr_22 [(signed char)0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 262143ULL)) ? (((/* implicit */unsigned int) arr_11 [i_6] [i_6])) : (arr_3 [i_6] [i_6]))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
        {
            for (int i_8 = 3; i_8 < 12; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            {
                                arr_33 [i_6] [i_7 + 3] [i_8 - 1] [11] [i_10] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [5LL] [13LL])) ? (arr_11 [(_Bool)1] [i_7]) : (254295663)))));
                                var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_10] [i_8 - 2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))) ? (arr_2 [i_10] [i_8 - 3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (arr_4 [i_6] [i_8])))))));
                                var_25 = ((/* implicit */int) (~(arr_4 [i_7 - 1] [9ULL])));
                            }
                        } 
                    } 
                    arr_34 [i_6] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_8] [9U] [i_8 + 1] [i_8 - 1] [i_8])) ? ((+(arr_10 [5]))) : (((/* implicit */int) arr_24 [i_7 + 1] [(unsigned char)5]))));
                    var_26 = ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [5ULL] [10] [i_7 + 1] [i_7] [5ULL] [i_7 + 1] [i_8 - 1]))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_1 [i_6]))));
                    arr_35 [(signed char)9] [1ULL] [i_8 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)13)) & (-1391377056)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_11 = 3; i_11 < 21; i_11 += 2) 
    {
        for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            {
                arr_40 [i_12] [(signed char)10] [i_12] &= ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) ((unsigned char) var_5))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_13 = 1; i_13 < 20; i_13 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 2; i_15 < 23; i_15 += 2) 
                        {
                            {
                                arr_48 [3] [i_12] [i_11] [i_11] [5] = ((/* implicit */signed char) ((unsigned int) ((int) (signed char)-59)));
                                var_28 = ((((/* implicit */int) (signed char)101)) + (((/* implicit */int) arr_42 [i_11])));
                                arr_49 [(_Bool)1] [i_11] [i_13] [(signed char)23] [i_15] = (i_11 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) (short)6837)) & (((/* implicit */int) (unsigned char)0)))) >> (((arr_46 [i_11] [i_11]) - (2021118097)))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) (short)6837)) & (((/* implicit */int) (unsigned char)0)))) >> (((((arr_46 [i_11] [i_11]) - (2021118097))) + (351188599))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        arr_52 [6LL] [18ULL] [i_11] [i_11] [15] = ((/* implicit */unsigned short) ((short) (-9223372036854775807LL - 1LL)));
                        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_45 [i_11] [i_11 + 3] [i_11 - 2]))));
                        arr_53 [i_11 - 3] [i_11] [23LL] [i_11 - 3] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-31702)))))));
                    }
                    for (unsigned char i_17 = 1; i_17 < 23; i_17 += 2) 
                    {
                        var_30 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)46))));
                        arr_58 [i_11] [i_12] [i_11] = ((((/* implicit */_Bool) arr_41 [i_11 - 1] [i_11 - 1] [i_11] [i_13 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_45 [i_11 - 1] [i_12] [i_13])) != (((/* implicit */int) arr_36 [i_11 - 2])))))) : (((unsigned int) (signed char)49)));
                        arr_59 [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) arr_38 [i_13 + 4]))));
                        var_31 *= ((/* implicit */unsigned int) arr_42 [i_12]);
                        arr_60 [11ULL] [11ULL] [11ULL] [i_11] = ((/* implicit */unsigned short) (+(((long long int) 3655425651958961366LL))));
                    }
                    for (unsigned char i_18 = 3; i_18 < 21; i_18 += 2) 
                    {
                        arr_65 [i_11] [i_18] [i_11 - 1] [i_18] = ((/* implicit */_Bool) ((-5) / (((/* implicit */int) arr_47 [i_11] [i_11 - 3] [i_18 - 3] [(unsigned char)22] [i_18]))));
                        arr_66 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_18] [i_11 - 3] [i_13 + 2] [i_18])) ? (((/* implicit */int) arr_39 [i_11 - 3] [i_11])) : (arr_46 [i_11 - 2] [i_11])));
                    }
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned int) (~(((/* implicit */int) arr_36 [i_11]))))))));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_62 [12ULL] [6U] [6U])) ? (6509836224622068886LL) : (9223372036854775795LL))))))));
                }
                for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))) & (3262715716U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)81)) && (((/* implicit */_Bool) 1480965370)))))))))));
                    arr_69 [19LL] [i_12] [i_11] = ((/* implicit */unsigned char) ((long long int) (-(min((((/* implicit */unsigned long long int) -1332379520)), (arr_64 [2] [4ULL] [3U] [(unsigned char)21] [17U] [8U]))))));
                }
                var_35 -= ((/* implicit */unsigned long long int) arr_68 [i_11 - 1] [i_12]);
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((var_13) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)17819)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) var_11)))) >= (((/* implicit */int) var_3))))))));
    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (~(((/* implicit */int) var_6)))))));
}
