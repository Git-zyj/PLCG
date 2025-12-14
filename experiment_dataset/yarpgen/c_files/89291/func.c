/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89291
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 4; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    arr_10 [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_0]))) % (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_9 [i_1] [i_1])) - (((/* implicit */int) (short)-6066))))));
                    arr_11 [i_0] [i_1] [24] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_2] [i_1]))))) ? (min((var_12), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 2] [i_1]))))), (((/* implicit */unsigned int) ((short) min((((/* implicit */short) (signed char)-124)), (var_1)))))));
                    arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) ((long long int) ((long long int) ((short) var_6))));
                    var_13 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2]);
                    arr_13 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (~(min((((/* implicit */long long int) max((var_4), (((/* implicit */int) (signed char)23))))), (((long long int) 1844590951))))));
                }
                for (unsigned int i_3 = 4; i_3 < 24; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 3; i_4 < 22; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned int) 6674970676544318098ULL);
                        arr_19 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 5791024097835102868ULL)) || (((/* implicit */_Bool) arr_17 [i_0] [i_1]))))) * (arr_5 [i_4 + 3] [i_1 - 1])))), ((+(((((/* implicit */_Bool) 2147483647)) ? (712713274U) : (arr_2 [i_1])))))));
                    }
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_23 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) min((((/* implicit */unsigned int) (unsigned char)38)), (2735518609U))))) ? ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) -1844590951)) : (arr_17 [i_5] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_5]))))))));
                        var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((2147483646) + (((/* implicit */int) arr_15 [i_0]))))) + (arr_17 [i_1 - 2] [i_1])))), (((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_3] [i_1] [i_0]))) : ((~(var_5)))))));
                        arr_24 [i_0] [i_0] [i_1] [i_3 - 4] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
                        arr_25 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned int) 1844590950);
                        var_16 = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (1844590951))), (((/* implicit */int) ((_Bool) arr_20 [i_0] [i_0] [i_3] [i_0])))))));
                    }
                    arr_26 [9U] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (~(var_9)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_3 - 2] [i_3])) && (((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_3 - 1] [i_6])))))));
                        arr_30 [i_0] [i_1] [i_0] [i_6] [i_0] [i_6] = ((/* implicit */signed char) min((((var_5) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)18))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)29533)))))));
                    }
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((/* implicit */unsigned int) (((+(((/* implicit */int) var_6)))) ^ ((-(((/* implicit */int) var_3))))))), ((~(min((((/* implicit */unsigned int) (unsigned short)46831)), (3550424348U))))))))));
                    arr_31 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 562152553)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8384))) * (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)29999)) | (((/* implicit */int) arr_15 [i_0]))))) : (((long long int) var_4)))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 4; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)6066)) : (var_10)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_10))) : (((((/* implicit */_Bool) 1882739028U)) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551615ULL))))))));
                    arr_34 [i_0] [i_1] = ((/* implicit */long long int) (((+(1882739028U))) / (var_12)));
                }
                var_20 = ((/* implicit */int) ((signed char) min((var_12), ((~(arr_20 [(signed char)0] [(signed char)0] [i_0] [i_1]))))));
                arr_35 [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
                /* LoopSeq 2 */
                for (long long int i_8 = 2; i_8 < 23; i_8 += 1) 
                {
                    arr_38 [(unsigned char)22] [i_1] [i_8] [i_1] &= ((/* implicit */int) min((max((((/* implicit */long long int) (_Bool)1)), ((~(var_2))))), (((/* implicit */long long int) ((712713274U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1 - 1]))))))));
                    var_21 = ((/* implicit */signed char) min((var_11), (((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                }
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) * (min((83610244U), (((/* implicit */unsigned int) var_1))))))) ? (min((((/* implicit */long long int) min((var_7), (((/* implicit */short) (signed char)51))))), (max((((/* implicit */long long int) (signed char)-52)), (arr_14 [i_0] [i_1]))))) : (((/* implicit */long long int) 1808283263))));
                    var_23 = ((/* implicit */unsigned int) (+(min((max((-9223372036854775791LL), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (-1674140717) : (((/* implicit */int) (short)31205)))))))));
                    var_24 = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)52))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)7827)), (2251799813685247LL)))) == (6765732655457171670ULL))))));
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 934655958495194954ULL)))))) ^ (((/* implicit */int) var_3))));
    var_27 = ((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) min((var_2), (((/* implicit */long long int) (signed char)-71))))) : (((((/* implicit */unsigned long long int) max((var_4), (1844590951)))) | ((-(var_5))))));
}
