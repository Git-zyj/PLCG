/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83127
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) 1696513780)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2870845979U)) ? (33950502) : (((/* implicit */int) (unsigned short)46893))))) : (1424121343U));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_9))));
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-891400073)))) ? (arr_1 [i_0 + 1]) : (((-308557807) / (((/* implicit */int) var_1))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        for (int i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        arr_13 [(_Bool)1] [(_Bool)1] [(signed char)2] [3] [6] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) var_7)))))), (((/* implicit */int) (unsigned char)74))));
                        arr_14 [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((2870845979U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                        arr_15 [i_3] [i_3] |= ((/* implicit */unsigned short) ((arr_7 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (unsigned char)255))))))));
                        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)103))));
                        var_18 -= ((/* implicit */short) (+(arr_10 [i_1] [i_2] [i_2] [i_3] [i_1] [2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_19 += ((/* implicit */short) (~((+(1424121317U)))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            arr_22 [i_5] &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_2 + 1]))));
                            var_20 = ((/* implicit */unsigned int) arr_2 [i_1 + 1] [i_1 - 2]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) -891400073))));
                            arr_27 [i_1] [i_1 - 2] [i_1] [i_7] [i_1] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (_Bool)1))))));
                            var_22 += ((/* implicit */signed char) (unsigned char)181);
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [4] [i_2]))) | (var_0)));
                        }
                    }
                    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_21 [i_1 - 1] [(short)1] [i_3] [5] [i_3])) ? (var_11) : (((((/* implicit */_Bool) arr_21 [(unsigned short)6] [(unsigned short)6] [(unsigned char)4] [i_3] [i_8])) ? (((/* implicit */unsigned int) arr_10 [(short)9] [(short)9] [i_3] [i_8 - 1] [i_2 - 2] [i_3])) : (1424121309U)))))));
                        var_25 ^= ((/* implicit */signed char) var_4);
                        arr_32 [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) var_0)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_26 = (+(max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) max((arr_2 [i_8] [i_2]), (((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1]))))))));
                            var_27 |= ((/* implicit */int) arr_33 [i_9] [i_2] [i_9] [i_9] [i_9]);
                            var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-20391)) ? (((((/* implicit */_Bool) arr_25 [i_1] [i_1 - 1] [i_2 - 1] [i_2] [i_2] [(unsigned char)7] [i_9])) ? (var_12) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) arr_30 [i_1] [i_1] [i_8] [i_9])))))), ((+(((((/* implicit */int) arr_3 [i_8])) * (((/* implicit */int) (_Bool)1))))))));
                            var_29 = ((/* implicit */int) min((var_29), (max((((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-17677)))), (arr_9 [i_1])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 10; i_10 += 2) 
                        {
                            var_30 = (-(arr_20 [i_1 - 1] [i_2 + 1] [i_3] [i_8] [i_2 + 1]));
                            arr_39 [i_1] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned short) arr_0 [i_2 - 2]);
                        }
                        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned int) max(((-(((((/* implicit */long long int) arr_9 [i_1])) / (arr_38 [(signed char)0] [6] [i_3] [(signed char)1] [(unsigned char)6] [i_11] [i_3]))))), (((/* implicit */long long int) min(((-(((/* implicit */int) arr_0 [i_3])))), (((/* implicit */int) arr_37 [i_11] [(signed char)7] [i_2])))))));
                            var_32 = ((/* implicit */unsigned char) arr_41 [i_8]);
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) var_2))));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */int) min((var_34), ((-(1506034259)))));
                                arr_50 [i_12] &= ((/* implicit */int) 177339262U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (int i_15 = 4; i_15 < 9; i_15 += 2) 
                        {
                            {
                                arr_55 [(short)5] [i_2] [i_3] [i_2] [i_3] [i_3] [i_2] = (unsigned short)59246;
                                var_35 *= ((/* implicit */unsigned char) (-2147483647 - 1));
                                arr_56 [i_1] [i_2] [(unsigned char)10] [i_14] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_43 [i_3] [i_3] [(_Bool)1] [i_2 - 2] [10U] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-2147483647 - 1))), (((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) / (var_0)))));
    var_37 = ((/* implicit */int) var_8);
}
