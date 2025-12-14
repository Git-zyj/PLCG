/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77015
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)106))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    var_21 = arr_3 [i_0 + 1] [i_1];
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_11 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0 - 3] = ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) * (5395523353667860045ULL)))) ? (min((arr_8 [i_1 - 1] [i_3]), (((/* implicit */unsigned long long int) (signed char)10)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_3] [i_2] [i_0]))))))) - ((+(((((/* implicit */_Bool) arr_2 [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))) : (arr_8 [i_2] [i_1]))))));
                        var_22 &= (!(((/* implicit */_Bool) 820536131)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_23 ^= ((/* implicit */_Bool) (unsigned short)24326);
                        var_24 += ((/* implicit */unsigned char) arr_6 [i_4] [i_2] [i_1] [i_4]);
                        arr_14 [i_1 - 1] [i_1] [i_1 - 1] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_18 [i_0] = ((/* implicit */long long int) ((int) (~(arr_8 [i_0 - 3] [i_1]))));
                        var_25 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-664)) != (((/* implicit */int) (_Bool)0))))) >> (((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1 + 1] [i_2] [i_2])) - (63339)))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */int) arr_12 [(unsigned short)3] [i_2] [i_1] [i_0 - 1]);
                        var_27 = ((/* implicit */unsigned short) -1079345989);
                        var_28 = ((/* implicit */unsigned char) max((min(((~(-651823867))), (((/* implicit */int) (signed char)6)))), (((/* implicit */int) arr_19 [2LL] [i_0] [(unsigned short)4] [(unsigned short)4] [i_2] [i_0]))));
                        arr_22 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_6 - 1] [i_0]))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_6 - 1] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6 - 1] [i_0])))))));
                    }
                    arr_23 [i_0] [(signed char)8] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [3ULL] [i_1] [i_1 - 1] [i_2]))))), (((((/* implicit */int) arr_13 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_1] [i_1 - 1])) & (((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_1] [i_1 - 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) (((((~(((/* implicit */int) arr_16 [i_8] [i_7] [i_2] [i_1] [i_0 - 1])))) + (2147483647))) >> (((9223371487098961920ULL) - (9223371487098961898ULL)))));
                            var_30 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
                            var_31 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 3] [i_0]))));
                            arr_29 [i_0] [i_2] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((-246528903) + (2147483647))) >> (((var_16) - (3766788533588150458LL)))))) ^ (((((/* implicit */_Bool) arr_8 [i_1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0]))) : (6556472670426156476ULL)))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_2] [(signed char)8]);
                            var_33 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_28 [i_0 - 3] [i_7] [i_0 + 1] [i_1 - 1] [6LL] [i_7]))));
                            var_34 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)241)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11890271403283395139ULL)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_0] [i_7] [i_9]))))) : (((((/* implicit */_Bool) arr_13 [i_9] [i_7] [i_2] [i_1 + 2] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) 651823865)) : (arr_6 [(unsigned short)1] [i_1] [i_1 + 1] [i_0])))));
                        }
                        arr_34 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */unsigned short) (((~(5512974013128516130ULL))) + (arr_12 [i_0] [i_2] [i_2] [i_1 - 1])));
                    }
                }
                for (signed char i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_8 [i_1 - 1] [i_1 - 1]))) ? (max((((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_0])), ((+(arr_37 [i_0] [i_0]))))) : ((+(((((/* implicit */_Bool) -5780838055437079386LL)) ? (((/* implicit */long long int) 651823860)) : (5780838055437079387LL)))))));
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 11; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            {
                                arr_44 [i_0] [i_1] [i_10] [i_0] [i_12] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (5512974013128516117ULL))))), (((/* implicit */unsigned long long int) ((((min((arr_30 [i_1]), (-5780838055437079386LL))) + (9223372036854775807LL))) >> ((((-(((/* implicit */int) (short)-13955)))) - (13936))))))));
                                arr_45 [i_12] [i_11 - 1] [i_0] [i_1 + 2] [i_0 - 1] = ((/* implicit */unsigned long long int) (-(4579520674436907944LL)));
                            }
                        } 
                    } 
                }
                for (int i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    var_36 ^= ((/* implicit */int) ((((/* implicit */_Bool) min(((-(arr_12 [i_13] [i_13] [i_1 + 2] [i_0]))), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 - 2] [(unsigned char)2]))))) : (5165476291780228916LL)));
                    var_37 &= (-((+(arr_8 [i_0 - 2] [i_0 - 3]))));
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    arr_50 [i_0 + 1] [i_0] [i_1 - 1] [i_14] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_16 [i_0] [i_1 + 2] [i_14] [i_1] [i_0])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1 + 2] [i_0 - 3])))))));
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            {
                                arr_55 [i_16] [i_16] [i_0] [i_15] [i_0] [i_1 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 651823866)) * (12933770060581035480ULL)));
                                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_0 - 2])) ? (arr_47 [i_0 - 2]) : (arr_47 [i_0 - 2])));
                                var_40 -= ((/* implicit */signed char) 16092227773293095783ULL);
                                var_41 = ((/* implicit */short) (+(246528903)));
                                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (short)12932)) : (arr_38 [i_0] [i_0 + 1] [i_0] [i_0 - 2])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_43 = ((/* implicit */short) 18446744073709551615ULL);
        arr_60 [i_17] [i_17] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_17] [i_17]))) % (arr_12 [i_17] [i_17] [i_17] [i_17]))) >> (((((/* implicit */int) arr_40 [i_17] [i_17])) - (135)))));
    }
    var_44 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_2))))) : (var_17)))) ? (max((((/* implicit */long long int) (~(515983520)))), (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-35)) ? (((((/* implicit */int) (signed char)44)) >> (((((/* implicit */int) (unsigned char)156)) - (153))))) : ((~(((/* implicit */int) var_10)))))))));
}
