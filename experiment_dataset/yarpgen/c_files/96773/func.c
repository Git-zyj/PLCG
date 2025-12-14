/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96773
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_10 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_2 [(unsigned short)12]))))) : (min((((/* implicit */long long int) var_5)), (arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0])));
        var_11 = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) * (arr_1 [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (arr_0 [i_0]))))));
        var_12 = ((/* implicit */unsigned long long int) var_1);
        var_13 = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_1]))))) ? (((/* implicit */int) ((arr_0 [1LL]) < (((/* implicit */unsigned long long int) arr_2 [i_1]))))) : (((/* implicit */int) arr_5 [i_1] [i_1]))))), (-1423443877255197248LL)));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : ((-(((((/* implicit */int) (unsigned char)194)) << (((((/* implicit */int) var_5)) + (7462)))))))));
        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [2LL]))))));
        var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_1]) * (arr_1 [i_1])))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (signed char)-41)) / (((/* implicit */int) arr_4 [i_1]))))))), ((((((_Bool)1) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)59628)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) min(((-(((long long int) var_7)))), (((/* implicit */long long int) (signed char)-32))));
        var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2])) / (((/* implicit */int) var_0))))), (((((/* implicit */unsigned long long int) arr_2 [(short)3])) - (var_9))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_2]) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [5ULL]))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) / (3499832388378465204LL))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_9 [i_3])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_21 += ((/* implicit */signed char) (~(var_1)));
            var_22 = ((/* implicit */short) (+((+(((/* implicit */int) (short)5782))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) % ((((~(var_4))) - (max((17657773816788549945ULL), (((/* implicit */unsigned long long int) arr_21 [i_3] [i_5]))))))));
                            var_24 |= ((/* implicit */unsigned short) max((((min((((/* implicit */unsigned long long int) var_6)), (arr_23 [0ULL] [0ULL] [i_6 + 1] [i_7] [i_5] [(unsigned short)19]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3436146577766116753ULL)) ? (((/* implicit */int) arr_13 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-68)), (arr_11 [i_7] [(unsigned char)15])))))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(max((((/* implicit */long long int) arr_14 [i_6 - 1] [i_6 + 1] [i_6 + 1])), (((long long int) arr_13 [i_3] [i_3] [i_3])))))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((((~(((/* implicit */int) min((((/* implicit */short) arr_13 [2ULL] [i_5] [i_3])), (arr_8 [i_3] [i_5])))))) + (2147483647))) >> (((((/* implicit */int) ((signed char) (+(3944622412U))))) - (48))))))));
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            var_27 = ((/* implicit */long long int) var_5);
            var_28 = ((/* implicit */_Bool) min((max(((~(arr_23 [(short)13] [(short)11] [i_9 + 1] [i_9] [i_3] [i_3]))), (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3])))), (14236218164758132345ULL)));
            var_29 += ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_3] [(_Bool)1] [(_Bool)1] [i_9]))))), (((((/* implicit */unsigned long long int) arr_24 [16ULL] [(signed char)4] [16ULL] [i_3] [i_9] [i_9])) & (var_9))))) | ((~(((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_10 = 1; i_10 < 19; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (arr_19 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_3 [i_3]))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_11 - 1] [i_11 - 1] [i_11 - 1] [(short)15] [i_9] [i_11])) & (((/* implicit */int) arr_22 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_9] [i_11]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 3; i_12 < 22; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3] [6ULL] [10ULL]))) | (arr_6 [i_12 - 3] [i_9])));
                            var_33 = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_3] [i_9 + 1] [i_10 - 1] [i_12 - 3] [i_13]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_14 = 3; i_14 < 19; i_14 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (signed char)31))));
                var_35 |= ((/* implicit */unsigned char) var_4);
            }
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_15 = 1; i_15 < 8; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 1; i_18 < 9; i_18 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_15] [i_15 + 2])))))) + (var_4)))));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_15])) ? (min((arr_23 [i_15 - 1] [i_15 - 1] [(_Bool)1] [i_15] [i_15 + 2] [i_18 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_41 [i_17] [i_17] [(unsigned short)13])) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_18]))))))));
                        /* LoopSeq 3 */
                        for (short i_19 = 1; i_19 < 9; i_19 += 1) 
                        {
                            var_38 ^= var_1;
                            var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_15] [1ULL]))) | (var_1)));
                            var_40 = ((/* implicit */short) ((max((arr_27 [i_15 + 1] [i_18 + 1] [i_19 - 1]), (arr_27 [i_15 - 1] [i_18 - 1] [i_19 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_38 [i_17]))))) : (min((((long long int) arr_5 [i_15 + 1] [i_17])), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_11 [i_16] [i_19])), (arr_40 [i_17] [i_19]))))))));
                            var_41 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1361647798)), ((+(var_4)))))) ? (arr_48 [i_17] [3ULL] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_19 - 1]))));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_15] [i_16] [i_17] [i_18 + 1] [14LL]))) - (3323397313003101312LL))), (((/* implicit */long long int) ((unsigned short) arr_50 [i_15] [i_15 + 2])))))) + ((+((-(var_7)))))));
                        }
                        /* vectorizable */
                        for (signed char i_20 = 2; i_20 < 7; i_20 += 1) 
                        {
                            var_43 = ((/* implicit */long long int) ((((((/* implicit */int) arr_52 [i_15] [i_15] [i_17] [i_15] [i_20] [i_15])) + (2147483647))) << (((((arr_31 [i_15 + 2] [i_15 + 2] [i_15]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (1066777077848181314ULL)))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_20 - 1] [i_15 + 2] [i_18 + 1])) ? (((/* implicit */int) arr_41 [i_20 + 3] [i_15 - 1] [i_18 - 1])) : (((/* implicit */int) arr_15 [i_15 + 1]))));
                            var_45 = ((/* implicit */unsigned char) (_Bool)1);
                            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(arr_6 [i_15 + 1] [i_15 + 1]))) : (2935902496U)));
                            var_47 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_20 - 2] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5915))) : (var_8)))) - (((arr_16 [i_17] [i_17] [i_20]) << (((var_8) + (3248849642636061883LL))))));
                        }
                        for (signed char i_21 = 1; i_21 < 8; i_21 += 1) 
                        {
                            var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 4109841149634867833ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_15 + 2] [i_16] [8U]))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_18] [i_18] [i_18] [i_18]))))))))));
                            var_49 = ((/* implicit */unsigned short) 15010597495943434854ULL);
                            var_50 = ((/* implicit */int) arr_32 [10LL] [i_17] [10LL]);
                            var_51 = var_4;
                        }
                        var_52 |= ((/* implicit */_Bool) var_6);
                        var_53 |= ((/* implicit */int) min((((10867214369083285265ULL) / (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) arr_55 [4LL] [i_16] [(unsigned short)9] [6] [4LL] [i_18]))))))), ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_31 [i_15] [i_15] [(signed char)19])))))));
                    }
                    var_54 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_15 - 1] [i_15 + 1]))) * (arr_44 [i_15])))) ? (((/* implicit */unsigned long long int) ((arr_50 [i_16] [i_17]) + (((long long int) arr_30 [i_15 - 1] [i_15 - 1] [i_17]))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_15 + 2] [(unsigned short)6]))))), (((((/* implicit */_Bool) arr_52 [i_15] [i_15] [i_16] [i_15] [i_17] [(signed char)9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_17] [i_17] [9LL] [i_17] [i_17] [(unsigned short)8] [i_17]))) : (var_4))))));
                }
            } 
        } 
    } 
    var_55 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-27822)) : (((/* implicit */int) (_Bool)1))))))), (((max((((/* implicit */unsigned long long int) var_2)), (var_7))) / (((/* implicit */unsigned long long int) var_2))))));
}
