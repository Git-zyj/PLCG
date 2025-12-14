/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73346
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
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    var_10 -= ((/* implicit */_Bool) arr_4 [(signed char)18] [(_Bool)1] [i_2 + 3]);
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((3200393691U) | (3200393686U)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_11 += ((/* implicit */signed char) (-(var_9)));
                                var_12 += max((var_5), (((/* implicit */unsigned long long int) min((((_Bool) var_2)), (var_2)))));
                                arr_11 [i_0] [i_0] [i_2] [(_Bool)1] [i_0 - 1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1094573604U)) ? (3200393691U) : (min((3200393716U), (1094573580U)))));
                            }
                        } 
                    } 
                    var_13 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) var_3))), (max((((/* implicit */unsigned long long int) max((arr_7 [i_0 + 1] [i_1] [i_2] [6U]), (((/* implicit */unsigned int) arr_5 [i_0] [14U]))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_10 [i_2] [i_2] [(signed char)6] [20ULL] [(signed char)6] [i_0 - 1] [i_0]) : (var_5)))))));
                    var_14 &= ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_10 [i_0] [i_0 + 2] [22U] [10U] [(signed char)4] [i_1] [i_1]))));
                }
                for (signed char i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_5 + 2] [(_Bool)1] [i_0] [i_7] = max((min((((/* implicit */unsigned long long int) var_1)), ((~(var_4))))), (max(((~(var_3))), (max((var_6), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
                                arr_21 [(short)0] [(signed char)16] [i_0] [i_6] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_17 [i_6] [i_0 + 2] [(signed char)3] [21]), (arr_17 [i_1] [i_0 + 2] [i_0 - 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] = ((/* implicit */short) max((((unsigned int) arr_13 [i_1])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (arr_3 [i_0])))))))));
                }
                var_15 = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) arr_17 [i_0 - 1] [14ULL] [(_Bool)1] [(_Bool)1])))));
                var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [(short)11]))));
                /* LoopSeq 1 */
                for (int i_8 = 2; i_8 < 22; i_8 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((3200393722U) | (max((3200393691U), (1094573574U))))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_5))));
                    arr_26 [i_0] [i_0] [i_8] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_9 [i_8] [i_1] [i_8 + 1] [i_1] [i_8] [i_0 + 1] [10ULL]), (arr_9 [19ULL] [i_8] [i_8 + 1] [i_0] [i_0 + 2] [10ULL] [i_8])))), ((-(((/* implicit */int) arr_9 [i_0] [(short)7] [i_8 - 2] [i_1] [i_0 - 1] [i_1] [5ULL]))))));
                    arr_27 [i_0] [i_0] [i_1] [i_8] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_9 [i_8 - 2] [13ULL] [i_8] [i_8] [i_8] [11U] [i_8 + 1])), (var_3))) & (((arr_4 [i_0] [9U] [9U]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            {
                                arr_32 [(_Bool)1] [i_1] [i_0] [(_Bool)1] [i_10] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [(signed char)8] [(_Bool)1] [i_0 + 2] [i_1] [i_1])), ((~(1094573596U)))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_9))));
                                arr_33 [9ULL] [i_0] [i_8] [i_9] [i_10] = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) var_8)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 2; i_12 < 7; i_12 += 2) 
        {
            {
                arr_38 [(_Bool)1] [i_12] = ((/* implicit */unsigned int) arr_23 [i_11] [i_11] [i_11] [i_12]);
                arr_39 [i_11] [3ULL] [6ULL] = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_7)) ? (arr_15 [i_12] [i_11]) : (var_5))), (((/* implicit */unsigned long long int) arr_16 [i_11])))) + (min((((/* implicit */unsigned long long int) var_1)), (arr_10 [i_12 + 3] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 + 1])))));
            }
        } 
    } 
}
