/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88860
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
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */short) var_7))));
                var_16 = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((int) var_6)) != (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2] [(short)4]) : (((/* implicit */int) (short)-1)))))) ? (((((((/* implicit */int) var_14)) == (((/* implicit */int) var_5)))) ? (((((/* implicit */int) arr_7 [2LL] [i_2])) ^ (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (var_6)))))) : (((/* implicit */int) var_2)))))));
        var_18 = ((/* implicit */unsigned char) var_3);
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [i_2] = ((/* implicit */short) min(((+(((((/* implicit */unsigned int) -1)) - (1100592306U))))), (((/* implicit */unsigned int) var_9))));
                    var_19 = ((/* implicit */short) max((((unsigned long long int) (+(1602891147U)))), (((/* implicit */unsigned long long int) max((((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_14))))), (arr_10 [i_2]))))));
                    arr_14 [i_2] [i_3 - 1] [7LL] [i_2] = ((/* implicit */long long int) (unsigned char)247);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) var_1)) ? (arr_20 [i_2] [i_2] [1] [i_2]) : (((/* implicit */unsigned long long int) var_11)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_7 [i_2] [i_5])))) || (((/* implicit */_Bool) var_2))))), (var_12)));
                            var_22 *= ((/* implicit */unsigned char) var_8);
                            arr_25 [i_2] [i_5] [i_2] [i_2] = ((/* implicit */long long int) -2);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_8)), (max((var_11), (((/* implicit */unsigned int) arr_7 [i_5] [i_5])))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        }
        for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 3) 
        {
            var_24 = ((/* implicit */short) ((((((8981445573167208690LL) == (((/* implicit */long long int) 4294967295U)))) ? (arr_10 [i_2]) : (((/* implicit */long long int) arr_9 [i_2] [i_9 + 2])))) == (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((((/* implicit */unsigned int) var_1)), (var_11))))))));
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((6880392252882797514LL) != (6880392252882797514LL))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        arr_37 [i_2] [i_9 - 3] [i_9 - 3] [i_10] [9ULL] [(unsigned char)4] [i_10] = 7U;
                        arr_38 [i_2] = ((/* implicit */unsigned char) ((((long long int) arr_19 [i_2] [i_9 - 2] [8LL] [8ULL] [8ULL])) ^ (var_10)));
                        var_26 = var_13;
                        var_27 = ((/* implicit */short) var_7);
                    }
                    for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        arr_42 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (16140901064495857664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_10] [i_11 + 1] [i_13])))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (var_4)));
                        var_29 = ((/* implicit */long long int) var_0);
                    }
                    arr_43 [i_2] [i_9] [i_2] [12LL] [i_2] [i_2] = ((/* implicit */unsigned char) var_9);
                    var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_41 [i_11 + 1] [2LL]))));
                }
                for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 3) /* same iter space */
                {
                    arr_46 [i_2] = ((/* implicit */short) ((long long int) ((((/* implicit */int) (unsigned char)7)) - (((/* implicit */int) ((unsigned char) var_4))))));
                    var_31 *= ((/* implicit */unsigned long long int) max((((((long long int) 16777215)) / (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)247), ((unsigned char)247))))))), (((/* implicit */long long int) (+(var_0))))));
                }
                arr_47 [i_2] [i_2] = ((/* implicit */long long int) ((((((unsigned long long int) 8181252434815762170ULL)) == (((/* implicit */unsigned long long int) arr_6 [7ULL] [i_2])))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) (unsigned char)4))));
            }
        }
        for (short i_15 = 2; i_15 < 11; i_15 += 4) 
        {
            arr_50 [i_2] [(unsigned char)3] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) 4776326838881647479LL));
            /* LoopSeq 2 */
            for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    arr_59 [i_2] [5ULL] [i_15 + 2] [i_16] [(unsigned char)8] [i_15 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_19 [i_17] [i_16] [i_15] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_9))))))));
                    arr_60 [i_2] [i_2] [i_2] [(unsigned char)4] = ((short) (unsigned char)8);
                    var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                    var_33 ^= ((/* implicit */short) arr_35 [i_17] [(unsigned char)0] [i_15 - 2]);
                }
                arr_61 [3LL] [12LL] [i_2] [i_16] = max((10265491638893789446ULL), (((/* implicit */unsigned long long int) -8981445573167208677LL)));
            }
            /* vectorizable */
            for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                var_34 = ((/* implicit */short) ((((/* implicit */long long int) var_0)) != (((long long int) var_12))));
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 13; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_48 [(short)1] [i_2]) != (((/* implicit */long long int) 2386919934U)))))));
                            arr_69 [i_2] [i_15 + 2] [i_2] [i_19] [i_2] [i_15 - 1] [i_20] = ((/* implicit */unsigned long long int) var_4);
                            var_36 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7U)) && (((/* implicit */_Bool) arr_40 [i_20] [4ULL] [i_18] [9LL] [9LL])))) || ((!(((/* implicit */_Bool) 5980854241232957057ULL))))));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
        }
    }
    /* vectorizable */
    for (short i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((short) var_10)))));
        var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_71 [i_21]))));
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
    {
        arr_76 [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
        var_40 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_22] [i_22])))));
        var_41 = ((/* implicit */long long int) (~(var_11)));
        var_42 = ((/* implicit */int) var_2);
    }
    var_43 = ((/* implicit */long long int) min((min((((/* implicit */int) var_9)), ((~(((/* implicit */int) var_1)))))), (((/* implicit */int) var_9))));
}
