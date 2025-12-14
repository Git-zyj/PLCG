/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76918
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_5 [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                arr_14 [(short)6] [14ULL] [14ULL] [i_3] [(unsigned short)12] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 4])) ? (16951873265833265917ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2 + 2]))));
                                var_20 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0] [i_1])));
                                var_21 = ((/* implicit */signed char) arr_4 [i_3] [i_4]);
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_3] [7ULL] [i_5 + 3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_5 + 3] [i_2 - 2] [i_1 - 1] [i_0] [i_5 + 1] [i_1])) ? (arr_4 [i_0] [i_5 + 1]) : (arr_4 [i_0] [i_5 + 3])));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_1] [i_2 - 3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [1ULL]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_1)))));
                                var_23 = ((((/* implicit */_Bool) arr_13 [i_1 + 3] [i_5 - 1] [i_3] [i_5])) ? (((/* implicit */int) arr_13 [i_1 + 3] [i_5 - 1] [i_3] [i_5])) : (((/* implicit */int) arr_13 [i_1 + 3] [i_5 - 1] [i_3] [i_5 - 1])));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 - 2] [i_3])) ? (arr_17 [i_0] [i_1 - 2] [i_3]) : (arr_17 [i_3] [i_1 - 1] [i_3])));
                            }
                            var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_2 - 1])) ? (arr_0 [i_2 + 3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2] [i_2 - 2]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_1 + 4] [i_2 - 3]))))));
                            arr_20 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) arr_1 [(signed char)16] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]) - (arr_3 [i_6])));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7] [15LL])) ? (((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6]))) : (arr_26 [i_6] [i_6]))) : (var_8)));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16951873265833265927ULL)) ? (16951873265833265913ULL) : (((/* implicit */unsigned long long int) 9223372036854775793LL))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                var_29 -= ((((/* implicit */_Bool) arr_25 [i_7 + 2] [i_7 - 1] [i_8])) ? (arr_25 [i_7 + 2] [i_7 + 1] [i_7]) : (arr_25 [i_7 + 2] [i_7 - 1] [i_7]));
                arr_31 [i_6] [i_7] = ((/* implicit */unsigned char) ((int) arr_26 [i_6] [i_6]));
                var_30 -= ((/* implicit */short) arr_25 [i_7 + 1] [i_7 + 1] [i_7 + 2]);
            }
            /* LoopSeq 1 */
            for (int i_9 = 4; i_9 < 12; i_9 += 3) 
            {
                var_31 = ((/* implicit */short) ((4294967295U) << (((((1494870807876285706ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))))) - (16891848606421098448ULL)))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    for (unsigned int i_11 = 4; i_11 < 12; i_11 += 1) 
                    {
                        {
                            arr_41 [(signed char)2] [i_7 - 1] [i_9] [8U] [2U] |= ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_25 [i_6] [i_7] [0U])))) ? (((((/* implicit */_Bool) arr_16 [10U])) ? (((/* implicit */int) arr_15 [(unsigned char)0] [i_7 + 1] [i_9 + 1] [i_10])) : (var_5))) : (((int) var_14)));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_7] [i_7] [(short)3] [i_7] [16ULL] [18U] [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_6])))) : (arr_29 [i_11] [10] [i_7])));
                        }
                    } 
                } 
                var_33 -= ((((/* implicit */_Bool) arr_7 [i_7 - 1] [i_9 - 1] [i_9 - 2])) ? (((/* implicit */int) arr_7 [i_7 - 1] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_7 [i_7 + 2] [i_9 - 4] [i_9 - 2])));
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6] [i_7])) ? (805306368U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6] [(unsigned char)9])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_35 [i_6] [i_6] [12U] [12U])) == (6313300483293257700ULL))))) : (arr_5 [i_7 - 1]))))));
            }
        }
        for (unsigned int i_12 = 2; i_12 < 9; i_12 += 3) 
        {
            arr_44 [(unsigned char)10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_12 + 3] [i_12 + 3])) ? (((/* implicit */int) arr_1 [i_12 - 1] [i_12 + 1])) : (((/* implicit */int) arr_1 [i_12 + 3] [i_12 + 4]))))) ? (arr_21 [i_6]) : (((/* implicit */unsigned long long int) var_14))));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_6])) ? (1494870807876285704ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))))), (((/* implicit */unsigned long long int) arr_1 [i_6] [i_12]))))) ? (((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) (unsigned short)32512)) : (((/* implicit */int) arr_7 [i_6] [i_12] [i_6])))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6]))) : (402653184U)))))));
                var_36 = ((/* implicit */unsigned int) max((var_36), (arr_39 [i_13] [i_13] [i_12 + 4] [i_6] [i_6])));
                var_37 = ((/* implicit */unsigned int) min((arr_3 [i_6]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (8725724278030336ULL) : (((/* implicit */unsigned long long int) -225519974899352107LL))))) ? (((long long int) arr_3 [i_6])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65533)) || (((/* implicit */_Bool) arr_4 [i_12] [i_13]))))))))));
                var_38 = ((/* implicit */unsigned int) 0ULL);
                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_12 [i_12 + 2] [i_12 + 4] [i_12] [i_12] [i_12 - 2] [12U] [i_12]), (arr_12 [i_12 + 2] [i_12 + 4] [i_12 - 1] [i_12] [i_12 - 2] [i_13] [i_13])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_12 + 2] [i_12 + 4] [i_12] [i_12] [i_12 - 2] [11U] [i_12])) && (((/* implicit */_Bool) arr_12 [i_12 + 2] [i_12 + 4] [i_12 + 2] [i_12] [i_12 - 2] [i_12 + 1] [i_13]))))) : (((/* implicit */int) arr_12 [i_12 + 2] [i_12 + 4] [12U] [i_12] [i_12 - 2] [i_13] [i_13]))));
            }
        }
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_40 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_2 [i_6] [i_14])) + (((/* implicit */int) arr_48 [i_6])))));
            var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_47 [7U] [i_14] [i_6])))) > (((((((/* implicit */int) arr_32 [5U] [i_6])) + (2147483647))) << (((((/* implicit */int) arr_12 [i_6] [i_14] [i_14] [17U] [9ULL] [i_6] [i_14])) - (11784)))))));
        }
        for (int i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                for (unsigned char i_17 = 1; i_17 < 12; i_17 += 1) 
                {
                    {
                        var_42 = ((/* implicit */unsigned int) min((var_42), (min((((/* implicit */unsigned int) (short)0)), (((unsigned int) (unsigned short)33024))))));
                        var_43 = ((/* implicit */unsigned long long int) min((min((arr_37 [i_6]), (((/* implicit */long long int) var_0)))), (((((/* implicit */_Bool) arr_37 [i_6])) ? (-1LL) : (arr_37 [i_6])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                var_44 = ((/* implicit */unsigned long long int) arr_30 [i_6]);
                arr_60 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_55 [i_6] [7LL]), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */long long int) ((arr_4 [i_6] [i_15]) & (((/* implicit */int) arr_36 [6]))))) : (var_12)))) & (arr_21 [i_15])));
                arr_61 [i_6] [i_15] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) arr_23 [i_6]))) ^ (arr_26 [i_6] [i_6])))), (((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_15])) ? (((/* implicit */long long int) arr_56 [i_18] [i_15] [i_15] [i_6])) : (arr_26 [i_6] [i_6])))) : (((((/* implicit */_Bool) arr_42 [i_18] [i_6] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_54 [i_6] [i_15] [i_6] [i_18] [i_6])))))));
            }
        }
        var_45 += ((/* implicit */long long int) ((unsigned long long int) var_1));
    }
    /* vectorizable */
    for (long long int i_19 = 1; i_19 < 16; i_19 += 3) 
    {
        var_46 = ((/* implicit */signed char) ((2113929216) >> (((((/* implicit */int) (unsigned short)32512)) - (32491)))));
        var_47 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_19] [14] [i_19])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) + (((arr_15 [i_19] [i_19] [i_19] [i_19]) ? (1569418503U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        var_48 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) % (((((/* implicit */_Bool) arr_63 [i_19])) ? (arr_9 [i_19]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))));
        var_49 = ((/* implicit */unsigned short) arr_12 [i_19] [i_19] [i_19 - 1] [i_19] [i_19] [i_19] [i_19 - 1]);
        var_50 = ((/* implicit */short) arr_16 [i_19]);
    }
}
