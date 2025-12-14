/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86700
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))), (1869573221U)));
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (!(((/* implicit */_Bool) 506947369)))))))))));
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) 506947383)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1]))) : (((((/* implicit */_Bool) arr_6 [(unsigned char)6])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2425394074U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3]))) : (2425394074U)))) : (((long long int) arr_4 [i_1] [(unsigned short)3]))))));
                    var_18 |= ((/* implicit */unsigned short) arr_8 [i_1] [i_2] [i_1]);
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1869573221U)))) ? (((/* implicit */int) ((short) (signed char)28))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_3]))))) ? ((-((~(arr_5 [i_1] [(signed char)0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16652393535907613315ULL)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (signed char)3))))) ? (((/* implicit */int) arr_8 [i_3] [i_2] [i_1 - 1])) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [(unsigned char)0])) : (((/* implicit */int) (signed char)28)))))))));
                }
            } 
        } 
        var_20 += ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-72)))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_14 [i_4] |= ((/* implicit */unsigned long long int) (((_Bool)0) ? ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4] [i_4]))) > (1869573228U)))))) : (((((((/* implicit */_Bool) arr_13 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_4])))) * (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1]))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 2425394075U)))))) ? (min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))), (((/* implicit */int) max(((short)27168), (((/* implicit */short) arr_8 [(_Bool)1] [(_Bool)1] [9LL]))))))) : (((/* implicit */int) arr_4 [i_1] [i_4]))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [(unsigned char)0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_1 + 1]), (((/* implicit */unsigned long long int) ((arr_5 [(unsigned short)0] [(unsigned char)10]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [4ULL]))))))))) ? (min((((/* implicit */int) arr_13 [i_1 + 1])), (arr_10 [i_1] [i_5] [(short)2]))) : (((((_Bool) 2425394084U)) ? (((((/* implicit */_Bool) arr_9 [(signed char)6] [(signed char)6] [(short)8] [10])) ? (arr_10 [i_1] [i_5] [(unsigned short)8]) : (((/* implicit */int) arr_6 [2U])))) : (((/* implicit */int) max((arr_11 [i_1 + 1] [i_1] [i_1]), (((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1])))))))));
            arr_18 [i_1] [6LL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_7 [i_1 - 1] [i_5])))) ? ((~(((/* implicit */int) (unsigned char)49)))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) == (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1])))))));
            var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned int) arr_16 [i_5] [i_1]))))) ? ((-(((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (short)-12589)))))) : (min((((/* implicit */int) min(((_Bool)0), (arr_3 [i_5])))), (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [(signed char)10] [i_5]))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned int i_9 = 2; i_9 < 10; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_12 [i_8] [i_1 - 1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [i_1 + 1] [i_7]))) : (arr_25 [i_9] [i_9 - 1] [i_8] [i_8] [i_1] [i_1]))), (max((arr_25 [i_9] [i_9 + 1] [i_7] [i_7] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_10 [i_7] [i_1] [i_7])))))))));
                            var_24 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_7] [i_7] [i_6] [i_6])) ? (((((/* implicit */_Bool) 6219129286729422481LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) : (1324299878U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_1] [i_1] [i_8])) >= (((/* implicit */int) arr_20 [i_8] [i_8] [i_8]))))))))) | (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (min((arr_1 [(short)7]), (((/* implicit */unsigned long long int) arr_24 [8LL] [8LL] [i_7] [8LL]))))))));
                            arr_28 [i_1] [i_1] [i_7] [i_8] [i_1] = ((/* implicit */unsigned short) ((short) ((unsigned long long int) ((((/* implicit */int) arr_27 [i_1] [i_6] [8] [i_1] [i_1])) ^ (((/* implicit */int) (short)-10020))))));
                            var_25 = ((/* implicit */unsigned char) 4547368487976817381LL);
                            var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8] [i_6] [i_7] [i_8] [i_9 - 1])) ? (((/* implicit */int) arr_11 [i_9 + 2] [i_6] [i_6])) : (((/* implicit */int) arr_27 [i_8] [i_8] [i_7] [i_8] [i_1 + 1]))))) ? (((arr_26 [i_8] [4U] [i_7] [i_8] [i_9 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_8] [i_7] [i_8] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_27 [i_1 - 1] [i_6] [i_7] [i_8] [i_9])), (arr_11 [i_1] [i_1] [i_8])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_12 = 1; i_12 < 11; i_12 += 2) 
                        {
                            arr_35 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)169))))));
                            arr_36 [i_1] [i_11] [i_1] [i_6] [4ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1031742656U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2425394075U))) <= (((/* implicit */unsigned int) ((arr_23 [i_1] [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) arr_23 [i_1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [i_1])))))));
                            var_27 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_10] [i_10] [i_1] [i_11])))) ? (((/* implicit */unsigned long long int) (-(-545483396246143736LL)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_12 - 1])))));
                            var_28 += ((/* implicit */long long int) ((((((((/* implicit */_Bool) 3164407075U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (67108352U))) & (((unsigned int) arr_8 [i_1] [i_6] [i_12 + 1])))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11] [i_6] [i_6] [i_11])))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (((-(min((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_1 [i_11]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1 + 1]))))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(545483396246143716LL)))) ? (((/* implicit */long long int) min((arr_5 [i_1] [i_1]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_1] [i_6] [i_1])))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_13] [i_1] [i_1] [i_6])) ? (((/* implicit */int) (unsigned short)256)) : (((/* implicit */int) arr_34 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))))), (max((545483396246143727LL), (((/* implicit */long long int) (unsigned char)204))))))));
                            arr_39 [i_6] [i_11] [6ULL] [i_10] [6ULL] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((short) arr_32 [(short)2] [i_11] [i_10] [i_11] [i_13] [i_11])))) ? (((arr_23 [(unsigned char)8] [i_1 + 1] [i_1]) ? (((/* implicit */int) arr_23 [(unsigned char)8] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_23 [(signed char)8] [i_1 + 1] [i_1 + 1])))) : (((arr_37 [i_1 - 1] [i_6] [i_1 - 1] [8ULL] [i_13] [i_6] [i_1 + 1]) ? (((/* implicit */int) arr_37 [i_1 + 1] [i_6] [i_10] [i_11] [i_13] [i_1] [i_6])) : (((/* implicit */int) arr_37 [i_1 + 1] [i_1 + 1] [i_13] [i_11] [i_13] [i_13] [i_11]))))));
                            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? (((((/* implicit */_Bool) 738578981U)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_29 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) min((arr_29 [i_1] [i_1] [i_1 + 1] [i_1]), (arr_29 [i_1] [i_1] [i_1 + 1] [i_1 + 1]))))));
                        }
                        for (unsigned char i_14 = 3; i_14 < 8; i_14 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2072634501U)) ? (3707265972U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-24))))) : ((((!(((/* implicit */_Bool) 3896225864U)))) ? (((((/* implicit */_Bool) arr_38 [i_1] [i_1] [(_Bool)1] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_1 - 1] [i_10] [i_10] [i_11] [i_10] [i_1 - 1] [0LL]))) : (arr_16 [i_1] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
                            arr_42 [i_1] [i_11] [i_10] [i_6] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((1031742647U) >> (((1088432545) - (1088432539))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_14 + 3]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1048574U)) ? (((/* implicit */int) arr_40 [i_14 + 4] [i_14 + 1] [i_1 - 1] [i_10] [i_6] [i_6] [i_1 - 1])) : (((/* implicit */int) (signed char)-25))))))))));
                            arr_43 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */signed char) (-(max((arr_32 [i_14 - 2] [i_14 + 4] [i_14 - 2] [i_14 + 4] [i_14 + 3] [i_14]), (arr_32 [i_14 + 2] [i_14 + 2] [i_14] [i_14] [i_14] [i_14 - 3])))));
                            var_33 |= ((/* implicit */unsigned char) ((unsigned int) ((arr_41 [i_10] [i_1 - 1] [i_1 + 1] [i_1] [i_1]) | (arr_41 [(signed char)10] [i_14] [i_1 + 1] [i_1 + 1] [i_1]))));
                        }
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_6] [i_1])) ? (min((((/* implicit */unsigned long long int) ((short) arr_1 [i_1 - 1]))), (arr_25 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_10 [i_1 - 1] [9LL] [i_1]))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */long long int) ((unsigned long long int) min((min((((/* implicit */unsigned long long int) 3707265985U)), (arr_26 [i_1] [i_1 + 1] [i_1] [i_1] [i_6]))), (10993711461007015339ULL))));
            /* LoopSeq 2 */
            for (int i_15 = 3; i_15 < 11; i_15 += 4) 
            {
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_15] [i_15 - 2]) : (arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_15 - 2])))) ? (((((/* implicit */_Bool) (signed char)-24)) ? (arr_25 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_15 - 2]) : (arr_1 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_25 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_6] [i_15 - 2])) ? (arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_15 - 2]) : (arr_1 [i_1 - 1])))));
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)120), (((/* implicit */unsigned short) (signed char)76))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_1] [(unsigned char)0] [i_1] [i_15] [i_15 - 3])) && (((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1] [(unsigned short)2])))))) : ((((-(arr_46 [i_1 - 1] [i_1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_15 - 1] [i_1 + 1]))))))))));
                /* LoopSeq 3 */
                for (signed char i_16 = 2; i_16 < 9; i_16 += 3) 
                {
                    arr_50 [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_16 - 2] [i_1] [i_16 + 3])) ? (arr_26 [i_1] [i_16] [i_16 + 3] [i_16 + 1] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_6] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1 - 1] [i_1 - 1] [i_1]))) : (26U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1])))))))) : (7453032612702536285ULL)));
                    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((short) arr_4 [(_Bool)1] [i_1])))));
                }
                /* vectorizable */
                for (signed char i_17 = 1; i_17 < 8; i_17 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 + 1]))) : (arr_22 [i_1])));
                    arr_53 [i_17 - 1] [i_15] [i_1] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) 1929071918U))) ? (arr_26 [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1])))));
                    arr_54 [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_1] [i_6] [i_1] [i_1] [i_1] [i_17])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-802))))) : (2365895380U)));
                }
                /* vectorizable */
                for (signed char i_18 = 1; i_18 < 8; i_18 += 1) /* same iter space */
                {
                    var_40 = ((arr_31 [i_6] [i_6] [i_15 - 3] [i_18]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1192))) : (((((/* implicit */_Bool) 0)) ? (2749529405329750369LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-802))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 3; i_19 < 9; i_19 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) ((arr_52 [i_15] [i_15 - 2] [i_15 - 1] [i_15 - 1] [i_15 - 1] [(signed char)2]) ? (((/* implicit */int) arr_52 [i_15] [i_15 - 2] [i_15 - 3] [i_15] [i_15 - 3] [i_15])) : (((/* implicit */int) arr_52 [i_15] [i_15 - 1] [i_15 - 3] [i_15] [i_15 - 3] [i_15]))));
                        arr_62 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_15 - 1] [i_1 + 1]))));
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_6] [i_18]))) == (1907653125U)))) ^ (((/* implicit */int) arr_56 [6ULL] [i_6] [i_6] [i_18 + 2] [i_6] [i_1])))))));
                    }
                    for (unsigned char i_20 = 3; i_20 < 9; i_20 += 2) /* same iter space */
                    {
                        arr_66 [i_1] = ((/* implicit */unsigned char) ((arr_64 [i_18 + 3] [i_1] [(unsigned char)4] [i_18 + 2] [i_18 + 3] [i_1] [i_15 + 1]) ? (((/* implicit */int) arr_64 [i_20] [i_1] [i_1] [i_20 - 2] [i_18 + 3] [i_1] [i_18])) : (((/* implicit */int) arr_64 [i_20] [i_1] [i_18] [i_18 + 3] [i_18 + 3] [i_1] [(signed char)7]))));
                        var_43 = ((/* implicit */unsigned char) ((long long int) arr_55 [i_18] [i_18 - 1] [i_18 - 1] [i_18 + 4] [i_18 + 1]));
                        arr_67 [i_1] [i_1] [(short)8] [1] [i_20] = ((/* implicit */unsigned int) ((short) 10993711461007015339ULL));
                    }
                }
                arr_68 [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)21)) * (((/* implicit */int) arr_59 [(short)0] [i_1] [i_1] [(short)0]))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) ((125982419) > (((/* implicit */int) arr_11 [i_1] [i_1] [i_6]))))))));
                var_44 = ((/* implicit */signed char) (+(((/* implicit */int) (!(arr_60 [i_1] [i_1 + 1] [i_15] [i_15 + 1] [i_15 - 2] [i_15 - 3]))))));
            }
            for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    var_45 += ((/* implicit */unsigned long long int) ((unsigned char) (+(((unsigned int) arr_44 [i_1] [i_22])))));
                    var_46 *= ((/* implicit */_Bool) max((((unsigned int) arr_57 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 8490158306896706556LL))) ? (((/* implicit */int) ((arr_5 [i_1] [(_Bool)1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(signed char)2] [(signed char)2] [(signed char)2])))))) : ((-(((/* implicit */int) arr_30 [i_1] [i_6] [i_21] [2LL])))))))));
                }
                for (short i_23 = 1; i_23 < 10; i_23 += 4) 
                {
                    arr_76 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_56 [i_1] [i_6] [i_6] [i_23] [i_21] [i_23 + 2])) >= (((/* implicit */int) arr_7 [i_1 + 1] [i_6])))))));
                    arr_77 [i_1] [i_6] [6LL] [i_1] = ((/* implicit */long long int) ((unsigned int) (((!(((/* implicit */_Bool) (signed char)-116)))) ? (max((-1758645774072686668LL), (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))))));
                    arr_78 [(signed char)1] [(signed char)1] [i_21] [i_21] [i_1] [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_64 [(signed char)10] [i_1] [i_23 - 1] [i_23 + 1] [i_23] [i_23] [i_23 + 1])))) : (((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)60272)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_21])) ? (((/* implicit */int) arr_74 [i_1] [i_6])) : (((/* implicit */int) (_Bool)0))))) : (((arr_70 [i_1] [i_6] [i_21] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5263)))))))));
                }
                arr_79 [i_1 - 1] [i_1] [i_21] = ((/* implicit */short) ((((((/* implicit */int) ((signed char) (unsigned short)5258))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) min((10993711461007015343ULL), (((/* implicit */unsigned long long int) (unsigned short)30023))))) || (((/* implicit */_Bool) max((14), (((/* implicit */int) (_Bool)1))))))))));
                arr_80 [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(5U)))) ? (((/* implicit */long long int) (((-(((/* implicit */int) arr_56 [i_21] [i_21] [i_21] [i_6] [i_1] [i_1])))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_21] [i_21] [i_21] [i_21] [i_6] [i_1] [i_1]))) > (arr_70 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_59 [i_1 - 1] [i_6] [i_1] [i_1 - 1]))) ^ (2192900106010057193LL)))));
            }
            arr_81 [i_1] [i_1] [i_1 + 1] = ((((unsigned int) ((((/* implicit */_Bool) arr_70 [i_1] [i_1] [i_6] [i_1])) ? (((/* implicit */int) arr_51 [i_1])) : (((/* implicit */int) (unsigned short)60260))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_24 [i_1] [i_1] [i_1 - 1] [i_1])))));
        }
        for (unsigned int i_24 = 0; i_24 < 12; i_24 += 1) /* same iter space */
        {
            arr_84 [i_1] [i_1] = ((/* implicit */short) (-(((((/* implicit */int) arr_38 [i_24] [i_1] [i_1 - 1] [i_1] [i_1 - 1])) * (((/* implicit */int) min(((short)-12500), (((/* implicit */short) arr_30 [i_1] [i_24] [i_24] [i_1])))))))));
            arr_85 [i_1] = ((/* implicit */unsigned int) max((9377717189349630121ULL), (((/* implicit */unsigned long long int) (short)32767))));
            var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_1] [i_1] [3U] [i_24] [(unsigned char)8] [(unsigned char)8] [i_24])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)3] [(short)3]))) : (309427122U)))) ? (((((/* implicit */_Bool) 9377717189349630121ULL)) ? (((/* implicit */unsigned long long int) 108777844U)) : (7453032612702536272ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_64 [i_1] [i_1] [i_1 + 1] [i_24] [i_1 + 1] [i_24] [i_24])) >= (((/* implicit */int) arr_40 [i_24] [(unsigned char)7] [i_1] [i_24] [i_1] [i_1] [i_1]))))))))) ? ((+(((/* implicit */int) arr_83 [i_24] [i_1] [i_24])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (2566805179U))))))));
            var_48 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)247))));
        }
    }
    var_49 = ((/* implicit */short) (((((-(((/* implicit */int) (short)31242)))) > (((/* implicit */int) ((signed char) var_3))))) ? (((/* implicit */int) var_3)) : ((-(((((/* implicit */_Bool) var_11)) ? (954823822) : (((/* implicit */int) (_Bool)0))))))));
}
