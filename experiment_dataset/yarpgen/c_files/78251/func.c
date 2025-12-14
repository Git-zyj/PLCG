/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78251
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_7), (((/* implicit */short) var_5))))), (var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_2]), (((/* implicit */short) (signed char)-54))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33758)) || (((/* implicit */_Bool) (unsigned char)255))))))))));
                            var_11 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14339370879113386149ULL)) ? (((/* implicit */int) (unsigned short)14663)) : (((/* implicit */int) (unsigned short)14663))));
                            var_12 = arr_8 [i_0] [i_1] [i_1] [i_3];
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                        {
                            arr_18 [i_5] [i_1] [i_2] [(signed char)13] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_6)) + (2147483647))) << (((arr_15 [i_1] [i_1 - 1] [(_Bool)1] [i_1 - 1] [(_Bool)1] [i_1 - 1]) - (17143081876535627205ULL)))));
                            var_13 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)56807));
                            var_14 -= ((/* implicit */signed char) var_5);
                        }
                        arr_19 [i_3] [i_1] [(unsigned char)12] [i_1] [16LL] = ((/* implicit */unsigned int) ((signed char) (unsigned short)14663));
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)-10573)))), (((/* implicit */int) (!((_Bool)0))))))) ? ((-(3077900158367442808ULL))) : (((/* implicit */unsigned long long int) (~(-1017465456545668189LL))))));
    }
    var_15 &= ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        for (int i_7 = 1; i_7 < 17; i_7 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 1; i_8 < 18; i_8 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) var_6);
                    /* LoopSeq 4 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [i_6 + 2] [i_6] [i_8 + 1] [(signed char)5] = ((/* implicit */_Bool) max((arr_22 [i_6]), (((/* implicit */short) arr_21 [i_6]))));
                        arr_36 [i_6] [i_7] [i_7] [i_6] [i_9] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (arr_31 [i_6] [i_8] [i_6] [i_6]))))));
                        arr_37 [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                    }
                    for (long long int i_10 = 3; i_10 < 19; i_10 += 1) 
                    {
                        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) min((arr_32 [i_10] [i_7]), (((/* implicit */unsigned long long int) arr_38 [(_Bool)1] [(_Bool)1])))))) ? (arr_39 [i_6 + 2] [i_7 + 3] [(signed char)4] [i_10 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)106), ((signed char)-96)))) || (((/* implicit */_Bool) arr_39 [i_10] [i_10] [(_Bool)1] [(_Bool)1]))))))));
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) & (arr_29 [i_10 - 1] [i_8 - 1] [i_6 + 2])))) ? (arr_29 [i_11] [i_7 + 2] [i_7 + 2]) : (max((arr_29 [i_8 - 1] [i_10 + 1] [i_10 + 1]), (((/* implicit */unsigned long long int) arr_38 [i_8 + 1] [(unsigned short)14]))))))));
                            var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)99)), (var_7)))) ? (arr_39 [i_6] [i_7 + 3] [4] [i_10 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)33767), (((/* implicit */unsigned short) (_Bool)1))))))))) ? ((+(arr_23 [i_6 + 2] [i_7 + 2]))) : (max((((((/* implicit */_Bool) 9539684444328251253ULL)) ? (var_8) : (arr_31 [i_7] [i_8 + 1] [10ULL] [(unsigned short)0]))), (478961911U)))));
                        }
                        for (signed char i_12 = 4; i_12 < 18; i_12 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) arr_21 [i_6]);
                            arr_45 [i_6 - 1] [18ULL] [i_6] [i_10 - 3] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2149)) ? (0U) : (2042403574U)));
                        }
                        var_21 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)(-127 - 1))), ((~(((/* implicit */int) (unsigned char)225))))))), ((+(13529719919022879460ULL)))));
                        arr_46 [i_6] = ((/* implicit */signed char) ((min((0U), (((/* implicit */unsigned int) (_Bool)1)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-103)), ((unsigned char)18)))))));
                    }
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_49 [i_6] [i_7] [i_8] [i_13] = ((/* implicit */unsigned long long int) var_8);
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_5))));
                        var_23 = ((/* implicit */unsigned short) arr_40 [i_13] [i_8 + 2] [i_7] [i_6]);
                        var_24 = ((/* implicit */long long int) 4294967287U);
                    }
                    for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned int) (unsigned char)255)), (3235038250U))));
                        var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)251)) < (((/* implicit */int) var_3))))), (((4294967295U) >> (((((/* implicit */int) var_2)) - (4944)))))));
                        arr_53 [(unsigned char)4] [i_7] [i_8 - 1] [(unsigned char)4] [16ULL] |= ((/* implicit */long long int) var_8);
                    }
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)1210), (((/* implicit */unsigned short) arr_21 [i_6]))))) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */signed char) (_Bool)1)))))) > (max((((/* implicit */unsigned int) 0)), (var_8)))))) : (((((/* implicit */int) (short)26215)) & (((/* implicit */int) arr_25 [i_6] [i_6 + 1] [i_8]))))));
                    /* LoopNest 2 */
                    for (short i_15 = 1; i_15 < 17; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(((/* implicit */int) max((arr_30 [(unsigned char)18]), (arr_30 [10])))))))));
                                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_6] [i_8] [i_8] [i_8] [4ULL])) ? (var_0) : (((/* implicit */long long int) (~(arr_48 [i_16] [(unsigned char)0] [i_15 + 3] [(unsigned char)0] [i_6])))))))));
                                arr_58 [i_6 + 2] [7U] [i_6] [i_6] [i_7 + 2] [i_6 + 2] = (i_6 % 2 == 0) ? (((/* implicit */unsigned char) ((((unsigned int) var_8)) << (((arr_42 [i_6] [i_15 + 1] [i_8 - 1] [i_7 - 1] [i_6]) - (1585645521U)))))) : (((/* implicit */unsigned char) ((((unsigned int) var_8)) << (((((arr_42 [i_6] [i_15 + 1] [i_8 - 1] [i_7 - 1] [i_6]) - (1585645521U))) - (27976298U))))));
                                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 4) 
                        {
                            {
                                arr_63 [i_6] [i_6] [i_6] [i_17] [i_18] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned long long int) 4277287957U)), (arr_61 [i_18] [i_8 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_6 + 2] [i_8 + 1])) * (((/* implicit */int) arr_26 [i_6 + 1] [i_8 + 1]))))) ^ (18446744073709551589ULL))))));
                                var_32 *= ((/* implicit */_Bool) (+(var_0)));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((unsigned char) arr_47 [i_8 + 1] [i_6 + 2] [i_6] [i_17] [i_6 + 2]))) : ((((_Bool)1) ? (((/* implicit */int) arr_47 [i_8 + 1] [i_6 + 2] [i_6] [i_8 + 1] [i_18])) : (((/* implicit */int) arr_47 [i_8 + 1] [i_6 + 2] [i_6] [i_6] [i_18]))))));
                            }
                        } 
                    } 
                }
                arr_64 [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_38 [i_6 + 2] [i_7]), (arr_40 [8ULL] [i_7] [i_6] [i_6 - 1])))) ? (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) arr_60 [i_6] [10U] [i_7] [i_6])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_2))))), (((arr_38 [i_6 + 2] [i_7 + 2]) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56794)))))))));
                arr_65 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) max((1039808175), (((/* implicit */int) (signed char)64))))) : (6642595371509510728ULL)));
                arr_66 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (13838811072640770002ULL) : (((/* implicit */unsigned long long int) -1624281545))))) ? (((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6 + 2]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_21 [i_6])))))));
                /* LoopSeq 1 */
                for (unsigned int i_19 = 3; i_19 < 18; i_19 += 1) 
                {
                    arr_69 [i_6 - 1] [(short)8] [i_6] [i_6 + 1] = var_3;
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) (unsigned short)5190)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_19 - 3] [i_19 - 2] [(unsigned short)16] [(short)12] [(short)12]))))))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned short) (+(5U)));
    var_36 = ((/* implicit */unsigned short) (_Bool)1);
}
