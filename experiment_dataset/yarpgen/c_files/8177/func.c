/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8177
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
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((/* implicit */_Bool) 1989458480519475764LL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))))) : (((/* implicit */unsigned long long int) var_11)))) < (var_10)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */signed char) 1582053241U);
                    var_14 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (2387122452U) : (((/* implicit */unsigned int) 160208614)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 732616048U)))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_2] [(signed char)8] [i_2] [i_2] = ((/* implicit */unsigned short) 2LL);
                            arr_13 [i_0] [i_3] [i_2] [5ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(unsigned char)1])) * (((/* implicit */int) var_7))))) ? (arr_1 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 - 2] [i_3 - 3])))));
                            arr_14 [i_0] [(unsigned char)3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [3LL])) ? (365461702208585330ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_1])))))) ? (2688714004162091611ULL) : (((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_1] [(signed char)5] [i_1]) ? (arr_3 [(_Bool)1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38555))))))));
                        }
                        for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_2] [2ULL] [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2387122452U)) ? (((/* implicit */int) (unsigned short)16759)) : (((/* implicit */int) (unsigned char)74))));
                            var_15 = ((/* implicit */_Bool) (~(536870912U)));
                        }
                        for (unsigned char i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */long long int) ((arr_1 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)114))))))));
                            var_17 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 476051853555701885LL))));
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_6] [6ULL] = ((/* implicit */_Bool) 781859688);
                        }
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) 9223372036854775807LL);
                            arr_25 [i_7] [(unsigned short)4] [i_0] [i_0] [i_7] = ((((/* implicit */_Bool) arr_17 [i_2] [i_3 - 2] [i_3 - 3] [i_3 - 1])) ? (arr_9 [i_0] [i_3 + 1] [i_3] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))));
                            var_20 += ((/* implicit */signed char) 3844574301959623502LL);
                            var_21 = ((/* implicit */unsigned long long int) (unsigned char)113);
                            arr_26 [(unsigned char)2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)58153);
                        }
                        var_22 *= (unsigned short)5;
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_2]))))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [(signed char)4] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((arr_9 [i_0] [i_3 - 3] [i_3 + 1] [i_3 + 1]) + (9223372036854775807LL))) >> (((arr_9 [i_0] [i_0] [i_3 - 1] [i_3 - 1]) + (3961077856749055780LL)))))) : (((/* implicit */unsigned long long int) ((((arr_9 [i_0] [i_3 - 3] [i_3 + 1] [i_3 + 1]) + (9223372036854775807LL))) >> (((((arr_9 [i_0] [i_0] [i_3 - 1] [i_3 - 1]) + (3961077856749055780LL))) - (3046708669317821777LL))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_0] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) arr_3 [(unsigned char)14] [i_1])))));
                            arr_34 [i_0] [i_1] [i_0] [(_Bool)0] [i_9] [i_3 - 2] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_10 [(signed char)9] [i_1] [i_1] [(unsigned char)9] [i_9]))))));
                            var_24 *= ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_12)))));
                            arr_35 [i_0] [i_1] [i_0] [i_3 - 3] [i_9] = ((/* implicit */signed char) arr_11 [i_0] [i_3] [i_2] [i_0] [i_0] [i_3 - 3]);
                        }
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)48775))));
                            arr_40 [i_0] [i_0] [i_2] [i_3] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (arr_38 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) (_Bool)1))));
                            var_26 = ((/* implicit */int) (-(-1726418473573546560LL)));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_10] [i_3 + 1] [i_2] [i_1] [i_0])) ? (arr_1 [i_1]) : (8519461034822208897LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_3 - 3] [i_2] [i_2] [i_10])))));
                            var_27 = ((/* implicit */long long int) arr_6 [i_3] [10LL] [(signed char)7] [(signed char)10]);
                        }
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((arr_38 [i_0]) << (((((/* implicit */int) (unsigned char)104)) - (102))))) < (((/* implicit */unsigned long long int) (~(arr_3 [(unsigned short)6] [i_0])))))))));
                    }
                    arr_42 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 783827617811435679LL)) ? (((/* implicit */int) (unsigned short)6099)) : (((/* implicit */int) arr_31 [(unsigned short)2] [i_1] [3U] [i_1] [i_2] [3U])))), (((((/* implicit */int) (unsigned char)38)) >> (((((/* implicit */int) arr_11 [(unsigned char)13] [(unsigned char)13] [12] [i_0] [i_0] [i_2])) - (38)))))))) % (((((/* implicit */_Bool) -160208614)) ? (((/* implicit */unsigned int) 700901046)) : (2968866069U)))))) : (((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 783827617811435679LL)) ? (((/* implicit */int) (unsigned short)6099)) : (((/* implicit */int) arr_31 [(unsigned short)2] [i_1] [3U] [i_1] [i_2] [3U])))), (((((/* implicit */int) (unsigned char)38)) >> (((((((/* implicit */int) arr_11 [(unsigned char)13] [(unsigned char)13] [12] [i_0] [i_0] [i_2])) - (38))) - (134)))))))) % (((((/* implicit */_Bool) -160208614)) ? (((/* implicit */unsigned int) 700901046)) : (2968866069U))))));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_17 [i_0] [13LL] [i_2] [i_0]))) | (((/* implicit */int) (unsigned char)63))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) var_0);
}
