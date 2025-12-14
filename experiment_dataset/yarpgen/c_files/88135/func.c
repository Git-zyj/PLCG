/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88135
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
    var_11 = ((/* implicit */unsigned int) (~(var_10)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_1 + 1] [i_1 + 1]), (arr_4 [i_1 + 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [(short)6])))) ? ((-(((/* implicit */int) arr_3 [i_1])))) : (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_2 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_0 [(signed char)8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */int) arr_3 [i_1]))))) : (arr_4 [i_1 + 1] [i_1 + 1])))));
                var_13 = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) == (arr_4 [i_0] [i_0])))) >= (max((arr_4 [i_1 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_1 + 1]))))));
                arr_5 [i_1] = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_2 [(unsigned short)0])))), (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */int) arr_3 [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            {
                arr_11 [i_3] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_3]))))), (min((arr_10 [i_3 - 2] [i_3] [i_3 - 2]), (((/* implicit */unsigned long long int) arr_3 [i_3])))));
                arr_12 [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_3 - 2])) ? (((/* implicit */int) arr_1 [i_3 - 3])) : (((/* implicit */int) arr_3 [i_3])))) > (min((((/* implicit */int) (signed char)104)), (897805695)))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    var_14 = ((/* implicit */signed char) arr_3 [i_3]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])) + (arr_10 [i_2] [i_3] [i_2]))) : (((unsigned long long int) arr_16 [i_2] [i_2] [i_2] [i_2]))));
                            var_16 = ((((/* implicit */int) arr_16 [i_3 - 3] [i_3] [i_3 + 1] [i_3 + 1])) == (((/* implicit */int) arr_1 [i_6])));
                            arr_21 [8] [i_3] [i_4] [8] [i_3] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3 - 1] [i_3] [i_3 - 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_5])) || (((/* implicit */_Bool) arr_17 [i_2] [5U] [i_3] [i_2]))))) : (((arr_6 [i_2] [i_2]) - (((/* implicit */int) arr_16 [i_2] [2ULL] [i_4] [i_5]))))));
                            arr_22 [i_3] [i_2] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                            arr_23 [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_3] [i_2])) ? (arr_0 [i_3 - 1]) : (((/* implicit */int) arr_2 [i_2]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) ((_Bool) arr_20 [i_3] [i_3]));
                            var_18 = ((unsigned short) arr_4 [i_2] [i_2]);
                            var_19 = ((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? ((~(((/* implicit */int) arr_17 [i_2] [(short)5] [i_3] [i_2])))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_3 [i_3])) : (arr_19 [i_3] [i_4] [i_7]))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3 - 1])) ? (arr_18 [i_3] [i_3 - 1]) : (arr_18 [i_3] [i_3 + 1])));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_8] [i_3] [i_4])) || (((/* implicit */_Bool) arr_10 [i_2] [i_3] [6LL]))));
                            arr_28 [i_2] [i_2] [i_3 - 1] [i_4] [i_3 - 1] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 - 3])) ? (((/* implicit */int) arr_13 [i_2] [i_3 + 1])) : ((~(((/* implicit */int) arr_20 [i_3] [i_3]))))));
                        }
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 11253349827991295618ULL)) ? (16689127822338222817ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23986)))));
                    }
                    for (int i_9 = 1; i_9 < 7; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_17 [i_2] [(_Bool)1] [i_3] [i_9])) > (((/* implicit */int) arr_17 [(unsigned short)5] [i_9 + 2] [i_3] [i_9 + 3]))))), (min(((+(((/* implicit */int) arr_24 [i_2] [i_3] [i_4] [i_2])))), (((/* implicit */int) arr_2 [i_4]))))));
                        arr_33 [(unsigned short)7] [i_3] [i_4] = ((/* implicit */int) (~(((arr_10 [i_9 + 2] [i_3] [i_4]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3266))) : (-4632640323356282239LL))))))));
                        arr_34 [i_3] = ((/* implicit */short) min(((-(((((/* implicit */int) arr_16 [(short)5] [(short)5] [i_4] [i_9])) + (((/* implicit */int) arr_20 [i_3] [i_9])))))), (((((/* implicit */_Bool) arr_18 [i_3] [i_3 - 2])) ? (arr_18 [i_3] [i_3 - 3]) : (arr_18 [i_3] [i_3 + 1])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_42 [i_2] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_8 [i_3])))) ? (min((arr_36 [(short)0] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_2 [i_3])))) : (((((/* implicit */_Bool) arr_25 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_19 [0] [i_3 + 1] [i_4])) : (arr_7 [i_10])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [(unsigned short)4] [i_3]))) : (arr_4 [i_3] [i_11])))) ? (((((/* implicit */_Bool) arr_19 [(signed char)7] [i_3] [i_4])) ? (arr_32 [i_2] [i_3 - 1] [i_2] [i_2] [i_10] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) : (arr_15 [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_31 [(signed char)7] [(signed char)7] [i_3 - 1] [i_3 + 1]), (arr_31 [i_3] [i_3] [i_3] [i_3 - 2])))))));
                                arr_43 [i_3] [2U] [(_Bool)1] [2U] [i_11] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_10])) ? (arr_32 [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))), ((+(arr_4 [(short)8] [i_4]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_2] [i_2])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    var_25 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) max((min((((/* implicit */unsigned short) (unsigned char)175)), ((unsigned short)2734))), (((/* implicit */unsigned short) var_7)))))));
}
