/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61407
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_10 [i_0] = ((/* implicit */unsigned int) (-(((arr_6 [i_0] [i_1 + 1]) ? (((/* implicit */int) arr_5 [i_1] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 3]))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [2ULL] [2ULL])) ? (((arr_1 [i_1 + 2] [i_0]) & (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((unsigned int) 18446744073709551615ULL)))));
                    var_19 = ((/* implicit */unsigned long long int) ((signed char) ((long long int) arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] = ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_3])), (var_0)))) ? (arr_9 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1 + 1]))))) : (((/* implicit */long long int) (+(1322849274)))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_3] [i_3])) - (((/* implicit */int) arr_5 [i_1] [i_1]))))) : (5646409556441021037ULL))) / (((/* implicit */unsigned long long int) (~(min((var_11), (((/* implicit */unsigned int) -1322849275))))))))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_1 + 1] [11LL]))) ? (-1322849275) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_22 = ((/* implicit */long long int) (+(max((((var_0) + (((/* implicit */unsigned long long int) arr_9 [i_0])))), (((/* implicit */unsigned long long int) arr_11 [i_0] [2U]))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 24; i_6 += 4) /* same iter space */
                    {
                        var_23 = (-(((((/* implicit */_Bool) 1777661181)) ? (7330275954537306381LL) : (((/* implicit */long long int) 2596816372U)))));
                        var_24 = ((/* implicit */unsigned int) arr_1 [i_1 - 1] [i_0]);
                        var_25 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((var_9), (((/* implicit */int) (unsigned char)187))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_13))))) : (((unsigned int) var_4))))));
                        var_26 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_5])) ? (5690943327527253734ULL) : (((/* implicit */unsigned long long int) min((var_5), (var_5)))))) < ((+(((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_18 [i_1 + 2] [i_5] [i_1]) : (((/* implicit */unsigned long long int) var_10))))))));
                    }
                    for (long long int i_7 = 1; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        var_27 = arr_21 [i_0] [i_1 - 2] [i_5] [i_0];
                        var_28 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned char) arr_3 [i_0])), (((unsigned char) 1698150924U)))));
                    }
                }
                for (unsigned char i_8 = 4; i_8 < 21; i_8 += 1) 
                {
                    var_29 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_7 [i_1 + 3] [i_1 + 1])))));
                    arr_29 [i_0] [i_1] [i_0] [18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3585496233U)) ? (2479610695U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191)))))) & (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1 - 2] [i_0])) ? (((/* implicit */unsigned long long int) -1322849277)) : (var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_1 + 2] [i_1 + 2])))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((2967575444U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (arr_7 [i_0] [16LL])))));
                    arr_30 [i_0] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) max((((var_13) ? (-5226778350450241141LL) : (((/* implicit */long long int) -1777661182)))), (((/* implicit */long long int) (unsigned char)227)))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3725577102U)) ? (((/* implicit */unsigned long long int) 2106558257U)) : (var_6)))))))));
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((int) ((arr_28 [i_8 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))))) : (((long long int) max((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_1] [i_8])), (var_12))))));
                }
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_1 [i_0] [i_1]))));
                arr_31 [i_0] = ((/* implicit */long long int) max((arr_14 [i_1 - 1] [i_1 - 2] [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1 + 2]), (arr_14 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 3] [i_0] [i_0])));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) (+(var_1)));
}
