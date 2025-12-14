/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82169
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (((-(max((var_4), (var_4))))) > (arr_10 [i_0]))))));
                                arr_15 [i_0] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_1 [i_2])), ((-(var_9))))), (var_0)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */signed char) var_0);
                                arr_24 [i_6] [i_1] [i_5 - 1] [i_6] &= ((/* implicit */int) min((((((/* implicit */_Bool) arr_14 [i_6] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_6])) ? (arr_14 [i_6] [i_7] [i_5 + 2] [i_6] [i_5 + 2] [i_6]) : (arr_14 [i_6] [i_7] [i_5 + 3] [i_0] [i_6] [i_6]))), (((((((/* implicit */unsigned long long int) arr_19 [i_6] [i_5 + 2] [i_1] [i_0])) - (arr_4 [i_6]))) * (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 + 3] [i_1] [i_5 + 3])))))))));
                                var_13 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_0] [i_5 + 2] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_5 - 1] [i_0])))) << (((max((var_9), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_5 + 1] [i_0])))) - (4954625130749979813ULL)))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_0] [i_5 + 2] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_5 - 1] [i_0])))) << (((((max((var_9), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_5 + 1] [i_0])))) - (4954625130749979813ULL))) - (13492118941298205907ULL))))));
                                arr_25 [i_0] [i_5 + 3] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-125)) + (653086783)))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_1))))) ? (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 + 1]))))) : (((((/* implicit */_Bool) var_2)) ? (var_9) : (var_0))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 8ULL)) ? (2ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((18446744073709551603ULL) != (13204884397682876808ULL)))), (1913025354))))));
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 10; i_10 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((arr_21 [i_10 - 3] [i_9 + 1] [i_9 + 1] [i_9]) == (arr_21 [i_10 - 3] [i_9 - 1] [i_9 - 1] [i_8]))) ? (((((/* implicit */_Bool) arr_26 [i_9 - 1])) ? (max((arr_18 [i_8] [i_8]), (var_8))) : (max((var_3), (var_8))))) : (((((/* implicit */_Bool) arr_2 [i_9 + 1] [12])) ? (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 8905973732529934915ULL))))))))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-92)) ? ((+(((/* implicit */int) (signed char)-67)))) : (((/* implicit */int) (signed char)125))))));
                                arr_42 [i_12] [i_12] = ((/* implicit */signed char) ((var_3) == (max((((/* implicit */unsigned long long int) var_1)), (max((var_8), (var_9)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 3; i_13 < 15; i_13 += 4) 
    {
        for (signed char i_14 = 2; i_14 < 13; i_14 += 2) 
        {
            {
                arr_47 [i_13] = ((((/* implicit */_Bool) min((max((var_7), (((/* implicit */unsigned long long int) arr_43 [i_13 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_13])) && (((/* implicit */_Bool) arr_16 [i_13 - 3] [i_14 + 2] [i_13 - 2] [i_14 - 2])))))))) ? (((((((/* implicit */unsigned long long int) 2147483641)) * (13204884397682876808ULL))) / (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_13 - 2] [i_13]) : (arr_3 [i_14 - 1] [i_14 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_13]))) > (var_9))))));
                arr_48 [i_14 + 2] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_13])) ? (((/* implicit */int) arr_22 [i_13 - 1] [i_14 - 1] [i_13] [i_14 - 1] [i_14 - 1])) : (((/* implicit */int) arr_17 [i_14 + 1] [i_14 + 2] [i_14 + 2] [i_13 + 1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_13] [i_13 - 2] [i_13 - 3] [i_14 + 1])))))));
                arr_49 [i_13] [i_14 + 2] [i_14 - 1] = min((((((/* implicit */_Bool) ((var_3) - (var_3)))) ? (((((/* implicit */_Bool) arr_5 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_13 - 1] [i_13 - 2] [i_13 - 3]))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (var_2)))))), (((/* implicit */unsigned long long int) ((var_2) > (var_2)))));
                /* LoopNest 3 */
                for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    for (int i_16 = 1; i_16 < 14; i_16 += 4) 
                    {
                        for (signed char i_17 = 0; i_17 < 16; i_17 += 2) 
                        {
                            {
                                arr_59 [i_13] [i_13 - 1] [i_15] [i_16 - 1] [i_17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_13] [i_13] [i_13])))))) ? (min((((/* implicit */unsigned long long int) max((var_10), (var_1)))), (min((var_7), (((/* implicit */unsigned long long int) arr_1 [i_15])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_6), (var_1)))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_13 - 3] [i_13 - 3] [i_13 - 2] [i_13 - 1]))))))));
                                var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_13 + 1] [i_13 + 1] [i_13 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_17] [i_16 - 1] [i_15] [i_14 - 1] [i_13 - 3])))))) ? (((((/* implicit */unsigned long long int) var_2)) % (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_13 + 1] [i_15]))))), (((((/* implicit */_Bool) var_4)) ? (var_9) : (var_4)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
