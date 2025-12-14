/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88377
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
    for (long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_12 = (short)3;
        var_13 -= ((/* implicit */short) ((unsigned long long int) max((((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-91))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0]))))));
        arr_3 [(short)13] [0U] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_0 [i_0 - 3] [i_0 + 2])))) % (((unsigned long long int) arr_0 [i_0 + 2] [i_0 - 3]))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_4 [i_1]))) | (((/* implicit */int) var_7))));
            var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_1 + 2]))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2] [i_1 + 1])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
            var_17 = (+((+(((/* implicit */int) var_10)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (+(arr_7 [i_1 - 1] [16] [i_1 - 1])));
            arr_10 [i_1] [11LL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1416791870))))) : (arr_7 [i_1] [(unsigned short)0] [i_1 + 1])));
        }
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (unsigned char i_7 = 4; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_19 = ((short) arr_19 [i_7 - 4] [i_7 - 4] [i_7 - 4] [i_1 + 2] [i_7 - 2] [i_5 + 1] [i_7 - 2]);
                            arr_20 [i_1] [i_6] [(unsigned short)2] |= ((/* implicit */_Bool) var_8);
                            arr_21 [i_1] [i_5] [i_5 + 1] [i_6] [i_5] [i_5] = ((/* implicit */_Bool) 12918634810153233334ULL);
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_14 [i_1] [i_4] [(unsigned char)10] [i_6]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) 
            {
                for (short i_9 = 3; i_9 < 22; i_9 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) 939524096);
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) 0ULL))));
                        arr_26 [(unsigned char)10] [i_8] [8LL] [i_8] [i_8 + 1] [i_9] = ((/* implicit */unsigned long long int) ((signed char) (short)-3));
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_8 - 1] [i_8] [i_8 + 1] [i_1])) ? (((/* implicit */int) arr_24 [i_8 - 1] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_24 [i_8 - 1] [i_8] [i_8 - 1] [i_8]))));
                        arr_27 [i_1 + 1] [i_8] = ((/* implicit */unsigned char) ((939524096) > (((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 1]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1 + 1]))));
                arr_30 [i_1] [(unsigned short)17] [i_10] = ((/* implicit */unsigned short) (signed char)91);
                /* LoopSeq 2 */
                for (short i_11 = 1; i_11 < 21; i_11 += 4) 
                {
                    arr_34 [(unsigned char)10] [i_11] [i_10] [i_11] = ((/* implicit */short) (signed char)91);
                    arr_35 [i_11] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1 - 1]))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */int) var_9)) : (arr_4 [i_1 + 2]))))));
                }
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    arr_39 [i_12 + 1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-3)))));
                    arr_40 [i_1 - 1] [i_1 - 1] [i_10] [i_12 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)195))));
                }
            }
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
            {
                arr_43 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_42 [i_1 + 1] [i_1 + 1]))));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) 6505565802391754459ULL))));
                arr_44 [i_1] [i_4] [i_13] [i_1] = ((/* implicit */int) var_8);
            }
            arr_45 [i_4] = ((/* implicit */signed char) ((((long long int) (unsigned char)24)) * (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_4] [i_4] [3LL])))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((int) arr_24 [i_1] [i_1] [i_1] [i_4])) - (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned short)8))))))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_48 [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
            arr_49 [i_14] [i_14] = ((/* implicit */_Bool) ((long long int) arr_46 [i_14] [i_1 - 1] [i_1 + 2]));
            arr_50 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_14])) ? (((/* implicit */int) arr_15 [i_14])) : (((/* implicit */int) arr_15 [i_14]))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_4 [i_15])))) ? ((+(arr_13 [i_15] [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            var_29 -= ((/* implicit */unsigned char) arr_8 [i_15]);
        }
    }
    for (short i_16 = 1; i_16 < 21; i_16 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            for (int i_18 = 4; i_18 < 21; i_18 += 2) 
            {
                {
                    arr_63 [i_16] [18ULL] = (unsigned short)0;
                    arr_64 [22U] [i_16] [i_18] = ((/* implicit */_Bool) (unsigned char)255);
                }
            } 
        } 
        var_30 -= (_Bool)1;
        /* LoopNest 3 */
        for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 4) 
        {
            for (unsigned short i_20 = 3; i_20 < 21; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    {
                        arr_72 [i_16] [(short)9] [i_20] [i_21] [i_16] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_61 [i_16] [i_16] [(_Bool)1])) - (2044)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-19), (((/* implicit */short) (signed char)108)))))) : (min((((/* implicit */unsigned long long int) arr_22 [i_16 - 1] [i_19] [i_20])), (var_1))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_7)), (arr_46 [i_16] [i_16] [i_16]))), (((/* implicit */long long int) max((arr_28 [i_16] [(unsigned char)11] [i_20]), (((/* implicit */unsigned int) var_5))))))))));
                        arr_73 [i_16] [i_16] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_16]))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_16 + 2] [i_16]))) * (0LL))))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */short) (+(((/* implicit */int) ((min((var_8), (((/* implicit */long long int) -1416791871)))) == (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    var_32 = ((/* implicit */long long int) var_9);
}
