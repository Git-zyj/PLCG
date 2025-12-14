/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62443
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
    var_15 = ((/* implicit */long long int) var_14);
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))))));
    var_17 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (26ULL)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_4)) << (((var_5) + (3118393073612902099LL))))))));
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_3)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? (min((var_8), (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0]))))))) ? (((min((26ULL), (((/* implicit */unsigned long long int) (unsigned short)1023)))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_1])), (arr_3 [(signed char)8] [(signed char)8])))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-18750)), (arr_3 [i_0] [i_1])))))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_2])), (arr_0 [i_0])))), ((+(arr_3 [i_2] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) var_13)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */unsigned char) (-(arr_1 [i_3 - 1])));
                                arr_15 [i_0] [(unsigned short)1] = ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_8)), (18446744073709551596ULL)))))) ? (((/* implicit */unsigned long long int) ((((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_12))))) ? (arr_4 [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))) : (18446744073709551587ULL));
                                arr_16 [i_4] [2LL] [i_0] [i_0] [i_0] [i_0] = var_3;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_0] [i_0]);
                }
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_25 [i_0] [(short)6] [(unsigned short)8] = min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) 18446744073709551575ULL)) ? (((18446744073709551587ULL) >> (((255U) - (254U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) > (6291456))))))));
                                arr_26 [i_1] [i_1] [i_7] = ((/* implicit */_Bool) ((arr_23 [i_0] [i_1] [(_Bool)1] [i_6] [i_7] [i_5] [i_1]) + (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_7])))))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (short)24629)), (8019612326910643124LL)))) ? (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18446744073709551587ULL))) : (((/* implicit */unsigned long long int) (~(arr_3 [(unsigned char)4] [(unsigned char)4]))))))));
                    arr_27 [(_Bool)1] = ((/* implicit */signed char) 18446744073709551555ULL);
                    var_22 = ((/* implicit */long long int) var_4);
                }
                /* vectorizable */
                for (long long int i_8 = 3; i_8 < 9; i_8 += 4) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_17 [i_8 + 2] [i_8 + 1] [i_8 - 2] [i_8])) : (var_2)));
                    arr_30 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551587ULL)) ? (18446744073709551587ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6144))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    arr_34 [i_9] [i_9] [i_1] [8LL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) 4294967040U))) >> (((((/* implicit */int) (signed char)100)) - (82)))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((long long int) (+(415465465))));
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)127))))) : (18446744073709551586ULL)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967284U))), (((/* implicit */unsigned int) ((unsigned char) 29ULL)))))) : (29ULL)));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_10])), (0ULL))))));
                            arr_41 [6LL] [8U] [i_0] [i_0] [6LL] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2)))))) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) ((min((((/* implicit */long long int) (_Bool)1)), (-170171334509676201LL))) != (((/* implicit */long long int) arr_35 [i_1] [i_0])))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_14))) / (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_12), ((unsigned char)0)))) * (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (signed char)-40)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)126)) * (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -2147483637)))) : (((((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_0] [i_10] [i_11] [i_11])) ? (arr_6 [i_9] [i_9]) : (((/* implicit */unsigned long long int) 8103235881869166011LL))))))));
                            arr_42 [i_0] [i_0] [i_1] [i_9] [i_0] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)1] [i_10] [i_11]))) < (var_10))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [3] [i_9] [i_11]))) : (8103235881869166011LL))) : (((/* implicit */long long int) (~(4294967277U))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_33 [i_1] [i_10] [i_11])) < (((/* implicit */int) arr_33 [i_0] [i_1] [i_9]))))) : ((~(((((/* implicit */_Bool) arr_35 [i_0] [i_1])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_9))))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            arr_46 [i_0] [(_Bool)1] [i_9] [i_10] [(_Bool)1] [i_12] = ((/* implicit */unsigned int) (signed char)83);
                            arr_47 [i_12] [i_10] [i_1] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) * (min((((/* implicit */unsigned int) arr_24 [i_0] [7U])), (4294967295U)))))));
                        }
                        for (unsigned short i_13 = 1; i_13 < 10; i_13 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) min((arr_19 [i_1] [i_1] [(unsigned short)4] [(signed char)2]), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) (unsigned char)248)))))));
                            var_28 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)233)))) ? ((~(((/* implicit */int) (signed char)14)))) : (((/* implicit */int) arr_9 [i_0] [i_13 + 1] [i_13 + 1] [9LL] [0U])))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (signed char)94))))) : ((~(((/* implicit */int) var_3)))))));
                            var_29 = ((/* implicit */signed char) (((((~(18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), (arr_45 [5U] [i_1] [5U] [(signed char)7] [i_13 + 1]))))))) << (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1]))) - (arr_0 [i_9])))) % (((((/* implicit */_Bool) arr_6 [(unsigned short)2] [i_1])) ? (10ULL) : (18446744073642442752ULL)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (int i_15 = 3; i_15 < 7; i_15 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) (unsigned char)156);
                            arr_56 [i_0] [i_1] [i_14] [i_0] [i_14] = ((/* implicit */unsigned short) min((0U), (min((((((/* implicit */_Bool) 4546454649462257735LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) : (0U))), (1462446719U)))));
                            arr_57 [i_0] [i_14] [i_0] [(signed char)9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)32749)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) <= (0U)))) : (((/* implicit */int) (unsigned short)13224)))))));
                            var_31 ^= ((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)171)))), (min((min((arr_31 [i_1]), (((/* implicit */int) (short)29132)))), (arr_31 [i_15 + 4])))));
                            var_32 = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) (signed char)15)) ? (arr_0 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)29120)))) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_0]))))) % (((unsigned long long int) var_0))))));
            }
        } 
    } 
}
