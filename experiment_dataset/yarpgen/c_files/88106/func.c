/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88106
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    arr_8 [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_2 + 2] [i_0])) || (((/* implicit */_Bool) (signed char)-107)))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) min(((((~(var_4))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 2] [(_Bool)1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)31360)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_0 [i_1]) >> (((/* implicit */int) arr_3 [i_0]))))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    /* LoopSeq 3 */
                    for (short i_4 = 4; i_4 < 20; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            arr_22 [i_3] [(_Bool)1] [(unsigned char)8] [8U] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_5 + 1] [i_5 - 1] [i_4 + 2] [i_4 - 2]))));
                            arr_23 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((arr_2 [i_4 + 1]) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_2 [i_4 + 2]))));
                            arr_24 [i_5] [i_1] = ((/* implicit */unsigned short) (short)11483);
                            var_11 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-73)) + (2147483647))) << (((/* implicit */int) (unsigned short)0))));
                            var_12 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_1)) & (4294967295U)));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_28 [(signed char)1] [i_1] [i_3] [i_4] [i_6] = ((/* implicit */short) ((long long int) (unsigned short)56484));
                            arr_29 [i_6] [i_4] [i_3] [i_1] [20U] = ((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 - 4] [i_4] [i_4 + 2]);
                            arr_30 [i_0] [(unsigned short)8] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) 829811486U)) ? (arr_1 [i_4 - 3]) : (((/* implicit */unsigned long long int) 2305834213120671744LL))));
                            arr_31 [(_Bool)1] [(signed char)8] [i_1] [i_3] [i_4] [i_6] |= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)13714)) >= (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_13 = ((/* implicit */short) var_5);
                        arr_32 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)9052)) ? (arr_11 [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_3]) : (((/* implicit */long long int) var_5))));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        var_14 -= ((/* implicit */unsigned short) var_0);
                        arr_35 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_0] [i_3])) + (((/* implicit */int) arr_26 [i_0] [i_1]))));
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        arr_39 [i_1] [13LL] = ((/* implicit */long long int) ((short) arr_11 [i_0] [i_0] [(signed char)12] [(signed char)7]));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            arr_42 [i_0] [(short)14] [i_0] [i_0] [i_3] [i_9] [i_9 - 1] = ((/* implicit */short) ((long long int) var_4));
                            var_15 = ((/* implicit */unsigned short) (~(-2305834213120671745LL)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            arr_46 [15] [i_1] [i_3] [i_10] [i_10] [i_3] [i_1] = ((/* implicit */short) (+(var_2)));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_10] [i_0] [i_10] [i_0] [i_10 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-1))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) 2305834213120671744LL);
                            arr_50 [i_11] [i_8] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_37 [i_11] [i_8] [(unsigned short)9] [i_0]);
                        }
                        arr_51 [i_0] [i_3] [i_8] = ((/* implicit */short) (((+(var_8))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))));
                    }
                    arr_52 [(unsigned char)11] [i_1] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_34 [17U] [i_1] [i_1] [i_0]))));
                    arr_53 [(short)6] [i_1] [i_3] = ((/* implicit */long long int) (!((_Bool)1)));
                }
                for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                {
                    arr_57 [i_12] [i_1] [i_1] [i_12] = ((/* implicit */signed char) max((((/* implicit */long long int) min((arr_14 [i_12] [(_Bool)1] [i_1] [(short)17]), (arr_19 [(_Bool)1] [i_0] [i_0] [i_1] [i_12] [i_12])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13714)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_19 [i_0] [i_1] [i_1] [i_1] [i_12] [i_1]))))) : (var_8)))));
                    arr_58 [i_12] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_7)) ? (((4375260226896493574LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))))) : (min((((/* implicit */long long int) var_10)), (var_9))))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)-73)), (0))))));
                    var_18 ^= ((/* implicit */int) (+(max((((/* implicit */unsigned int) (short)0)), (1141504187U)))));
                }
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) min(((signed char)92), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1276208985)))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((long long int) arr_55 [i_1] [i_1] [19U] [i_1])))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) (short)-30084)) ? (((((/* implicit */_Bool) 5)) ? (var_1) : (arr_10 [i_13] [i_1] [i_0]))) : (((/* implicit */int) ((var_7) < (var_0))))))) ? (((((/* implicit */_Bool) ((var_3) % (var_4)))) ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_13] [i_13] [i_1] [3LL]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_36 [i_0] [i_0] [i_1] [i_13])), (max((((/* implicit */int) arr_34 [(_Bool)1] [i_1] [i_1] [i_13])), (var_5))))))));
                    arr_61 [i_0] [i_0] [10LL] = ((/* implicit */int) (((+(12907385516602007206ULL))) + (((/* implicit */unsigned long long int) min((var_2), (var_2))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (~((+(min((var_4), (var_3)))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_15] [i_14] [i_13] [i_1]), (arr_4 [i_15] [i_14] [i_13] [i_0])))) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : (max((13), (((/* implicit */int) (unsigned short)13714))))));
                            }
                        } 
                    } 
                }
                arr_69 [i_0] [i_1] [i_0] &= ((/* implicit */short) arr_37 [i_0] [i_0] [i_0] [i_1]);
                var_24 = ((/* implicit */unsigned short) (unsigned char)89);
                var_25 = ((/* implicit */int) max((var_25), (((((((/* implicit */unsigned int) min((13), (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))))) >= (arr_41 [i_1] [i_1] [i_0] [i_1] [i_0]))) ? (((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0] [i_0]), (arr_4 [(_Bool)1] [i_0] [i_1] [(short)17])))) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                var_26 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((((/* implicit */int) (signed char)-7)) % (((/* implicit */int) arr_60 [i_0])))) : (var_5))), (((/* implicit */int) var_10))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) var_6);
    var_28 = var_9;
}
