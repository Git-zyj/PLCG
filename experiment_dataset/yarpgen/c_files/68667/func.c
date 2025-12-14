/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68667
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = (~(((((/* implicit */_Bool) -1444069437)) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) arr_2 [i_0])))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((int) arr_2 [i_0])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))));
    }
    var_19 = ((/* implicit */long long int) var_8);
    var_20 = ((/* implicit */unsigned char) max((var_13), (var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_3 = 2; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1157)) % (((/* implicit */int) (short)-1162))));
                    var_22 = ((/* implicit */signed char) arr_4 [i_2]);
                }
                for (short i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
                {
                    var_23 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1134))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(short)7] [i_2] [i_2])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_6))))) / (((((/* implicit */unsigned long long int) -1355645990)) - (576460752303423487ULL)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_24 ^= max((max((((/* implicit */int) arr_5 [i_5])), ((+(arr_9 [i_5] [i_4 + 1] [i_2]))))), (-195600593));
                        var_25 = ((/* implicit */short) var_4);
                    }
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [i_1] [i_4] [i_6] = ((/* implicit */unsigned long long int) arr_10 [i_1]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_7 = 3; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            arr_22 [4] [4] [i_4 - 1] [i_4 - 1] [i_1] = ((/* implicit */unsigned long long int) ((int) arr_16 [i_7 - 1] [i_4 + 1] [i_1 - 2]));
                            var_26 = ((/* implicit */unsigned long long int) var_0);
                            arr_23 [(signed char)6] [(signed char)6] &= ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (arr_4 [i_1])))) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_10 [(unsigned char)4])));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 3; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            arr_28 [(unsigned char)6] [i_2] [2LL] [i_6] [i_8] |= (+((+(((/* implicit */int) (unsigned char)225)))));
                            arr_29 [i_1] [i_1] [(signed char)12] [i_1] [i_8 + 1] = ((/* implicit */unsigned char) (short)32767);
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(signed char)5] [(signed char)5])) + (((/* implicit */int) arr_27 [i_1] [i_4] [(short)12]))))) ? (((-6326004308012109938LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-32753))))) : (((/* implicit */long long int) 2147483635)));
                        }
                        for (unsigned char i_9 = 3; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) max((var_28), (var_0)));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(2147483635)))) | (max((max((arr_24 [i_1] [i_1] [i_1] [i_1] [10]), (((/* implicit */unsigned long long int) 1355646006)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))));
                            var_30 = ((/* implicit */unsigned char) var_7);
                        }
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_31 = var_13;
                            arr_36 [i_1] [i_1 - 2] [i_1] [i_1 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11)))))))) ? ((+(((((/* implicit */_Bool) 64512)) ? (var_11) : (((/* implicit */long long int) var_16)))))) : (min((549755813887LL), (((/* implicit */long long int) (short)-32755))))));
                        }
                        var_32 = ((/* implicit */long long int) var_10);
                    }
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1742865234) : (191721861))));
                        var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */int) arr_5 [i_11])) % (((/* implicit */int) var_8)))) > (((((/* implicit */_Bool) arr_8 [i_1] [(signed char)11] [i_1])) ? (arr_19 [i_1] [3] [i_4] [i_1] [(signed char)13] [i_11]) : (((/* implicit */int) (short)1157)))))))));
                        /* LoopSeq 3 */
                        for (short i_12 = 1; i_12 < 13; i_12 += 3) 
                        {
                            var_35 = ((/* implicit */short) var_2);
                            arr_43 [i_1 + 2] [i_1 + 2] [i_4] [i_1] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_12] [5] [i_4] [i_2] [5] [5])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_31 [i_4 - 2] [i_4 - 2]), (arr_31 [i_4 - 2] [i_4 - 2]))))) : (((((/* implicit */long long int) ((int) var_6))) % (max((((/* implicit */long long int) var_12)), (var_7)))))));
                            var_36 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -549755813888LL)) > (arr_14 [i_1] [i_1] [i_1] [i_1])));
                            var_37 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned char) (unsigned char)9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1] [i_1]))) : ((+(arr_16 [i_1 - 1] [i_4 - 1] [i_12 + 1])))));
                        }
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (unsigned char)21))));
                            arr_47 [i_1] [i_2] [i_4] [12] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (arr_35 [(short)9] [i_13] [i_11] [i_4] [i_2] [i_1])))) ? (((/* implicit */long long int) (+(var_16)))) : (((((/* implicit */_Bool) var_2)) ? (6107099361385362094LL) : (((/* implicit */long long int) -64528))))));
                            arr_48 [i_1] [i_1] [(short)12] [i_11] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_4 + 1] [i_1 - 2] [i_1])) ? ((+(((/* implicit */int) (unsigned char)14)))) : (((var_5) % (((/* implicit */int) var_8))))));
                        }
                        for (int i_14 = 1; i_14 < 10; i_14 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) (~(((int) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_5 [i_1 + 3])))))));
                            var_40 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_27 [i_1 - 2] [i_4 - 2] [i_1])))), ((-(((/* implicit */int) arr_25 [i_1 - 2] [i_1 + 3] [i_4 + 1] [i_4 - 2] [i_11] [i_14 - 1]))))));
                            var_41 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) ((signed char) (short)-32764))) : ((-2147483647 - 1)))));
                        }
                    }
                }
                arr_51 [i_1] [(signed char)3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_14))))) ? ((-(arr_8 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) var_11))));
                var_42 = ((/* implicit */int) arr_25 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]);
            }
        } 
    } 
}
