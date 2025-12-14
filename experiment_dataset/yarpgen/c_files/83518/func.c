/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83518
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
    var_10 = ((/* implicit */signed char) var_8);
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (min(((~(var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (signed char)127)), ((short)32767)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) min(((+(arr_3 [i_0]))), ((-(max((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_8)))))));
                var_13 ^= ((/* implicit */unsigned short) var_0);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((int) arr_5 [i_3] [1U] [1U]));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_6))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min((arr_2 [i_4 - 2]), (max(((unsigned char)97), (((/* implicit */unsigned char) (signed char)-1))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 1; i_5 < 7; i_5 += 1) 
                        {
                            var_16 *= var_7;
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_2])) - (((/* implicit */int) (signed char)127)))))));
                            arr_17 [i_0] [i_0] [(unsigned short)7] [(unsigned short)7] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)-17943))) ? (((/* implicit */int) ((short) arr_3 [i_5]))) : (((/* implicit */int) (unsigned char)45)))))));
                            arr_18 [i_4] [i_1] [0ULL] |= ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_5 [i_5 - 1] [i_5 - 1] [i_4 - 2]), (arr_5 [i_5] [i_5 + 3] [i_4 - 2]))))));
                            var_18 += ((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_2] [i_0] [i_4] [i_5]);
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_23 [2] [2] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)255)), (((((((/* implicit */_Bool) arr_6 [6] [5U] [i_0] [6])) ? (1461820653) : (((/* implicit */int) var_5)))) % (((((/* implicit */_Bool) arr_3 [i_0])) ? (673158522) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_4] [i_4] [i_6]))))))));
                            var_19 = ((/* implicit */int) (unsigned char)120);
                            var_20 -= ((int) max((arr_2 [i_4 - 2]), (((/* implicit */unsigned char) arr_20 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6] [i_4 - 2]))));
                        }
                        var_21 = ((/* implicit */unsigned char) arr_7 [8LL] [i_2] [i_1] [(short)6]);
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        var_22 -= ((/* implicit */unsigned char) var_2);
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_1] [i_0]);
                        var_23 = ((/* implicit */_Bool) arr_2 [i_0]);
                        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_5)) ? ((~(arr_22 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_16 [i_7] [i_0] [i_2] [i_0] [i_7] [i_7])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) arr_2 [i_2])))))));
                        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_7] [i_7] [i_7] [i_7]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0])) * (((/* implicit */int) arr_7 [4U] [i_1] [i_2] [i_7]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18271561200193326306ULL)) ? (((/* implicit */int) arr_5 [(signed char)5] [i_1] [i_1])) : (((/* implicit */int) arr_15 [0LL] [0LL]))))) : (2651489196U)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((-2375394974873748214LL), (((/* implicit */long long int) -1461820654))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((unsigned int) max((((/* implicit */unsigned short) arr_20 [i_0] [1ULL] [i_1] [i_2] [i_2] [i_8])), (var_7)))))))));
                        var_27 = ((/* implicit */int) max((var_27), (min((((/* implicit */int) (unsigned char)50)), (-1461820653)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 7; i_9 += 2) 
                    {
                        for (int i_10 = 3; i_10 < 8; i_10 += 3) 
                        {
                            {
                                var_28 &= ((/* implicit */signed char) var_8);
                                var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)0)))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_19 [i_0] [i_1] [(unsigned short)8] [i_1] [i_2]))));
                }
                for (unsigned int i_11 = 1; i_11 < 6; i_11 += 4) 
                {
                    var_31 = ((/* implicit */unsigned int) ((max((arr_12 [i_0] [i_1] [i_0] [i_11 + 4]), (arr_12 [i_0] [i_1] [i_11] [i_11 + 3]))) << (((((arr_12 [i_0] [i_1] [i_1] [i_11 + 4]) << (((arr_12 [i_0] [(unsigned short)4] [(unsigned char)2] [i_11 + 3]) - (6878662275035024375ULL))))) - (1657324662872342474ULL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (signed char)-127))));
                        arr_42 [i_0] [4ULL] [(short)0] [i_11 + 3] [(short)4] &= ((/* implicit */unsigned long long int) ((short) arr_16 [i_12] [(short)6] [i_0] [i_1] [i_0] [i_0]));
                        var_33 = arr_22 [i_0] [i_11 + 4];
                    }
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned int) arr_39 [i_0]);
                        arr_45 [i_0] [(unsigned char)6] [i_1] [i_0] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2139095040)), (arr_40 [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_11 + 1] [i_11 - 1] [i_11 + 3] [i_11 + 3] [i_11] [i_11] [i_11 + 4])) - (((/* implicit */int) arr_7 [i_11 - 1] [8] [i_0] [i_0]))))) : (arr_38 [i_0] [i_0] [(signed char)0] [(unsigned short)8])));
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            arr_49 [i_0] [i_0] [i_11 + 2] [i_13] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_0] [(short)2]))));
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (((~(((/* implicit */int) arr_48 [i_11] [i_11] [i_11] [i_11 + 2] [4LL] [i_11])))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [8U] [i_11 + 3] [i_11] [i_11])) || (((/* implicit */_Bool) arr_48 [i_11] [i_11] [(short)6] [i_11 - 1] [i_11] [i_11]))))))))));
                        }
                        for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            arr_53 [i_0] [i_1] [i_0] [i_13] [i_1] = ((/* implicit */unsigned short) arr_51 [i_11 + 4] [i_0] [i_11 + 3] [3LL]);
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_15])) != (((/* implicit */int) var_2))))) : ((~(((/* implicit */int) var_0))))))) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) ((unsigned char) var_0)))));
                            arr_54 [i_15] [i_0] [i_11] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max((1461820653), (((/* implicit */int) (short)30720))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            arr_57 [9ULL] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6))));
                            var_37 = ((/* implicit */int) var_4);
                            arr_58 [i_0] [i_16] [4ULL] [i_0] [(unsigned char)8] |= ((/* implicit */unsigned int) arr_32 [i_16] [i_0] [(unsigned char)8] [i_11] [i_1] [i_0]);
                        }
                        for (signed char i_17 = 2; i_17 < 6; i_17 += 2) 
                        {
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) min((18289815168712888885ULL), (((/* implicit */unsigned long long int) (short)-31784)))))));
                            var_39 = ((/* implicit */short) max((((int) (!(((/* implicit */_Bool) (unsigned short)3584))))), ((~(((/* implicit */int) arr_10 [i_0] [i_11 + 2] [i_13] [i_17 + 1]))))));
                            arr_62 [i_0] [i_17] |= ((/* implicit */short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((short) arr_31 [i_0] [i_17] [i_11] [i_13] [i_17]))) : (1843783811))), (((/* implicit */int) (unsigned char)136))));
                        }
                        for (int i_18 = 0; i_18 < 10; i_18 += 2) 
                        {
                            arr_66 [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_11] [i_18])))));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_55 [i_1] [i_13] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) < (2147483626))))))) ? (min((((((/* implicit */unsigned long long int) arr_64 [i_0] [i_0] [i_0] [i_0] [i_0])) / (14276554107726193089ULL))), (((/* implicit */unsigned long long int) (signed char)-65)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((((((/* implicit */int) var_3)) + (25679))) - (24)))))) % (max((var_8), (arr_24 [i_0] [i_1] [i_0] [i_1] [i_18])))))));
                            var_41 -= ((/* implicit */signed char) ((unsigned short) arr_61 [i_11 + 2] [i_11 + 1] [i_18] [i_13]));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40846)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    var_43 &= ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_0]))))))));
                    var_44 -= ((/* implicit */signed char) 9304105865663255600ULL);
                }
                for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    var_45 = ((/* implicit */unsigned int) ((((unsigned long long int) var_5)) + (0ULL)));
                    var_46 = ((/* implicit */short) arr_41 [i_19] [i_19] [i_1] [i_0]);
                }
                var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0)))))));
                var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((((/* implicit */_Bool) var_3)) ? (var_6) : (var_6))) ^ (((/* implicit */unsigned int) ((int) var_7)))))));
    var_50 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
