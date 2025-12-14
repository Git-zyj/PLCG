/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84576
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((int) arr_4 [i_2])))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18435)) ? (arr_8 [i_4 + 4] [i_1] [i_1 + 1] [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18460)))))) ? (((var_14) ^ (((unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (short)8236))))) || (((/* implicit */_Bool) var_10))))))));
                                var_17 = ((/* implicit */int) max((((((/* implicit */long long int) (+(arr_1 [i_2])))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (6089266504432091717LL))))), (((/* implicit */long long int) -1784801041))));
                                var_18 = ((/* implicit */unsigned int) min(((+(((long long int) arr_6 [i_0] [i_3] [i_1] [i_3] [i_1] [i_0])))), (((/* implicit */long long int) arr_0 [i_1]))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_0]), (arr_3 [i_0])))) ? (((/* implicit */unsigned int) -1784801025)) : (var_7)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((var_4), (arr_10 [i_0])))) ^ (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_9 [i_1]) : (((/* implicit */long long int) var_12))))))) : (((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (arr_8 [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)18424)))))))));
                                var_21 = ((/* implicit */short) max((max(((~(var_10))), (((/* implicit */unsigned int) ((int) (short)18432))))), (((/* implicit */unsigned int) arr_6 [i_0] [i_1 + 1] [i_1] [i_5] [i_6] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 2; i_7 < 23; i_7 += 1) 
    {
        for (unsigned char i_8 = 2; i_8 < 23; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((min((((/* implicit */long long int) (+(arr_25 [i_7] [i_8] [i_8] [i_7] [i_11])))), (arr_18 [i_8 - 1] [i_8 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7] [i_10])) && (((/* implicit */_Bool) (unsigned char)228)))))));
                                var_23 = (+((~(var_4))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                arr_33 [i_7] [i_8] [i_9] [i_12] [i_13] = ((/* implicit */unsigned int) (short)8237);
                                var_24 = ((/* implicit */int) ((unsigned int) var_13));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        for (long long int i_15 = 4; i_15 < 21; i_15 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (short)17438))))) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_13))))) : (var_8)))));
                                arr_39 [i_15 - 2] [i_9] [4LL] [i_9] [i_7 + 1] = ((/* implicit */unsigned int) -4383861400173574943LL);
                                arr_40 [i_8 - 2] [i_8] [i_8] [i_8] [i_9] [i_8] [i_8 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (~(var_5)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)94)), (arr_24 [i_9] [i_8] [i_8] [1LL] [i_8] [1LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))))) >> (((arr_37 [i_15] [i_14] [i_8 - 1] [i_8 - 1]) + (2007410738)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 1) 
    {
        for (long long int i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            for (unsigned int i_18 = 2; i_18 < 20; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 4) 
                        {
                            {
                                arr_51 [i_19] [i_19] [i_19] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) arr_22 [i_17] [i_18 + 1] [i_19] [i_18 + 1]);
                                arr_52 [i_16] [i_17] [i_16] [i_19] [i_20] [i_18] = ((/* implicit */long long int) arr_29 [i_16] [i_16] [i_16] [i_16] [i_16]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 1; i_21 < 21; i_21 += 3) 
                    {
                        for (long long int i_22 = 0; i_22 < 22; i_22 += 3) 
                        {
                            {
                                arr_57 [i_17] [i_18] [i_21] [i_22] = ((/* implicit */long long int) arr_49 [i_16] [i_16] [i_16] [i_21] [i_16] [i_17]);
                                var_26 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) 17610593737467305251ULL)) ? (arr_20 [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */int) (short)8261))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_22 [i_16] [i_17] [i_18] [i_22]), (arr_15 [i_22])))) ? (arr_25 [i_16] [i_17] [i_17] [i_21] [i_22]) : ((-(arr_42 [3U]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 1) 
                    {
                        for (long long int i_24 = 0; i_24 < 22; i_24 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) -8466593589578845123LL);
                                var_28 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(arr_32 [i_24] [i_24] [i_18 + 2] [i_23] [i_24])))) | (var_9)));
                                var_29 = ((/* implicit */int) (~(1642413579U)));
                                arr_63 [i_16] [i_17] [i_24] [i_23] [i_24] = (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_37 [9U] [i_17] [i_17] [19])) / (var_7)))) : (arr_21 [i_18] [i_16]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
