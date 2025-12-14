/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88190
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2 + 3] [i_2] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2] [i_1 + 2])) + (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2] [i_1 + 2])))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_1 - 2] [i_2] [i_3 - 2] [i_0] = ((/* implicit */long long int) (+(var_0)));
                                var_13 = ((/* implicit */signed char) max((var_13), (var_1)));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) >> (((17562388949881952026ULL) - (17562388949881952000ULL))))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                arr_17 [i_0] [i_5] &= ((/* implicit */long long int) arr_0 [i_5]);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]);
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_12))));
                                var_16 += ((/* implicit */unsigned long long int) (~(var_11)));
                                var_17 += ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                            {
                                arr_23 [i_0] [i_0] [4] [4] [i_0] [i_0] &= ((/* implicit */long long int) var_9);
                                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned char)2] [i_0])) ? (((/* implicit */long long int) var_11)) : (281474976710655LL)));
                            }
                            var_19 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_2 - 1])) & (((/* implicit */int) arr_4 [i_1 - 1] [i_2 - 1])))));
                            var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) arr_21 [i_3] [i_2] [i_1 + 2] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (-((-(((unsigned long long int) arr_2 [i_0] [i_1] [i_1]))))));
                var_22 *= ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) % (((unsigned long long int) -281474976710647LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            {
                var_23 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_24 [6ULL])) ? (max((((/* implicit */long long int) var_11)), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */signed char) arr_3 [i_8] [i_7] [i_7])))))))));
                var_24 -= ((/* implicit */unsigned long long int) var_5);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        var_25 -= ((/* implicit */unsigned long long int) ((arr_10 [i_11 + 2] [i_11 + 2] [i_11] [i_11 + 2] [i_11] [i_9]) == (((/* implicit */int) (_Bool)1))));
                        var_26 += (~(arr_39 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]));
                    }
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        arr_45 [i_9] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) + (9223372036854743040ULL)))) ? (max((((/* implicit */long long int) var_5)), (arr_37 [i_10] [i_11 + 2] [i_11 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-92)) || (((/* implicit */_Bool) var_11)))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((max(((-(9223372036854775807LL))), (var_7))) == (((/* implicit */long long int) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)3))))))))));
                        var_28 += (-(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_9]))) * (((long long int) var_11)))));
                        arr_46 [i_10] [i_11] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) var_1)), (-3392706914356704638LL)))))) ? (((/* implicit */int) ((signed char) (signed char)-24))) : ((+(((/* implicit */int) var_2))))));
                    }
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_10])) : (((/* implicit */int) arr_0 [i_10]))));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) 5415256476081169887LL))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_10 [i_9] [i_10] [i_11 + 1] [i_9] [i_11 + 1] [i_9]))));
                        var_32 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_9] [i_9])) ? (arr_7 [i_10] [i_9]) : (arr_7 [i_9] [i_9])));
                        var_33 = ((var_7) & (var_8));
                    }
                    arr_49 [i_10] = ((/* implicit */signed char) (-(max((7519688932907747895LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) -6599224707076585657LL)) == (arr_6 [i_9] [i_10] [i_10] [i_10]))))))));
                    arr_50 [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) 8127464829158601451LL);
                    arr_51 [4] [i_10] [i_10] [i_11 - 1] = ((/* implicit */int) var_3);
                }
                var_34 = ((/* implicit */signed char) var_9);
                var_35 -= ((/* implicit */int) max((18446744073709551605ULL), (((arr_4 [i_9] [i_10]) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 35184372088832ULL))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */long long int) var_11);
    var_37 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (_Bool)1))));
}
