/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88659
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) ((var_3) || (((/* implicit */_Bool) 9223372036854775807LL))))) == (((/* implicit */int) (_Bool)0))))), (((((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_5)))) ^ (var_0)))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) % ((+(((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 += ((/* implicit */unsigned int) (((+(arr_2 [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (unsigned short)0)), (arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 24; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            arr_11 [i_0] [1U] [1U] [1U] [i_3 + 1] [i_4] = ((/* implicit */short) ((max((arr_1 [i_3 - 1]), (((/* implicit */unsigned long long int) var_5)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_3 - 2])) ? (max((((/* implicit */unsigned int) (unsigned char)10)), (arr_5 [i_3] [(_Bool)1] [(short)14] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_7))))))))));
                            var_14 = ((/* implicit */short) (unsigned char)0);
                        }
                    } 
                } 
                arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_9 [(_Bool)1] [16LL] [i_1] [i_1] [i_1] [17ULL] [i_2]))) * (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
            }
            for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 1961635537U))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_6))))) : (((/* implicit */int) arr_7 [i_5]))));
                arr_15 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5]))) > (((((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) / ((~(arr_0 [i_0] [i_0])))))));
                /* LoopSeq 4 */
                for (unsigned char i_6 = 3; i_6 < 24; i_6 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((((/* implicit */int) ((short) (unsigned char)225))) / (((/* implicit */int) (unsigned char)244)))), (((/* implicit */int) (unsigned char)11)))))));
                    arr_18 [i_0] [5ULL] [i_1] [i_1] [i_5] [(signed char)10] |= ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_6]);
                    arr_19 [(_Bool)1] [0LL] [i_5] [5LL] [0LL] = ((/* implicit */_Bool) max((max((arr_4 [i_6 - 3] [i_1 - 2]), (arr_4 [i_6 - 3] [i_1 - 2]))), (((/* implicit */int) ((arr_4 [i_6 - 3] [i_1 - 2]) <= (arr_4 [i_6 - 3] [i_1 - 2]))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 1; i_7 < 23; i_7 += 1) 
                {
                    arr_22 [i_0] [i_1 - 1] [i_1 + 2] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [20LL] [i_1 - 2]))));
                    var_17 ^= ((/* implicit */short) (+(arr_14 [i_7 + 2] [i_1 + 2] [i_1 + 2])));
                }
                for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) -777936404);
                    arr_25 [i_0] [i_1 + 1] [i_1 + 1] [i_8] = arr_13 [3] [3] [i_8];
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(var_7))))));
                }
                for (unsigned int i_9 = 4; i_9 < 23; i_9 += 1) 
                {
                    arr_28 [i_0] [i_0] [i_1] [16] [i_0] [i_9 + 1] = ((/* implicit */long long int) arr_27 [i_1] [i_1] [i_9 - 2] [i_9 + 2] [(unsigned char)1]);
                    var_20 &= arr_7 [i_1];
                    arr_29 [i_0] [i_1 + 2] [i_1 + 2] [i_9 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_26 [16ULL] [i_0] [i_1 + 2] [(short)24]), (var_8)))) << (((((/* implicit */int) min((arr_17 [i_1] [i_1] [i_1 + 2] [i_1 + 2]), (arr_17 [i_1] [i_1] [i_1 + 2] [i_1 + 2])))) - (115)))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_24 [i_5] [i_5] [i_1] [i_0]), (arr_24 [i_0] [i_0] [i_0] [i_0])))) ? (max((arr_24 [i_9] [i_5] [i_1 + 1] [i_0]), (arr_24 [i_0] [i_0] [19] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (arr_24 [i_0] [i_0] [i_0] [(signed char)13])))))));
                }
            }
            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((arr_27 [i_0] [i_1 - 1] [(_Bool)1] [i_1] [i_1]) != (((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1 + 1])))) ? (var_2) : (max((max((arr_0 [10LL] [i_1 + 2]), (((/* implicit */long long int) (unsigned short)22726)))), (((/* implicit */long long int) (-(arr_4 [i_1 + 2] [i_0])))))))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_24 &= ((/* implicit */long long int) (-(((((/* implicit */int) arr_23 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2])) + (((/* implicit */int) arr_23 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 2]))))));
                        arr_34 [i_0] &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_8)))));
                        var_25 += ((/* implicit */long long int) (-((+(537431041U)))));
                        var_26 = ((/* implicit */signed char) var_6);
                        var_27 += ((/* implicit */unsigned char) arr_23 [i_0] [i_1 - 2] [i_10] [2LL] [(signed char)16] [5]);
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_1)))))));
            arr_37 [i_12] [i_12] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_7 [i_0]));
            arr_38 [3U] = ((/* implicit */int) arr_24 [i_0] [i_12] [i_0] [i_12]);
        }
        var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
    }
    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        arr_41 [(short)6] [i_13] = ((/* implicit */signed char) (-(min((((arr_4 [i_13] [i_13]) / (var_9))), ((+(((/* implicit */int) var_8))))))));
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) min((14443933738881886935ULL), (((/* implicit */unsigned long long int) arr_33 [i_13])))))));
    }
    var_31 = ((/* implicit */_Bool) 0ULL);
    /* LoopNest 2 */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            {
                var_32 = ((/* implicit */long long int) max((((/* implicit */int) var_7)), (arr_21 [i_15] [i_15] [i_14 - 1])));
                arr_48 [i_14] [i_14] [i_14] = ((/* implicit */_Bool) arr_32 [i_14] [i_15] [i_15] [2]);
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    for (unsigned short i_17 = 1; i_17 < 17; i_17 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)224)) - (((/* implicit */int) (signed char)103))));
                            arr_57 [i_14] [i_15] [i_15] [18U] [i_17] [i_17 + 1] &= arr_14 [(_Bool)0] [21ULL] [13U];
                            var_34 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_51 [i_14 - 1] [i_17 + 2] [i_17]))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_16 [(short)13] [i_17] [i_16] [(signed char)19])) + (((/* implicit */int) var_1)))) >= (((/* implicit */int) ((signed char) var_2)))))) : (((/* implicit */int) (unsigned short)65535))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) var_10);
                            arr_65 [i_14] [i_14] [i_15] [i_15] [i_18] [i_19] = ((/* implicit */unsigned short) (+(((long long int) arr_26 [i_14] [i_15] [i_14 - 1] [i_14]))));
                            arr_66 [i_14] [i_15] [(unsigned char)0] [i_19] [i_19] [i_19] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_55 [i_14 - 1] [i_14 - 1])) + (((/* implicit */int) var_7))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        {
                            arr_74 [i_21] [i_15] [(short)18] [i_21] [(_Bool)1] = ((/* implicit */_Bool) (-(max((arr_21 [i_14 - 1] [i_14] [i_14]), (arr_21 [i_14 - 1] [i_14] [i_14 - 1])))));
                            var_36 = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
}
