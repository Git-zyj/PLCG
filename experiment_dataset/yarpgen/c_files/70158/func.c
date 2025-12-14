/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70158
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
    var_19 = ((/* implicit */unsigned int) var_7);
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-(var_1))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_3 [(short)17])), (max((arr_2 [(signed char)9] [i_0]), (((/* implicit */unsigned long long int) var_4)))))), (((((/* implicit */unsigned long long int) ((int) arr_2 [i_0] [i_0]))) ^ (arr_2 [i_0] [i_0])))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [(signed char)0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_2 [i_0] [i_0]))) : (((arr_2 [i_0] [i_0]) >> (((((/* implicit */int) arr_3 [i_0])) - (5399))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */short) var_7);
        arr_6 [(unsigned short)18] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((_Bool) (unsigned char)248)) ? (((unsigned long long int) arr_4 [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6155)) * (((/* implicit */int) arr_4 [i_1])))))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (var_10) : (((/* implicit */long long int) var_4)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    var_24 += ((/* implicit */unsigned char) max((((unsigned long long int) 67108863ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_11 [i_5 + 2])))) * (16912318208293655969ULL))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (11416960051195151744ULL)));
                        arr_18 [4ULL] [i_4] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_17)) ? (arr_12 [i_2] [i_2] [i_2]) : (arr_12 [i_3] [17ULL] [(_Bool)1])))))));
                        var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (unsigned char)231)) ? (arr_2 [(unsigned short)12] [i_2]) : (((/* implicit */unsigned long long int) -859992149))))))));
                        var_28 = ((/* implicit */_Bool) arr_2 [i_3] [i_3]);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                {
                    arr_25 [i_7] [i_6 + 1] [(unsigned short)15] = arr_3 [i_2];
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                arr_31 [i_9] [i_2] [i_7] [i_7] [i_2] [i_6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_17)))))) - (((((/* implicit */int) ((arr_12 [i_2] [(unsigned short)2] [i_9]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) % (((((/* implicit */int) arr_5 [9ULL])) + (((/* implicit */int) arr_8 [i_9]))))))));
                                var_29 = ((/* implicit */short) var_11);
                                arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (+(((/* implicit */int) max((arr_26 [i_6 - 1] [i_6 + 3] [i_6 + 1] [(_Bool)1] [i_6]), (arr_26 [i_6 - 1] [i_6 + 3] [i_6 + 3] [(signed char)2] [i_7])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_9 [i_2]))));
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (signed char)102)))), (((/* implicit */int) ((signed char) var_2))))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        arr_36 [(_Bool)1] = ((/* implicit */_Bool) ((arr_33 [i_10] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)21)))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((arr_40 [i_14] [i_14 + 4] [i_14 + 4]) % ((+(arr_42 [i_10] [i_10] [i_10] [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))));
                                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_43 [i_13 - 1] [i_13] [i_13] [i_12 - 1])) : (((/* implicit */int) arr_43 [i_13 - 1] [i_13] [i_12 + 2] [i_12 - 1]))))))));
                                var_34 = ((/* implicit */unsigned long long int) (unsigned char)216);
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (arr_48 [i_10] [i_12 - 2] [i_12 - 1] [i_11] [i_12 - 2] [i_10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_10] [i_12 - 2] [i_12] [i_10] [i_10] [i_10]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_10] [i_12 - 1] [i_12] [i_10] [(signed char)16] [i_12]))) ^ (var_0)))));
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) ((((unsigned long long int) var_13)) << ((((-(((/* implicit */int) (unsigned short)2420)))) + (2448)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
    {
        for (long long int i_16 = 4; i_16 < 11; i_16 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_17 = 1; i_17 < 9; i_17 += 2) 
                {
                    var_37 &= ((/* implicit */signed char) arr_39 [(short)23]);
                    arr_59 [i_15] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 667474298U)) == (6LL)));
                    var_38 = ((/* implicit */unsigned int) ((arr_52 [i_17 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)6))))), (min((arr_10 [(unsigned char)10] [i_15]), (((/* implicit */unsigned short) var_7))))))))));
                }
                for (int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        for (unsigned int i_20 = 1; i_20 < 10; i_20 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_17 [(signed char)4] [i_19] [12U] [(signed char)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [(unsigned short)10] [i_16] [i_18] [i_19] [i_20 + 1]))) / (arr_0 [i_15])))))));
                                var_40 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775791LL)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_15] [(signed char)17])) ? (((/* implicit */int) arr_21 [i_15])) : (((/* implicit */int) (unsigned short)24624))))) * ((-(arr_42 [i_15] [i_16] [i_19] [i_20]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_18])) ? (-859992149) : (((/* implicit */int) (unsigned short)2428)))))))))));
                                var_41 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 859992149)) ? (((/* implicit */int) (unsigned char)7)) : (-1577904282)))))) ? ((~(((/* implicit */int) (short)-1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)231))))))))));
                                var_42 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)63108))));
                                arr_67 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned long long int) 16280793821525523136ULL))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) -859992149)) && (((/* implicit */_Bool) (unsigned char)231)))) ? (((/* implicit */int) (unsigned char)252)) : (859992159))))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_16 - 1])) && (((/* implicit */_Bool) arr_5 [i_15]))))) << (((((/* implicit */int) (unsigned char)32)) & (((int) (unsigned char)8))))));
                    var_44 &= ((/* implicit */long long int) 18446744073709551615ULL);
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((max(((~(((/* implicit */int) arr_26 [i_15] [19U] [i_18] [i_18] [i_18])))), (max((1953336804), (((/* implicit */int) (unsigned char)248)))))) | ((~(((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)2)))))))))));
                }
                var_46 += ((/* implicit */signed char) (~(max((((/* implicit */int) var_7)), (arr_49 [i_16] [i_16 - 4] [i_16] [i_15] [i_16 - 4] [i_16 - 3] [22])))));
                arr_68 [i_16] [i_15] = (~(min((((/* implicit */unsigned long long int) (signed char)3)), (arr_14 [i_16 - 1] [i_16 - 1] [i_16 - 4]))));
            }
        } 
    } 
}
