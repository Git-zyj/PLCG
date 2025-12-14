/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86389
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5684970708780290904LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (arr_5 [i_0 + 2] [i_1] [i_2])));
                    arr_6 [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */unsigned long long int) arr_5 [i_0 + 3] [i_0 + 3] [i_0 - 2])) : (arr_0 [i_2]))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0];
                                var_21 |= ((((/* implicit */_Bool) max((((arr_9 [i_4] [i_3] [i_2] [i_1] [i_0 - 1]) ? (arr_4 [i_0] [i_0] [i_0 - 1]) : (arr_8 [i_0] [(short)14] [i_2] [i_2] [i_1] [i_0]))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_0 - 1] [i_4]))))) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) arr_1 [i_1])));
                                var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_3]), (arr_4 [i_3] [i_4] [(_Bool)0])))) ? (arr_5 [i_0] [i_0] [i_0 + 1]) : (max((arr_3 [i_0] [i_0] [i_2]), (arr_5 [i_2] [i_3] [i_3]))))), (min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])), (min((arr_3 [i_0 - 2] [i_1] [i_4]), (((/* implicit */long long int) arr_9 [6ULL] [6ULL] [6ULL] [6ULL] [i_0 + 2]))))))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 3] [i_0])) ? (((((/* implicit */_Bool) min((arr_8 [i_1] [i_1] [i_0] [i_0] [15LL] [i_0 - 1]), (arr_8 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_10 [5ULL] [i_0 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-19545), ((short)-32763)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    arr_13 [i_0] [(short)17] [i_1] [i_5] |= ((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2] [i_0]);
                    var_24 = ((/* implicit */long long int) ((arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [(short)5]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [i_5])))));
                }
                for (short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) arr_4 [0ULL] [0ULL] [0ULL]);
                    arr_16 [i_0 - 3] [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) 8796076244992LL)) ? (arr_3 [i_0] [i_1] [i_6]) : ((((_Bool)1) ? (arr_15 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1]) : (-3369619375140158519LL))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_14 [i_0 + 1] [i_1] [i_6]), (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_14 [i_0 + 2] [i_0 + 2] [i_0 - 3])) ? (((/* implicit */int) arr_14 [i_0 - 2] [i_1] [i_6])) : (((/* implicit */int) arr_14 [i_0 - 3] [i_1] [i_1])))) : (((/* implicit */int) min((arr_14 [i_0 - 3] [i_1] [i_6]), (arr_14 [i_0 + 2] [i_1] [i_6]))))));
                    arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 2])) ? (arr_11 [i_0 + 2]) : (((/* implicit */unsigned long long int) arr_12 [i_0 - 2] [i_0 - 1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_11 [i_0 - 3])) ? (arr_11 [i_1]) : (arr_11 [i_1]))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_6] [4LL])) : (arr_11 [i_0]))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 3] [i_0 - 3] [i_6])) ? (arr_7 [i_0] [i_0 - 1] [4LL] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1] [i_6])))))) ? (max((arr_15 [i_1] [i_0 - 1] [i_1] [i_1]), (arr_7 [i_6] [i_0 - 1] [i_6] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_0 + 3] [i_6])) ? (arr_15 [i_0] [i_0 + 2] [i_0 + 2] [i_0]) : (arr_5 [18LL] [i_0 - 3] [i_0 - 3])))));
                }
                for (short i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */short) min((arr_8 [i_0] [i_0] [i_0] [i_0 + 3] [i_0 + 3] [i_0 + 2]), (((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 3] [i_0] [i_0 + 3] [(short)5] [i_0 - 2])) ? (arr_8 [i_0 + 1] [8ULL] [i_0] [i_0 + 3] [i_0 + 1] [i_0 - 1]) : (arr_8 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 2])))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_15 [i_0 + 1] [7LL] [i_0 + 1] [7LL]), (min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_7] [i_7])), (arr_1 [i_0])))))) ? (((/* implicit */long long int) ((arr_9 [i_0 - 2] [i_7] [i_0] [i_0 - 2] [i_0]) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [(short)10])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 3]))))) : (min((min((((/* implicit */long long int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [14LL] [i_7])), (arr_7 [i_7] [i_1] [i_1] [i_0]))), (min((arr_7 [i_7] [i_7] [i_7] [i_7]), (arr_5 [i_0] [i_0 + 1] [0LL])))))));
                    var_30 = ((/* implicit */unsigned long long int) arr_9 [i_0] [(_Bool)0] [i_7] [i_7] [i_7]);
                    var_31 += min((arr_4 [5LL] [i_1] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 - 1])), (arr_2 [i_0 + 2])))));
                    var_32 = arr_18 [i_1];
                }
                for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        var_33 += ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_8] [i_0])) ? (max((arr_18 [i_0]), (((/* implicit */long long int) arr_9 [i_8] [i_1] [i_1] [13LL] [16LL])))) : (((((/* implicit */_Bool) arr_24 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9] [i_8] [9ULL] [i_0] [i_0]))) : (arr_7 [i_8] [i_8] [i_1] [0LL])))))) : (((((/* implicit */_Bool) arr_11 [i_0 + 2])) ? (arr_11 [i_1]) : (arr_11 [i_0]))));
                        var_34 = ((/* implicit */unsigned long long int) min((arr_15 [i_1] [i_1] [i_9] [4LL]), (arr_7 [i_9] [i_9] [i_9] [i_9])));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_8] [i_1])) ? (max((min((((/* implicit */unsigned long long int) arr_23 [i_8] [i_8] [i_8])), (arr_4 [i_1] [i_1] [i_10]))), (((/* implicit */unsigned long long int) min((arr_28 [i_0 - 3]), (arr_18 [3LL])))))) : (min((((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_8] [i_8] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_8] [i_8])) : (arr_11 [i_10]))), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_10]))))));
                        var_36 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 3])) ? (min((((/* implicit */unsigned long long int) arr_27 [i_10] [14LL] [i_1] [14LL])), (12070462246214209035ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0 + 3] [i_1])) ? (arr_18 [i_1]) : (arr_28 [i_0 + 1]))))));
                        var_37 = ((/* implicit */short) arr_25 [i_0 + 1] [i_1] [i_8] [i_8] [6LL] [i_10]);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_15 [i_8] [i_0 + 2] [i_0 + 2] [i_11])) ? (((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_1] [i_8]), (arr_24 [i_1] [i_8])))) : (min((arr_25 [i_0] [i_0] [i_8] [i_0] [i_0 + 1] [i_0]), (arr_21 [i_0] [i_8] [10LL] [i_0]))))), (min((((((/* implicit */_Bool) arr_24 [i_0] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))) : (arr_25 [13LL] [6LL] [i_8] [i_8] [i_11] [19LL]))), (((/* implicit */unsigned long long int) arr_10 [i_11] [i_1]))))));
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_11 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 + 1] [i_0 - 1]))) : (arr_11 [i_0 - 2]))), (((/* implicit */unsigned long long int) arr_20 [i_0 + 1] [i_0 - 2])))))));
                        var_40 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_28 [i_0 + 1])) ? (arr_28 [i_0 + 1]) : (arr_28 [i_0 + 1]))), (arr_28 [i_0 + 1])));
                    }
                    var_41 = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) (short)-29024)) ? (10672818927962218400ULL) : (arr_4 [i_0 - 2] [i_8] [2LL]))) : (9233639514237990773ULL)));
                }
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned long long int) min((2396138911808553721LL), (((/* implicit */long long int) (short)-789)))))));
    var_43 = ((/* implicit */_Bool) max((var_43), (var_5)));
}
