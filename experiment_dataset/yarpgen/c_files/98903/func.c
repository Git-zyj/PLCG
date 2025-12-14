/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98903
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
    var_11 = ((/* implicit */unsigned long long int) min((var_10), ((-(var_10)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_0 + 2] [i_1] [i_1] &= ((/* implicit */long long int) ((var_1) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((arr_7 [i_0]) + (((/* implicit */unsigned long long int) 2679388870U)))))))));
                var_13 = arr_3 [i_0] [i_1] [i_2];
                var_14 = ((/* implicit */short) ((long long int) arr_0 [i_0 + 2]));
            }
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 4] [i_0 - 1] [i_1] [i_1])))))));
                arr_11 [i_0] [i_0 + 1] [i_3] = ((/* implicit */unsigned int) (((~(var_5))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3]))))))));
                var_16 = ((/* implicit */_Bool) arr_2 [i_1] [i_3]);
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 2])))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) var_1)))))));
                var_19 = ((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1]);
                /* LoopSeq 3 */
                for (long long int i_5 = 2; i_5 < 16; i_5 += 4) 
                {
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_1] [i_4]))));
                    arr_17 [i_0] [(unsigned short)16] [i_0] [i_0] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2679388853U)) ? (-5424912586232640684LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) || (((/* implicit */_Bool) arr_10 [i_5] [i_1] [i_0]))));
                    arr_18 [8ULL] [i_5 + 2] [i_5] [i_5 + 1] [i_0] &= ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0] [i_0]));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_10) | (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_4) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 4])) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_19 [i_4] [i_1] [i_1] [i_0 + 1] [i_6])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_4] [i_1] [i_4] [i_6]))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_9 [i_4] [i_1] [i_4] [i_6]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) var_4);
                        var_25 &= ((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_1] [i_1]);
                    }
                    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) var_7);
                        var_27 = ((/* implicit */short) arr_23 [i_0 + 1] [i_0 + 2] [(signed char)9] [i_0 + 1] [i_0]);
                        arr_28 [i_0] [i_4] [i_4] [(unsigned short)16] [i_8] = ((/* implicit */_Bool) 1615578461U);
                    }
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_28 = ((/* implicit */short) var_4);
                    var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [(_Bool)1] [i_0 - 1]))));
                    var_30 |= ((/* implicit */_Bool) arr_24 [i_4] [i_1] [i_4] [i_4] [i_4] [i_1] [(unsigned short)2]);
                    var_31 ^= ((/* implicit */long long int) arr_16 [i_9] [(short)16] [(short)16] [i_0]);
                }
                arr_32 [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) var_5)) ? (arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))));
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_31 [i_0] [i_1] [i_4] [(_Bool)1]))));
            }
            arr_33 [i_0] = ((/* implicit */short) arr_19 [(short)13] [i_1] [i_0] [i_0 - 1] [i_1]);
        }
        for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            var_33 *= ((/* implicit */_Bool) arr_7 [i_0 + 3]);
            /* LoopSeq 2 */
            for (long long int i_11 = 3; i_11 < 17; i_11 += 2) 
            {
                arr_38 [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_11 - 2] [i_10] [i_11] [i_11 - 3]))));
                var_34 = ((/* implicit */_Bool) (~(arr_29 [(_Bool)1] [i_11 + 1] [i_10] [i_11 - 3] [i_11])));
            }
            for (unsigned short i_12 = 1; i_12 < 16; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        arr_47 [i_12] [i_12] = var_5;
                        var_35 = ((_Bool) (short)7);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_36 = var_5;
                        var_37 = ((/* implicit */_Bool) ((unsigned short) var_10));
                    }
                    arr_50 [i_0 - 1] [i_12] [i_10] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_49 [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_13] [i_13]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 4; i_16 < 17; i_16 += 2) 
                    {
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) arr_27 [i_16] [i_12 + 1] [i_12] [i_16] [i_12] [i_12 + 1] [i_12]))));
                        var_39 = ((/* implicit */short) arr_52 [i_12] [i_0 + 3]);
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_57 [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_0] [i_12] = ((/* implicit */short) arr_19 [i_12] [i_12] [i_12 - 1] [i_12 - 1] [i_12 + 1]);
                        var_40 ^= 2097151ULL;
                        arr_58 [14] [i_12] [i_12] [(short)4] [i_12] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 2097151ULL))) ? ((~(((/* implicit */int) arr_13 [i_0] [i_10] [i_0] [i_13])))) : (((/* implicit */int) arr_1 [i_12 + 1] [i_0 + 4]))));
                        var_41 = (short)12290;
                        var_42 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0 + 2] [i_12 - 1] [i_12 - 1] [i_17]))));
                    }
                }
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    var_43 = (!(((/* implicit */_Bool) arr_42 [i_12])));
                    arr_63 [i_18 - 1] [i_12] [i_12] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [10LL] [i_12] [i_12] [i_12 + 1])) ? (((/* implicit */int) arr_51 [i_18 - 1] [i_12] [i_18] [i_18 - 1] [8] [i_12] [i_12 + 1])) : (((/* implicit */int) arr_51 [i_12 - 1] [i_12] [i_12 + 2] [i_12 - 1] [i_12 + 2] [i_12] [i_12 + 2]))));
                    var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_61 [i_0 + 1] [i_0 + 1] [i_12 + 1] [i_12]))));
                    arr_64 [i_0] [i_0] [i_12] [i_18] = ((/* implicit */int) (signed char)-10);
                }
                var_45 = ((/* implicit */_Bool) ((14737932497996482064ULL) << (((arr_56 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 3]) + (8451363749353882616LL)))));
                var_46 ^= ((/* implicit */signed char) var_6);
            }
            var_47 -= ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_10] [i_10] [i_10] [i_0]))));
            var_48 ^= ((/* implicit */int) (~(arr_53 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0])));
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_19 = 3; i_19 < 16; i_19 += 3) /* same iter space */
        {
            var_49 = ((/* implicit */_Bool) min((var_49), (arr_12 [i_19 - 2] [16])));
            arr_68 [i_19] = ((/* implicit */unsigned long long int) arr_66 [i_19 - 3] [i_19 + 1]);
        }
        for (unsigned long long int i_20 = 3; i_20 < 16; i_20 += 3) /* same iter space */
        {
            arr_71 [i_0] [i_0] = arr_8 [i_0] [i_20 - 2] [i_20 + 2];
            /* LoopSeq 2 */
            for (unsigned char i_21 = 1; i_21 < 17; i_21 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 18; i_22 += 2) 
                {
                    for (unsigned short i_23 = 0; i_23 < 18; i_23 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) (+(((arr_46 [i_0 + 3] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_23] [9U] [i_22]) ? (((/* implicit */int) arr_52 [i_21] [i_21])) : (((/* implicit */int) var_2))))));
                            arr_81 [i_21] [i_20] [i_21 - 1] [i_22] [i_23] = arr_55 [i_0] [(_Bool)1] [i_21] [i_22];
                            var_51 |= ((/* implicit */short) -120388909);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_24 = 0; i_24 < 18; i_24 += 2) 
                {
                    arr_85 [i_0] [i_20] [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_53 [i_0] [(_Bool)1] [i_0 + 1] [(_Bool)1] [3ULL] [i_24] [i_0 + 1])));
                    var_52 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0 + 4] [i_0 + 4] [i_21] [i_24]))));
                    arr_86 [0ULL] [0ULL] [i_21] [i_24] = ((/* implicit */short) ((long long int) arr_2 [i_0 + 3] [i_0 - 1]));
                }
            }
            for (unsigned char i_25 = 1; i_25 < 17; i_25 += 2) /* same iter space */
            {
                var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) var_2))));
                var_54 = ((/* implicit */long long int) ((_Bool) arr_67 [i_20]));
            }
            arr_90 [i_0] [3LL] = ((/* implicit */unsigned short) ((arr_61 [(short)4] [i_20] [i_0] [(short)4]) + (arr_73 [i_20 - 3] [i_20] [i_20] [i_0])));
        }
        for (int i_26 = 4; i_26 < 16; i_26 += 2) 
        {
            arr_94 [i_0 - 1] [i_26] = ((/* implicit */_Bool) arr_25 [i_0 + 1] [i_26] [i_26] [i_0 + 1] [i_0 + 1]);
            arr_95 [i_0] [i_26] = ((/* implicit */long long int) arr_55 [i_0] [i_0] [i_26] [i_26 - 4]);
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_28 = 0; i_28 < 18; i_28 += 4) 
            {
                var_55 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0 + 1] [(unsigned char)15] [i_0] [i_0 - 1] [i_0]))));
                var_56 = ((/* implicit */unsigned int) arr_67 [0ULL]);
            }
            var_57 -= ((/* implicit */unsigned long long int) var_9);
            var_58 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_43 [(short)2] [i_27] [i_27] [i_0 + 2] [i_27]))));
        }
        var_59 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [(signed char)16])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_16 [i_0 + 4] [(_Bool)1] [i_0] [i_0 + 1]))));
    }
}
