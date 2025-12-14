/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65195
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
    var_12 ^= ((/* implicit */_Bool) var_5);
    var_13 = ((/* implicit */_Bool) -1986346897722521503LL);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)217)))), (min((-2147483647), (81098610)))));
                    arr_6 [i_0] [i_0] [i_2] = min((2147483647), (2147483647));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned char) var_5);
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((int) ((((/* implicit */_Bool) -2147483634)) ? (arr_2 [i_1] [i_1] [i_1 - 4]) : (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                        arr_12 [i_0 + 1] [i_1 + 1] [i_3] [i_4 + 4] = ((((((/* implicit */int) arr_8 [i_0])) < (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_3] [i_4])))) ? (((/* implicit */int) min((arr_5 [i_1 + 1] [i_1 - 3] [i_1 - 3]), (arr_5 [i_1] [i_1 - 1] [i_1 - 4])))) : (((/* implicit */int) arr_8 [8])));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_17 *= ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_3] [(_Bool)1] [i_4 + 2] [i_5])) : (((/* implicit */int) min((arr_3 [i_0 + 2] [i_0 - 2] [i_0 - 2]), (arr_3 [i_0 + 1] [i_0 - 3] [i_0 - 3]))))));
                            arr_16 [(signed char)0] [(signed char)8] [i_3] [i_1] [i_5] |= ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((2050608462) < (((/* implicit */int) arr_8 [i_5])))))) & (min((((/* implicit */long long int) (_Bool)1)), (-322369738345995897LL))))));
                            var_19 = ((/* implicit */int) min((var_19), (min((-2147483626), (((/* implicit */int) (_Bool)1))))));
                            arr_17 [i_0] [(unsigned char)3] [i_3] [i_4 + 4] [i_4 + 4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((2147483633), (min((((/* implicit */int) arr_8 [i_5])), (var_1)))))) - (max((var_3), (((/* implicit */long long int) ((-2147483647) | (((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [3] [(_Bool)1] = ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_3 [i_4 + 2] [i_4 + 2] [i_4 - 1])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_4 + 1] [i_4 + 1] [i_4 + 2])) : (((/* implicit */int) arr_3 [i_4 + 1] [i_4] [i_4 + 4]))))));
                            var_20 = 2018609574;
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_23 [(unsigned char)3] [i_1] [3LL] [i_1] [i_1] [i_1 - 1] = ((/* implicit */int) min((arr_22 [i_0] [i_1] [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 540431955284459520LL)) ? (arr_2 [4LL] [(_Bool)1] [i_3]) : (var_7)))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (!((_Bool)1)))))))));
                            var_21 = ((/* implicit */unsigned char) ((min((max((var_8), (var_3))), (((/* implicit */long long int) ((arr_18 [2] [2] [i_3]) | (((/* implicit */int) (signed char)-9))))))) <= ((~(var_8)))));
                            arr_24 [i_0] [i_1 - 2] [i_3] [(signed char)2] [i_7] = ((/* implicit */long long int) min(((unsigned char)0), (((/* implicit */unsigned char) var_9))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (((-(var_3))) | (((((arr_22 [i_0 - 3] [i_0 - 3] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_0 [i_0])))))) : (((long long int) (unsigned char)212))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (279242254109999319LL)))));
                            arr_28 [(unsigned char)12] [i_4 + 4] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-104)) ? (-1444528683377476909LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            var_23 = 262143LL;
                        }
                    }
                    for (long long int i_9 = 1; i_9 < 9; i_9 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) ((((((/* implicit */long long int) 338375665)) & (279242254109999321LL))) | (((/* implicit */long long int) ((/* implicit */int) ((-1073741824) != (min((((/* implicit */int) arr_29 [i_0] [i_1 - 3] [i_3] [i_9 + 4])), (var_5)))))))));
                        arr_33 [i_0] [i_1] [i_3] [i_9] = ((/* implicit */long long int) (-(min((arr_30 [i_0 - 3] [i_1 - 1] [i_1 - 2]), (322514274)))));
                    }
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
                    {
                        arr_39 [i_0] [i_10] [i_10] [3] [i_10] [2] = ((((/* implicit */_Bool) 2009027513)) ? (-279242254109999350LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (-1450862230) : (((/* implicit */int) var_2))))));
                        var_25 = ((/* implicit */_Bool) (~(2147483646)));
                    }
                    arr_40 [i_1] [i_1] |= ((int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_7 [i_0] [3] [i_10]))));
                    var_26 |= ((/* implicit */_Bool) ((signed char) arr_14 [i_1] [i_1]));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [8] [i_1 - 3] [i_10] [i_10] [i_0 - 2])) == (32767)));
                    arr_41 [i_10] [i_1] [i_1] = ((/* implicit */_Bool) var_5);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_44 [i_0] [i_0] [7] [i_0] = (-((~((~(var_6))))));
                    arr_45 [i_0] [i_0] [(signed char)1] [i_12] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) ((unsigned char) arr_38 [i_0] [2LL] [i_0 - 3] [i_0 - 3] [i_0] [i_0]))) | (((/* implicit */int) ((signed char) arr_9 [i_1 - 3] [i_12]))))));
                }
                var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [11] [i_0] [i_1 - 4])) ? (32767) : (43896034))) - (-322514274)))) == (var_8)));
                arr_46 [i_0 - 1] [i_1] [1LL] = ((/* implicit */int) var_9);
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 11; i_13 += 1) 
                {
                    var_29 = ((/* implicit */int) arr_8 [i_13]);
                    arr_49 [1] [i_1 - 3] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))) - (-279242254109999348LL))) | (((long long int) -279242254109999350LL))));
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 10; i_14 += 2) 
                    {
                        for (int i_15 = 3; i_15 < 12; i_15 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */int) (!(((-1212840938) == (((/* implicit */int) (signed char)120))))));
                                var_31 ^= ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0 - 1] [i_1]))));
                                arr_59 [i_0] [i_16] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)64))) - (-5335288956777428165LL))) != (arr_50 [i_1 - 3] [i_1])));
                            }
                        } 
                    } 
                }
                for (signed char i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    arr_62 [i_0] [i_0] [i_1 - 2] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (unsigned char)245)))));
                    var_33 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) -2147483624)))))), (((((/* implicit */int) (unsigned char)29)) | (((/* implicit */int) arr_26 [i_0 - 3] [i_0 - 3] [i_0] [i_0 + 1] [i_0]))))));
                    arr_63 [i_0 - 2] [i_1] [(unsigned char)6] = (!(((/* implicit */_Bool) var_6)));
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_6) == (((/* implicit */int) (unsigned char)89)))) ? (var_7) : (((arr_51 [i_0 + 2] [i_1] [i_1] [i_19]) ? (((/* implicit */int) var_9)) : (arr_36 [i_18] [(_Bool)0])))))) ? (((/* implicit */int) ((unsigned char) ((int) var_10)))) : (((/* implicit */int) ((signed char) (~(var_8)))))));
                        arr_66 [i_0] [i_0] [i_0] [i_19] = ((((/* implicit */_Bool) (~(279242254109999375LL)))) ? (((arr_50 [i_0 + 1] [i_0 - 1]) - (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0]))));
                    }
                    for (long long int i_20 = 1; i_20 < 12; i_20 += 4) 
                    {
                        var_35 = max((min((var_6), (((/* implicit */int) arr_70 [i_0 - 1] [i_0 + 1] [i_0 - 2])))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -1907437317)) ? (((/* implicit */int) arr_31 [i_1] [i_20])) : (((/* implicit */int) (_Bool)1)))))));
                        var_36 = ((1907437317) >= (((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (arr_53 [i_20] [(_Bool)1] [i_1] [12] [i_0]))))))));
                        arr_71 [i_0] [i_1] [(_Bool)1] [(signed char)6] = ((/* implicit */signed char) ((((int) arr_56 [i_20 + 1] [i_1] [i_1 - 2])) - (((/* implicit */int) arr_60 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 - 1]))));
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)109)))), (((/* implicit */int) ((unsigned char) var_10))))))));
                    }
                }
                for (long long int i_21 = 0; i_21 < 13; i_21 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_7) & (((/* implicit */int) arr_47 [i_21] [i_1 - 3] [i_1] [i_0 + 2])))) ^ (((/* implicit */int) (unsigned char)89))))) ? (((/* implicit */long long int) (((!(var_4))) ? (((var_0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) (unsigned char)178)) >> (((/* implicit */int) arr_52 [6] [i_1] [i_1] [i_1] [i_0 + 2]))))))) : (5879848420722189656LL)));
                    arr_74 [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) min((-279242254109999369LL), (((/* implicit */long long int) (_Bool)1))));
                    arr_75 [i_1 - 2] = ((/* implicit */_Bool) min((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)234))))))))));
                }
                for (long long int i_22 = 0; i_22 < 13; i_22 += 3) /* same iter space */
                {
                    arr_78 [i_22] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) - (arr_19 [i_1] [i_22] [i_1 + 1] [i_1] [i_0]))) > (((/* implicit */long long int) -1073741809)))))) > (var_10)));
                    /* LoopNest 2 */
                    for (signed char i_23 = 0; i_23 < 13; i_23 += 4) 
                    {
                        for (int i_24 = 0; i_24 < 13; i_24 += 2) 
                        {
                            {
                                arr_85 [i_1] [6] [4] [i_1] [i_1] [i_0] [i_0] |= min((2147483637), (((/* implicit */int) (_Bool)1)));
                                arr_86 [i_0] [i_1] [i_22] [i_22] [i_24] = (_Bool)1;
                                arr_87 [i_0] [i_0 - 1] = ((/* implicit */signed char) (unsigned char)80);
                                arr_88 [i_0 + 1] [i_0 + 1] [(_Bool)1] = ((/* implicit */int) ((signed char) min(((-(((/* implicit */int) var_0)))), (var_11))));
                            }
                        } 
                    } 
                    arr_89 [i_0] [i_1 + 1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(279242254109999388LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) <= (arr_77 [i_22] [i_0 - 1]))))) : (-1LL)));
                }
            }
        } 
    } 
}
