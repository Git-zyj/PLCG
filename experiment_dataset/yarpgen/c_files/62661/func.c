/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62661
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
    var_17 = ((/* implicit */int) var_8);
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [(unsigned char)18] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))), (arr_1 [i_0]))))) - (max((min((2588578351990771240ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((int) arr_2 [(signed char)16] [i_0])))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_14 [(short)23] [(signed char)2] [i_3] [(signed char)2] = ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)72)), (((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1])))))))) * (arr_5 [i_2]));
                                var_19 = ((/* implicit */int) ((arr_11 [i_3] [i_3] [i_3] [i_2] [i_2 + 1] [i_2] [i_1]) > (((((/* implicit */long long int) arr_6 [i_0] [i_2 - 1] [i_0] [(short)22])) / (arr_11 [i_4] [(unsigned short)8] [i_4] [i_4] [i_2 + 2] [(unsigned short)14] [i_2 - 1])))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) max((((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]) < (arr_9 [i_1] [2] [(signed char)1] [i_2] [i_2 - 1]))), ((!(((/* implicit */_Bool) arr_11 [i_1] [(signed char)4] [i_1] [i_2] [i_2 + 1] [i_2] [i_4]))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_2] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [2LL] [i_3] [i_2 + 2]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_20 = ((/* implicit */short) (-((+(max((15858165721718780376ULL), (((/* implicit */unsigned long long int) arr_8 [i_1]))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12)))))))));
                        arr_23 [i_0] = ((/* implicit */_Bool) ((((arr_2 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_6] [i_5] [i_6] [i_0] [i_0]))))) ^ (var_11)));
                    }
                    var_22 = ((/* implicit */short) var_2);
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [(signed char)7])) || (((/* implicit */_Bool) max(((+(((/* implicit */int) arr_1 [10LL])))), ((+(((/* implicit */int) arr_8 [i_0])))))))));
                }
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((arr_17 [i_1] [i_7] [i_7]), (((/* implicit */short) ((((/* implicit */int) arr_17 [i_0] [22U] [i_7])) > (((/* implicit */int) arr_17 [i_0] [i_1] [i_9])))))));
                                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_25 [i_0] [i_1] [(signed char)3] [i_8])), (arr_17 [i_7] [i_7] [i_7]))))));
                                arr_34 [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) 2879841872337026876ULL)) && (((/* implicit */_Bool) arr_13 [9] [(short)6] [i_0] [i_1] [i_1] [i_0])))) || ((!(((/* implicit */_Bool) arr_33 [6ULL] [i_9] [i_9])))))))));
                                arr_35 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_29 [i_0] [i_1] [i_7] [i_8] [i_9])), (arr_3 [i_7])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_8 [i_0])), (arr_29 [i_0] [i_1] [i_7] [i_8] [i_9])))) : ((~(arr_3 [i_0])))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) arr_22 [19] [i_0] [i_0] [i_0]);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 4; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_25 [12U] [i_10 - 1] [i_10 - 3] [i_10]))))) / ((-(((long long int) arr_37 [i_0] [18LL] [18] [(signed char)24]))))));
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [5ULL] [(unsigned char)24] [i_1] [(signed char)21] [5ULL]), (((arr_10 [8ULL] [i_1] [i_1] [i_10]) / (((/* implicit */long long int) -1108160614))))))) || (((/* implicit */_Bool) ((long long int) arr_0 [i_10 - 4] [i_0])))));
                    var_28 = ((((((/* implicit */_Bool) arr_0 [i_10 + 1] [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [(signed char)15] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [i_1])), ((unsigned short)41191))))) : (arr_11 [0LL] [(_Bool)1] [(_Bool)1] [i_10 - 2] [i_10] [i_10 - 2] [i_10 - 4]))) * (((/* implicit */long long int) ((/* implicit */int) (!(min((arr_1 [i_0]), (arr_1 [11LL]))))))));
                    arr_39 [i_0] [i_0] [i_0] [9ULL] = (+((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (arr_27 [(signed char)4])))))));
                }
                for (unsigned long long int i_11 = 4; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) arr_42 [i_11] [i_11] [i_11 - 1] [i_11]);
                    arr_43 [i_0] [i_11] [i_1] = ((/* implicit */long long int) arr_24 [i_0] [4LL] [i_0] [1LL]);
                }
            }
        } 
    } 
}
