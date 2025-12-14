/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76804
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((((unsigned long long int) var_0)) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)192)) ^ (((/* implicit */int) (signed char)123)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_12 = ((((/* implicit */_Bool) (-(var_7)))) ? ((~(1396552420U))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1 - 2] [8ULL] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) arr_12 [i_1 - 4] [i_2 + 2] [i_2] [i_4 - 1] [i_4]))))) ? (max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0] [5] [13ULL] [i_3] [i_4 + 1]))))), (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2057343084)) ? (((/* implicit */int) arr_12 [i_3 - 1] [i_1] [i_1 + 1] [i_3] [i_2 - 1])) : (((/* implicit */int) var_4)))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) -4621956078912968LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]))) : (var_1))) : (((/* implicit */unsigned int) ((2057343080) << (((((/* implicit */int) (_Bool)1)) - (1)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))) : (arr_1 [i_1]))) != (((/* implicit */unsigned long long int) (+(var_1))))))))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (arr_8 [i_0] [i_2 - 2] [i_2 + 1]) : (arr_8 [i_0] [i_2 + 2] [i_2 - 1]))) != (min((((/* implicit */int) var_6)), (arr_8 [i_0] [i_2 + 2] [i_2 - 2])))));
                            var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 2] [i_0 - 1])) ? (arr_8 [i_0] [i_2 + 2] [i_0 - 1]) : (arr_8 [i_0] [i_2 + 3] [i_0 - 1])))));
                            arr_19 [i_0] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_2 - 2] [i_3] [i_3 - 1] [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_2 - 2] [i_3] [i_3 - 1] [i_5 + 4])) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_2 - 2] [i_2] [i_3 - 1] [i_5])) ? (2240238664U) : (((/* implicit */unsigned int) -2057343078))))));
                        }
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (signed char)-118))));
                        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) max((max((var_3), (((/* implicit */short) var_9)))), (((/* implicit */short) ((arr_4 [i_1] [i_1 - 4]) > (((/* implicit */int) (unsigned short)16384))))))))));
                        arr_20 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)16386)) : (((/* implicit */int) (short)25416))))) ? (((/* implicit */int) arr_15 [(_Bool)1] [i_0 - 1] [i_2 + 1] [i_3 + 1])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_0] [i_0 - 1] [i_2 - 2] [i_3 - 1])), (var_4))))));
                    }
                    for (long long int i_6 = 3; i_6 < 16; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16777216U)) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned short) var_6)), ((unsigned short)0))), (((/* implicit */unsigned short) var_8)))))));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (arr_21 [11U] [i_1] [i_2] [i_6] [i_6] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2054728652U))))))));
                            arr_25 [i_0] [i_7] [i_1] [(unsigned char)10] [i_7] [i_0] [i_0] |= ((/* implicit */signed char) max((max((arr_8 [i_7] [i_1 + 1] [i_1 + 1]), (arr_4 [i_1 + 1] [i_1 - 4]))), (min((arr_8 [i_7] [i_1 - 1] [i_1 + 1]), (((/* implicit */int) var_8))))));
                            arr_26 [i_6] [i_6] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) var_9);
                            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [(unsigned char)7] [i_1] [i_1 - 3] [i_1] [i_1])))), (((/* implicit */int) arr_11 [i_6 - 2] [i_6 - 2] [i_6 - 3] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_7] [i_2 - 2] [i_7] [i_0])) ? (arr_18 [i_6 - 1] [i_7] [i_1] [i_7] [i_1 + 1]) : (-2057343084))) : (((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) arr_17 [i_7])))) : (((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_6 - 3] [i_6] [i_7] [i_6] [i_6]))))))));
                            var_20 = (+(((unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)225)), (14005454509738619115ULL)))));
                        }
                        for (short i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                        {
                            arr_29 [i_0] [i_6] = ((/* implicit */unsigned char) min((3724454361719765618LL), ((+((-9223372036854775807LL - 1LL))))));
                            var_21 = ((((/* implicit */_Bool) ((((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_24 [i_0]))))) ? (min(((-(2057343087))), (((/* implicit */int) arr_24 [i_0])))) : (((/* implicit */int) ((unsigned short) (!((_Bool)1))))));
                            var_22 = ((/* implicit */unsigned int) (unsigned char)62);
                        }
                        arr_30 [i_0] [(short)16] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (signed char)-14));
                        arr_31 [i_0] [i_0] [i_0] [3U] = ((/* implicit */signed char) (((+(arr_28 [i_6 + 1] [15ULL] [i_6 - 1] [i_6] [i_6] [i_6 + 1]))) / (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_2 + 1] [i_6 + 2]) / (((/* implicit */int) var_10)))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
                    {
                        for (short i_10 = 1; i_10 < 17; i_10 += 4) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_17 [8LL]), (((/* implicit */unsigned short) var_10))))) * (((((/* implicit */_Bool) (unsigned short)16394)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)116))))))) ? (max((((/* implicit */int) var_4)), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_2)))))) : (((((/* implicit */int) max((arr_23 [i_0] [14ULL] [(_Bool)0] [(unsigned char)12] [i_10]), (((/* implicit */unsigned short) var_8))))) & ((+(((/* implicit */int) (_Bool)1))))))));
                                arr_38 [i_0] [i_9] = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2))))))));
}
