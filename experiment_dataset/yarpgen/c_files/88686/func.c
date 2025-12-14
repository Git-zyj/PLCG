/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88686
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
    var_17 += ((/* implicit */short) var_8);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 5606608831980488943LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((var_14) | (((/* implicit */long long int) var_15))))))));
    var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((signed char) var_13)))) ? (max((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (129))) - (1)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (((((+(((/* implicit */int) var_3)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)246))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (unsigned char)251))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) == (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */_Bool) arr_1 [i_1 - 1])) || (((/* implicit */_Bool) var_6)))))))));
        }
        for (int i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_0 [i_2 + 1] [i_2 - 2]), (arr_0 [i_2 + 2] [i_2 + 1])))), (((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_2 + 1])) ? (var_13) : (((/* implicit */unsigned long long int) 2474069649U))))));
            arr_7 [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) (short)25679)) * (((/* implicit */int) var_4))));
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_24 *= ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (((((/* implicit */int) (unsigned char)10)) - (((/* implicit */int) (unsigned char)19))))));
                        var_25 = ((/* implicit */int) arr_3 [i_0] [i_4] [i_0]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) > (-254707798638071664LL)))), (((((/* implicit */unsigned int) -910790931)) - (0U)))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (short i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        {
                            var_27 |= ((/* implicit */_Bool) 806890190);
                            arr_18 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_6)))))));
                            var_29 &= ((/* implicit */short) ((unsigned long long int) arr_13 [i_0]));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (long long int i_8 = 3; i_8 < 8; i_8 += 4) 
        {
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_8])) ? (arr_16 [i_8 - 3] [i_8 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            var_31 = ((/* implicit */long long int) ((((94872524U) >> (((arr_6 [i_8]) - (174028628U))))) >> (((((((/* implicit */_Bool) arr_4 [i_8] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_13))) - (18446744073709543167ULL)))));
            var_32 += ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]);
        }
        arr_21 [(short)8] [(short)8] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)24)) & (((/* implicit */int) (unsigned char)237))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_12)));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 3; i_12 < 9; i_12 += 4) 
                    {
                        arr_36 [(signed char)8] [i_10] [i_12 - 1] [i_10] [i_10] = (unsigned char)142;
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            arr_41 [i_10] = ((/* implicit */short) (+(arr_40 [i_13] [i_13] [i_12] [i_12] [i_12 - 3] [i_12 - 2] [i_9])));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (_Bool)1))));
                            var_35 = ((/* implicit */short) 774260649U);
                        }
                    }
                    for (short i_14 = 2; i_14 < 9; i_14 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) var_14);
                        arr_44 [i_10] [i_11] [(signed char)8] = ((/* implicit */signed char) ((arr_31 [i_9] [i_10] [i_10] [i_14 + 1]) | (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_3)))))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_15 = 1; i_15 < 7; i_15 += 4) 
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) -6297837476987612790LL))));
                        var_38 *= ((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (-583921535) : (((/* implicit */int) (signed char)107)))));
                        /* LoopSeq 2 */
                        for (short i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned char) arr_3 [i_9] [i_10] [i_9]);
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1619))) : (94872524U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9] [i_10] [i_11] [8LL] [i_16])) && (((/* implicit */_Bool) arr_46 [i_9] [i_9] [i_9] [i_9] [i_9]))))) : (((/* implicit */int) arr_4 [i_10] [i_15 + 2]))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)246)))))));
                            var_42 = ((/* implicit */signed char) ((int) arr_45 [i_10] [i_11] [i_11] [i_11] [i_10]));
                            var_43 = ((long long int) 806890190);
                        }
                        for (unsigned char i_17 = 1; i_17 < 8; i_17 += 2) 
                        {
                            var_44 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_15 + 3] [i_17 - 1])) - (((/* implicit */int) var_6))));
                            var_45 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_7))))));
                        }
                        arr_53 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */int) var_6)) == (arr_42 [i_9] [i_9] [i_9] [i_10]))) ? (((774260649U) - (((/* implicit */unsigned int) arr_26 [i_10] [i_10] [i_11])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_15 + 2])))));
                    }
                    for (short i_18 = 1; i_18 < 9; i_18 += 4) 
                    {
                        var_46 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_18] [i_9] [i_9]))));
                        arr_58 [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_10]))));
                        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_10] [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_18 - 1]))));
                        var_48 ^= ((/* implicit */signed char) arr_51 [i_9] [i_10] [i_10] [i_18] [i_11]);
                    }
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        var_49 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1989397153800767007ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_9]))));
                        arr_62 [i_9] [i_9] [i_10] [i_19] [i_19] = ((/* implicit */long long int) arr_38 [i_9] [i_10] [i_11] [i_10] [i_10]);
                    }
                    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 4) 
                    {
                        var_50 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_13 [i_20]))))) >= (var_14)));
                        var_51 = ((/* implicit */short) var_13);
                    }
                    arr_65 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_10] [i_11])) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_0 [i_9] [i_9])) ? (arr_42 [i_9] [i_10] [i_11] [i_10]) : (((/* implicit */int) var_3))))));
                    var_52 = ((/* implicit */unsigned int) max((var_52), (((((/* implicit */_Bool) arr_20 [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) : ((+(1820897647U)))))));
                }
            } 
        } 
        arr_66 [i_9] &= ((/* implicit */short) arr_61 [i_9] [i_9] [i_9] [i_9]);
        var_53 = ((/* implicit */short) ((((/* implicit */int) arr_34 [i_9] [i_9] [i_9] [i_9])) - (((/* implicit */int) arr_34 [i_9] [i_9] [i_9] [i_9]))));
    }
}
