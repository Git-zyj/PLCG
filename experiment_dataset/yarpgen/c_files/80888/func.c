/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80888
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_5 [i_0] [(_Bool)0] [i_2] [i_2])))) ? (((((/* implicit */int) var_0)) + (((((/* implicit */int) (unsigned short)43992)) ^ (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (unsigned short)27937)) ? (((/* implicit */int) arr_2 [i_1 + 3])) : (((int) 5681665177373452081ULL))))));
                    var_17 ^= ((/* implicit */int) arr_3 [5ULL]);
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)89))))))) <= (13835058055282163712ULL)));
                        var_19 = ((/* implicit */int) ((unsigned char) (unsigned char)92));
                    }
                    for (unsigned short i_4 = 3; i_4 < 14; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-2246121650838207601LL) : (((/* implicit */long long int) ((/* implicit */int) (short)30)))))) ? (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)89)) ? (var_13) : (((/* implicit */int) var_9))))))))))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [(signed char)5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) var_11);
                            var_21 &= ((/* implicit */long long int) (signed char)-50);
                            var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((((/* implicit */int) var_14)) > (var_2)))))), (((((/* implicit */_Bool) arr_9 [i_4 + 2] [i_4 + 2] [13ULL] [i_4])) ? (((/* implicit */int) arr_9 [i_4 + 2] [i_4 + 2] [i_4 + 2] [2])) : (((/* implicit */int) (short)30))))));
                        }
                        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            arr_19 [i_1] [i_4 - 2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_7 [8U] [i_1 + 2] [i_2] [i_4])) - (((/* implicit */int) arr_7 [i_0] [i_4 - 2] [i_2] [i_4 - 3]))))));
                            arr_20 [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)2866))));
                            arr_21 [i_1] [7U] = ((/* implicit */unsigned char) var_13);
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 4) 
                        {
                            var_23 += ((/* implicit */signed char) var_13);
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) 273139533118104244ULL))));
                            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) 2268399674708716900LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1])))) < (((/* implicit */int) (unsigned char)143))));
                            arr_24 [i_7] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1172489145))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
                        {
                            arr_27 [i_1 + 1] [i_2] [i_1] [(unsigned char)3] = ((/* implicit */long long int) (!(((arr_5 [14ULL] [i_8] [14ULL] [i_8 + 1]) >= (arr_5 [i_8] [i_8] [i_8] [i_8 - 1])))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((arr_11 [i_0] [i_1] [i_2] [i_4 - 3] [i_8]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_0))))))))))));
                        }
                        for (int i_9 = 1; i_9 < 13; i_9 += 1) 
                        {
                            var_27 &= ((/* implicit */signed char) 2883300738U);
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2057194816604470674ULL)))) ? ((((_Bool)0) ? (((arr_12 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 3] [(short)14] [i_4]))) : (arr_11 [i_9] [i_4] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-4096)))))))))))));
                        }
                    }
                    for (unsigned char i_10 = 3; i_10 < 14; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned short)8] [i_10]))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_10 - 3] [i_1]))) : (((((/* implicit */_Bool) 540419244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29376))) : (273139533118104237ULL)))))));
                        var_30 = ((/* implicit */unsigned char) (unsigned short)36160);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_34 [i_0] [i_1] [i_2] [i_11] = ((/* implicit */signed char) 16699109297892972496ULL);
                        var_31 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) 12371177548667840824ULL)) ? (((/* implicit */unsigned long long int) 1073741823)) : (16699109297892972496ULL))), (12371177548667840826ULL)));
                    }
                    var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_30 [i_2] [i_2] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)40008)) > (((/* implicit */int) (unsigned short)40070))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2] [12LL] [i_0]))))))))) : (((((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25527))) : (var_4))) << (((/* implicit */int) ((((/* implicit */int) (signed char)48)) < (((/* implicit */int) (_Bool)1)))))))));
                }
                for (int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
                {
                    arr_38 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_12]))) + (18173604540591447372ULL))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-31))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35211))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((-(((/* implicit */int) (unsigned short)25521))))))));
                                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)164)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */signed char) (_Bool)0))))))));
                                var_35 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_39 [i_14] [i_13] [i_12] [i_1 - 2] [i_0])))), (((((/* implicit */_Bool) (-(6521477599158064595ULL)))) ? (20) : (((/* implicit */int) (unsigned short)21543))))));
                                arr_45 [9] [i_1] [i_14] [i_13] [13ULL] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (var_10)))), (max((((((/* implicit */_Bool) (unsigned char)218)) ? (3580736199315408685LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43992))))), (((/* implicit */long long int) -835220589))))));
                            }
                        } 
                    } 
                }
                for (int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                {
                    var_36 += ((/* implicit */long long int) min(((+(max((-835220589), (((/* implicit */int) (unsigned short)9042)))))), (((/* implicit */int) (unsigned short)35917))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) (unsigned short)21539)), (6489605129424690673LL)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 2286318788901372075LL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (_Bool)1))))), (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) (-((+(((/* implicit */int) var_5))))))))))));
                                arr_53 [i_1] = ((/* implicit */signed char) (~(min((1073741823U), (((/* implicit */unsigned int) (-(-1408634077))))))));
                            }
                        } 
                    } 
                    var_38 *= (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (134217727ULL)))))));
                    arr_54 [i_0] [i_1] = ((unsigned long long int) (~(((/* implicit */int) arr_13 [i_1] [i_1 + 3]))));
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(17598231865988199655ULL)))))) ? (min((((/* implicit */unsigned long long int) -1408634077)), (18446744073709551588ULL))) : (((/* implicit */unsigned long long int) -9223372036854775795LL)))))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (long long int i_20 = 0; i_20 < 16; i_20 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned char) var_15);
                                arr_63 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_49 [i_18])))) ? (max((max((((/* implicit */unsigned int) var_13)), (var_6))), (((/* implicit */unsigned int) (unsigned char)197)))) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) arr_17 [i_1 - 2] [i_1] [i_1 - 2])))))));
                                var_41 = ((/* implicit */int) arr_5 [i_0] [i_1 - 3] [i_1 - 3] [(signed char)0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)78)))) > (arr_11 [(_Bool)1] [i_1] [7LL] [i_21] [i_22])));
                                var_43 = ((((/* implicit */_Bool) var_12)) ? (168861301) : (((/* implicit */int) (unsigned short)25496)));
                                var_44 *= ((/* implicit */int) (!(arr_47 [i_1 - 3] [i_1 + 3] [i_1 - 3])));
                                var_45 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-121)), (3448617742U)));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */signed char) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) - (var_1))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [2] [i_18] [(signed char)6] [3] [3])) ? (((/* implicit */int) var_3)) : (var_15)))) ? (((/* implicit */int) arr_0 [i_0])) : ((((-2147483647 - 1)) + (((/* implicit */int) (_Bool)1)))))))));
                }
                var_47 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)37246)))) ? ((+(((/* implicit */int) arr_43 [i_0] [i_0] [i_0])))) : ((-(-1312579277)))));
            }
        } 
    } 
    var_48 = ((/* implicit */unsigned char) var_2);
    var_49 = ((/* implicit */int) min(((unsigned short)28263), (((/* implicit */unsigned short) ((signed char) var_14)))));
}
