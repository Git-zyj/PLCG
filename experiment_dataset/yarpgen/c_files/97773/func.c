/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97773
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) var_4);
        var_13 = ((/* implicit */signed char) ((arr_2 [i_0]) - (arr_1 [i_0] [i_0])));
        arr_3 [11] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (+(var_3))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((max((12973464395295740456ULL), (((/* implicit */unsigned long long int) (short)-32196)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((var_7) << (((var_1) - (3177383312U))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [(unsigned short)18]))) : (arr_4 [i_1] [i_1]))))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            arr_14 [i_2] [i_2] [1] = ((/* implicit */unsigned int) arr_0 [i_2] [i_3]);
            var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_12 [i_2])), (max((((/* implicit */unsigned long long int) arr_11 [i_2])), (12973464395295740447ULL)))));
            arr_15 [i_2] [(signed char)9] [i_2] = (((+(arr_1 [(unsigned char)12] [i_2]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))));
            var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (4361993229876115649LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2])))))) ? (max((((/* implicit */long long int) var_6)), (arr_4 [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-32196)))))) << (((((arr_7 [i_2] [i_2]) - ((-(((/* implicit */int) (unsigned short)65529)))))) + (57803207)))));
        }
        arr_16 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (((arr_1 [i_2] [i_2]) - (((/* implicit */unsigned long long int) arr_4 [(unsigned short)5] [i_2]))))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((18446744073709551596ULL), (((/* implicit */unsigned long long int) 3154192557U)))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_23 [i_2] [i_2] [i_5] [i_5] = ((/* implicit */signed char) (-(arr_20 [i_2] [i_2] [i_2])));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_1 [i_2] [i_2]))))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), ((((~(((18446744073709551615ULL) - (18446744073709551615ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32195)))))));
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2] [(unsigned char)5])) ? (((/* implicit */unsigned long long int) (-(arr_11 [i_2])))) : (((arr_17 [i_2]) * (arr_17 [i_2])))));
                }
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) var_8)) ? (arr_2 [i_6]) : (18446744073709551596ULL))), (arr_2 [i_6]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6] [i_6])))))), (max((var_3), (((/* implicit */long long int) arr_24 [i_6] [i_6])))))))));
        arr_26 [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_6] [i_6])) ? (arr_25 [(signed char)16]) : (arr_1 [i_6] [i_6]))));
    }
    /* LoopSeq 2 */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_7]) * (((/* implicit */unsigned long long int) 6785127010658156581LL))))) ? (((min((((/* implicit */unsigned long long int) var_3)), (5473279678413811169ULL))) << (((((/* implicit */int) (unsigned short)47307)) - (47299))))) : (((unsigned long long int) var_4))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (min((var_8), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_7] [i_7]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_7] [19LL])) ? (var_0) : (((/* implicit */int) arr_0 [i_7] [i_7])))))));
        var_23 = ((/* implicit */signed char) 12973464395295740446ULL);
        arr_29 [i_7] [i_7] = ((/* implicit */signed char) var_9);
    }
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        arr_32 [i_8] = ((/* implicit */short) max((((((/* implicit */int) arr_30 [i_8])) - (((/* implicit */int) arr_30 [i_8])))), (((((/* implicit */int) arr_30 [i_8])) << (((((/* implicit */int) (short)-14670)) + (14681)))))));
        var_24 *= ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_8] [i_8])) * (((/* implicit */int) arr_24 [i_8] [i_8]))))) - (((((/* implicit */_Bool) 2027303927106308221ULL)) ? (16139524990916776822ULL) : (((/* implicit */unsigned long long int) var_2)))));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_25 = ((/* implicit */int) (signed char)127);
            var_26 = ((/* implicit */long long int) 493952758U);
            var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_8])) - (((/* implicit */int) arr_31 [i_8]))))) ? (((((/* implicit */int) (signed char)121)) * (((/* implicit */int) arr_31 [i_8])))) : (max((((/* implicit */int) var_9)), (var_2)))));
        }
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                for (unsigned short i_12 = 1; i_12 < 14; i_12 += 3) 
                {
                    {
                        arr_45 [i_12] [i_8] [i_11] [i_10] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned short)18233))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((arr_42 [(short)9] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12 + 1]), (arr_42 [i_11] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 2])))));
                        arr_46 [i_11] [i_12 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_42 [i_12 + 2] [i_12] [i_12] [i_12 + 2] [i_11] [(unsigned short)5]), (((/* implicit */long long int) min((var_1), (var_1))))))) * (max((arr_25 [i_12 - 1]), (arr_25 [i_12 + 2])))));
                        arr_47 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5166151060706539323LL)) ? (max((var_7), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12 - 1] [i_12] [4ULL] [4ULL] [i_8]))) : (var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)239)) : (((((((/* implicit */int) var_5)) + (2147483647))) << (((((((/* implicit */int) var_5)) + (7))) - (1))))))))));
                    }
                } 
            } 
        } 
        var_28 *= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)93)) << (((((/* implicit */int) arr_38 [i_8] [i_8] [i_8] [i_8])) - (11646)))))) ? (max((((/* implicit */unsigned long long int) (short)-9298)), (var_8))) : (((((/* implicit */_Bool) arr_35 [i_8] [i_8] [(unsigned char)2])) ? (((((/* implicit */_Bool) arr_25 [(unsigned short)9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_8] [i_8]))) : (arr_35 [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-1742093314) : (((/* implicit */int) var_11))))))));
    }
    var_29 *= ((/* implicit */_Bool) 9223372036854775799LL);
}
