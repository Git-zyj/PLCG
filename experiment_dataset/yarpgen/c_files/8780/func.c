/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8780
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_1 - 1]), (((/* implicit */unsigned short) (_Bool)1))))) ? (min((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (1956412831U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1])))));
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        var_12 &= ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                        arr_15 [i_2] [i_5] = ((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 2] [i_4] [(short)11]);
                    }
                    arr_16 [i_2] [i_2 + 1] [i_2] [i_2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)24407)))) | (((/* implicit */int) (!(var_6))))));
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 18; i_6 += 1) 
                    {
                        for (short i_7 = 3; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_24 [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                                var_13 = ((/* implicit */unsigned char) var_1);
                                var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_22 [8U] [i_3])) ? (var_0) : (var_0)))));
                                arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_22 [(short)11] [(short)11]);
                            }
                        } 
                    } 
                    arr_26 [i_4] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) (short)15)))));
                    arr_27 [i_3] [i_3] [15ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19874)) ? (((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) (unsigned short)29732))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_16 -= ((/* implicit */signed char) arr_8 [i_9] [i_2]);
                    arr_33 [(unsigned short)9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -660638030)) ? (var_1) : (((/* implicit */int) arr_19 [i_2 - 1] [i_8])))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_22 [i_2 + 3] [i_2 + 1]))));
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            for (long long int i_12 = 2; i_12 < 14; i_12 += 4) 
            {
                {
                    arr_42 [i_10] [i_10] [i_10] = ((/* implicit */signed char) var_2);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_10] [i_10 + 1])) ? (((/* implicit */int) (unsigned short)384)) : (((((/* implicit */int) (short)15)) - (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_30 [i_10 + 1] [i_10 + 1] [i_10]), (((/* implicit */unsigned long long int) (signed char)-107))))) ? (2877698761500473700ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [20ULL] [i_10] [i_10 + 1])))) | (((/* implicit */int) (unsigned short)61869)))))));
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_46 [(short)8] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_6 [i_10 + 1] [i_10])) ? (var_9) : (((/* implicit */unsigned long long int) arr_6 [i_10 + 1] [i_10]))))));
            var_20 = ((/* implicit */unsigned short) arr_8 [i_13] [i_10]);
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_6 [i_10] [i_13]))));
            var_22 = ((/* implicit */unsigned long long int) ((arr_2 [i_13] [i_13]) == (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_10] [i_13] [i_13] [i_13])))));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */int) ((signed char) (short)20084));
            var_24 = ((/* implicit */signed char) (unsigned char)132);
            /* LoopSeq 3 */
            for (int i_15 = 4; i_15 < 14; i_15 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_53 [(_Bool)1] [i_14] [i_10 + 1] [i_10] [i_16] [(unsigned short)16] = var_9;
                    var_25 *= ((/* implicit */int) (_Bool)1);
                }
                arr_54 [1ULL] = ((/* implicit */_Bool) (unsigned short)29732);
                var_26 = ((/* implicit */unsigned long long int) 1926041676U);
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned short i_18 = 1; i_18 < 15; i_18 += 1) 
                    {
                        {
                            var_27 += ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_20 [i_17] [i_14]))));
                            var_28 -= ((/* implicit */unsigned int) (unsigned char)203);
                        }
                    } 
                } 
            }
            for (int i_19 = 4; i_19 < 14; i_19 += 4) /* same iter space */
            {
                var_29 = (((+(((/* implicit */int) var_6)))) != (((/* implicit */int) ((unsigned char) arr_22 [i_14] [i_14]))));
                /* LoopSeq 4 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_64 [i_10] [i_14] [i_14] [i_19] [6LL] [i_20] = ((/* implicit */unsigned int) arr_43 [i_10 + 1] [i_10 + 1] [i_19 - 2]);
                    /* LoopSeq 2 */
                    for (unsigned int i_21 = 1; i_21 < 13; i_21 += 1) 
                    {
                        var_30 = 6806444437145911601LL;
                        arr_68 [i_10] [i_10] [(short)0] [i_20] [i_21] [9LL] [i_21] = ((/* implicit */unsigned char) arr_55 [14ULL] [i_19 + 1]);
                    }
                    for (unsigned short i_22 = 2; i_22 < 16; i_22 += 3) 
                    {
                        arr_72 [i_10] [i_10] [4LL] = ((/* implicit */unsigned int) arr_49 [i_10]);
                        var_31 = ((/* implicit */signed char) var_1);
                        arr_73 [13LL] [i_10] [13ULL] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) (short)15)) % (((/* implicit */int) (unsigned char)129))));
                    }
                }
                for (unsigned char i_23 = 0; i_23 < 17; i_23 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_24 = 0; i_24 < 17; i_24 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)1)))) / (((/* implicit */int) arr_29 [i_10 + 1]))));
                        var_33 += ((/* implicit */unsigned short) arr_66 [i_19] [i_19] [i_19 - 1] [i_19 - 1] [i_19]);
                        arr_80 [i_14] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) arr_1 [i_10])) : (((/* implicit */int) (unsigned short)61869))))) : (18446744073709551615ULL)));
                    }
                    var_34 = ((/* implicit */int) var_2);
                    var_35 = ((((/* implicit */_Bool) arr_47 [i_10 + 1] [i_19 - 4])) || (((/* implicit */_Bool) (short)3973)));
                    /* LoopSeq 2 */
                    for (long long int i_25 = 0; i_25 < 17; i_25 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) arr_12 [i_10 + 1] [i_10 + 1] [12ULL]))))) && (((/* implicit */_Bool) var_5))));
                        arr_85 [i_10] [7LL] [i_19] [i_19 - 2] [(unsigned char)1] [i_23] [i_25] = ((/* implicit */int) ((arr_78 [(_Bool)1] [i_10 + 1] [i_14] [i_19] [i_10 + 1] [1] [5LL]) ^ (((/* implicit */unsigned long long int) var_1))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_78 [(short)10] [i_14] [(short)10] [i_23] [i_26] [(unsigned char)14] [i_10 + 1]))));
                        arr_88 [i_10] [i_10 + 1] [(_Bool)1] [i_10] = ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) var_2)));
                        arr_89 [i_10] [i_10] [14] [i_10] [i_10] [16LL] = ((/* implicit */unsigned char) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(unsigned char)7] [i_19 + 3] [i_14])))));
                    }
                }
                for (unsigned short i_27 = 0; i_27 < 17; i_27 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) arr_39 [i_10] [i_10] [i_10] [i_10]);
                    arr_92 [1ULL] [i_10] [i_10] [i_10] [i_19 - 1] [0LL] = ((/* implicit */long long int) arr_51 [i_14] [1ULL] [i_14] [i_14]);
                    arr_93 [i_10 + 1] [i_10 + 1] [4ULL] = ((/* implicit */unsigned short) arr_12 [i_10] [(short)9] [i_10]);
                    var_39 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_48 [i_14] [i_14]))));
                }
                for (unsigned short i_28 = 0; i_28 < 17; i_28 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned char) var_2);
                    arr_96 [(_Bool)1] [i_10] [i_10] = arr_32 [i_14];
                }
                var_41 = ((/* implicit */_Bool) var_4);
            }
            for (unsigned char i_29 = 0; i_29 < 17; i_29 += 4) 
            {
                arr_99 [2U] [2U] [(unsigned short)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (arr_90 [i_14] [(_Bool)1] [i_14] [(_Bool)1]) : (((/* implicit */unsigned long long int) 3058497424U))));
                var_42 = ((/* implicit */long long int) 18446744073709551615ULL);
                /* LoopSeq 1 */
                for (short i_30 = 4; i_30 < 16; i_30 += 4) 
                {
                    var_43 += ((/* implicit */long long int) (-(((/* implicit */int) arr_35 [i_30 - 2]))));
                    arr_102 [i_10 + 1] [i_10 + 1] [i_10] = ((/* implicit */unsigned long long int) var_6);
                    var_44 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [(short)2] [i_10 + 1] [i_10 + 1] [(unsigned short)4] [i_10 + 1])) >> (((/* implicit */int) (_Bool)1))));
                }
            }
            var_45 = ((/* implicit */long long int) arr_100 [i_10] [i_10 + 1] [i_10] [i_10 + 1]);
        }
    }
}
