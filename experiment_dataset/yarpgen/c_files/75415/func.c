/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75415
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) < (((/* implicit */int) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-94))) : (8594694909851525176LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (var_14) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    var_17 *= var_3;
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) (signed char)-23))))) != (((((/* implicit */int) (signed char)7)) * (((/* implicit */int) var_7)))))))));
        arr_2 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)21660))))) ? (((((/* implicit */_Bool) (short)12849)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 2])) < (((/* implicit */int) var_10))))))));
        var_19 = ((((/* implicit */_Bool) (signed char)10)) ? (5514781950261576935LL) : (((/* implicit */long long int) ((/* implicit */int) (short)7))));
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_3 [i_1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_3 [i_1] [(short)12])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))))) && (((((/* implicit */int) arr_5 [i_1 - 1])) <= (((/* implicit */int) arr_5 [i_1 - 1]))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_5 [(signed char)0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (short)17831)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-12796)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_4))))));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_17 [i_5] [i_5] [i_4] [i_3] [i_4] [i_2] [4LL] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_1 - 1] [i_2] [i_3])) != (((/* implicit */int) var_12))))) < (((((/* implicit */int) (signed char)121)) + (((/* implicit */int) (short)-7))))));
                            arr_18 [i_1] [10LL] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (signed char)-2))))) * (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)64))))) / (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_14)))))));
                            arr_19 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)-16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_15 [i_1] [0LL] [i_1] [i_1] [i_4] [i_1])))) < (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_1 - 2] [i_1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) arr_7 [(signed char)16]))))) : (((/* implicit */int) var_12))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 3; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_1 + 1] [(short)19] [(short)19] [i_3] [i_4] [(short)19] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_1 + 1] [(signed char)3] [i_6 - 3] [i_4])) & (((/* implicit */int) var_6))));
                            arr_23 [i_1] [i_4] [i_1] [(short)0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-19914)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)61)) < (((/* implicit */int) (signed char)106))))) : (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)107))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-9LL)));
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)113)) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-27)) - (((/* implicit */int) var_9)))))));
                        }
                        for (signed char i_7 = 3; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            arr_28 [i_1] [i_3] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (((((/* implicit */int) (signed char)22)) ^ (((/* implicit */int) (short)10106)))) : (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (signed char)-15))))))) ? (((((/* implicit */_Bool) arr_9 [i_1 - 1] [(signed char)6] [i_1 - 2] [(signed char)6])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_1] [i_2] [i_2] [(signed char)16] [i_4] [i_7] [i_7])) || (((/* implicit */_Bool) arr_21 [i_1 + 1] [i_1 + 1] [i_1]))))) : (((/* implicit */int) (signed char)7)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_16 [i_7 - 3] [i_7] [i_7 - 1] [i_7] [i_7] [0LL])))))));
                            arr_29 [i_1] [(short)13] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)54))) < (4160514283259158198LL))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)86)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)19888))) < (arr_21 [i_1] [i_2] [i_3]))))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) 8849635825563565205LL)) ? (((/* implicit */int) arr_25 [i_7 + 1] [i_7] [i_7] [i_3] [i_2])) : (((/* implicit */int) arr_25 [i_7 - 3] [i_3] [i_3] [i_3] [i_3]))))));
                            var_22 += ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-52)) ^ (((/* implicit */int) (short)32765))))) - (((-8556136448591862940LL) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [18LL] [i_1]))) : (var_14)))))));
                            var_23 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) / (((/* implicit */int) arr_24 [i_7 - 2] [i_7 - 2] [i_7 + 1])))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_24 [i_7 - 2] [i_7 - 3] [i_7 - 2])) : (((/* implicit */int) (signed char)-97))))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 3; i_8 < 19; i_8 += 3) /* same iter space */
                        {
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 5804433587586309963LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_24 [i_1 + 1] [4LL] [i_1 + 1]))))) - (arr_21 [i_1 - 2] [i_3] [i_8])));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-30663)) / (((/* implicit */int) var_11)))) * (((/* implicit */int) var_8))));
                        }
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) (short)256))))) ? (((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (signed char)2)))) : (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) arr_27 [(signed char)16] [i_1 + 1] [i_3] [i_4] [(signed char)16] [(signed char)16] [i_4])) : (((/* implicit */int) var_2)))))))));
                        var_27 -= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (signed char)-22)) <= (((/* implicit */int) var_11))))) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_24 [i_1] [i_2] [i_3])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) arr_27 [6LL] [6LL] [i_2] [i_3] [i_3] [i_3] [i_4])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_11 [i_1 - 1] [(signed char)18] [i_3])) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_1 - 2] [i_3] [i_3])))))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) var_3);
}
