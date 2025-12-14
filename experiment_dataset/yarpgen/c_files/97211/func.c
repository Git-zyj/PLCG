/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97211
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
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_10)), (((var_2) & (((/* implicit */unsigned long long int) var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 2])) + (((/* implicit */int) arr_2 [i_0 + 2]))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_2] [i_1]))));
                var_20 = arr_3 [i_0] [i_0];
            }
            var_21 = ((/* implicit */short) (+(17592186044415ULL)));
            arr_9 [i_0 + 1] [i_1] [(unsigned char)6] = (~(((/* implicit */int) ((short) arr_7 [i_0] [i_0] [(short)5] [(short)9]))));
            var_22 *= ((/* implicit */long long int) arr_3 [i_0 + 3] [i_1]);
            arr_10 [(_Bool)1] [i_0] [i_1] = ((/* implicit */signed char) (-(arr_7 [i_0 - 1] [i_1] [i_1] [i_1])));
        }
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((_Bool) (signed char)-1)))));
            arr_15 [(short)1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 3])) | (((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 1]))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 - 1] [i_0 + 1]))) + ((-9223372036854775807LL - 1LL))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    arr_21 [i_5] [i_4] [(unsigned short)8] [i_5] = (-(((/* implicit */int) var_10)));
                    var_24 = ((/* implicit */_Bool) arr_2 [(_Bool)0]);
                    arr_22 [(_Bool)1] [i_3] [i_0] [i_4] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_3])) || ((_Bool)1))));
                    arr_23 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_0 + 3] [(short)1] [i_4] [i_4 - 1]))));
                    arr_24 [i_0 - 1] [i_0 - 1] [i_3] [i_4] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_19 [(_Bool)1] [(_Bool)1] [i_4])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_7)))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_25 = ((/* implicit */long long int) max((var_25), (((((/* implicit */_Bool) arr_4 [i_6 + 1] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)16496)))) : (arr_20 [i_0 + 3] [i_3] [i_0 + 3] [(_Bool)1])))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((var_2) - (1425128314179898976ULL)))));
                    var_27 = ((/* implicit */short) arr_18 [13ULL] [i_3] [i_4] [i_6]);
                    var_28 = ((/* implicit */short) ((((((/* implicit */int) arr_19 [i_3] [i_4] [i_6])) ^ (((/* implicit */int) arr_18 [i_0] [i_0] [i_4] [(_Bool)1])))) - (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_5 [i_0] [i_3] [i_0])) : (((/* implicit */int) arr_16 [i_6] [i_3]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_6] [i_4] [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_2 [i_6 + 1])) - (30268))));
                        var_29 += ((/* implicit */unsigned char) arr_3 [i_4 - 1] [i_3]);
                        var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) * (((/* implicit */int) arr_28 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_31 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8 - 1] [i_3] [i_0 + 2]))) & (((long long int) arr_26 [i_0 + 2] [i_3] [1LL] [i_6] [i_8 - 1]))));
                        var_32 ^= ((/* implicit */int) arr_2 [i_4]);
                        arr_32 [i_4] = ((/* implicit */short) arr_3 [i_0 + 1] [i_4 - 1]);
                    }
                }
            }
            for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
            {
                var_33 += (short)-27;
                /* LoopSeq 4 */
                for (short i_10 = 1; i_10 < 15; i_10 += 2) 
                {
                    var_34 = ((/* implicit */unsigned short) ((unsigned int) -5113736646229211243LL));
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((505664599) < (((/* implicit */int) arr_1 [(_Bool)1] [i_9])))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) arr_30 [i_0] [i_3] [i_3]))));
                    arr_40 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_11] [i_9] = ((signed char) arr_1 [i_0 + 2] [i_9 - 3]);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_43 [6] [i_9] [i_9] [i_9] [(unsigned char)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_9 - 3])) ? (arr_31 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-26131)))))));
                    var_37 = ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [(signed char)1] [i_9]))) & (arr_20 [i_0] [i_0] [i_9] [i_12]))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_38 *= ((/* implicit */int) arr_1 [i_3] [i_9]);
                    var_39 ^= ((_Bool) ((arr_36 [i_0] [i_3] [i_0]) ? (((/* implicit */unsigned long long int) var_11)) : (arr_7 [(short)7] [(short)7] [i_3] [i_0])));
                    /* LoopSeq 3 */
                    for (long long int i_14 = 2; i_14 < 15; i_14 += 4) 
                    {
                        var_40 = ((/* implicit */int) min((var_40), ((~(((/* implicit */int) (!(arr_28 [i_0] [i_0] [i_3] [i_9] [i_13] [i_14]))))))));
                        arr_49 [i_9] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_0 + 2] [i_9 - 3] [i_14 - 2])) / (((/* implicit */int) arr_39 [i_0 - 1] [i_9 - 2] [i_14 - 1]))));
                        var_41 *= ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 3]);
                    }
                    for (short i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_13] [i_3])) ? (((/* implicit */int) arr_12 [i_9 + 1] [i_15 + 1])) : (((/* implicit */int) arr_12 [i_3] [i_9]))));
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_9 - 2] [i_9] [i_9] [i_9 - 2] [i_9 - 1])) && (((/* implicit */_Bool) arr_5 [i_0 + 3] [i_3] [(unsigned char)4]))));
                    }
                    for (long long int i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((-9223372036854775792LL) * (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                        arr_57 [i_9 + 1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_16] [2U])) ? (arr_20 [i_13] [i_3] [(signed char)2] [(_Bool)1]) : (((/* implicit */long long int) -493445153))))) ? (arr_31 [i_0 + 1] [i_9 - 3] [i_9 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(unsigned short)0] [i_3] [i_0 + 1])))));
                        arr_58 [i_0] [i_0] [i_9 - 1] [i_9] [i_13] [i_9] = ((/* implicit */signed char) arr_47 [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        var_45 = ((/* implicit */int) min((var_45), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_16 [i_0 + 2] [i_3])) : (((/* implicit */int) arr_16 [i_0 + 2] [(_Bool)1]))))));
                        var_46 = ((int) arr_53 [i_9 - 1] [i_9 + 1] [i_9] [i_9] [i_9 - 1]);
                        arr_61 [i_0] [i_9] [i_9] [8] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_17] [(unsigned char)1] [i_9] [i_9] [i_3] [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_0] [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_3] [i_17] [i_13])))));
                    }
                }
            }
        }
        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
        {
            var_47 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) % (((int) 505664599))));
            var_48 = (((((_Bool)1) ? (((/* implicit */long long int) -1787620651)) : (9223372036854775807LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)9]))));
            var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) arr_30 [i_18] [i_0 + 2] [i_18]))));
            arr_64 [i_0] [i_0] [i_0] = ((((((/* implicit */int) arr_3 [i_0 + 3] [4U])) & (((/* implicit */int) var_5)))) / (((/* implicit */int) arr_16 [i_0 - 1] [i_0 + 2])));
        }
    }
    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 4) 
    {
        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((_Bool) arr_66 [i_19])))));
        arr_67 [i_19] [i_19] = ((/* implicit */short) min((((((/* implicit */int) (short)-32756)) == (((/* implicit */int) arr_65 [i_19])))), (arr_65 [i_19])));
    }
    var_51 = var_5;
}
