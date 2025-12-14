/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93389
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)3)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_0]))))));
            var_21 = ((/* implicit */long long int) (-(((unsigned long long int) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])), (12097798578256533870ULL))))));
            var_22 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))) >= ((+(arr_3 [i_0] [i_1])))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            var_23 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [(short)18] [i_2 + 1]))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                arr_12 [i_3] = ((/* implicit */signed char) arr_7 [i_3] [i_2] [i_0]);
                /* LoopSeq 4 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4] [i_4] [(short)0] [i_4])) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_4] [i_4] [i_4] [i_3])) : (((/* implicit */int) arr_15 [i_4 - 1] [i_4] [i_4] [i_4] [i_0])))))));
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_2 - 1] [i_2 + 4] [i_4 - 1] [i_4] [i_2]))));
                    arr_16 [i_2 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-29)) || (((/* implicit */_Bool) var_7)))))) : ((~(var_7)))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_4 [i_3]))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_14 [i_0] [(unsigned char)7] [i_0] [i_4] [i_5] [i_5]))));
                        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_3] [i_0])) ? (12097798578256533870ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (0) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)29219))))));
                    }
                }
                for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    var_29 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_0] [i_2 + 1] [i_3] [i_6] [i_6] [i_6]))));
                    var_30 *= ((/* implicit */short) arr_4 [i_3]);
                    arr_21 [i_0] [i_0] [i_2] [i_3] [i_6] &= ((/* implicit */short) arr_7 [7LL] [i_3] [(unsigned short)10]);
                }
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_23 [i_2] [i_2 + 1] [19LL] [i_7] [i_2] [i_2 + 1]))));
                    arr_24 [i_0] [i_0] [i_2 + 4] [i_0] [i_7] [i_7] = ((/* implicit */signed char) (~(arr_22 [i_0])));
                    arr_25 [i_3] |= ((/* implicit */unsigned int) ((arr_8 [i_0]) >> (((var_5) - (5568412347178582479LL)))));
                }
                for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    var_32 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 4])) < (var_3)));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_2] [i_3] [i_8])) ? (((/* implicit */int) var_17)) : (arr_27 [i_2 + 2] [i_2] [16ULL] [i_8] [i_8]))))));
                    arr_28 [i_0] [i_2] [i_2 + 4] [i_3] [i_3] [i_8] |= ((/* implicit */_Bool) arr_11 [i_0] [i_2 + 1] [10U] [i_8]);
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_3] [i_2] [i_0])) : (((/* implicit */int) (unsigned short)54080))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_14 [i_0] [i_0] [(signed char)4] [i_0] [i_0] [i_0]))))) : (((long long int) (_Bool)1))));
                    var_35 = ((/* implicit */signed char) ((unsigned short) arr_20 [i_0] [i_2 + 4] [i_2] [i_2 + 1] [i_8] [i_8]));
                }
            }
            arr_29 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) : (9223372036854775807LL))))));
        }
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 2; i_12 < 21; i_12 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_0 [i_0] [i_9])) : (((/* implicit */int) arr_14 [4U] [i_9] [i_9] [i_9] [i_9] [(signed char)0])))), (((/* implicit */int) ((((/* implicit */int) arr_15 [i_12 - 2] [i_11] [i_10] [i_9] [15])) == (((/* implicit */int) var_12))))))), (-1)));
                                var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)206))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) >= (arr_40 [(unsigned char)18] [i_9] [i_10] [i_11])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-39)))))))) ? (4918722829900361481LL) : (min((((long long int) (short)8192)), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) <= (arr_32 [i_0] [i_9]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 21; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 19; i_14 += 1) 
                        {
                            {
                                arr_48 [i_9] [i_9] [i_10] [i_10] [i_13 + 1] [i_14 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_14 + 1] [i_14 + 2] [i_14 - 1])) ? (((/* implicit */int) arr_31 [i_14 + 3] [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) var_18)))))));
                                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (unsigned short)0)) : (((arr_26 [i_0] [i_0]) / (((/* implicit */int) arr_11 [i_13 + 1] [i_13] [i_13] [i_13 + 1])))))), ((-(((/* implicit */int) (unsigned short)41599)))))))));
                                var_39 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_35 [i_9] [8U] [i_13])), (((((/* implicit */_Bool) arr_45 [i_9] [i_13] [i_13] [i_13 - 1])) ? (((/* implicit */int) min((((/* implicit */short) var_8)), (arr_9 [i_0] [i_9])))) : (min((arr_6 [i_9] [i_13]), (((/* implicit */int) (short)-7840))))))));
                            }
                        } 
                    } 
                    arr_49 [8U] [i_9] [i_9] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                }
            } 
        } 
        var_40 = ((/* implicit */_Bool) min((var_40), ((!(((/* implicit */_Bool) var_6))))));
    }
    for (unsigned short i_15 = 3; i_15 < 12; i_15 += 2) 
    {
        var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) ? (arr_27 [i_15 - 1] [i_15 - 3] [i_15 - 1] [i_15] [i_15 - 3]) : (arr_27 [i_15 - 1] [(unsigned char)10] [i_15 - 2] [(unsigned char)10] [i_15 - 3])));
        arr_53 [(signed char)9] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)40)) >= (((/* implicit */int) arr_52 [i_15] [i_15 - 2])))))));
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (-(max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)202)), (arr_31 [14ULL] [i_15 - 1] [i_15 - 2])))), ((-(((/* implicit */int) arr_14 [i_15] [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 1] [i_15])))))))))));
    }
    for (unsigned char i_16 = 2; i_16 < 22; i_16 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_62 [i_17] [i_17] [i_17] [i_18] [(short)7] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_57 [i_16] [i_17] [i_18])) && (((/* implicit */_Bool) arr_57 [i_16 - 1] [i_17] [i_18])))) ? ((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((((/* implicit */int) arr_59 [i_16 + 1] [i_16 + 1])) / (((/* implicit */int) var_15)))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_16 - 2] [i_17] [i_17])))))))));
                        var_43 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (min((((/* implicit */long long int) arr_60 [i_16] [i_17])), (var_0))) : (((/* implicit */long long int) ((((/* implicit */int) arr_59 [i_17] [i_19])) - (((/* implicit */int) (unsigned short)53151))))))), (min((arr_61 [i_17] [i_19]), (((/* implicit */long long int) var_8))))));
                    }
                } 
            } 
        } 
        var_44 ^= (!(((/* implicit */_Bool) max((arr_58 [i_16] [i_16] [2LL]), (((/* implicit */int) var_2))))));
        arr_63 [i_16] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_56 [(signed char)18] [12] [i_16 - 1])) : (((/* implicit */int) arr_56 [(unsigned short)2] [4ULL] [i_16 + 1])))) << (((long long int) arr_56 [i_16 - 1] [14U] [i_16 - 1]))));
    }
    var_45 = var_14;
}
