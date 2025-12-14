/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70080
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((int) arr_1 [i_0])) * (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && ((_Bool)0)))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_19 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_14)) >= (var_9))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_4] [i_4] [i_1 + 1] [i_0] [i_0]))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_9)) : (arr_9 [(signed char)20] [i_0] [i_1 - 1] [i_1 + 1] [i_0] [(unsigned short)0])));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_3] [i_0] [i_1 - 1] [i_3] [(signed char)8] [i_3]))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                var_23 = ((/* implicit */_Bool) ((arr_9 [i_0] [(signed char)11] [i_0] [(_Bool)1] [i_0] [(unsigned char)6]) >> (((var_12) - (588171800U)))));
                var_24 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_5 + 2])) : (((/* implicit */int) var_14)))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [9] [i_1 + 2] [i_5] [i_0] [i_7] [i_5 + 2] [i_6 - 1]))) : (((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_5] [i_6 + 1] [i_0] [i_0])) ^ (arr_8 [i_7] [i_6] [(unsigned short)1] [i_0])))));
                            var_26 -= ((/* implicit */_Bool) ((signed char) var_3));
                            arr_20 [i_6] [i_5 - 1] [i_6] [i_5 - 1] [i_5] [i_1] [i_6] &= ((/* implicit */_Bool) ((int) var_14));
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
                            var_28 = ((/* implicit */long long int) arr_1 [i_6 + 1]);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    {
                        arr_26 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 + 1] [i_1 - 2] [i_8] [i_8] [(unsigned short)3])) ? (7024527624167830500LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                        var_29 += ((/* implicit */short) (signed char)26);
                        var_30 &= ((/* implicit */unsigned short) 144115188075855871ULL);
                        var_31 = arr_12 [i_0] [i_0] [i_0];
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) ((var_9) >= (((/* implicit */int) arr_12 [i_1 + 2] [i_0] [i_1 + 1]))));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_0] [(unsigned short)16] [i_8] [i_1] [i_10] [i_9] [i_10])) * (((/* implicit */int) arr_15 [i_0] [i_9] [i_8] [i_9] [i_8] [i_0])))))));
                            var_34 = ((/* implicit */unsigned long long int) (!(arr_25 [i_1 + 2] [i_1] [i_1 + 2] [i_9])));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_9] [i_1 + 1] [i_1] [i_1] [i_1 + 3])) ? (arr_18 [i_10] [i_1 - 2] [8U] [(signed char)0] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0])))));
                        }
                    }
                } 
            } 
        }
        for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            var_36 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_11] [i_11])));
            /* LoopSeq 4 */
            for (unsigned char i_12 = 2; i_12 < 20; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 20; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_14 - 1] [i_14 - 1] [i_13 - 1] [i_12 - 2]))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((~(var_17))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_11] [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_29 [i_0] [i_11] [i_12] [i_0] [i_14 - 1] [i_13] [i_0])))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_11] [i_12 - 1] [(signed char)11] [i_12 - 1] [i_12 + 1] [(short)14] [i_12 - 2])) ? (((((/* implicit */_Bool) arr_16 [(short)19] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_34 [(signed char)20] [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_12 + 1] [3ULL]))));
            }
            for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                var_40 = ((/* implicit */int) ((signed char) arr_29 [i_0] [i_15] [i_15] [i_11] [i_11] [i_0] [i_0]));
                var_41 = ((/* implicit */unsigned long long int) -3965539466484390681LL);
            }
            for (unsigned short i_16 = 1; i_16 < 20; i_16 += 4) 
            {
                arr_45 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_23 [i_16 + 1]))));
                /* LoopSeq 2 */
                for (short i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    var_42 = ((/* implicit */_Bool) var_9);
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) >= ((+(2850955269U)))));
                }
                for (signed char i_18 = 4; i_18 < 18; i_18 += 4) 
                {
                    var_44 = (i_0 % 2 == 0) ? (((/* implicit */int) ((((var_8) + (9223372036854775807LL))) >> (((/* implicit */int) arr_47 [i_0] [i_0] [i_18] [i_18]))))) : (((/* implicit */int) ((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_47 [i_0] [i_0] [i_18] [i_18])) - (52))))));
                    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_18] [i_18] [i_0] [i_18 - 1])) ? (((/* implicit */int) arr_11 [i_0] [i_18] [i_18 - 1] [i_18 + 3] [i_18 - 3] [i_18] [i_18])) : (((/* implicit */int) arr_11 [i_0] [i_18] [i_18 - 3] [i_18 + 2] [i_18 - 2] [i_18] [i_18]))));
                    var_46 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_16 - 1] [i_16] [i_16 - 1])) == (((/* implicit */int) arr_22 [i_16] [i_16] [i_16 - 1]))));
                }
            }
            for (unsigned int i_19 = 2; i_19 < 19; i_19 += 4) 
            {
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) arr_6 [i_19]))));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_20] [i_19 + 1] [i_0]))));
                            var_49 = ((/* implicit */signed char) var_15);
                        }
                    } 
                } 
                var_50 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_11] [i_19] [i_11]) / (((/* implicit */long long int) ((/* implicit */int) arr_44 [5ULL])))))) >= (((arr_59 [i_0] [i_11] [i_11] [i_11] [i_19 - 2] [i_11]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_0])))))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                var_51 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (836363363U) : (var_3)));
                var_52 = ((/* implicit */_Bool) ((var_17) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4))))));
            }
            for (signed char i_23 = 2; i_23 < 20; i_23 += 1) 
            {
                var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_23 - 1] [i_23 + 1] [i_23 - 2] [i_23 - 1])) ? (((/* implicit */unsigned long long int) arr_8 [i_23 + 1] [i_23 - 2] [i_23 + 1] [i_23 + 1])) : (arr_63 [i_23 - 1] [i_23 - 1] [i_23 + 1] [i_23 - 1])));
                var_54 = ((/* implicit */signed char) ((((/* implicit */int) arr_64 [i_0])) / (((/* implicit */int) arr_64 [i_0]))));
                var_55 -= ((/* implicit */signed char) (-(arr_59 [i_0] [i_23 - 2] [i_23] [i_23 - 1] [i_23] [(unsigned short)11])));
            }
            var_56 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_58 [i_11] [i_11] [i_0] [i_0])) >= (((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0]))));
            var_57 += ((((/* implicit */_Bool) arr_36 [i_0] [i_11] [i_11] [i_11])) || (((((/* implicit */int) arr_49 [i_0] [i_11])) > (((/* implicit */int) var_5)))));
        }
        for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 2) 
        {
            var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) (~(547324775U))))));
            /* LoopNest 2 */
            for (unsigned short i_25 = 0; i_25 < 21; i_25 += 4) 
            {
                for (long long int i_26 = 1; i_26 < 19; i_26 += 2) 
                {
                    {
                        var_59 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (((((/* implicit */_Bool) arr_29 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_27 = 0; i_27 < 21; i_27 += 2) 
                        {
                            arr_77 [5] [17ULL] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_12)))) ? (arr_60 [i_27] [i_24] [i_26 + 2] [i_26]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_60 -= ((/* implicit */signed char) (+(arr_59 [i_26] [i_26 + 1] [i_26 + 2] [i_26 + 2] [i_26 + 1] [i_26])));
                            var_61 = ((/* implicit */unsigned short) var_16);
                            var_62 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_24] [i_0]))));
                            var_63 = ((/* implicit */unsigned int) arr_51 [i_0] [i_24]);
                        }
                    }
                } 
            } 
            arr_78 [i_0] [i_24] [i_24] = ((/* implicit */signed char) arr_51 [i_0] [i_24]);
        }
        var_64 = ((/* implicit */short) (~(((/* implicit */int) var_2))));
        var_65 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) + ((-(((/* implicit */int) var_13))))));
    }
    var_66 = ((/* implicit */unsigned int) var_10);
}
