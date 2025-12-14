/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77713
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
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 4997783502939188931ULL)) && (((/* implicit */_Bool) 4294967295U))))) / (((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0] [(_Bool)1])))) : (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_2])) : (var_5)))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_11 [i_0 + 1] [i_1] [(signed char)12] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1304921853U)) || ((_Bool)1)));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((arr_10 [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) 3233339146416494862ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
                        {
                            var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_6 [(_Bool)1] [(short)0] [(_Bool)1]) / (((/* implicit */int) arr_7 [(unsigned char)16] [i_3] [i_2] [i_2] [i_1] [(unsigned char)16])))))));
                            arr_14 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_3 [i_0] [i_0]) && (((/* implicit */_Bool) 1996606439562803017LL))))) != (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((int) 849194075U))), ((+(4611686018427387903ULL)))));
                        var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 25952590U)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_7 [19ULL] [19ULL] [i_1] [i_1] [i_2] [i_0]))))) / (arr_10 [i_1])))));
                        arr_20 [i_0] [(short)22] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)2338)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5098697571680479032ULL)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(4269014711U)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_22 [i_0 + 1] [i_0]) : ((-(0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_1] [0ULL] [i_2] [i_0])))));
                        var_22 |= max((((unsigned int) max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_1] [i_2] [(_Bool)1])), (arr_18 [i_0 - 1] [(unsigned short)9] [i_2] [i_2] [i_7])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -775969341)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 3; i_8 < 21; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) -388018237)) - (25952590U)));
                        var_24 = arr_6 [14ULL] [i_1] [14ULL];
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)127)))))));
                    }
                    var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0]))));
                    var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 973201615984724072ULL)) || (((/* implicit */_Bool) arr_25 [i_2] [i_0] [i_0 - 1])))) ? (min((arr_25 [i_0 - 1] [i_0] [i_0 - 1]), (((/* implicit */long long int) (signed char)-2)))) : (((/* implicit */long long int) 4269014687U))))) : (((((arr_24 [(signed char)22] [i_0] [i_1] [i_0]) * (((/* implicit */unsigned long long int) -8770747799037915417LL)))) % (((/* implicit */unsigned long long int) -8770747799037915404LL))))));
                    var_28 *= ((/* implicit */int) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [(unsigned char)18]))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) 4269014687U)) - (((((/* implicit */_Bool) (short)25670)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10139382012106374407ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1106287090U)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned char)28)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_22 [i_9] [i_10]), ((+(arr_32 [19U] [i_11] [i_12])))))) ? (((/* implicit */int) arr_33 [i_11] [i_10])) : (((/* implicit */int) (_Bool)1))));
                        var_31 -= ((/* implicit */unsigned long long int) ((unsigned int) (signed char)-14));
                        arr_39 [i_12] [(unsigned short)20] [(unsigned short)20] [i_9] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) 4269014705U)), (((/* implicit */unsigned short) (_Bool)1)))))) / (((1578102235U) >> (((((/* implicit */int) arr_27 [i_10])) + (110)))))));
                    }
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        var_32 = min((((/* implicit */unsigned int) (_Bool)1)), (1791889658U));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 2; i_14 < 20; i_14 += 2) 
                        {
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) -784354306)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [21ULL] [i_10] [i_13])) || (((/* implicit */_Bool) arr_28 [i_10] [i_13])))) && ((!(((/* implicit */_Bool) arr_38 [i_9] [i_10] [i_11] [i_14])))))))) : ((~(arr_10 [i_14 + 3])))));
                            var_34 = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_3 [i_14 - 2] [i_10])) | (((/* implicit */int) arr_3 [i_14 + 1] [i_10])))));
                            var_35 |= ((/* implicit */int) (~(((((/* implicit */_Bool) arr_15 [i_9] [i_10] [i_11] [i_13] [i_13] [i_14 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_9] [i_9] [i_10] [i_11] [i_13] [i_14]))) : (var_4)))));
                        }
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) 4319966593088066193LL)) ? (80804558U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113)))));
                    }
                    var_37 = ((/* implicit */unsigned int) arr_5 [i_11] [(short)11] [i_10] [i_9]);
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) / (var_15)))) / (((unsigned long long int) (unsigned short)463)))));
}
