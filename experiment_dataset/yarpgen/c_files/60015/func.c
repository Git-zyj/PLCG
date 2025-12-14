/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60015
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
    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (max((var_5), (((/* implicit */int) min((((/* implicit */short) var_6)), (var_17))))))));
    var_19 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) / (((/* implicit */int) var_3)))) - (((/* implicit */int) var_8))));
    var_20 &= ((/* implicit */int) ((unsigned char) (-((+(((/* implicit */int) (unsigned short)44997)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_21 += ((/* implicit */int) ((unsigned short) min((arr_1 [i_0] [7U]), (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) arr_2 [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_1] [i_1]))));
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (-(-2147483641)));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            arr_14 [i_1] = ((/* implicit */unsigned short) arr_2 [(unsigned short)15]);
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_0 [i_3]))));
        }
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-591170541)))) ? (((((/* implicit */int) (signed char)-1)) ^ (((1243196010) | (-1243196008))))) : (((/* implicit */int) (signed char)-83))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                arr_19 [i_4] [i_1] [i_5 + 1] [(unsigned short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 704919282U)) && (((/* implicit */_Bool) (unsigned short)64144))));
                arr_20 [(signed char)8] [i_4] [i_1] [i_1] = ((/* implicit */int) arr_18 [1] [i_1] [i_1]);
                var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) arr_12 [i_1]))), (min((((/* implicit */unsigned int) arr_17 [i_1 + 1] [2] [2])), (arr_6 [i_5 - 2] [i_4] [(unsigned char)2])))));
            }
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                var_27 = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (~(2923516438U)))), (((((/* implicit */_Bool) (unsigned short)3840)) ? (-2231321995128076160LL) : (((/* implicit */long long int) ((/* implicit */int) (short)7)))))))));
                arr_23 [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1 - 1] [i_1]))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_1 + 1] [i_4]), (arr_11 [i_1 + 1] [i_1 + 1])))))));
            }
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_1] [i_4])), (arr_12 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_18 [i_4] [i_1] [i_4])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1]))))) : (((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_1])))))))) ? (((/* implicit */int) arr_21 [i_1 + 1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_21 [i_1 - 1] [i_1] [i_4]))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            arr_28 [i_1 - 1] [i_7] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_1 + 1])) / (((/* implicit */int) arr_17 [i_1 - 1] [(unsigned char)5] [(signed char)0]))));
            arr_29 [i_1] = max(((-(arr_12 [i_1]))), (((/* implicit */int) min((var_17), (((/* implicit */short) ((unsigned char) arr_2 [i_7])))))));
            var_29 = var_11;
        }
        var_30 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2231321995128076159LL)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_15 [(unsigned char)5] [i_1])) : (((/* implicit */int) max((var_17), (((/* implicit */short) var_4))))))));
        var_31 = ((((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (arr_24 [i_1 - 1] [i_1 + 1] [i_1]) : (arr_24 [i_1 + 1] [i_1 + 1] [3]))) | (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1 + 1])) / (((/* implicit */int) arr_7 [i_1] [i_1]))))));
        /* LoopSeq 4 */
        for (short i_8 = 3; i_8 < 8; i_8 += 4) /* same iter space */
        {
            arr_32 [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_8])) ? (((((/* implicit */_Bool) max((arr_8 [i_1] [i_8]), (((/* implicit */unsigned short) arr_1 [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */long long int) var_5)) : (arr_4 [i_1]))) : (max((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_8])) : (arr_12 [i_1]))))))));
            var_32 = ((/* implicit */long long int) var_4);
        }
        /* vectorizable */
        for (short i_9 = 3; i_9 < 8; i_9 += 4) /* same iter space */
        {
            arr_35 [i_1] = ((/* implicit */unsigned short) ((arr_33 [i_1] [i_1 - 1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            var_33 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1 - 1] [i_9 + 2]))) + (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_15)))));
            var_34 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -1243196021)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_9])) : (arr_12 [i_1])))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            arr_39 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((unsigned int) (signed char)44)) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            arr_40 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_11)) / (((/* implicit */int) arr_15 [i_1] [i_1]))))));
            arr_41 [i_1] [i_1] = ((/* implicit */signed char) var_9);
        }
        for (unsigned char i_11 = 2; i_11 < 9; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                arr_48 [i_1] = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (unsigned char)255)))));
                arr_49 [i_1 - 1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((-2147483641) - (((/* implicit */int) (signed char)-69))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19841))) : (min((((/* implicit */unsigned int) (unsigned char)126)), (1824096653U))))), (((/* implicit */unsigned int) arr_34 [i_12] [i_1 + 1]))));
            }
            var_35 = ((/* implicit */long long int) (-((~(((/* implicit */int) (signed char)-83))))));
            arr_50 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_31 [i_1])) | (((/* implicit */int) arr_5 [i_1 - 1] [i_1]))))));
            var_36 = var_4;
        }
    }
}
