/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81393
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */long long int) arr_6 [i_0]))))) ? ((-(arr_0 [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_3 [9LL]) : (arr_3 [i_0])))));
                            arr_13 [i_0] [i_3] [(unsigned short)4] [i_4] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (signed char)-1))))) ? (((/* implicit */long long int) ((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))) : (((arr_7 [i_2] [i_3] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) : (arr_0 [i_0]))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_10 [i_4] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [5ULL] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((arr_5 [i_4] [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_3]))))) : (max((arr_10 [i_0] [(signed char)8] [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
            arr_14 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) var_7)))))))), (((((/* implicit */long long int) var_0)) & ((~(arr_0 [i_0])))))));
            var_17 += ((/* implicit */unsigned int) arr_11 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [(unsigned short)10] [i_5] [i_5] [i_0])) ? (((((/* implicit */_Bool) ((arr_0 [i_5]) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_5])))))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_5]), (((/* implicit */long long int) arr_6 [i_0]))))) : (((((/* implicit */unsigned long long int) arr_6 [3LL])) * (15104992663726527450ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_8 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_5] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned short)33071)) : (((/* implicit */int) (signed char)1))))) : (arr_9 [(signed char)6] [i_5]))))));
            arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_0] [i_5] [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_11 [(unsigned char)3] [i_5] [3LL] [i_0] [i_0] [(unsigned char)7] [i_0]))))) || (((arr_10 [i_0] [i_0] [i_5] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)205))))))))));
        }
        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                var_19 = ((/* implicit */long long int) min((var_19), (max(((-(arr_8 [i_7]))), (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_8 [i_7]) : (arr_8 [i_7])))))));
                arr_22 [i_6] [(signed char)0] [i_6] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_20 [i_0] [(unsigned char)2] [i_0])), (max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)1))))), (arr_21 [i_0] [i_0] [i_0] [i_0])))));
            }
            for (int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                arr_26 [i_8] [i_6] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_0] [i_6] [i_0])), (arr_20 [i_0] [i_6] [6U])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_3)) : (arr_8 [i_8]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_6])) ? (arr_9 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))))));
                arr_27 [i_0] [5LL] [i_0] = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_1 [i_8])), (arr_9 [i_0] [i_6]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)1)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)29))))))));
                var_20 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_6 [i_8]))))));
            }
            var_21 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)35)))) ? (arr_24 [i_6]) : (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [10ULL] [i_0] [i_0] [i_6] [i_6]))) : (arr_18 [i_0] [i_0] [i_0])))));
        }
        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(arr_19 [i_0] [i_9]))), (((arr_7 [i_0] [i_0] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) : (arr_9 [i_0] [i_0])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)220))))) : (((((/* implicit */_Bool) (unsigned char)35)) ? (-866047613653146096LL) : (((/* implicit */long long int) 4294967295U))))));
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    for (signed char i_12 = 1; i_12 < 8; i_12 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) var_4);
                            arr_39 [i_0] [i_9] [i_9] [i_0] [i_12] |= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_38 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 + 3] [i_12] [i_12 - 1] [i_12])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [i_10] [i_11] [0LL])) ? (1244786435U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9])))))) ? ((~(((/* implicit */int) arr_29 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_29 [i_0])) : (((/* implicit */int) arr_20 [i_9] [i_9] [i_9])))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) + (((/* implicit */int) var_10))))));
                            arr_40 [i_12 + 4] [i_11] [i_10] [i_10] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_10] [i_9] [i_9])) ? (((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) arr_12 [i_0])) : (var_0)))) ^ ((~(304083517U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned int) arr_6 [i_9]);
            var_25 &= ((/* implicit */unsigned char) ((arr_16 [i_0]) < (((((/* implicit */_Bool) 9U)) ? (1722745182904539534LL) : (-1722745182904539535LL)))));
        }
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_9 [0LL] [i_0]) << (((((((/* implicit */_Bool) 9223372036854775804LL)) ? (1244786406U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34446))))) - (1244786394U))))))));
    }
    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((((/* implicit */_Bool) arr_43 [i_13] [i_13])) ? (((/* implicit */int) arr_43 [i_13] [i_13])) : (((/* implicit */int) arr_43 [i_13] [i_13])))), (((((/* implicit */_Bool) arr_43 [(unsigned char)16] [(signed char)6])) ? (((/* implicit */int) arr_43 [12U] [i_13])) : (((/* implicit */int) arr_43 [i_13] [i_13])))))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_13])) ? (arr_41 [i_13]) : (arr_41 [i_13])))) : (((18446744073709551611ULL) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (~(((arr_41 [i_13]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_13] [2U]))))))))));
        var_30 = arr_43 [i_13] [i_13];
    }
    for (short i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            for (int i_16 = 2; i_16 < 9; i_16 += 3) 
            {
                for (unsigned char i_17 = 3; i_17 < 8; i_17 += 2) 
                {
                    {
                        arr_53 [i_14] [4LL] [i_16] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_17] [i_16 - 1] [i_17 + 1] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_17] [i_16 - 2] [i_17 + 2] [i_17]))) : (arr_34 [i_16 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [(_Bool)1] [i_16 - 1]))) : (arr_0 [i_15])))) ? (((/* implicit */int) arr_7 [i_16] [i_17] [i_16 - 1])) : (((((/* implicit */_Bool) (short)-25137)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_14])), (arr_6 [6U])))) ? (((/* implicit */int) min(((unsigned char)175), (((/* implicit */unsigned char) arr_47 [i_17] [i_16] [i_14]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_47 [i_15] [i_16] [i_17 - 1])), (arr_38 [i_14] [i_16 - 2] [i_16] [i_16 - 2] [i_15] [i_16 - 2] [7LL]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_56 [i_14] [6ULL] [i_16 - 1] [i_17] [i_17] = min((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)41742))))), (min((arr_21 [i_14] [8ULL] [8ULL] [i_14]), (((/* implicit */unsigned int) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -387974369617754225LL)) ? (arr_37 [i_14] [i_14] [i_17] [(unsigned char)0] [i_14]) : (arr_23 [(_Bool)1])))) ? (((/* implicit */long long int) arr_50 [i_14] [i_15] [i_16] [i_16] [i_17 - 2] [8])) : (min((-9111219596214822091LL), (((/* implicit */long long int) var_5)))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (arr_45 [i_18] [1U])));
                            arr_57 [i_17] [i_14] [i_16 - 2] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_25 [i_15] [i_16 - 2] [i_16 - 2] [i_17 - 1]), (((/* implicit */long long int) arr_37 [(unsigned char)9] [(signed char)7] [i_17] [i_17] [7]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_31 [i_16] [(_Bool)1] [i_16]))))) : (((((/* implicit */_Bool) min((3050180889U), (((/* implicit */unsigned int) arr_12 [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) min((arr_45 [i_14] [i_14]), (((/* implicit */unsigned int) var_11))))) : ((-(18446744073709551615ULL)))))));
                        }
                        arr_58 [i_14] &= arr_9 [i_14] [i_14];
                    }
                } 
            } 
        } 
        arr_59 [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (arr_38 [11U] [i_14] [5U] [i_14] [i_14] [4ULL] [10U]))))))) / ((-(max((((/* implicit */unsigned long long int) arr_19 [i_14] [i_14])), (arr_28 [i_14] [i_14] [i_14])))))));
    }
    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))));
}
