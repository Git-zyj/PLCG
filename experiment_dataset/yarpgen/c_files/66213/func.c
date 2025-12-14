/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66213
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))) > (arr_2 [i_0 - 2] [i_0]))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == ((-(((/* implicit */int) arr_1 [i_0]))))))))));
        var_17 += min((max((((/* implicit */long long int) (unsigned short)0)), (arr_0 [i_0 - 2]))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (signed char)41))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) var_6)))))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_18 *= ((/* implicit */short) min((((/* implicit */long long int) ((172146950) / (((/* implicit */int) (signed char)53))))), ((-(min((arr_0 [i_1]), (((/* implicit */long long int) arr_4 [i_1] [i_1]))))))));
        var_19 &= ((/* implicit */signed char) (!(arr_1 [i_1])));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
    }
    for (short i_2 = 4; i_2 < 12; i_2 += 4) 
    {
        arr_8 [i_2 - 1] [i_2 - 3] = var_9;
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_20 = ((/* implicit */signed char) (~(arr_9 [i_2 + 3] [i_2 + 2] [i_2 + 2])));
            var_21 = (_Bool)0;
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2 - 4])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2])) || (((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4]))))) : (((/* implicit */int) arr_11 [i_2] [i_2 - 2] [i_2 + 3]))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */short) var_12);
                            var_24 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) | (arr_2 [i_2 - 1] [i_2])));
                            var_25 = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) arr_14 [i_2] [i_3] [i_4]);
            }
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_7] [i_3] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (short)4804)))))));
                arr_23 [i_2] [i_3] &= ((/* implicit */_Bool) ((arr_13 [i_2 - 4] [i_2 - 2] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                var_28 = 98210532U;
                arr_24 [i_7] = (-(((/* implicit */int) arr_20 [i_7] [i_2 + 3] [i_2 + 3] [i_2 + 3])));
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_29 += ((/* implicit */unsigned char) ((((arr_16 [i_8] [i_3] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? ((~(var_2))) : (var_4)));
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) || (((arr_16 [i_2] [i_2] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                    var_31 = arr_0 [i_2 - 4];
                    var_32 = ((/* implicit */long long int) var_11);
                }
                for (signed char i_9 = 4; i_9 < 13; i_9 += 4) 
                {
                    arr_30 [i_7] [i_7] [i_7] [i_7] = ((unsigned short) arr_17 [i_2] [i_9 + 2] [i_9 + 2] [i_9]);
                    var_33 *= ((/* implicit */signed char) ((unsigned short) arr_2 [i_2] [i_2 - 1]));
                }
                for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_7] [i_2] [i_2] [i_2 - 4]))));
                    var_35 = ((/* implicit */signed char) arr_31 [i_2 + 2] [i_7] [i_3]);
                    arr_33 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2 + 1])) ? (((/* implicit */unsigned int) arr_22 [i_2 + 3] [i_2 + 3] [i_7])) : (arr_15 [i_2 - 4])));
                }
            }
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                            arr_46 [i_2] [i_2] [i_11] [i_13] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_2 - 4]))) : (arr_37 [i_2 - 3])));
                            var_37 = ((/* implicit */unsigned short) arr_11 [i_3] [i_11] [i_13]);
                            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) -1473896612)) : (19ULL)));
                        }
                    } 
                } 
            } 
        }
        arr_47 [i_2 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_2] [i_2 - 3] [i_2])), (-856933607625339525LL)))) ? (max((((arr_38 [i_2] [i_2] [i_2 - 2] [i_2 - 3] [i_2 - 3]) - (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) arr_15 [i_2])))) : (max((-3627037273212725304LL), (((/* implicit */long long int) ((var_14) ? (arr_13 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (unsigned char)0))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 2])) ? ((+(((/* implicit */int) arr_14 [i_2] [i_2 + 2] [i_14])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_2 + 1] [i_2 + 2] [i_15] [i_16 - 1] [i_16 - 1])))))));
                        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) min((max((arr_16 [i_2 + 1] [i_16 - 1] [i_16 - 1]), (arr_16 [i_2 - 2] [i_16 - 1] [i_16 - 1]))), (((/* implicit */unsigned int) min((arr_41 [i_2 - 1] [i_16 - 1] [i_16 - 1]), (arr_41 [i_2 + 2] [i_16 - 1] [i_16 - 1])))))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        var_42 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_26 [i_15]))))));
                        arr_58 [i_2] [i_2] [i_15] = ((/* implicit */long long int) arr_39 [i_2 - 2] [i_2 + 3]);
                    }
                    var_43 *= ((/* implicit */signed char) arr_45 [i_2 + 3] [i_2] [i_2] [i_2]);
                    var_44 *= (signed char)127;
                    var_45 = ((/* implicit */short) ((signed char) (signed char)63));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 2) 
    {
        var_46 = ((/* implicit */int) ((var_10) ? (arr_59 [i_18] [i_18]) : (arr_59 [i_18] [i_18])));
        var_47 = ((/* implicit */unsigned long long int) min((var_47), ((-(arr_60 [i_18])))));
    }
    /* LoopNest 2 */
    for (unsigned int i_19 = 0; i_19 < 19; i_19 += 1) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 1) 
        {
            {
                var_48 = ((max((((/* implicit */unsigned long long int) var_3)), (min((arr_60 [i_20]), (arr_60 [i_19]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) var_14))) + ((+(-564698554572667514LL)))))));
                arr_65 [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(var_14))))));
                arr_66 [i_19] [i_19] = ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) (~(((/* implicit */int) arr_61 [i_20]))))), (var_4))) : (var_3));
                /* LoopNest 3 */
                for (unsigned short i_21 = 1; i_21 < 16; i_21 += 2) 
                {
                    for (short i_22 = 3; i_22 < 17; i_22 += 4) 
                    {
                        for (unsigned int i_23 = 0; i_23 < 19; i_23 += 1) 
                        {
                            {
                                arr_75 [i_19] [i_20] [i_21] [i_22] [i_23] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-96)) - (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_72 [i_19] [i_20] [i_21] [i_19])));
                                arr_76 [i_19] [i_20] [i_21] [i_19] [i_23] = ((/* implicit */int) min((((/* implicit */unsigned short) (((~(((/* implicit */int) var_7)))) != ((~(((/* implicit */int) (signed char)61))))))), (arr_72 [i_19] [i_20] [i_21] [i_19])));
                            }
                        } 
                    } 
                } 
                var_49 += ((/* implicit */unsigned char) (signed char)47);
            }
        } 
    } 
    var_50 = ((/* implicit */unsigned char) var_3);
    var_51 = ((/* implicit */int) var_5);
}
