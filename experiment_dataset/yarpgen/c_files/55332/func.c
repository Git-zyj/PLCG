/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55332
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((var_1) <= (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (arr_1 [12])))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) ((arr_9 [i_2] [i_3] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_1]))))));
                            arr_15 [i_0] [i_2] [i_0] = ((/* implicit */int) ((11464950345727016113ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        }
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */short) min((6981793727982535488ULL), (11464950345727016127ULL)));
                            arr_19 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) arr_4 [i_0]));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0]))) : (max((var_7), (var_11)))))) && ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1])) ^ (11464950345727016127ULL)))))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 11464950345727016134ULL))) != (((((/* implicit */int) var_5)) / (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((unsigned long long int) ((6981793727982535488ULL) >> (((/* implicit */int) var_9)))))));
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_6 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */int) arr_25 [i_2] [4U] [(_Bool)1] [i_3] [i_7])))) + (((/* implicit */int) (!(((/* implicit */_Bool) 6981793727982535503ULL))))))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_6 [i_3]))) <= (arr_6 [(signed char)0])));
                        }
                        var_21 += ((/* implicit */_Bool) arr_12 [i_1] [i_1]);
                        arr_26 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_1] [i_0] [i_0])) : (11464950345727016127ULL))), (((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_2] [i_0])))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(((11464950345727016127ULL) + (6981793727982535528ULL))))))));
                        arr_27 [(unsigned short)16] [i_1] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (arr_22 [i_0] [i_0] [i_1] [i_0] [i_2])))) ? (var_7) : (((/* implicit */long long int) (-(arr_20 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 6981793727982535503ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned short)1] [(unsigned short)1] [i_2] [i_0])))))) : (max((((/* implicit */unsigned int) arr_6 [i_2])), (arr_11 [i_0] [i_1] [i_1] [(short)16] [(short)16] [13ULL])))))) : (((11464950345727016079ULL) ^ (11464950345727016065ULL)))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_3))) ^ (((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_1] [i_8]))));
                        arr_31 [(short)0] [i_0] [i_8] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [6ULL] [i_0] [i_2])) != (6981793727982535488ULL))))) - (((var_10) | (((/* implicit */unsigned long long int) arr_4 [i_0])))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (+((-(((arr_20 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0])) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_6))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (6981793727982535502ULL))))))));
                    }
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                    {
                        var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_8 [i_1] [i_2] [i_10]), (((/* implicit */long long int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_10] [(signed char)11] [i_2])) ? (arr_8 [i_10] [i_1] [i_0]) : (arr_8 [i_1] [i_10] [i_2]))))));
                        arr_39 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_24 [i_0] [(short)9] [8U] [i_0] [i_10])), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_10] [i_0] [i_0]))))), (6981793727982535505ULL)))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (((-(arr_2 [i_0] [i_1]))) != (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_2] [i_10] [i_2])) ? (6981793727982535488ULL) : (((/* implicit */unsigned long long int) arr_23 [i_10] [i_2] [i_1] [(signed char)3] [(signed char)3])))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
                    {
                        arr_43 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_11])))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_1] [i_0])) ? (11464950345727016127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_21 [i_0] [i_0]))))));
                        arr_44 [i_1] [i_1] [i_1] [10U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((6981793727982535533ULL), (11464950345727016113ULL)))) ? (6981793727982535503ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_27 = ((/* implicit */unsigned char) var_10);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((11464950345727016110ULL) <= (6981793727982535488ULL))))) - (arr_13 [i_0] [i_0] [i_11])));
                    }
                    var_29 *= ((/* implicit */signed char) ((11464950345727016113ULL) != (11464950345727016113ULL)));
                }
            } 
        } 
    }
    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        arr_47 [i_12] = ((/* implicit */_Bool) arr_23 [i_12] [i_12] [i_12] [i_12] [i_12]);
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (((-(6981793727982535471ULL))) ^ (((6981793727982535522ULL) - (min((6981793727982535506ULL), (6981793727982535505ULL))))))))));
    }
    var_31 |= ((/* implicit */signed char) var_8);
}
