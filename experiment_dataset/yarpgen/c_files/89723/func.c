/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89723
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_12 [i_0] [i_1] [i_2] [i_3]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_2])) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))))) : (((long long int) arr_8 [i_0] [i_0] [5LL])))))));
                            var_17 *= ((/* implicit */signed char) ((unsigned int) min((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_14 [i_0] [i_0] [(short)4] [4ULL] [i_1])))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_7 [i_3 - 2] [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) arr_13 [i_3 - 2] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 1])) : (min((((/* implicit */unsigned long long int) var_10)), (arr_7 [i_3 - 2] [5] [(signed char)3] [i_3])))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((4294967295U), (((((/* implicit */_Bool) arr_12 [i_3] [i_3 - 1] [i_3] [i_3])) ? (arr_12 [i_3] [i_3 - 1] [9ULL] [i_3]) : (arr_12 [i_3] [i_3 - 1] [3U] [i_3])))));
                            var_20 = ((/* implicit */int) max((var_20), (((int) arr_3 [i_5]))));
                            var_21 &= ((/* implicit */short) ((arr_2 [i_3 - 1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-18305)))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2951231520U)) ? (((/* implicit */int) ((((((/* implicit */_Bool) -1559999147)) ? (var_6) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))) >= (((/* implicit */unsigned long long int) 2094195747U))))) : (min((((/* implicit */int) var_10)), ((~(((/* implicit */int) arr_10 [i_3]))))))));
                        }
                        arr_17 [i_3] = ((/* implicit */int) (((-(arr_9 [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [8U])))));
                        arr_18 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */int) ((arr_13 [(_Bool)1] [i_3] [i_2] [8] [(unsigned char)9] [i_3] [1]) <= (((/* implicit */int) (short)32767))))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [8] [i_3]))))))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_14)) < (((/* implicit */int) (short)-32767))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_0] [(unsigned char)4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) min((arr_1 [i_0]), (((/* implicit */short) arr_10 [2U])))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_3 [i_0]))))) >= (arr_4 [(unsigned short)8] [(unsigned short)8] [i_2]))))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((min((10397927563316354477ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) * (((/* implicit */unsigned long long int) 0LL)))))));
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_2] [9LL] &= ((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_7]));
                        arr_27 [(short)3] [(short)3] [i_2] [i_2] = min((((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (max((arr_20 [i_0]), (((/* implicit */unsigned long long int) var_8)))))), (((((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_0] [9ULL])) - (arr_25 [i_0]))));
                        var_25 += ((/* implicit */signed char) -5288164456303857936LL);
                    }
                    for (short i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [0ULL] [i_2] [i_8]))))) : (((/* implicit */int) (!(arr_2 [i_1])))))))));
                        arr_30 [i_0] [(unsigned short)3] [i_0] [(unsigned short)3] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */long long int) arr_5 [(_Bool)0] [(_Bool)0] [(_Bool)0])) / (144115188075855616LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32767)) : (arr_24 [7] [7] [7] [i_8] [7])))))));
                        var_27 ^= ((/* implicit */unsigned int) min((((unsigned short) (unsigned char)5)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            {
                                arr_37 [i_0] [i_0] [(unsigned short)7] [i_0] [i_0] = ((/* implicit */unsigned char) arr_31 [i_0] [(unsigned short)9] [i_2] [i_10]);
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) % (var_6)));
                                arr_38 [(unsigned char)9] [i_1] [(unsigned char)9] [i_9] [(unsigned char)9] = ((/* implicit */unsigned char) arr_24 [i_0] [3LL] [i_0] [(short)9] [6ULL]);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                    var_30 = ((/* implicit */unsigned short) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) min((var_31), ((+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)11)), (var_12)))))))))));
}
