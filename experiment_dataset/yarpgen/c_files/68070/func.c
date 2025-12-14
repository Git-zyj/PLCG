/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68070
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((var_2), (((/* implicit */unsigned long long int) (signed char)-3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (4241906157U))));
            var_14 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)32135)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [(signed char)10] [i_1] [i_0])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)-7))))))) : (var_4)));
        }
        var_15 ^= ((/* implicit */long long int) arr_0 [(unsigned short)2] [i_0]);
        arr_6 [i_0] [(signed char)19] = ((/* implicit */unsigned long long int) ((signed char) ((int) (~(var_6)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_13 [14U] [6LL] [1ULL] = ((/* implicit */unsigned char) (~(arr_7 [i_2])));
                    arr_14 [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_4]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) (+(arr_18 [i_4] [i_5] [i_6])));
                                arr_21 [i_6] [4ULL] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_6 + 2])) <= (arr_7 [i_6 - 1])));
                                var_17 = ((/* implicit */_Bool) arr_0 [i_2] [(signed char)4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((unsigned short) var_11));
        var_19 *= var_8;
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) var_6);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((var_13) >= (((/* implicit */long long int) (~(var_10))))));
                                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
                                arr_34 [i_2] [(unsigned short)7] [i_7] [i_9] [i_10] = ((/* implicit */short) (+(arr_29 [i_7 + 3] [i_7 + 3] [i_7 - 1] [i_7 + 1])));
                            }
                        } 
                    } 
                    arr_35 [10ULL] [i_7] [i_8] [i_2] = ((/* implicit */long long int) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_11 = 1; i_11 < 12; i_11 += 3) 
    {
        var_23 -= ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 3 */
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            arr_41 [i_12] [i_12] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_11] [i_11 + 1] [(unsigned char)2] [i_11 + 1]))));
            var_24 = ((/* implicit */unsigned long long int) ((short) var_5));
        }
        for (signed char i_13 = 2; i_13 < 11; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 3) 
                {
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_11 - 1] [i_13 + 2] [6ULL])) ? (arr_16 [(unsigned short)12] [i_11 - 1] [i_13 - 2] [13]) : (((int) 3146496542U))));
                    arr_48 [(unsigned short)6] [i_15] [i_14] [i_14] = (+(var_2));
                    var_26 &= arr_10 [i_11];
                }
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
                {
                    arr_51 [i_11] = ((/* implicit */int) (+(arr_49 [i_13 - 2])));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_1))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_11 + 1] [i_11] [i_13 - 2])) ? (((/* implicit */unsigned long long int) var_7)) : (var_2)));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_11 + 1])) ? (arr_47 [i_11 - 1] [6LL] [i_14] [i_16]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_14] [i_16])) : (((/* implicit */int) var_0)))))));
                    arr_52 [(short)4] [(short)0] [6] [5LL] = ((/* implicit */unsigned short) (~(arr_3 [14ULL] [i_11 - 1])));
                }
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    for (unsigned int i_18 = 1; i_18 < 12; i_18 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) (-(((arr_43 [i_11] [i_18]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_17] [i_13] [i_17])))))));
                            var_31 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) <= (68719476735ULL)));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) arr_23 [5LL] [i_17]))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) (~((~(230232592U)))));
            }
            for (unsigned short i_19 = 1; i_19 < 11; i_19 += 4) 
            {
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((7387064399049904184ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_58 [i_11] [i_11] [11ULL])))))));
                arr_59 [i_19] [i_19] [i_13] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [(_Bool)1] [i_13 + 2])) ^ (((/* implicit */int) arr_24 [16] [(unsigned short)10]))));
                arr_60 [7] [12ULL] [3] &= ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_1)))));
            }
            var_35 *= ((unsigned long long int) arr_54 [i_13 + 1] [i_13] [i_13] [i_11]);
            arr_61 [(signed char)4] [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (2993354628U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned short i_20 = 0; i_20 < 13; i_20 += 4) 
        {
            arr_66 [i_11] [i_20] [i_20] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (long long int i_21 = 1; i_21 < 11; i_21 += 2) 
            {
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_11] [i_21 + 2] [i_11 - 1])) ? (arr_12 [i_11] [i_21 - 1] [i_11 + 1]) : (((/* implicit */unsigned long long int) var_6))));
                var_37 = (+(((/* implicit */int) var_1)));
                var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_43 [i_20] [i_21 + 1]))));
            }
        }
    }
    /* LoopNest 3 */
    for (short i_22 = 1; i_22 < 23; i_22 += 2) 
    {
        for (unsigned short i_23 = 4; i_23 < 22; i_23 += 2) 
        {
            for (int i_24 = 2; i_24 < 24; i_24 += 4) 
            {
                {
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) var_2))));
                    arr_77 [i_22] [i_23] [15] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_10)))));
                    arr_78 [i_23] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_75 [i_22] [i_23] [i_22])) / ((+(((/* implicit */int) arr_76 [i_22] [i_23]))))));
                    var_40 = ((/* implicit */unsigned long long int) arr_70 [i_24]);
                }
            } 
        } 
    } 
}
