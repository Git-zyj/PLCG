/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5570
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
    var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (0ULL) : (var_8))), (4380942240861966202ULL)));
    var_20 = -9223372036854775797LL;
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)61440)) ? (14065801832847585414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80)))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (((!(((/* implicit */_Bool) 4039252165550166660ULL)))) ? (arr_1 [i_0 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15322))))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)42)) >> (((((/* implicit */int) (unsigned short)65523)) - (65501))))) - (((((/* implicit */int) (unsigned short)54292)) * (((/* implicit */int) arr_0 [i_0])))))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2]))))))));
        arr_3 [i_0] = (!((_Bool)1));
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_24 = ((/* implicit */short) var_10);
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_11 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)54292)), (2017612633061982208LL)))) ? (min((((((/* implicit */_Bool) -34032750)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (4294967295U))), (((/* implicit */unsigned int) (unsigned char)1)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_1 - 2])))))));
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1133557942), (((/* implicit */int) min(((unsigned short)15322), (((/* implicit */unsigned short) (unsigned char)1)))))))) ? (min((-1133557942), (((/* implicit */int) min(((_Bool)0), (arr_0 [(unsigned char)3])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2])))))));
                    var_26 = ((/* implicit */short) arr_5 [i_3]);
                    var_27 = ((/* implicit */long long int) arr_12 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 2] [i_3 - 1]);
                    var_28 = ((/* implicit */_Bool) max((576460752303423456LL), ((~(((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)12)))))))));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (14065801832847585414ULL)))) ? (2075786795497217455LL) : (((/* implicit */long long int) -1301171369)))))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    arr_19 [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) arr_13 [i_1] [i_2] [i_3] [i_3]);
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1759774560)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 - 1] [i_5] [i_3] [i_5] [i_3 - 1] [i_1 + 1])))))) : (min((8439488529345533674ULL), (((/* implicit */unsigned long long int) arr_12 [i_3 - 1] [(signed char)10] [i_5 - 1] [i_5] [i_5] [i_5]))))));
                    var_31 = ((/* implicit */long long int) min(((~(1130534369U))), (((/* implicit */unsigned int) (short)0))));
                    var_32 &= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12))) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((unsigned long long int) 4380942240861966202ULL)) : (((/* implicit */unsigned long long int) ((((var_16) + (9223372036854775807LL))) >> (((var_12) + (76447856233974129LL)))))))) : (((/* implicit */unsigned long long int) 9223372036854775799LL))));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (18446744073705357312ULL)));
                }
                for (unsigned char i_6 = 3; i_6 < 15; i_6 += 1) 
                {
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (~((((!(((/* implicit */_Bool) 0LL)))) ? (((4380942240861966202ULL) % (((/* implicit */unsigned long long int) arr_14 [i_1] [i_2] [i_2] [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))))))))));
                    arr_24 [i_1] [i_3] [i_1 - 3] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)16383)) - (((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_3] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)16383))))))));
                    arr_25 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1 - 3] [i_3 - 1] [i_6 - 2])) ? (((((/* implicit */_Bool) 520093696)) ? (14065801832847585413ULL) : (((/* implicit */unsigned long long int) 9223372036854775799LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))))));
                }
                arr_26 [i_3] = ((/* implicit */short) 0LL);
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (unsigned int i_8 = 4; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)6555)))))))) % (((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) ^ (((/* implicit */int) arr_21 [i_1] [i_1 - 3] [i_8 - 3] [i_8]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_9 = 2; i_9 < 15; i_9 += 1) 
                        {
                            arr_36 [i_8] [i_8] [i_2] [i_7] [i_2] [i_8] = ((/* implicit */unsigned char) (~((~(var_11)))));
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((unsigned char) 4099285929U)))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) << (((var_8) - (3942220895650395515ULL)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_38 [i_1 + 2] [i_10] [i_8 - 1] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8 - 2] [i_2] [i_7])))))))))));
                            var_38 = (!(((/* implicit */_Bool) -1LL)));
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) 14065801832847585421ULL))));
                        }
                    }
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((min((arr_41 [i_1 + 2] [i_1 + 1] [i_1 - 2]), (arr_41 [i_1 + 1] [i_1 - 3] [i_1]))) & (((/* implicit */int) arr_21 [i_1] [i_1 - 1] [i_1 + 1] [i_1])))))));
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (arr_13 [i_1 + 1] [i_1 + 1] [14LL] [i_11])));
        }
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                {
                    var_42 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)63)), ((short)15080)));
                    arr_49 [i_1] = ((/* implicit */long long int) ((unsigned char) 1130534369U));
                    arr_50 [i_1] [i_1] [i_1 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1 - 2] [i_12] [i_13] [6] [6] [(signed char)6]))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)1] [i_13])))));
                    arr_51 [10LL] [10LL] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_30 [i_1 - 3] [i_1 - 2]), (((/* implicit */short) arr_10 [i_1 + 1] [1U]))))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_12])), (arr_4 [i_1 - 3] [i_1 - 1]))) : (((/* implicit */unsigned long long int) (-(arr_43 [i_1] [i_1 + 1]))))));
                }
            } 
        } 
        arr_52 [i_1] = ((/* implicit */int) 0U);
    }
    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) 
    {
        arr_55 [i_14] [(short)2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)255)), (arr_54 [i_14] [i_14])));
        arr_56 [21LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
        arr_57 [i_14] [i_14] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (arr_53 [i_14]) : (arr_53 [i_14])))));
        arr_58 [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_54 [i_14] [i_14])) + (arr_53 [i_14]))) + (((/* implicit */unsigned long long int) max((8796090925056LL), (9223372036854775799LL))))));
    }
}
