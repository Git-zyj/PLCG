/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80814
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [10U])) : (arr_1 [i_0])))), ((~(arr_2 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(arr_1 [i_0])))))) : (arr_2 [(unsigned short)15])));
        var_18 ^= min((((/* implicit */unsigned int) (signed char)-11)), (3529944479U));
        var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */unsigned int) max((arr_1 [i_0]), (arr_1 [i_0])))), ((-(arr_2 [i_0]))))) : ((~(18843142U)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) ((arr_2 [(_Bool)1]) >> (((((/* implicit */int) arr_0 [(signed char)2])) - (184)))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            arr_12 [i_1] = arr_11 [(unsigned char)10];
            var_20 = (~(((((/* implicit */_Bool) (+(305979843211515652ULL)))) ? (((/* implicit */int) arr_7 [i_1])) : (((((/* implicit */_Bool) arr_10 [(short)5] [3U] [2U])) ? (((/* implicit */int) arr_4 [19] [11])) : (arr_5 [(signed char)17] [i_1]))))));
            var_21 ^= ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_5 [i_1] [2ULL])) ? (arr_8 [i_2 - 1] [i_1] [(unsigned short)5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1]))))) / (arr_8 [(short)18] [i_1] [i_2 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) max((arr_10 [i_1] [(unsigned short)18] [(signed char)10]), (((/* implicit */unsigned short) arr_7 [10U]))))) : (((((/* implicit */_Bool) arr_9 [i_2 + 1] [2U])) ? (((/* implicit */int) arr_11 [i_2 + 1])) : (((/* implicit */int) arr_4 [i_1] [1])))))))));
        }
        arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 7U))) ? (((/* implicit */int) ((short) arr_7 [0ULL]))) : (((((/* implicit */int) ((_Bool) arr_11 [(unsigned char)6]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [15U])))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
        {
            arr_20 [i_3] [4ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [0LL])) ? (((/* implicit */int) arr_10 [i_3 + 2] [10] [i_4])) : (((/* implicit */int) arr_7 [(signed char)20]))))) ? (arr_16 [i_3 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_4 [18U] [i_4])) : (((/* implicit */int) arr_11 [i_4])))))));
            arr_21 [0U] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_3 - 2] [i_4]))) ? (arr_18 [(unsigned short)10] [i_3 - 2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_3 - 1]))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned short i_7 = 3; i_7 < 9; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) arr_11 [i_3 + 1]);
                            var_23 *= ((arr_16 [i_3 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5]))));
                            var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_7 - 2] [i_6] [9LL] [3ULL] [i_3 + 1] [9U])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [i_5])) >= (arr_8 [2] [i_5] [i_6])))) : (((/* implicit */int) ((unsigned char) arr_24 [i_5] [(_Bool)1] [i_7 + 1])))));
                            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (signed char)-26))))) ? (((arr_7 [i_3 + 1]) ? (((/* implicit */int) arr_4 [0U] [(unsigned char)6])) : (((/* implicit */int) arr_28 [i_3 - 1] [i_5] [10LL] [i_7 + 1] [i_8])))) : (((((/* implicit */_Bool) arr_30 [i_3 - 2] [(_Bool)1] [(signed char)0] [(unsigned short)3] [(_Bool)1] [i_8])) ? (arr_15 [i_6]) : (arr_15 [7ULL])))));
                        }
                    } 
                } 
            } 
            arr_35 [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (18843150U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23470)))))) ? (((((/* implicit */_Bool) arr_6 [9ULL])) ? (arr_30 [(signed char)5] [(signed char)6] [(short)11] [i_5] [i_5] [(unsigned char)8]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [(unsigned char)1] [i_3 - 2] [i_5] [11LL] [i_5] [8U]))))) : ((~(arr_30 [i_3 - 2] [i_3 - 1] [i_5] [7] [(signed char)4] [i_5])))));
            arr_36 [i_3] [1U] [4] = ((/* implicit */unsigned char) ((signed char) arr_26 [i_3 - 1] [i_3 - 2]));
            arr_37 [i_3] [6ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_3 - 1])) ? (((arr_18 [i_3 + 2] [2ULL] [i_5]) - (arr_32 [i_3 - 2] [(unsigned char)1] [i_5] [i_3] [i_5]))) : (((arr_24 [i_3 - 2] [(_Bool)1] [0LL]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [15LL])))))));
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_17 [8U] [2U])))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_30 [4U] [0] [1LL] [i_3 + 2] [i_3 + 1] [6ULL])))) ? ((~(arr_34 [i_3] [2] [i_9] [(signed char)7] [i_9]))) : (arr_2 [8U])));
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_38 [i_9] [i_9]))) ? (((/* implicit */int) ((_Bool) arr_9 [(_Bool)1] [i_9]))) : (((((/* implicit */_Bool) arr_16 [i_3 - 2])) ? (((/* implicit */int) arr_7 [(unsigned short)16])) : (((/* implicit */int) arr_14 [i_9] [i_9])))))))));
            arr_41 [i_3] [10] [10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2700940737U)) ? (((/* implicit */unsigned long long int) 97903655U)) : (5211203598803292733ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [(_Bool)0])) < (arr_16 [4])))))));
        }
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) arr_33 [i_3 + 1] [i_3 + 2] [(_Bool)1] [i_10] [10U] [i_11 + 2] [i_11 + 1]);
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    arr_50 [i_3 - 2] [7ULL] [i_11 + 2] [i_3] [5ULL] = ((/* implicit */long long int) ((int) 5211203598803292732ULL));
                    arr_51 [i_3] = ((/* implicit */unsigned short) (-(((arr_46 [i_3]) ? (arr_16 [i_3 - 1]) : (((/* implicit */unsigned long long int) arr_29 [8LL] [i_10] [0ULL] [i_12] [(signed char)1]))))));
                    var_30 += ((_Bool) ((unsigned int) arr_16 [i_3 - 1]));
                }
                for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    arr_54 [(short)5] [i_10] [(unsigned short)5] [i_3] [1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_3 - 2] [i_10] [(unsigned short)9] [i_13])))))));
                    var_31 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_13] [(signed char)0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 1] [i_11 + 2]))) : (((((/* implicit */_Bool) arr_22 [4ULL] [i_3])) ? (arr_2 [(unsigned char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3 + 1] [i_11 + 2]))))));
                }
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        {
                            arr_59 [i_3] [i_10] [(unsigned char)6] [i_15] = ((/* implicit */long long int) ((short) ((arr_39 [8ULL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_15] [i_10] [8ULL] [i_14] [7U]))) : (arr_38 [i_3] [i_11 + 2]))));
                            var_32 *= ((/* implicit */unsigned long long int) ((_Bool) arr_18 [i_3 - 2] [(_Bool)1] [i_11 - 1]));
                            arr_60 [i_3 + 1] [i_14] [i_11 + 2] [i_3] [(signed char)2] = ((/* implicit */int) ((unsigned long long int) arr_28 [i_15] [i_15] [6U] [i_15] [i_3 - 2]));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((4276124145U) - (1048575U)))) ? (2808944481U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_57 [i_11 + 2] [i_3 - 2]))));
            }
            for (unsigned short i_16 = 1; i_16 < 10; i_16 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_31 [9U] [i_3 - 2] [(unsigned char)9] [i_10] [i_16 + 2] [6]) ? (arr_18 [i_3 - 1] [(unsigned short)4] [4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_16 - 1] [i_3 - 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_16 + 2] [(unsigned char)1] [i_10] [(unsigned char)7] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_16 + 2] [i_10] [i_3 - 1] [(signed char)3]))) : (arr_2 [i_3 + 1])))) : (((unsigned long long int) arr_15 [i_3 + 2]))));
                var_36 = ((((/* implicit */_Bool) (+(arr_58 [i_3] [i_10] [i_16 - 1] [i_10] [(unsigned char)9])))) ? (((unsigned long long int) arr_57 [8ULL] [3ULL])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_3 + 1] [16U] [i_16 + 1])))));
            }
            var_37 = ((/* implicit */unsigned short) ((signed char) ((short) arr_23 [i_3])));
        }
        arr_63 [i_3] [(unsigned char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_2 [(_Bool)1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_3 - 1] [11ULL] [i_3 + 2] [i_3 - 2]))) : (((arr_52 [0] [7ULL] [7] [i_3 + 2] [i_3]) | (arr_32 [7ULL] [i_3] [i_3 - 2] [i_3] [i_3 - 2])))));
    }
    /* LoopNest 3 */
    for (short i_17 = 0; i_17 < 14; i_17 += 3) 
    {
        for (long long int i_18 = 1; i_18 < 13; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                {
                    arr_71 [i_17] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_17] [(unsigned short)0]), (((/* implicit */int) arr_9 [(unsigned short)10] [(short)3]))))) ? (((((/* implicit */int) arr_11 [i_17])) - (((/* implicit */int) arr_0 [i_19])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_17])), (arr_10 [i_17] [i_18 + 1] [(unsigned short)1])))))));
                    arr_72 [i_19] [i_18 + 1] [i_19] &= ((/* implicit */unsigned long long int) arr_68 [i_17] [8U] [i_19]);
                    var_38 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((int) arr_67 [i_17] [8]))) ? (((/* implicit */long long int) (-(arr_2 [10])))) : (arr_67 [(unsigned short)5] [i_18 - 1])))));
                    arr_73 [i_17] [i_19] [i_17] = max((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_19])), (arr_67 [0U] [i_17])))) ? (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25))) : (4276124145U))) : (((((/* implicit */_Bool) arr_9 [i_17] [(_Bool)0])) ? (((/* implicit */unsigned int) arr_5 [5U] [i_18 - 1])) : (arr_2 [(unsigned char)12]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_17] [(unsigned short)1]), (arr_70 [i_17] [i_18 - 1] [7ULL])))) ? (((/* implicit */int) max((arr_0 [(unsigned short)1]), (arr_70 [9] [i_18 - 1] [13U])))) : (((((/* implicit */_Bool) arr_0 [17])) ? (((/* implicit */int) arr_11 [1ULL])) : (((/* implicit */int) arr_0 [6U]))))))));
                    arr_74 [i_17] [(unsigned short)5] [3U] [i_17] = ((/* implicit */long long int) ((signed char) ((unsigned short) ((((/* implicit */_Bool) arr_69 [i_18 + 1] [(_Bool)1] [i_17] [(signed char)11])) ? (((/* implicit */int) arr_66 [(unsigned char)12] [(unsigned short)11])) : (((/* implicit */int) arr_0 [i_17]))))));
                }
            } 
        } 
    } 
}
