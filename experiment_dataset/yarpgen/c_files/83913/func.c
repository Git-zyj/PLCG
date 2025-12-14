/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83913
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (arr_1 [i_0]))) / (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)5])) && (((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_0] [(short)1]))))));
                        var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2 - 1] [i_2 + 1]))));
                    }
                } 
            } 
            arr_16 [i_0] = ((/* implicit */short) (unsigned char)1);
            arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_14 [i_0] [i_0]))))));
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
        {
            arr_21 [5U] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_18 [i_0] [i_4] [i_4])))) && ((!(((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_0] [(short)1]))))));
            arr_22 [i_0] [i_4] = ((/* implicit */unsigned short) (+(((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0]))) : (var_4)))));
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)218))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_6])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)11803))))) : (((unsigned long long int) arr_10 [(_Bool)1]))));
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [i_5] [(short)9] [i_0]);
                    arr_29 [i_0] [i_0] [(unsigned char)1] [i_6] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_4] [(unsigned short)9] [i_6] [i_4]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_0] [(unsigned char)9])) ? (16072446862837380363ULL) : (((/* implicit */unsigned long long int) var_8))))));
                    arr_30 [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_0] [i_0] [i_0]));
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            arr_36 [i_8] [i_8] [0U] [i_0] [i_5] [i_4] [i_0] = ((((/* implicit */long long int) arr_27 [i_5] [(_Bool)1] [i_0])) >= (arr_7 [i_8] [i_4] [i_0]));
                            arr_37 [i_0] [i_4] [(unsigned char)0] [1LL] [i_0] = ((/* implicit */int) ((arr_10 [i_4]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 3; i_9 < 9; i_9 += 3) 
            {
                arr_42 [i_0] [i_4] [i_0] [(_Bool)1] = ((/* implicit */short) arr_11 [i_4] [i_4] [(unsigned short)3] [i_4]);
                /* LoopSeq 1 */
                for (unsigned short i_10 = 2; i_10 < 9; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 2; i_11 < 8; i_11 += 4) 
                    {
                        arr_49 [i_4] [i_4] [i_0] [i_4] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (arr_27 [i_0] [i_4] [i_0])))));
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_4])) && (((/* implicit */_Bool) (unsigned char)254)))))));
                        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)22629)) : (((/* implicit */int) (signed char)98)))))));
                        arr_51 [i_0] [9U] [i_9 + 1] [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_41 [i_10 + 1] [i_9] [i_4] [i_0])));
                    }
                    var_14 = ((/* implicit */short) (unsigned char)1);
                    arr_52 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_10])) ? (arr_9 [i_9 - 2] [i_9 - 2] [i_0] [i_10 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4)))));
                    arr_53 [i_10] [i_0] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0] [i_4] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)24454))));
                }
                var_15 = ((/* implicit */short) ((unsigned short) (((_Bool)1) ? (16072446862837380380ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_4]))))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_13 = 1; i_13 < 9; i_13 += 3) /* same iter space */
                {
                    arr_62 [i_0] [i_4] [i_0] [i_13 + 1] [(_Bool)1] [i_4] = ((/* implicit */signed char) var_0);
                    arr_63 [i_0] [i_0] [i_12] [i_13] = ((/* implicit */unsigned int) arr_46 [i_13] [i_4] [i_12] [i_0] [i_13]);
                    arr_64 [i_0] = ((/* implicit */_Bool) (((+(var_1))) & (((/* implicit */int) ((_Bool) arr_59 [0U] [0U] [i_12] [i_12] [i_12])))));
                }
                for (int i_14 = 1; i_14 < 9; i_14 += 3) /* same iter space */
                {
                    arr_69 [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_32 [i_14 + 1] [i_0] [i_0] [i_14]) : (arr_32 [i_14 + 1] [i_0] [i_0] [i_14 + 1])));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)19115)) : (var_1)))));
                }
                /* LoopNest 2 */
                for (short i_15 = 3; i_15 < 8; i_15 += 1) 
                {
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) var_3);
                            arr_75 [i_4] [i_4] [i_0] [i_16] = (+(arr_9 [i_0] [i_4] [i_0] [(_Bool)1]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_17 = 2; i_17 < 6; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 8; i_18 += 1) 
                    {
                        {
                            arr_82 [i_0] [i_4] [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */_Bool) var_0);
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4159135903U)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [0] [9ULL])) : (((/* implicit */int) (unsigned short)65528))))) ? (((/* implicit */int) (unsigned short)26239)) : (var_1));
                        }
                    } 
                } 
            }
        }
        for (short i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
        {
            arr_86 [i_0] = ((/* implicit */unsigned char) arr_1 [i_19]);
            var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) < (((unsigned int) var_1))));
            arr_87 [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_4));
            arr_88 [i_0] = arr_81 [i_0] [i_19] [4ULL] [i_0] [i_0] [i_0];
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_22 = 3; i_22 < 9; i_22 += 2) 
                        {
                            arr_96 [i_0] [i_21] [i_21] [i_19] [1LL] [i_19] [i_0] = ((signed char) arr_9 [i_0] [i_0] [i_0] [0ULL]);
                            arr_97 [i_20] [i_19] [i_20] [i_21] [i_22] [i_22] [i_0] = ((/* implicit */short) var_9);
                        }
                        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 1) 
                        {
                            arr_100 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) >= (var_4)));
                            arr_101 [i_0] [i_0] [i_0] [i_23] [i_23] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_95 [i_19] [i_19])))));
                        }
                        for (unsigned int i_24 = 0; i_24 < 10; i_24 += 3) 
                        {
                            arr_105 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -31)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_14 [i_0] [i_20]))));
                            arr_106 [i_0] [(unsigned short)3] = ((/* implicit */unsigned long long int) var_0);
                        }
                        arr_107 [i_0] [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                    }
                } 
            } 
        }
        arr_108 [i_0] [i_0] = ((/* implicit */int) ((var_3) - (var_8)));
        /* LoopNest 3 */
        for (unsigned short i_25 = 1; i_25 < 8; i_25 += 1) 
        {
            for (int i_26 = 0; i_26 < 10; i_26 += 1) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        arr_118 [i_0] [2U] [i_0] [i_0] [i_0] = ((/* implicit */int) 16072446862837380380ULL);
                        var_20 = ((/* implicit */short) arr_74 [i_25 + 2]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_28 = 0; i_28 < 18; i_28 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_7)))))));
        arr_121 [i_28] = arr_120 [i_28] [i_28];
    }
    for (short i_29 = 0; i_29 < 13; i_29 += 2) /* same iter space */
    {
        arr_126 [i_29] [i_29] = ((/* implicit */unsigned long long int) var_10);
        arr_127 [i_29] = ((/* implicit */signed char) ((((/* implicit */int) arr_119 [5U] [i_29])) * (((((/* implicit */_Bool) arr_119 [i_29] [i_29])) ? (((/* implicit */int) arr_119 [9ULL] [i_29])) : (((/* implicit */int) arr_119 [i_29] [i_29]))))));
        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
        arr_128 [i_29] [i_29] = ((/* implicit */unsigned short) arr_123 [i_29] [i_29]);
    }
    for (short i_30 = 0; i_30 < 13; i_30 += 2) /* same iter space */
    {
        arr_131 [i_30] [i_30] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
        arr_132 [i_30] = max((min((((/* implicit */unsigned long long int) (~(var_10)))), (arr_130 [i_30]))), (((/* implicit */unsigned long long int) arr_119 [i_30] [i_30])));
        /* LoopNest 2 */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            for (short i_32 = 0; i_32 < 13; i_32 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_136 [i_31] [i_30])) + (2147483647))) << (((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (68U)))))) : (((min((arr_125 [(unsigned short)10] [i_30]), (arr_125 [i_32] [i_31]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_133 [i_31])) ? (((/* implicit */int) (unsigned short)8191)) : (var_1)))) : (((((/* implicit */_Bool) arr_135 [1U] [i_31] [11U])) ? (((/* implicit */unsigned long long int) 1003203863U)) : (3037702807686888032ULL)))))));
                    var_24 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) arr_120 [i_31] [i_31])) ? (((/* implicit */int) arr_135 [i_32] [i_31] [i_32])) : (((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_137 [i_30] [i_30])), (var_0)))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) arr_136 [i_30] [i_30]))))))));
                    arr_138 [i_31] [i_31] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_122 [i_30])) ? (((/* implicit */unsigned long long int) arr_124 [i_32])) : (arr_130 [i_30]))));
                    /* LoopNest 2 */
                    for (long long int i_33 = 4; i_33 < 11; i_33 += 2) 
                    {
                        for (signed char i_34 = 0; i_34 < 13; i_34 += 1) 
                        {
                            {
                                arr_143 [i_31] [i_33] [i_32] [i_31] [i_31] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)39297))));
                                arr_144 [i_30] [i_31] [i_30] [i_31] [(signed char)4] = ((/* implicit */int) arr_124 [i_30]);
                            }
                        } 
                    } 
                    arr_145 [i_31] = ((/* implicit */long long int) ((((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_120 [i_30] [i_32]))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_122 [i_32])) ? (((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned char)228)))) : (((/* implicit */int) var_2)))))));
                }
            } 
        } 
    }
    var_25 = ((((unsigned long long int) var_9)) + (((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_4)))) ? (9723363890058751682ULL) : (((/* implicit */unsigned long long int) var_3)))));
}
