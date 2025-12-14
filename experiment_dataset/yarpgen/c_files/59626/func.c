/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59626
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_2 + 1] [i_0] [i_0]) + (((/* implicit */unsigned int) arr_5 [(_Bool)1]))))) ? ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))) : ((-(((/* implicit */int) arr_0 [(unsigned char)22]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_0 [i_3])))), (arr_5 [6LL])));
                                var_13 = ((/* implicit */unsigned long long int) arr_9 [i_0 - 2] [i_4]);
                                var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) max((arr_10 [21] [i_0 + 1] [20] [i_0 + 1]), (arr_1 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2 + 1] [i_3])) : ((~(((((/* implicit */_Bool) arr_2 [i_0] [19LL] [19LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(unsigned char)4] [(unsigned char)4]))))))))));
                                var_15 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [(unsigned char)21] = arr_4 [(unsigned short)10];
                                arr_21 [i_0 - 2] [i_2] [(_Bool)1] [i_0 - 2] [11] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 2] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [(short)4] [(signed char)4] [(short)2])) ? ((~(((/* implicit */int) arr_10 [22ULL] [(_Bool)0] [0U] [i_7])))) : (((/* implicit */int) arr_10 [i_0 - 2] [13] [8LL] [i_0 - 2]))));
                        var_17 = ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_16 [(signed char)9] [(signed char)9] [i_2] [0])))) : (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) arr_19 [0] [(short)20] [i_2] [i_7])))));
                        arr_24 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (arr_17 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (arr_17 [i_0 - 2] [i_0 - 2] [(_Bool)1] [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32749))) : (arr_25 [1ULL] [i_1 - 2] [i_8] [(signed char)22])))) ? (((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)8] [(_Bool)1] [i_8])) ? (((/* implicit */int) arr_6 [(_Bool)1])) : (arr_5 [i_0]))) : (arr_17 [i_8] [i_2 - 1] [i_1] [i_0])));
                        var_19 = ((/* implicit */signed char) (-(arr_11 [i_2 + 1] [i_1 - 1] [i_0 + 1] [(_Bool)1] [i_0 - 2])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) (-(arr_2 [i_1 - 2] [(signed char)22] [i_1 - 1])));
                        arr_30 [(_Bool)1] [i_2] [i_9] [i_9] [16] = ((/* implicit */signed char) arr_17 [i_1 + 1] [15ULL] [(unsigned short)3] [i_9]);
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_28 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [17LL] [i_2] [(signed char)10] [i_9]))) : (arr_27 [i_0] [i_1 - 2] [i_2] [i_9]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_9 [i_0 - 1] [15LL])) : (((/* implicit */int) var_3)))))));
                        arr_31 [i_0 + 1] [i_2] [i_0] [i_0 - 2] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_6 [i_0 + 1]))))));
                    }
                    var_22 |= ((/* implicit */signed char) max(((-(((/* implicit */int) max((((/* implicit */short) var_9)), (arr_3 [i_0 - 2] [i_0 - 2])))))), (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (short)(-32767 - 1))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_7))));
    var_24 = max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_7)))) : (((/* implicit */int) ((_Bool) var_11))))), (((/* implicit */int) var_7)));
}
