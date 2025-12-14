/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79155
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
    var_10 = ((((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (var_4)))) ? (((/* implicit */int) ((_Bool) (~(4197639271759288413LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19427)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_0))))) ? (var_0) : (((/* implicit */int) var_1)))));
    var_11 = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((4197639271759288416LL) - (((/* implicit */long long int) var_5))))) - (max((((/* implicit */unsigned long long int) var_8)), (var_9))))));
    var_12 = ((/* implicit */int) max((var_12), (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) -4197639271759288414LL);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            var_13 ^= arr_7 [i_0] [i_1] [i_0];
                            var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4] [i_1] [i_0])) ? (((unsigned int) arr_2 [i_0])) : (arr_14 [i_4 + 3] [i_4] [i_3] [i_2 - 1] [i_1 - 1] [i_1])));
                            arr_15 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32748)) % (((/* implicit */int) (short)-32762))))) ? (arr_10 [i_2] [i_2] [i_2 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (2147483647) : (((/* implicit */int) var_8)))))));
                            arr_16 [i_2] [i_3] [i_1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_5 = 1; i_5 < 18; i_5 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) (short)912)))));
                            var_15 = ((/* implicit */unsigned int) (unsigned short)7);
                            arr_22 [i_2] = ((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_1 + 1] [i_0])) * ((~(18446744073709551601ULL))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_16 -= ((/* implicit */unsigned char) ((var_3) & (-4197639271759288417LL)));
                            arr_26 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_2))))));
                            arr_27 [(unsigned short)19] [i_3] [i_3] [i_3] [i_2] [i_3] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_10 [i_2] [i_2] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 - 1] [i_0] [i_3] [i_6] [i_2 + 1])) : (((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            arr_30 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)0))));
                            arr_31 [i_2] [(unsigned char)10] [(unsigned char)10] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */long long int) -2147483618)) : (-4197639271759288414LL)));
                        }
                    }
                    for (int i_8 = 3; i_8 < 17; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned long long int) arr_29 [i_1] [i_1] [i_1] [i_1 - 2] [i_1])))));
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                            arr_38 [i_2] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (long long int i_10 = 3; i_10 < 17; i_10 += 3) 
                        {
                            arr_42 [i_1] [i_8] [i_1] [i_1] [i_1] &= ((/* implicit */short) var_0);
                            arr_43 [i_8] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned int) arr_39 [i_0] [i_1 + 1] [i_1 + 1]));
                        }
                        for (unsigned char i_11 = 3; i_11 < 20; i_11 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(arr_14 [i_0] [i_1 + 1] [i_2] [i_8] [i_0] [i_0]))))));
                            var_20 = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                            var_21 &= ((/* implicit */unsigned short) ((unsigned char) 4018862212U));
                            arr_46 [i_0] [i_2] [i_2] [i_8] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) 4197639271759288438LL))));
                        }
                        for (unsigned char i_12 = 3; i_12 < 20; i_12 += 1) /* same iter space */
                        {
                            arr_51 [i_0] [i_0] [i_2] = ((/* implicit */short) ((signed char) var_5));
                            var_22 ^= ((/* implicit */unsigned int) (~(var_3)));
                            var_23 *= ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) * ((~(((/* implicit */int) (unsigned char)255))))));
                            arr_52 [i_12 - 1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_0] [i_12 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [13]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) % (1714913746U)))));
                            arr_53 [i_2] [i_8 + 4] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_2 - 1] [i_8 + 2] [3ULL] [i_2 - 1]))));
                        }
                        var_24 &= ((/* implicit */unsigned int) (~(var_9)));
                    }
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_49 [i_2 + 1] [i_2] [i_1 - 1] [i_2 + 1] [i_2 + 1] [i_1 - 1])) : (arr_29 [i_2 + 1] [i_2 + 1] [i_1 + 1] [i_2 + 1] [i_1 + 1])));
                }
            } 
        } 
        arr_54 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38795)) != (arr_40 [i_0] [i_0] [(short)2] [i_0] [(_Bool)1])));
    }
}
