/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81379
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] &= ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_0])))) && (((/* implicit */_Bool) arr_3 [i_0]))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        arr_9 [10] = ((((((/* implicit */int) arr_2 [i_1 - 1])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (arr_0 [(signed char)22])))))) * (((/* implicit */int) arr_1 [i_1 - 1])));
        arr_10 [i_1] [i_1 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_1 - 1]), (((/* implicit */unsigned short) arr_0 [i_1]))))) || (arr_0 [i_1 - 1])))) >> (((/* implicit */int) ((arr_8 [i_1 - 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)14]))))))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_2 - 1] [i_2 - 1])), (arr_12 [i_2 + 1])))) <= (((((/* implicit */int) arr_12 [i_2 + 3])) & (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1])))))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_2 + 2])) * (((/* implicit */int) arr_15 [i_2 + 1])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    arr_18 [i_2] [13] [i_3] [13] = ((/* implicit */unsigned long long int) arr_8 [i_3]);
                    var_22 += ((/* implicit */unsigned char) arr_7 [i_2 + 1] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_23 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (((1842117871U) << (((-12057064876466856LL) + (12057064876466879LL)))))));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((arr_23 [i_6] [i_2] [i_5] [i_4] [(unsigned char)10] [i_2]) < (arr_23 [i_2 - 1] [i_3] [i_4] [i_4] [i_5] [i_6]))))));
                                var_25 ^= ((/* implicit */long long int) arr_17 [i_2 + 3] [i_2 + 1] [i_2 - 1] [i_2 + 1]);
                                var_26 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_5] [i_3] [i_2 + 1] [i_5]))));
                            }
                        } 
                    } 
                }
                var_27 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 3])))), (((/* implicit */int) min((arr_7 [i_2 - 1] [i_2 + 3]), (arr_7 [i_2 - 1] [i_2 - 1]))))));
                arr_25 [i_2] [i_2] = ((/* implicit */long long int) ((max((arr_23 [i_2 + 3] [i_3] [i_2] [i_2] [i_3] [(_Bool)1]), (arr_23 [i_2 + 3] [(unsigned char)14] [i_2] [i_3] [(unsigned short)0] [i_2]))) >> (((/* implicit */int) ((arr_23 [i_2 + 3] [i_3] [(unsigned char)2] [i_3] [i_3] [(unsigned char)2]) > (arr_23 [i_2 + 3] [i_2 + 3] [i_2] [i_2] [i_2 + 2] [i_2]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        var_28 *= ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_3 [i_7]), (((/* implicit */unsigned short) arr_7 [i_7] [i_7]))))) / (((/* implicit */int) min((arr_27 [i_7]), (arr_27 [i_7]))))));
        arr_28 [i_7] [(unsigned char)2] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_7]))) * ((~(max((arr_8 [i_7]), (((/* implicit */unsigned int) arr_27 [i_7])))))));
        var_29 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_3 [i_7]))))));
    }
    for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
    {
        arr_31 [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [i_8] [i_8]))));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 9; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 9; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            {
                                var_30 |= ((/* implicit */signed char) ((5083849919688609044LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10] [i_10] [i_11 - 2] [i_12] [i_12]))) >= (2222947149U)))))));
                                var_31 |= ((/* implicit */int) arr_41 [i_8] [i_8] [i_8] [9LL] [i_8]);
                            }
                        } 
                    } 
                    var_32 ^= ((/* implicit */short) arr_23 [i_8] [i_8] [i_9] [i_10] [i_10] [i_10]);
                    arr_43 [i_8] [i_9] [(short)6] [i_10] = ((/* implicit */_Bool) min((max((arr_14 [i_9 - 1] [i_9 + 2] [(_Bool)1]), (arr_14 [i_9 + 1] [i_9] [i_9]))), (arr_14 [i_9 + 2] [i_8 + 1] [i_8 + 1])));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) arr_33 [i_8] [i_8 - 1]);
        /* LoopSeq 3 */
        for (short i_13 = 2; i_13 < 10; i_13 += 4) 
        {
            var_34 *= arr_32 [i_8 + 1];
            var_35 = ((/* implicit */unsigned short) ((((arr_45 [i_8 + 1] [i_8 - 1]) * (arr_21 [i_8 - 1] [i_13 - 2] [i_13]))) / (arr_45 [i_8 - 1] [i_8])));
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (max((((/* implicit */unsigned long long int) arr_19 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])), (((arr_23 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_8] [i_8 + 1] [i_8 + 1]) / (arr_23 [i_13 - 2] [i_13] [i_13 + 1] [i_8] [i_8 - 1] [i_8 + 1])))))));
            arr_47 [i_8] [i_8] [i_13] = ((/* implicit */unsigned long long int) arr_32 [i_8]);
        }
        /* vectorizable */
        for (signed char i_14 = 1; i_14 < 10; i_14 += 3) /* same iter space */
        {
            arr_52 [i_8] [i_14 - 1] = ((/* implicit */unsigned int) arr_12 [i_8 - 1]);
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    {
                        arr_59 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_58 [i_15] [i_15] [i_14] [i_14 + 1] [i_8 - 1])) % (((/* implicit */int) arr_58 [i_15] [i_14 + 1] [i_14 + 1] [i_14 + 1] [(short)8]))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_24 [i_8] [i_14] [i_15] [i_15] [i_16])) + (arr_14 [i_8 + 1] [i_8 + 1] [i_15])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 1; i_17 < 8; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 2; i_18 < 10; i_18 += 3) 
                {
                    {
                        var_38 += ((/* implicit */int) arr_20 [i_8 - 1] [i_8 - 1] [i_8] [i_8]);
                        var_39 = ((/* implicit */_Bool) arr_14 [i_8] [i_14] [(signed char)0]);
                        arr_66 [i_8] [i_14] [i_14] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_17 - 1] [i_8 + 1] [i_8])) || (((/* implicit */_Bool) arr_40 [i_8] [i_14 - 1] [i_14 - 1] [i_18]))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_64 [i_17 + 1] [i_17 + 2] [i_17] [i_17 + 3])) * (((/* implicit */int) arr_64 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 2]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_19 = 3; i_19 < 8; i_19 += 4) /* same iter space */
                        {
                            var_41 = ((/* implicit */short) arr_51 [(_Bool)1] [i_14 + 1] [(_Bool)1]);
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) arr_39 [i_18] [2LL] [2LL] [i_8]))));
                            arr_69 [i_8] [i_8 - 1] [7ULL] [5] [i_8] [7ULL] = ((/* implicit */unsigned int) ((arr_14 [i_8] [i_14 - 1] [i_17]) / (arr_14 [i_19] [i_8 + 1] [i_8 + 1])));
                        }
                        for (unsigned short i_20 = 3; i_20 < 8; i_20 += 4) /* same iter space */
                        {
                            arr_72 [i_8] [i_8] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_8])) / (arr_40 [i_8] [0] [i_8] [i_8]))) & (((/* implicit */int) ((arr_70 [i_8] [i_14] [i_8] [i_18] [i_8]) > (((/* implicit */unsigned long long int) arr_56 [i_8] [i_18 + 1] [i_20])))))));
                            var_43 = ((/* implicit */unsigned int) arr_22 [7] [7] [7] [7]);
                            var_44 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)9))));
                        }
                        for (int i_21 = 4; i_21 < 8; i_21 += 1) 
                        {
                            arr_75 [i_14] [4LL] [i_18] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_18])) < (((/* implicit */int) arr_26 [i_8] [i_14])))))) ^ (arr_61 [i_14 + 1] [i_17 + 1] [i_21 + 3])));
                            var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) arr_51 [i_8 - 1] [i_14] [i_18]))));
                            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_21])))))));
                        }
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_54 [i_14] [i_14 - 1] [i_14] [i_14]))));
            var_48 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_40 [i_14 + 1] [i_14] [i_14 + 1] [i_8 + 1])) | (arr_42 [i_14 + 1] [i_8] [i_14] [4ULL] [i_8 - 1])));
        }
        /* vectorizable */
        for (signed char i_22 = 1; i_22 < 10; i_22 += 3) /* same iter space */
        {
            arr_79 [i_8] = ((/* implicit */unsigned int) arr_27 [i_8]);
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 11; i_23 += 1) 
            {
                for (unsigned short i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    {
                        arr_85 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) (-(arr_62 [i_23] [i_23] [i_22 + 1] [i_8 - 1])));
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_77 [10ULL])) | (((/* implicit */int) arr_3 [i_23]))))) > (arr_37 [i_24])));
                        arr_86 [i_8] [i_8 - 1] [i_8 - 1] [(unsigned short)3] [i_8] [i_8] = arr_54 [i_8] [i_8] [i_8] [i_8];
                        var_50 = ((/* implicit */long long int) (-(arr_50 [i_8] [i_22] [i_24])));
                    }
                } 
            } 
        }
        var_51 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_54 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])))) || (((/* implicit */_Bool) ((min((arr_37 [i_8]), (arr_51 [i_8] [i_8] [i_8 - 1]))) | (((/* implicit */unsigned int) (+(arr_22 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8])))))))));
    }
    var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) var_12))));
}
