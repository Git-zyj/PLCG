/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85357
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (var_1)));
    var_16 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))), (var_10)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_17 = (!((_Bool)1));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((-((~(((/* implicit */int) (signed char)46)))))) & (((/* implicit */int) arr_6 [6])))))));
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((int) arr_7 [i_0] [i_2] [i_2]));
        }
        for (short i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            arr_12 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_3]))))) ? (1705179902603736654LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0])))))))));
            arr_13 [i_0] [(unsigned char)7] = ((/* implicit */unsigned long long int) min(((_Bool)0), (((((/* implicit */int) arr_9 [i_0] [i_0])) > (((/* implicit */int) (!(((/* implicit */_Bool) 2104400944)))))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (unsigned char)194))));
            arr_14 [i_3 + 1] = ((/* implicit */int) arr_10 [i_0]);
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_16 [i_4] [i_4])))) ? ((-(((/* implicit */int) arr_7 [(short)1] [i_0 + 2] [i_0 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
            {
                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_5 + 2] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_4]))) : ((-(0ULL)))));
                arr_19 [i_5] [i_4] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((((/* implicit */_Bool) 2104400922)) ? (1994043718) : (((/* implicit */int) (unsigned short)65535)))) : (2012826832)));
                /* LoopSeq 1 */
                for (short i_6 = 2; i_6 < 11; i_6 += 2) 
                {
                    arr_22 [i_0] [i_4] [i_4] [i_6 - 2] = ((/* implicit */_Bool) (+(var_6)));
                    /* LoopSeq 2 */
                    for (short i_7 = 4; i_7 < 10; i_7 += 2) 
                    {
                        arr_25 [i_4] [i_4] = ((/* implicit */short) (+(((/* implicit */int) arr_24 [(unsigned short)0] [i_6 + 1] [i_0] [i_4] [i_0]))));
                        var_24 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_2 [i_5] [i_7])) ? (((/* implicit */int) arr_10 [i_7])) : (2104400935))));
                        var_25 = ((/* implicit */unsigned long long int) (unsigned char)12);
                    }
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_5] [i_5 - 2])) ? (((((/* implicit */_Bool) var_7)) ? (arr_23 [i_0] [i_4] [i_0] [i_6] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_5 - 2] [i_8 - 1])))));
                        arr_28 [i_8] [i_6] [i_5] [i_4] [i_6] [i_0] |= ((/* implicit */long long int) arr_27 [i_0] [i_0] [7U] [7U] [3ULL] [(short)6] [7U]);
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 + 1] [i_8 - 1] [i_0]))));
                    }
                }
            }
            for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
            {
                arr_31 [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_6 [i_0 - 1])), (arr_5 [i_0 + 2] [i_9 - 2] [i_9 - 2])))), (arr_20 [(short)2] [i_0])));
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_28 = (+(((((/* implicit */_Bool) arr_16 [i_4] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_9 - 1] [i_9 - 1] [i_9 - 2]))) : (arr_16 [i_4] [i_0 + 1]))));
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_4] [i_4] [0LL] [i_0] [(short)2]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2] [7]))))))), (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [4U]))));
                    var_29 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) & (arr_20 [i_4] [i_4])))) ? (arr_17 [i_0 + 1] [i_0 + 1] [i_9 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_4])))))));
                    var_30 = ((/* implicit */long long int) arr_32 [i_9 - 1] [i_4] [i_4] [7U]);
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                    {
                        arr_38 [i_4] [i_4] [2LL] [i_9] [(unsigned short)9] [(unsigned short)9] [i_11] = ((/* implicit */unsigned int) max((arr_18 [i_0 + 2] [i_9 + 2] [i_9 - 1]), (((((/* implicit */_Bool) ((unsigned char) arr_15 [i_11] [1] [i_4]))) ? (arr_18 [i_0] [i_4] [i_9 - 1]) : (arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 2])))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((arr_17 [i_0] [i_0] [2U]) - (((/* implicit */unsigned int) arr_1 [i_0])))))));
                        var_32 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_21 [3ULL] [i_4] [i_4] [3ULL])))) ? (var_6) : ((-(((((/* implicit */_Bool) (unsigned char)13)) ? (3717739454U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10101)))))))));
                    }
                    for (short i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                    {
                        var_33 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */unsigned long long int) 2104400922)) : ((-(3ULL)))))));
                        var_34 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 334067912)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_36 [i_12] [i_4] [i_9 + 1] [(_Bool)1] [i_4] [i_0 - 1])) : (((/* implicit */int) (unsigned short)35865))))) : (min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_4] [i_9])), (16266354721470175129ULL))))));
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (10474699441992267015ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : ((~(arr_18 [(unsigned char)11] [i_4] [i_4])))));
                        var_36 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -16343617)) ? (9674643078504416617ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)24)))))));
                        arr_41 [i_10] [i_4] [i_9] [i_10] [i_12] &= arr_35 [i_0 - 1] [(unsigned short)3] [(unsigned short)3] [6LL] [i_0 - 1] [i_12];
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_37 = ((signed char) max(((!(((/* implicit */_Bool) 549755813887ULL)))), ((!(((/* implicit */_Bool) 134217727ULL))))));
                        var_38 = ((/* implicit */unsigned long long int) (~((-((-(((/* implicit */int) arr_7 [i_9] [i_4] [0ULL]))))))));
                        var_39 = ((/* implicit */signed char) (unsigned short)17463);
                    }
                }
                for (short i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    var_40 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_3 [i_0])), (var_1)));
                    arr_47 [i_0] [i_4] [i_14] [i_14] &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (9674643078504416617ULL)))));
                    arr_48 [i_4] [i_4] = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (arr_17 [i_0] [i_0] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14245))))), (((/* implicit */unsigned int) var_14))))));
                }
                for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    var_41 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_44 [i_15] [i_15] [(_Bool)1] [i_15] [i_15] [i_9 + 2] [i_4]))))));
                    arr_53 [i_4] [i_15] [i_15] [i_9] [i_4] [i_4] = (+((-((-(((/* implicit */int) arr_24 [i_0] [(signed char)7] [i_4] [(signed char)7] [i_4])))))));
                }
            }
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) max((((/* implicit */long long int) min((((int) arr_6 [i_0])), ((~(((/* implicit */int) (short)-24071))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -958056469)), (arr_27 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_4] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_4] [i_4] [i_4] [i_0 - 1] [i_0 - 1]))) : ((~(var_7))))))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_43 &= ((/* implicit */unsigned short) max((((int) (signed char)7)), (((/* implicit */int) arr_15 [9] [i_0 - 1] [i_16]))));
            var_44 = ((/* implicit */unsigned int) arr_29 [i_0 + 2]);
            /* LoopSeq 1 */
            for (unsigned int i_17 = 4; i_17 < 11; i_17 += 2) 
            {
                arr_61 [i_17] [i_16] [i_0] &= ((/* implicit */signed char) max(((~(((/* implicit */int) ((signed char) -659538360))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_16] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_17])) : (((/* implicit */int) arr_11 [i_16] [(unsigned short)0]))))) ? (((/* implicit */int) min((arr_7 [(_Bool)0] [8U] [i_17]), (((/* implicit */unsigned short) (unsigned char)243))))) : (((/* implicit */int) arr_4 [i_0]))))));
                var_45 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((signed char) arr_16 [i_17] [i_0 + 2]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (max((((/* implicit */unsigned long long int) arr_52 [i_0] [i_0] [i_0] [9ULL])), (arr_18 [9ULL] [i_16] [i_0])))))));
            }
        }
        for (int i_18 = 1; i_18 < 10; i_18 += 3) 
        {
            var_46 = ((/* implicit */int) arr_32 [i_18 + 2] [i_0] [i_0] [i_0]);
            var_47 = ((/* implicit */signed char) arr_26 [i_18 - 1] [i_18 + 2]);
        }
    }
}
