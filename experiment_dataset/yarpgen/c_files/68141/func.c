/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68141
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
    var_14 |= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [15LL] [i_0] = ((((/* implicit */_Bool) min((-2046782101), (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) var_6))));
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (long long int i_4 = 4; i_4 < 15; i_4 += 4) 
                    {
                        {
                            arr_14 [i_2] [i_1 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) -217270981))) & (((/* implicit */int) arr_6 [i_2] [i_4 + 2] [i_1 - 3] [i_0]))));
                            var_15 = ((/* implicit */unsigned int) var_6);
                            arr_15 [4LL] [4LL] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_0])), (max((((/* implicit */int) arr_9 [i_0] [i_2] [i_2])), (-217270979)))))) ? ((+(((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)13])))) : ((-(((/* implicit */int) (signed char)-120))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1] [i_1] [i_0])))));
        }
        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_18 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((var_5) <= (((unsigned int) -9223372036854775806LL))))), ((-(min((var_10), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]))))))));
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                var_17 = ((/* implicit */unsigned short) -9223372036854775795LL);
                arr_21 [i_6] = ((/* implicit */int) arr_20 [(_Bool)1]);
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 3; i_9 < 16; i_9 += 4) 
                    {
                        var_18 += ((/* implicit */int) arr_8 [i_9 - 3] [i_7 - 1]);
                        arr_32 [i_9] [i_7] [i_7] [i_5] [i_0] = ((/* implicit */short) arr_9 [i_0] [i_5] [(unsigned char)12]);
                    }
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 217270998)) ? (((unsigned int) arr_16 [(signed char)16] [(unsigned char)2] [i_8])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))) * (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)50))))) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_10])))))));
                        arr_36 [i_0] [i_0] [i_0] [(unsigned short)6] [(_Bool)1] [i_0] = ((/* implicit */int) var_11);
                        arr_37 [i_0] [i_5] [i_0] [i_8] [i_10] [i_10] = ((/* implicit */short) var_10);
                    }
                    var_20 -= ((/* implicit */short) arr_31 [i_0] [i_5] [i_7] [i_8] [i_5] [i_7]);
                    var_21 = (!(((/* implicit */_Bool) (unsigned short)57353)));
                }
                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (unsigned long long int i_11 = 3; i_11 < 15; i_11 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_11 - 2] [i_5] [i_11] [i_13] [i_0] [i_13])) : (((/* implicit */int) arr_13 [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_13] [i_11 - 3]))));
                            arr_44 [i_11] [i_0] [i_11] = var_0;
                        }
                    } 
                } 
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_48 [i_14] = ((/* implicit */_Bool) ((long long int) (-(arr_42 [i_0] [i_14] [i_14] [i_14] [i_14] [i_14]))));
            arr_49 [(signed char)4] [i_14] = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) (signed char)57)))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_15 = 2; i_15 < 16; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (int i_16 = 4; i_16 < 14; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) arr_57 [i_17] [i_16])) > (var_7))))));
                        var_26 = ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_46 [(signed char)11] [i_16]), (((/* implicit */long long int) (_Bool)1)))))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(9223372036854775805LL))))));
                        var_28 = max((max((-217270972), (217271005))), (-634092275));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (min((16577930607311022987ULL), (((/* implicit */unsigned long long int) arr_19 [i_15 + 1] [i_15 + 1] [i_17])))) : (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_16] [i_17])))));
                    }
                } 
            } 
            var_30 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_30 [i_15] [i_15] [i_15] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14866))) : (arr_8 [i_0] [i_0]))) : ((-(var_5)))))));
        }
        for (unsigned short i_18 = 3; i_18 < 14; i_18 += 3) 
        {
            arr_61 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)7))) * (max((((/* implicit */long long int) (unsigned char)254)), (((((/* implicit */long long int) arr_39 [i_0])) / (var_3)))))));
            var_31 = ((/* implicit */unsigned short) arr_34 [i_0] [i_0] [(unsigned char)11] [i_0] [i_0] [i_18] [i_0]);
            var_32 ^= ((/* implicit */int) var_7);
        }
        /* LoopNest 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (int i_20 = 1; i_20 < 16; i_20 += 3) 
            {
                {
                    arr_68 [i_19] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_42 [i_20 - 1] [i_20] [i_20 + 1] [i_20 + 1] [(signed char)4] [i_19])) ? (arr_42 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    arr_69 [1] [i_19] [i_19] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((16577930607311023001ULL), (((/* implicit */unsigned long long int) arr_55 [i_0]))))))) * (var_9)));
                    var_33 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) arr_35 [i_20] [(_Bool)1] [i_20 + 1] [i_20] [i_20] [(_Bool)1])) < (1098556946)))) != (((/* implicit */int) ((arr_53 [i_0] [i_0]) == (((/* implicit */int) (signed char)12))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (((((/* implicit */_Bool) var_9)) ? (1868813466398528628ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20442)) ? (-5470589951682417396LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_12))));
                    var_35 = ((/* implicit */unsigned char) ((unsigned short) min((261120), (((/* implicit */int) (unsigned char)41)))));
                }
            } 
        } 
    }
}
