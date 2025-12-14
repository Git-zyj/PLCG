/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7854
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((((((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12))) : (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))) >= (var_10)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_6 [i_0] [(signed char)12] [(signed char)12] [i_0] = arr_0 [i_2];
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0])) ? (arr_3 [i_0 + 2] [i_2]) : (arr_3 [i_0 + 2] [19U])))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) var_13);
                }
                for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    var_18 &= ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [20U] [6ULL]), (var_2)))) - (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), ((unsigned char)2))))))) ? (arr_0 [i_1 - 3]) : (((unsigned int) min((arr_5 [i_1] [i_1] [i_1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                    var_19 += ((/* implicit */unsigned int) arr_1 [6LL] [6LL]);
                    var_20 = ((/* implicit */unsigned long long int) ((arr_8 [i_0]) > (((unsigned int) arr_0 [i_0]))));
                }
                for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) ((((7150252539466123594ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) ? (min((arr_5 [i_0] [i_0] [i_0] [i_0]), (max((arr_11 [i_0]), (((/* implicit */unsigned long long int) var_11)))))) : (((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_4 + 1])) ? (min((((/* implicit */unsigned long long int) var_7)), (arr_3 [i_4] [i_0]))) : (((((/* implicit */_Bool) var_6)) ? (10776911617615702293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))))))));
                    /* LoopSeq 4 */
                    for (long long int i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_4] [i_0] [i_5] = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1 + 2]))) & ((~(var_0)))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned long long int) 364943439275356739LL)) : (7585643968665653210ULL)));
                        var_23 = arr_15 [i_0];
                        var_24 = ((((/* implicit */_Bool) ((unsigned long long int) (~(arr_13 [(signed char)15] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_9 [i_5 - 3] [i_5] [i_5 - 3] [5ULL])) : (var_5))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [(unsigned char)1]))))));
                        var_25 += ((unsigned int) ((unsigned int) (~(((/* implicit */int) (unsigned char)0)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        arr_21 [i_0] [15ULL] [i_1] [8LL] [i_0] = ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_4 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_0)))) : (var_10));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_13 [i_0] [i_1] [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_0 [i_0])))) : (var_13))))));
                        var_27 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    }
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((unsigned long long int) (-(((arr_20 [i_4] [(unsigned char)14] [(short)8] [i_4]) ? (arr_19 [i_0] [(signed char)5] [i_4] [i_0] [(unsigned char)5] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13)))))))))));
                        arr_25 [i_0 - 1] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_0 + 3] [i_1] [i_4]) >= (var_15)))))));
                        var_29 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) arr_22 [i_0] [i_1 + 1] [i_0 + 1] [i_0])) + ((~(10861100105043898405ULL))))), (arr_10 [(signed char)0])));
                        var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) 993635803U))) % (((long long int) max((var_9), (var_9))))));
                    }
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                    {
                        var_31 *= ((/* implicit */unsigned long long int) min((8U), (8U)));
                        arr_29 [i_1 - 2] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0 + 1] [i_4]);
                    }
                }
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((unsigned long long int) 7585643968665653224ULL)))));
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [8LL] [8LL])) ? (arr_11 [(signed char)10]) : (((/* implicit */unsigned long long int) arr_8 [4LL])))), (min((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) arr_8 [(signed char)0])))))));
                var_34 = ((/* implicit */unsigned int) min((var_34), (((((/* implicit */_Bool) ((unsigned long long int) arr_2 [6U]))) ? (((unsigned int) arr_2 [(_Bool)1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [18LL]))))))));
            }
        } 
    } 
}
