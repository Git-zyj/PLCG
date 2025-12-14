/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72668
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
    var_16 = ((/* implicit */unsigned short) (-(((min((var_6), (((/* implicit */long long int) var_4)))) / (var_3)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((62916974) | (((/* implicit */int) (short)-32)))) : (((/* implicit */int) var_10))));
            var_17 = ((/* implicit */long long int) var_1);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 4294967295U)))));
                var_19 = ((/* implicit */unsigned char) ((0U) << (0U)));
            }
            arr_10 [i_1] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0 - 1] [8LL] [i_1]);
        }
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 3; i_4 < 10; i_4 += 4) /* same iter space */
            {
                var_20 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)(-32767 - 1)))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 2; i_5 < 7; i_5 += 2) 
                {
                    arr_20 [i_5] [i_4] [i_5] [i_5] |= ((/* implicit */long long int) arr_12 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) arr_22 [i_3] [i_5 + 4] [(signed char)0] [i_3] [i_3]);
                        var_22 &= ((/* implicit */signed char) ((var_12) ? (arr_5 [i_0] [i_3] [i_5 + 2]) : (((/* implicit */unsigned int) arr_17 [i_3] [i_5] [i_3] [(unsigned short)8] [i_3]))));
                        var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (arr_13 [i_3] [i_5 + 4])))));
                        var_24 = ((/* implicit */unsigned char) var_6);
                        var_25 = ((/* implicit */int) max((var_25), ((~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_12)), (arr_16 [i_0] [i_5] [4ULL] [i_5])))) && (((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (unsigned short)4)))))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_15);
                        arr_28 [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((arr_11 [i_0] [i_3]) >= (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_9 [5LL])) : (var_3))), (var_15)))));
                        arr_29 [i_0] [i_3] [i_5 - 1] [8] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_12);
                    }
                    arr_30 [i_0] [i_3] [9U] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_4) & (((/* implicit */int) arr_26 [9LL] [i_5 + 2] [i_3] [i_3] [i_5 - 2] [i_0])))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_25 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])) < (var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_4] [i_8] [i_3])))))));
                    arr_33 [i_3] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_2 [i_0 - 2]))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned int) arr_15 [2] [i_3] [i_3] [i_3]);
                    arr_37 [i_3] [i_3] = arr_25 [i_0 - 2] [i_3] [3LL] [i_0 - 2] [i_4 - 2] [0ULL] [i_9];
                }
            }
            for (unsigned int i_10 = 3; i_10 < 10; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_28 = ((/* implicit */short) arr_16 [i_10 - 1] [i_3] [i_10] [i_11]);
                    var_29 += ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_13 [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10 - 2])))))), (var_5)))));
                }
                /* LoopSeq 4 */
                for (signed char i_12 = 4; i_12 < 10; i_12 += 2) 
                {
                    var_30 = ((/* implicit */signed char) arr_4 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3]);
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_11))));
                    arr_44 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_14))))))), (var_9)));
                }
                for (short i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                {
                    arr_47 [i_3] = ((/* implicit */unsigned char) ((int) ((unsigned short) 242721516)));
                    arr_48 [i_3] [i_0] [i_3] [i_3] [i_10] [i_13] = ((/* implicit */unsigned short) ((unsigned int) 3302329168U));
                    arr_49 [i_3] = ((unsigned int) min((((/* implicit */unsigned int) (unsigned short)25268)), (992638135U)));
                    /* LoopSeq 3 */
                    for (int i_14 = 2; i_14 < 9; i_14 += 4) /* same iter space */
                    {
                        var_32 -= ((/* implicit */unsigned long long int) arr_17 [0LL] [i_14] [i_0] [i_0] [i_0]);
                        arr_52 [i_3] [i_10 + 1] [i_3] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_7 [i_3] [i_0 + 1] [i_0 + 1] [i_14 - 2]))))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) var_10))));
                    }
                    for (int i_15 = 2; i_15 < 9; i_15 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) var_12);
                        arr_55 [i_3] [i_3] [i_10] [i_13] [i_10] = ((((/* implicit */_Bool) max((arr_9 [i_0 - 1]), (arr_9 [i_0 + 1])))) ? (var_13) : (arr_9 [i_0 - 2]));
                        arr_56 [7LL] [i_3] = ((/* implicit */short) ((_Bool) var_0));
                    }
                    for (unsigned int i_16 = 2; i_16 < 8; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)2))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (var_6))) << (((var_4) - (766968439)))));
                        arr_59 [i_3] [i_3] [i_10] [i_10 - 1] [i_13] [i_3] = ((/* implicit */unsigned long long int) var_5);
                    }
                    arr_60 [i_3] = ((/* implicit */unsigned char) ((((long long int) (~(((/* implicit */int) arr_50 [4] [i_10 - 2] [i_3] [i_0] [i_0]))))) | (((/* implicit */long long int) ((((var_4) & (((/* implicit */int) var_12)))) | (arr_17 [i_0] [i_3] [i_10] [i_13] [i_3]))))));
                }
                for (short i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned short) var_5);
                    arr_63 [i_3] [i_3] = ((min((arr_41 [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_41 [i_10 + 1] [i_10 + 1] [i_10] [i_3] [0LL]))) + (max((arr_41 [i_0] [i_3] [i_3] [i_3] [i_3]), (arr_41 [i_10] [i_10] [i_10 - 1] [i_3] [i_10]))));
                }
                for (short i_18 = 0; i_18 < 11; i_18 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        arr_69 [i_19] [i_3] [i_19] [i_19] [i_19] = ((/* implicit */unsigned long long int) arr_2 [i_10]);
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_3] [i_0 - 2] [i_0] [i_3])) ? ((-(((/* implicit */int) arr_31 [i_3] [i_0 - 2] [i_0 + 1] [i_3])))) : ((-(((/* implicit */int) arr_31 [i_3] [i_0 - 2] [i_0] [i_3]))))));
                    }
                    for (long long int i_20 = 0; i_20 < 11; i_20 += 4) 
                    {
                        var_38 = ((/* implicit */_Bool) var_7);
                        var_39 = (((~(((/* implicit */int) arr_53 [i_0 - 1] [i_0 - 1] [i_10 + 1] [i_0 - 1] [i_3])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_0 - 1] [(signed char)8] [i_10 - 1] [(unsigned short)0] [i_3]))))));
                    }
                    arr_72 [i_3] [i_3] [5U] [i_18] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)-4225))) * (992638135U)))));
                }
                arr_73 [i_3] [i_3] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19232))) ^ (10U));
            }
            /* LoopSeq 1 */
            for (short i_21 = 0; i_21 < 11; i_21 += 2) 
            {
                var_40 = ((/* implicit */unsigned char) arr_71 [i_0 + 1]);
                arr_77 [i_3] [i_3] [i_21] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_4 [i_0 + 1] [2LL] [i_0 - 2]), (((/* implicit */long long int) var_2)))))));
            }
            /* LoopSeq 1 */
            for (short i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                var_41 = ((/* implicit */int) var_3);
                /* LoopSeq 4 */
                for (int i_23 = 0; i_23 < 11; i_23 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 4) 
                    {
                        var_42 = ((/* implicit */int) arr_1 [i_0]);
                        var_43 = ((/* implicit */int) min((arr_43 [i_0 + 1] [i_22] [i_22] [i_0 + 1] [i_3]), (((((/* implicit */_Bool) var_10)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) 992638143U))))));
                        arr_88 [i_0 + 1] [i_0 + 1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) arr_84 [i_0])), (max((arr_1 [i_22]), (arr_42 [i_3] [10U] [i_22] [9] [i_22])))))));
                    }
                    arr_89 [i_3] [i_3] [i_3] [i_3] = var_15;
                    arr_90 [(short)0] [i_23] [i_23] [i_3] [i_0] [9] = ((/* implicit */short) var_10);
                }
                for (short i_25 = 0; i_25 < 11; i_25 += 1) /* same iter space */
                {
                    var_44 = ((unsigned int) (((-(((/* implicit */int) arr_62 [i_0] [i_0] [10U] [i_0] [i_0])))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (arr_92 [i_0])))));
                    arr_95 [i_3] [(short)1] [i_22] [i_25] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_26 = 0; i_26 < 11; i_26 += 2) 
                    {
                        var_45 = ((/* implicit */short) min((arr_38 [i_3] [i_3] [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_87 [i_0 - 1] [i_3] [i_22] [i_25] [i_26] [i_3] [i_22]))) : (arr_5 [2ULL] [i_3] [i_0]))))));
                        arr_99 [i_3] [i_3] [i_3] [i_25] = ((/* implicit */unsigned int) var_13);
                        var_46 = ((/* implicit */short) var_2);
                        arr_100 [i_3] [5LL] [5LL] [i_25] [i_26] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_70 [i_0 - 2] [(short)8] [i_22] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [i_3] [i_3] [i_3] [i_0 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))) : ((+(var_9)))))));
                        var_47 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_23 [i_0 - 2] [i_0 + 1])), (min((arr_5 [i_0 - 2] [i_3] [i_0 - 2]), (((/* implicit */unsigned int) arr_40 [i_0] [i_0 - 2]))))));
                    }
                    arr_101 [i_0] [i_0] [i_3] [i_22] [i_25] = ((/* implicit */unsigned char) var_15);
                }
                for (short i_27 = 0; i_27 < 11; i_27 += 1) /* same iter space */
                {
                    arr_104 [i_3] [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 992638148U)) : (11715666271180306872ULL)));
                    /* LoopSeq 1 */
                    for (int i_28 = 0; i_28 < 11; i_28 += 4) 
                    {
                        var_48 += ((/* implicit */unsigned int) var_9);
                        arr_108 [i_0] [i_3] [i_3] [i_0] = ((((/* implicit */int) (short)-19232)) ^ (((/* implicit */int) (unsigned char)134)));
                        arr_109 [i_0] [i_3] [i_3] [i_3] [i_3] [2] = ((/* implicit */short) ((long long int) ((3302329171U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))))));
                    }
                    arr_110 [i_3] = var_11;
                }
                for (short i_29 = 0; i_29 < 11; i_29 += 1) /* same iter space */
                {
                    arr_114 [i_3] [i_3] [(unsigned short)9] [i_3] = ((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_22] [i_3]);
                    var_49 = ((/* implicit */int) max((var_49), (arr_58 [i_22] [i_29] [i_22] [i_3] [i_0] [i_22])));
                    var_50 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_17 [(unsigned char)10] [i_3] [i_29] [i_29] [(signed char)7]))) / (((/* implicit */int) var_11))));
                }
                var_51 = ((/* implicit */short) min((((((/* implicit */int) arr_70 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2])) == (((/* implicit */int) arr_70 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1])))), (var_11)));
            }
            arr_115 [i_3] [i_3] = ((unsigned int) var_12);
            var_52 = ((/* implicit */_Bool) var_1);
        }
        var_53 = ((/* implicit */int) var_11);
        arr_116 [8ULL] [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_0] [8U] [i_0]))));
        arr_117 [i_0] [i_0] = ((/* implicit */short) var_5);
    }
}
