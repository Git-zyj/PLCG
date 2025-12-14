/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67112
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
    var_16 = ((unsigned long long int) ((0ULL) > ((-(14ULL)))));
    var_17 = ((/* implicit */unsigned short) min((max((((((/* implicit */int) (signed char)124)) * (((/* implicit */int) var_15)))), (var_8))), (min((var_8), (((int) var_12))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 -= ((((((/* implicit */unsigned long long int) (~(var_8)))) | (min((((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])), (var_9))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)124)) ? (var_8) : (arr_3 [i_0] [i_1] [i_0])))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (unsigned short)16))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned long long int) (+(min((((/* implicit */unsigned int) (unsigned char)38)), (arr_6 [i_0] [i_1])))))))));
                    var_21 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-125)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), ((~(arr_6 [i_1] [i_2])))));
                }
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)218)) != (((/* implicit */int) (signed char)-12))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-9223372036854775807LL - 1LL)))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    arr_13 [i_4] = ((/* implicit */long long int) (((~(var_9))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12)))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-7LL)))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)38)) + (((/* implicit */int) (unsigned char)4)))))));
                    arr_14 [i_0] [8] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((var_13) << (((arr_12 [6ULL] [i_1] [i_0] [i_0]) + (311065303))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (3830391178U))))));
                }
                for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_25 *= ((/* implicit */signed char) -7LL);
                        var_26 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_5 + 2])) ? (var_0) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_5 + 1])))) + (2147483647))) >> (((((arr_11 [i_1]) ^ (((/* implicit */unsigned long long int) var_0)))) - (57731012319858813ULL)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_18 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_0])) : (arr_11 [i_6]))))));
                            arr_23 [i_0] [i_7] [i_7] [(short)1] [i_7] [i_0] [3LL] = ((/* implicit */short) -1659556711);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_8] [i_6] [1] [i_1] [i_8] = ((/* implicit */long long int) ((((var_10) + (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)218)), (-654848955)))))) >= (((/* implicit */long long int) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-20408)) : (((/* implicit */int) (signed char)10)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) < (var_4)))))))));
                            var_28 |= ((/* implicit */unsigned long long int) var_12);
                            var_29 ^= arr_5 [i_8] [i_1] [i_8];
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_9 [i_5 - 1]), (arr_9 [i_5 - 1])))) ? (((((/* implicit */_Bool) arr_9 [i_5 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) arr_9 [i_5 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6LL)) ? (3151489559684765123LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))))))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (-(-1732521873))))));
                        }
                        /* vectorizable */
                        for (short i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)8)))))));
                            var_33 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */int) var_6)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_10])))))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((2147483647) | (((/* implicit */int) var_14))))) < ((~(var_4)))));
                        }
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)237), (((/* implicit */unsigned char) (signed char)56))))))))));
                    }
                    var_36 = ((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_0] [i_0]);
                    arr_33 [2ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned char)138);
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 9; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        {
                            arr_38 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) (signed char)-42)) <= (((/* implicit */int) (unsigned char)195))));
                            arr_39 [i_12] [i_11] [i_12] [i_0] [i_0] &= ((/* implicit */long long int) (-(18446744073709551615ULL)));
                            var_37 += ((/* implicit */short) arr_11 [i_1]);
                            arr_40 [i_11] [i_1] [1ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) min(((unsigned char)255), ((unsigned char)38)));
                            var_38 ^= (((~(var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))));
                        }
                    } 
                } 
            }
        } 
    } 
}
