/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6262
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (arr_9 [3U])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) arr_7 [i_2] [i_0]))))))));
                        var_16 -= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_8 [i_3] [(short)8] [i_0] [(unsigned char)10] [i_0]), (((/* implicit */short) (_Bool)1))))))))));
                        arr_12 [(short)14] [i_2] [i_2] [i_0] = arr_1 [i_1];
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_13 [i_0] [i_0] [i_0] [i_1] [1ULL] [2U] [i_4])))) ? (((var_12) & (((/* implicit */unsigned long long int) -2147483645)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_3]))))) : (((((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */long long int) arr_3 [i_3] [i_1])))) - (((/* implicit */long long int) ((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_0] [(short)10] [i_1] [i_3] [i_4])))))))));
                            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((((/* implicit */int) arr_0 [2U])) + (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) min((arr_5 [i_0] [i_2] [i_3] [i_4]), (arr_8 [i_0] [i_0] [i_2] [i_0] [i_2])))))) > (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) >= (arr_3 [i_0] [i_1])))) << ((((-(((/* implicit */int) var_8)))) - (17345)))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                arr_19 [i_0] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_15 [i_1 - 1] [(short)9] [i_5] [i_0] [i_5 - 2])) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (2147483645))) : ((-(((/* implicit */int) (_Bool)0))))))));
                arr_20 [(unsigned char)6] [i_1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)201)) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((2147483645) == (-2147483645)))) : (((((/* implicit */int) var_15)) + (-2147483641)))))) ^ (((((/* implicit */_Bool) arr_14 [8ULL] [i_1] [12] [12U] [(short)12] [(short)15] [5LL])) ? (max((((/* implicit */long long int) var_15)), (6229506654595912369LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */int) var_6)))))))));
                arr_21 [8] [i_5] [i_1] [i_0] = ((/* implicit */short) (((-(((((/* implicit */int) arr_7 [(unsigned char)5] [i_1])) >> (((var_10) - (3223933829U))))))) | (((((/* implicit */int) arr_8 [(unsigned char)2] [(signed char)0] [i_1] [10LL] [i_1])) % (max((var_7), (((/* implicit */int) (unsigned char)244))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((arr_10 [i_5]), (arr_25 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [14U] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                            var_21 = ((/* implicit */short) max((((((/* implicit */long long int) (-(((/* implicit */int) var_11))))) >= (min((((/* implicit */long long int) arr_0 [i_7])), (var_9))))), (((((/* implicit */int) var_13)) < (((((/* implicit */int) arr_17 [i_0] [(unsigned char)1] [i_0] [14U])) | (arr_26 [i_7] [i_6] [11U] [i_1] [i_0])))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */int) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) >= (arr_3 [i_5 + 1] [i_7])))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)15] [13ULL] [i_0])) ? (((/* implicit */int) var_8)) : (var_7)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-6229506654595912369LL))) : (((/* implicit */long long int) arr_26 [i_0] [i_1] [(short)13] [i_6] [i_7])))) - (26485LL)))));
                        }
                    } 
                } 
            }
            var_23 -= ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [(short)1] [i_0]))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [13U]))) : (var_9))))))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */int) var_4)) | (((/* implicit */int) var_6)))) == (min((((/* implicit */int) var_15)), (var_7)))))))))));
            arr_29 [(short)2] [i_0] = ((/* implicit */unsigned long long int) (-(((min((((/* implicit */int) var_5)), (arr_26 [i_0] [3LL] [(short)2] [(short)2] [i_1]))) % ((-(((/* implicit */int) (unsigned char)244))))))));
        }
        arr_30 [i_0] = ((/* implicit */_Bool) arr_14 [i_0] [0] [i_0] [i_0] [(short)8] [i_0] [i_0]);
    }
    for (unsigned int i_8 = 1; i_8 < 19; i_8 += 4) 
    {
        arr_33 [(signed char)14] = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned long long int) var_1)), (((arr_32 [3U]) >> (((((-2147483645) - (-2147483622))) + (69))))))));
        var_25 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) >> (28U)))) : (max((var_14), (var_0)))))) + (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) + (max((arr_32 [i_8]), (((/* implicit */unsigned long long int) var_5))))))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_11 = 1; i_11 < 17; i_11 += 4) 
                    {
                        var_26 -= ((/* implicit */short) arr_38 [(unsigned char)4] [(unsigned char)4]);
                        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_11 + 2] [i_8 - 1])) ? (((/* implicit */int) arr_36 [i_11 + 2] [i_8 - 1])) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_28 ^= ((/* implicit */long long int) min((((/* implicit */int) min((arr_35 [(signed char)2] [(signed char)2]), (arr_35 [6ULL] [6ULL])))), ((-((-(((/* implicit */int) var_5))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
    {
        var_29 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_22 [(unsigned char)3] [(short)14] [7ULL] [i_12] [(short)0] [7ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12] [i_12])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [7]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 6985093399427125270LL)) && (((/* implicit */_Bool) arr_3 [i_12] [13U])))))))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                {
                    arr_48 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_44 [(unsigned char)3] [1U])))) ? (max((((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))))), (((/* implicit */unsigned int) max((((/* implicit */short) var_15)), ((short)-20947)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_13])))) ? (min((var_14), (((/* implicit */long long int) arr_17 [i_12] [i_13] [15U] [(_Bool)1])))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [(signed char)12] [i_14] [i_13] [(short)0] [i_12])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_26 [(short)6] [i_13] [i_14] [(unsigned char)9] [(short)13])) : (var_14)))))))) : (((arr_42 [i_12] [i_12]) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_42 [i_13] [7ULL]) && (((/* implicit */_Bool) arr_44 [i_13] [i_13])))))) : (((long long int) arr_18 [15U]))))));
                }
            } 
        } 
        arr_49 [i_12] [(unsigned char)7] = ((/* implicit */short) ((min((((-264717409) & (((/* implicit */int) arr_38 [i_12] [10U])))), (((/* implicit */int) var_6)))) & (((2147483645) ^ (((/* implicit */int) arr_16 [i_12] [i_12]))))));
    }
    /* LoopSeq 3 */
    for (short i_15 = 1; i_15 < 17; i_15 += 4) /* same iter space */
    {
        arr_52 [(unsigned char)5] [(signed char)11] = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) ^ ((-(((/* implicit */int) arr_39 [3ULL] [i_15] [i_15])))))) % (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) < (((((/* implicit */int) var_13)) + (((/* implicit */int) var_15)))))))));
        arr_53 [i_15] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_38 [18U] [i_15 + 1]))))) : (max((((arr_34 [i_15] [i_15] [19U]) & (((/* implicit */long long int) ((/* implicit */int) (short)-25939))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [(signed char)2] [(_Bool)1]))))))));
        arr_54 [7] [7] &= ((var_7) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_15] [i_15] [i_15 + 2]))))));
        var_31 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (short)511)) > (-1))))));
    }
    for (short i_16 = 1; i_16 < 17; i_16 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            for (long long int i_18 = 4; i_18 < 16; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        for (short i_20 = 0; i_20 < 19; i_20 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_57 [i_18])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */int) arr_35 [i_16] [i_18])) < (((/* implicit */int) (short)1568))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                                arr_69 [i_16] [(short)5] [i_17] [i_18] [i_19] [i_18] [i_20] = ((/* implicit */short) arr_59 [i_19] [i_17] [(signed char)11]);
                            }
                        } 
                    } 
                    arr_70 [(signed char)15] [(short)13] [2LL] [i_18] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_18 + 3] [(_Bool)1] [(unsigned char)14]))) : (((-6229506654595912369LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_16] [i_17]))))))), ((((-(var_9))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                }
            } 
        } 
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((((((((/* implicit */int) arr_65 [(_Bool)1] [i_16])) + (2147483647))) >> (((((/* implicit */int) (short)32767)) - (32761))))) | (((/* implicit */int) (short)16383))))) ? (((((/* implicit */_Bool) max((6229506654595912369LL), (((/* implicit */long long int) arr_31 [i_16] [14U]))))) ? (((/* implicit */int) (short)-22290)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_16])) ? (((/* implicit */int) arr_55 [18U] [i_16])) : (((/* implicit */int) arr_57 [i_16])))))))))))));
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) var_9))));
        var_35 = ((/* implicit */signed char) ((((arr_34 [i_16 + 2] [i_16 + 1] [i_16 + 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_16] [i_16 - 1]))))) & (((/* implicit */long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) arr_60 [0LL] [i_16 + 2])))))));
    }
    for (short i_21 = 1; i_21 < 17; i_21 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) arr_50 [i_21]);
        /* LoopSeq 1 */
        for (short i_22 = 0; i_22 < 19; i_22 += 2) 
        {
            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) arr_75 [i_21] [2LL] [2LL])), (-2147483645)))) > (max((var_9), (((/* implicit */long long int) var_1))))))) % (((((/* implicit */int) ((((/* implicit */int) (signed char)-118)) < (2147483647)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [(short)2] [i_22] [i_21]))))))))))));
            var_38 = ((/* implicit */signed char) (-(((arr_34 [i_21] [i_21] [i_21]) | (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_21] [i_21]))) : (var_0)))))));
        }
    }
}
