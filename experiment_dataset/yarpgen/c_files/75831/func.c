/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75831
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1438053723)))) ? (((/* implicit */unsigned long long int) ((int) ((7298105091854616433LL) | (((/* implicit */long long int) 1249436801)))))) : (7214157478925985620ULL)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */_Bool) var_2);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) > (arr_6 [i_3] [i_3] [i_3]))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((arr_7 [i_0] [i_0]) ? (arr_6 [i_1] [i_2] [i_3]) : (((/* implicit */int) arr_2 [i_0]))))))) ? ((-(max((var_4), (((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) var_6)));
                                arr_13 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (1438053723)));
                                var_14 = ((((/* implicit */_Bool) -1438053724)) ? (-1725068452) : (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((min((arr_2 [i_0 - 1]), ((unsigned char)142))), (((/* implicit */unsigned char) max((arr_12 [i_0 - 1] [i_0 - 1]), (arr_19 [i_7] [i_0] [i_5 - 1] [i_0] [i_0 + 1]))))));
                                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_0 [i_5 - 1]), (arr_0 [i_5 - 1]))))));
                                var_17 |= arr_16 [i_0] [i_0] [i_5] [i_6];
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 1130333939))));
                        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(8697072251717708553LL)))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_7))) >= (((((/* implicit */_Bool) -1249436801)) ? (var_1) : (var_4)))))) : (var_1)));
                    }
                    for (short i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                    {
                        arr_29 [i_0] [i_5] [i_1 - 2] [i_0] [i_0] = ((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) arr_8 [i_0 + 1] [i_1] [5LL] [5LL]))))) ? (((/* implicit */unsigned long long int) (-(((arr_19 [i_0 + 1] [i_0] [i_1] [i_5 - 1] [i_9]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)13428))))))) : ((((!(((/* implicit */_Bool) var_4)))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0 + 1] [i_1] [i_1 + 2])))));
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_9] [i_1 + 2] [i_0 - 1] [i_5 - 1])) + (((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_0 - 1] [i_5 - 1]))))) ? (((long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_9] [i_5])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_9)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) > (((long long int) arr_5 [i_0] [i_9]))))))));
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_1] [i_1 - 1] [(_Bool)1])), (arr_15 [i_9] [i_1] [i_5 - 1] [i_1]))))));
                        var_22 = (-(((/* implicit */int) var_2)));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 4; i_10 < 21; i_10 += 4) 
                        {
                            arr_32 [i_1 - 1] [i_0] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) ((min((((/* implicit */int) (short)-32243)), (arr_4 [i_0] [i_0] [i_5]))) >= (min((var_10), (((/* implicit */int) (unsigned char)72))))))) : (((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5])) ? (arr_16 [(unsigned char)7] [i_5 - 1] [i_5 - 1] [i_5]) : (arr_16 [i_5] [i_5 - 1] [i_5 - 1] [i_5])))));
                            arr_33 [i_0] [i_1] [i_5] [i_9] [i_9] = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_9] [i_5 - 1] [i_0 - 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_30 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0])) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0 - 1] [i_0] [i_5 - 1] [i_1 - 2]))))))));
                            var_23 = ((/* implicit */int) (!((_Bool)1)));
                            arr_34 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = (_Bool)1;
                        }
                        for (int i_11 = 2; i_11 < 20; i_11 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((_Bool) arr_25 [i_1] [i_1] [i_1] [i_9] [i_5 - 1])) ? (((int) -1249436815)) : (((((/* implicit */_Bool) 53602325)) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_0] [i_5 - 1])) : (((/* implicit */int) var_2))))));
                            arr_38 [i_0] [i_0] [i_1] [i_0] [i_1] = min((((/* implicit */int) ((unsigned short) arr_25 [i_1] [i_1] [i_5 - 1] [i_11 + 1] [(unsigned short)15]))), ((((((_Bool)0) ? (-881582416) : (((/* implicit */int) var_6)))) ^ ((~(-1438053724))))));
                            var_25 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_5 - 1] [i_9] [i_9])) || (((/* implicit */_Bool) arr_4 [i_5 - 1] [i_9] [i_5 - 1]))))) > ((-(arr_4 [i_5 - 1] [i_9] [i_11])))));
                        }
                        for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            arr_42 [i_0] [i_9] [i_5] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                            arr_43 [i_0] [i_0 + 1] [i_0] [(unsigned char)0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_27 [i_0] [i_9] [i_5] [i_12] [i_9] [(_Bool)1])) * (((/* implicit */int) (_Bool)0))))))) || (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))));
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_20 [i_0] [i_0 - 1] [i_1 - 2] [i_5 - 1] [i_12])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1438053723))))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_0 + 1] [i_1 + 1] [i_5 - 1] [i_0])) ? (arr_20 [i_12] [i_0 - 1] [i_1 + 2] [i_5 - 1] [i_9]) : (((/* implicit */int) var_3))))));
                            arr_44 [i_9] [(_Bool)1] [i_12] [i_9] [i_0] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_12 [i_5 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_0 - 1])) : (((/* implicit */int) arr_12 [i_5 - 1] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_15 [i_5 - 1] [2] [i_1] [8U])) ? (((((/* implicit */unsigned long long int) var_4)) * (arr_28 [(_Bool)1] [i_0] [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_12] [i_12] [5] [i_1 + 1])))))));
                            var_27 = ((/* implicit */_Bool) min((((arr_10 [i_0 + 1] [i_0 + 1] [i_5] [i_1] [i_5 - 1] [i_0]) | (arr_10 [i_0 - 1] [i_1] [(unsigned char)7] [i_9] [i_5 - 1] [i_0]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
                        }
                    }
                    for (short i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 1; i_14 < 21; i_14 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) -1960881102))));
                            var_29 = ((((/* implicit */_Bool) ((int) arr_18 [i_0] [i_14] [i_13] [i_13] [i_1 + 2] [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (427495301)))) && (((/* implicit */_Bool) max((1438053723), (arr_0 [i_0 + 1]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((-6229671107125397305LL), (1342045136476502418LL))))))));
                            var_30 = ((/* implicit */_Bool) ((max((arr_14 [i_0] [i_0 - 1] [i_1 - 2] [i_5 - 1]), (arr_14 [i_0] [i_0 + 1] [i_1 + 1] [i_5 - 1]))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 + 1] [i_5 - 1])) > (((/* implicit */int) arr_7 [i_0 - 1] [i_5 - 1]))))) : (((/* implicit */int) max((arr_7 [i_0 - 1] [i_5 - 1]), (arr_14 [i_0] [i_0 - 1] [i_1 - 1] [i_5 - 1]))))));
                            var_31 = ((/* implicit */_Bool) max((((/* implicit */int) ((arr_24 [i_0] [i_0] [i_13] [11]) >= (arr_45 [i_0] [i_0] [i_0] [i_0])))), (var_4)));
                            var_32 &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)28880)) ? (-1819409221) : (((/* implicit */int) (unsigned short)4480)))));
                        }
                        arr_50 [8] [8] [i_5] [i_13] [i_5] [i_5 - 1] &= ((((/* implicit */_Bool) ((((arr_1 [i_0]) >= (arr_0 [i_0]))) ? (((((/* implicit */_Bool) (unsigned short)63630)) ? (arr_15 [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 1912600261)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */int) min((arr_35 [i_0] [i_0] [i_1] [(unsigned short)4] [i_13]), (((/* implicit */unsigned char) arr_31 [i_13] [i_1 + 2] [i_5] [i_13]))))), (((((/* implicit */int) var_7)) - (((/* implicit */int) var_7)))))) : (((arr_31 [i_13] [i_0] [i_0 - 1] [i_13]) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_13] [i_0 - 1])))))));
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [13LL] [i_15])) ? (((/* implicit */int) (_Bool)1)) : ((~(1438053731)))));
                            var_34 = ((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_13]);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_35 = ((unsigned short) (~(((int) var_0))));
                            arr_55 [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */int) var_7)), (arr_6 [i_0 - 1] [i_1 + 2] [i_1 - 2]))), (((arr_6 [i_0 - 1] [i_1 + 2] [i_1 - 1]) ^ (arr_6 [i_0 - 1] [i_1 + 2] [i_1 + 2])))));
                            var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) 909329139))));
                            var_37 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_40 [i_0 + 1] [i_1 + 2])) : (arr_3 [i_0 + 1])))));
                        }
                        arr_56 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)4480);
                    }
                    for (short i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_9))), (((/* implicit */unsigned long long int) (-(arr_17 [i_0] [i_0] [i_5] [(unsigned short)14] [i_0]))))))));
                        var_39 *= ((/* implicit */long long int) ((((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_18 [i_0 - 1] [i_0 + 1] [i_0 - 1] [19] [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */int) (!(arr_7 [i_0 + 1] [i_0 - 1])))) : (max((((/* implicit */int) arr_18 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])), (arr_6 [i_0 - 1] [i_0 - 1] [(_Bool)1])))));
                    }
                    arr_60 [i_0] [i_0] [i_0] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_5 - 1])) ? (((max((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])), (-1438053725))) + (((arr_4 [i_0] [i_0] [i_5]) + (((/* implicit */int) arr_7 [i_0 + 1] [i_0])))))) : (max((arr_0 [i_0]), (((((/* implicit */_Bool) arr_4 [i_5] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (var_4)))))));
                }
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    arr_65 [4] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_37 [i_0 - 1] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 22; i_19 += 2) 
                    {
                        for (int i_20 = 0; i_20 < 23; i_20 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) + (min((((/* implicit */unsigned int) var_3)), (1400348821U)))));
                                var_41 = (+((+(var_1))));
                            }
                        } 
                    } 
                }
                arr_73 [i_0] = (~(((/* implicit */int) var_7)));
            }
        } 
    } 
}
