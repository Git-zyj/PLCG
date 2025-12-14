/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73780
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_4 - 1]));
                                var_14 = ((/* implicit */long long int) ((((long long int) ((16267750175494049732ULL) - (((/* implicit */unsigned long long int) arr_3 [i_0] [9LL] [i_2]))))) > (((long long int) min((2178993898215501883ULL), (((/* implicit */unsigned long long int) var_5)))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (arr_9 [10LL] [7ULL])));
                                var_16 ^= ((/* implicit */long long int) ((unsigned long long int) max((8191LL), (arr_12 [i_4] [i_4] [i_4 + 1] [i_4 - 1] [i_2]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_17 = arr_16 [i_1] [i_1] [i_1] [i_6];
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_5] [i_6])) == (max((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_5 - 1] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) 2893753187265865659LL)) : (13842189568605817271ULL))), (var_4)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((0LL), (((((((((/* implicit */_Bool) -8192LL)) ? (var_12) : (201326592LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_33 [i_7] [i_8] [i_9] [i_10] [i_11])) ? (var_1) : (-6LL))) + (681781158219928307LL)))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */unsigned long long int) -11LL)) * (((((/* implicit */_Bool) arr_32 [i_11] [i_9] [i_10 + 1] [i_9] [i_9] [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((arr_23 [i_7] [i_7]) - (arr_19 [14LL])))) : (arr_28 [i_10 + 1] [i_7] [i_7] [i_10 + 1])))))));
                                arr_36 [1LL] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) var_12)));
                                var_21 = arr_29 [i_7] [i_8] [3LL] [i_10];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 4) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) 16267750175494049732ULL)) ? ((~(var_8))) : (((((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_9] [i_12] [i_13 - 2])) ? (var_8) : (var_8))));
                                var_23 = 9223372036854775807LL;
                                var_24 = ((/* implicit */long long int) min((((arr_33 [i_13] [i_8] [i_12 + 2] [17LL] [i_13 + 1]) / (((/* implicit */unsigned long long int) ((long long int) arr_23 [i_7] [i_7]))))), (((/* implicit */unsigned long long int) 1332304237746560911LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) arr_38 [i_7]);
                                var_26 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_23 [i_7] [i_15 - 1])) + (((((/* implicit */unsigned long long int) 0LL)) % (2147483647ULL))))) <= (((/* implicit */unsigned long long int) max((arr_42 [i_9] [i_15 - 1] [i_7] [i_15 + 1]), (arr_42 [i_7] [i_8] [i_9] [i_15 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 3) 
                    {
                        for (long long int i_17 = 2; i_17 < 17; i_17 += 4) 
                        {
                            {
                                var_27 |= var_1;
                                arr_51 [i_8] [i_8] [i_9] [i_8] [i_9] = 2932199989849484031LL;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_18 = 3; i_18 < 16; i_18 += 3) 
                    {
                        for (long long int i_19 = 0; i_19 < 18; i_19 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((long long int) var_5));
                                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_11))));
                                var_30 = ((/* implicit */unsigned long long int) arr_25 [i_8]);
                                var_31 = var_11;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
