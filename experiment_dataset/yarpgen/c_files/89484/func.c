/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89484
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
    var_11 += ((/* implicit */unsigned long long int) (unsigned char)240);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)1))))), ((~(arr_0 [i_0] [(short)9])))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) -3671589574785416981LL)) || (((/* implicit */_Bool) 0U)))))))) ? (max((0U), (arr_0 [i_0] [5U]))) : (((/* implicit */unsigned int) var_10))));
        var_14 = (i_0 % 2 == zero) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((min((arr_0 [i_0] [(signed char)3]), (((/* implicit */unsigned int) arr_2 [(_Bool)1])))) << (((arr_1 [i_0]) - (1940151221))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((min((arr_0 [i_0] [(signed char)3]), (((/* implicit */unsigned int) arr_2 [(_Bool)1])))) << (((((arr_1 [i_0]) - (1940151221))) + (2031946171)))))))));
    }
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((arr_6 [i_3]), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [6U])) ^ (((/* implicit */int) (unsigned short)0))))) >= (max((var_1), (((/* implicit */unsigned long long int) var_4))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((-1294620422), (var_10))) <= (arr_3 [i_3 - 1] [i_2]))))) ^ (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [(unsigned char)11])), (var_0)))), (0ULL)))));
                        arr_17 [i_1] [i_4] [i_1] [i_3 - 1] [0LL] |= var_1;
                        arr_18 [(signed char)10] [(unsigned char)9] [i_3 - 1] [i_3] [2U] = ((/* implicit */unsigned char) (unsigned short)19510);
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 12; i_5 += 3) 
                    {
                        var_18 = (~(((((/* implicit */int) arr_8 [i_3 + 1] [i_2] [i_5 - 3])) / (-1256511170))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((_Bool) arr_15 [10U] [(unsigned char)8] [i_2] [i_5 + 1])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_1] [i_3] [4ULL] [i_5 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_1] [i_5 - 1] [i_3 + 1]))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((~(var_10))) : (((/* implicit */int) arr_10 [i_1]))));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */signed char) var_2)), (arr_7 [i_3 - 1]))))));
                        var_22 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_1] [8ULL] [5])), (arr_3 [8LL] [i_3 - 1])));
                        var_23 = ((/* implicit */unsigned char) arr_19 [i_1] [i_3 + 1] [i_2] [(short)6] [(signed char)3]);
                    }
                    for (int i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        arr_29 [i_3] [i_2] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) (unsigned short)0)))));
                        var_24 = ((/* implicit */unsigned long long int) ((signed char) arr_28 [9] [11ULL] [i_3 - 1] [i_8 - 2] [(signed char)3] [4ULL]));
                        arr_30 [i_1] [i_3] [7LL] [i_8 + 2] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned short)0)))), (min((((/* implicit */int) arr_28 [i_8 - 1] [1] [i_3 - 1] [i_8 - 2] [i_2] [i_1])), (-1256511171)))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            arr_33 [(short)8] [i_3] [5ULL] [i_3 - 1] = ((unsigned char) (+(max((((/* implicit */unsigned int) arr_10 [i_9])), (arr_31 [i_9] [i_2] [(unsigned char)12] [5ULL] [i_9] [i_1] [i_1])))));
                            arr_34 [6] [2LL] [(unsigned char)3] [i_1] [i_9] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned long long int) arr_24 [i_1] [2LL])), (6804764927225909103ULL)))))));
                        }
                        var_25 = ((/* implicit */long long int) min((((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */int) arr_10 [i_3 + 1])) * (((/* implicit */int) arr_10 [i_3 - 1]))))));
                    }
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) max((((/* implicit */int) arr_13 [(_Bool)1] [1] [i_3])), ((+(-1105770622))))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_32 [i_1] [i_3] [(signed char)3] [(unsigned char)8] [3] [i_2] [(unsigned char)6])) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) var_9)))) : (((2147483647) / (((/* implicit */int) arr_11 [i_3 + 1] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))) : (((long long int) (signed char)101))));
                    var_28 += ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((1105770621) - (((/* implicit */int) arr_19 [2ULL] [i_1] [i_1] [(unsigned short)10] [(_Bool)1])))), (((/* implicit */int) ((_Bool) arr_24 [1LL] [(signed char)2])))))) <= (((min((-9223372036854775783LL), (((/* implicit */long long int) arr_27 [i_1] [i_2] [2U] [i_2])))) ^ (((((/* implicit */_Bool) (unsigned char)53)) ? (4402095016195483886LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [8] [i_2])))))))));
                }
            } 
        } 
    } 
}
