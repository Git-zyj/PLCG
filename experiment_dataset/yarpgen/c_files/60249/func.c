/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60249
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [19LL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [9] [i_0 + 1])) ? (3836850935U) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 1])))) <= (((/* implicit */unsigned int) (~(arr_0 [i_0] [i_0 - 1]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (short i_3 = 3; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) min(((+(((((/* implicit */unsigned int) var_12)) | (458116367U))))), (((/* implicit */unsigned int) var_4))));
                            arr_14 [i_0] [i_1] [i_3] [i_3 - 1] [i_1] = ((/* implicit */short) var_5);
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1] [i_0] [i_0 - 1]))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_5 = 2; i_5 < 22; i_5 += 4) 
            {
                var_17 &= ((/* implicit */signed char) var_6);
                var_18 ^= ((/* implicit */_Bool) var_8);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0 - 1] [i_1 - 4] [i_0 - 1] [i_5 + 1] [i_7 - 4])) > (((/* implicit */int) (short)15354))));
                            arr_24 [i_0] [i_1 - 2] [i_5 - 2] [i_5] [(signed char)3] [i_6] [(unsigned char)9] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned short)5121))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned char i_9 = 1; i_9 < 22; i_9 += 2) 
                    {
                        {
                            arr_29 [i_0] [i_9] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_5 + 1] [i_8 - 2] [i_9 + 1]))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [9LL] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (281337537757184LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_30 [i_9] [i_1] [i_5] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (unsigned short)5121);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_10 = 3; i_10 < 20; i_10 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (2181579181U));
                    var_22 = ((/* implicit */int) var_6);
                }
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    arr_38 [i_0] [i_10] [i_1] [i_10 + 2] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46134)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_10 - 2] [i_0] [i_0]))) : (-2805043231510949269LL))))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        arr_43 [i_12] [i_12] [i_10] [i_12] &= (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])));
                        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)19425)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_37 [i_10 - 2] [i_1 - 1] [i_0 - 1] [i_0 - 1])));
                    }
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        var_24 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_0 + 1]))) != (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (-281337537757196LL) : (arr_18 [i_14] [i_12] [i_10 + 3] [i_1])))));
                        arr_46 [i_10] [(signed char)11] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_39 [i_0 + 1] [i_10] [(signed char)19] [(signed char)19] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3836850929U)))));
                    }
                    arr_47 [(unsigned short)22] [i_1] [i_10] [i_10] [i_1] [i_0] = ((/* implicit */unsigned short) (+(458116337U)));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) -281337537757175LL))));
                }
                arr_48 [i_10 - 3] [i_10] [(signed char)18] = ((/* implicit */long long int) (+(((/* implicit */int) arr_27 [i_0 - 1] [i_1 + 1]))));
            }
            /* vectorizable */
            for (unsigned short i_15 = 3; i_15 < 20; i_15 += 2) /* same iter space */
            {
                var_26 += ((/* implicit */unsigned int) (unsigned short)19408);
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_1 - 1] [i_15 - 2] [i_15 + 2] [i_15 - 3] [i_15 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (11103471763419975299ULL))))));
                arr_51 [(unsigned char)0] [i_1 - 3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11103471763419975299ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (-787478285693370109LL) : (((/* implicit */long long int) ((var_14) << (((11103471763419975306ULL) - (11103471763419975278ULL))))))));
                var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) (short)-205)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_32 [i_0 + 1] [i_1]))))) : ((+(787478285693370129LL)))))));
            }
        }
    }
    var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_13))))) : (-787478285693370130LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) / (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14))))));
}
