/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84340
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
    var_12 = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))), ((~(3756720931759342316LL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (arr_0 [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) max((arr_1 [i_0 - 1] [i_0 + 1]), ((unsigned short)30408)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
        {
            arr_4 [(unsigned char)8] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((((-(var_2))) | (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (arr_0 [i_0] [i_1])))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0 - 1] [i_2])) ? (arr_5 [i_0] [i_1] [i_0 - 1] [i_1]) : (arr_5 [i_0] [i_0] [i_0 - 1] [i_1]))), (max((var_9), (arr_5 [i_0] [i_1] [i_0 + 1] [i_1])))));
                var_15 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned int) (unsigned short)35146))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) var_0)))))));
                /* LoopSeq 4 */
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    var_16 = ((((/* implicit */long long int) ((3144565660U) & (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) == (((/* implicit */int) arr_1 [i_1] [i_0]))))))))) <= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (((((/* implicit */_Bool) arr_3 [i_1] [15LL] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2))))));
                    arr_10 [i_0 - 1] [i_0] [i_0] [i_3] [i_0] [i_0 + 1] = (-(var_0));
                    arr_11 [i_3] = ((/* implicit */signed char) (+(arr_9 [i_1] [i_0 - 2] [i_3] [i_3] [i_0] [1LL])));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    arr_14 [i_0] [i_0] [17] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_0 + 1])) / (arr_8 [i_0 + 1] [i_0] [i_0] [i_4])));
                    arr_15 [i_0 - 2] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (arr_8 [i_0] [i_0] [i_0 - 1] [i_1])));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_5 [i_0] [i_1] [i_2] [i_4]))) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) (unsigned short)22713))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */int) (~(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])));
                        arr_20 [i_0] [i_1] [i_2] [i_5] [7LL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1])) / (((int) var_5))));
                        var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) var_9))))));
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        arr_25 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0 - 2])) & (((((/* implicit */int) var_11)) | (((/* implicit */int) (_Bool)1))))));
                        arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] = ((int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_6]);
                    }
                    var_20 = ((/* implicit */unsigned short) ((((int) var_9)) < (((/* implicit */int) ((unsigned char) var_3)))));
                }
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 1])) ? (arr_13 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]) : (arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]))), (((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) arr_2 [16]))))))));
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(arr_8 [i_0] [i_1] [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_7] [i_2])) | (var_10)))) : (arr_18 [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_0] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [3U] [3U] [i_2]))) : (var_9))))));
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_0 - 1] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_19 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0] [i_0])))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                {
                    arr_31 [i_8] [i_2] [i_2] [17LL] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
                    arr_32 [i_8] [i_2] [i_8] [i_8] [9ULL] [i_2] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_2] [i_8]);
                    arr_33 [i_8] = ((/* implicit */long long int) (+(arr_13 [i_2] [i_2] [i_2] [i_2] [i_2])));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        arr_36 [i_0] [i_1] [i_2] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_8] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)21)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35116))) : (arr_9 [i_9] [i_8] [i_8] [i_8] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_0] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))))));
                    }
                    var_25 = ((/* implicit */signed char) 1823649592U);
                }
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0 - 2])) : (arr_0 [i_0 + 1] [i_0 + 1])));
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    arr_42 [i_11] [i_0] [i_0] [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) var_5))))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_0] [(unsigned char)22] [i_11] [i_0 - 2] [i_11])))))));
                }
                for (long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    arr_46 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_12])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */int) arr_17 [i_0 - 2] [i_1] [i_0 - 2] [i_10] [i_1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) (!((_Bool)1)));
                        arr_49 [i_0 - 2] [i_0 - 2] [i_10] [i_12] [i_12] [i_13] [i_13] = ((/* implicit */short) ((129620655U) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_29 = ((/* implicit */unsigned short) var_3);
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] = ((/* implicit */unsigned short) arr_44 [i_13] [i_10] [i_12] [i_10] [i_1] [i_0 + 1]);
                        var_30 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_2) : (var_2))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_31 = ((((/* implicit */_Bool) arr_28 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_28 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])) : (((/* implicit */int) var_5)));
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (-(arr_48 [i_0 + 1] [i_1] [i_10] [i_12] [i_14]))))));
                    }
                    var_33 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_27 [i_0] [i_1] [i_0] [i_12]))))));
                    var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                }
            }
            var_35 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_0)) ? (var_10) : (arr_23 [i_0] [i_0 + 1] [i_0 + 1] [8LL] [i_0 + 1] [i_1]))) : (((((/* implicit */int) arr_7 [i_0 - 2] [i_0] [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) var_1)))))));
            /* LoopNest 3 */
            for (unsigned short i_15 = 1; i_15 < 22; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */int) max((((/* implicit */unsigned int) var_7)), (max((4095U), (((/* implicit */unsigned int) arr_24 [i_15 + 1] [i_15] [i_15 + 1] [i_15 + 1] [i_15] [i_15 - 1] [i_15 - 1]))))));
                            var_37 = ((/* implicit */unsigned int) arr_34 [i_0] [i_1] [i_15 + 1] [i_16] [i_17] [i_17] [(unsigned short)21]);
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1] [i_1])) : (10575025269527522711ULL))))))))));
        }
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 4) /* same iter space */
        {
            arr_65 [i_18] [i_0] = ((((/* implicit */_Bool) arr_60 [i_0 + 1] [i_0 - 1])) ? (arr_38 [i_0] [i_18] [i_0 + 1]) : (((/* implicit */int) arr_44 [20LL] [i_18] [i_18] [i_18] [i_18] [i_18])));
            arr_66 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)3))))));
        }
    }
    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_1))));
}
