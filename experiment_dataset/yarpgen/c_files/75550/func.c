/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75550
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) (unsigned char)246);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_11 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (min((((/* implicit */unsigned long long int) -19)), (arr_10 [i_3] [i_1] [i_2] [i_3]))));
                                var_12 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) min((arr_8 [i_0] [i_0] [15ULL] [i_4]), ((short)-12)))) > (((/* implicit */int) min((((/* implicit */short) (unsigned char)252)), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)15360)), (arr_0 [i_4]))))) == (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_13 += ((/* implicit */short) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2 + 2])) >> (((arr_9 [i_2] [(short)18] [i_2]) - (7265048090516500374LL)))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 2] [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) arr_8 [i_2] [i_2 - 2] [i_2] [(short)5]))));
                        arr_17 [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1] [(_Bool)0] [i_0] [i_0] [i_2 + 2] [i_2 - 2] [i_2 + 2])) ? (((/* implicit */int) (unsigned short)22505)) : (((/* implicit */int) arr_13 [i_2 + 2] [i_2 - 1]))));
                    }
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) min((arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), ((short)-15369)))) : (((((/* implicit */_Bool) (unsigned char)83)) ? (-1100707252) : (((/* implicit */int) (unsigned char)246))))))));
                        arr_21 [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_16 [i_2] [i_2 + 2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_20 [i_0] [i_2 - 1] [i_2] [i_2 - 1] [6])) : ((~(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1])))))), (((((/* implicit */_Bool) (unsigned short)25452)) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_0] [i_0] [i_1] [5])) ? (((/* implicit */int) (unsigned char)17)) : (var_0))) : (((/* implicit */int) arr_18 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_6] [i_0] [i_6]))))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_2] [(short)6] = ((/* implicit */short) arr_20 [i_0] [i_0] [i_2] [i_2] [i_6]);
                        arr_23 [i_0] [i_6] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned char) max(((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_6])), ((unsigned short)40096)))))), (((((/* implicit */_Bool) arr_18 [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_18 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) arr_18 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 2]))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (short i_9 = 1; i_9 < 11; i_9 += 3) 
            {
                for (unsigned char i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46558))))) : ((+(arr_27 [(signed char)4]))))))));
                        arr_36 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_8] [i_8] [i_8] [i_7] [i_8] [i_10 + 1])) | (((((/* implicit */_Bool) (short)13710)) ? (((/* implicit */int) arr_15 [i_7] [i_8] [i_9] [i_9] [i_10] [i_10])) : (((/* implicit */int) arr_2 [i_7]))))));
                        var_17 ^= ((unsigned short) arr_30 [i_10 + 1] [8U]);
                        var_18 = ((/* implicit */int) arr_14 [i_7 + 1] [i_7 + 1] [i_8] [i_7 + 1] [i_9] [i_10 - 1]);
                        arr_37 [i_7] [i_7] [(short)0] [i_7 + 2] |= ((((/* implicit */_Bool) (short)4960)) ? (((arr_34 [i_7] [(_Bool)1] [i_9] [(short)10] [4LL] [i_10]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_7])))) : (((/* implicit */int) (short)-15361)));
                    }
                } 
            } 
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_0 [i_7]))))) ? (((/* implicit */unsigned long long int) arr_30 [i_7] [i_7])) : (((((/* implicit */unsigned long long int) arr_16 [i_8] [i_8] [i_8] [i_7 + 2] [i_7])) - (arr_10 [i_7] [i_8] [i_8] [i_8])))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7])) ? (((/* implicit */int) arr_24 [i_7])) : (((/* implicit */int) arr_14 [i_7 + 3] [i_7 + 1] [(signed char)8] [i_7 + 1] [i_7 + 1] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 + 3]))) : (arr_6 [i_7 - 1] [i_7 - 1])));
            arr_38 [i_7] = ((/* implicit */_Bool) (signed char)62);
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    {
                        var_21 = ((_Bool) arr_5 [i_7 + 1] [i_7 - 1]);
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            arr_47 [i_13] [i_7] [i_11] [i_12] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (1584274835) : (((/* implicit */int) (short)-2877))));
                            arr_48 [i_7] [(short)8] [(short)8] [i_11] [(short)8] [i_7] [i_7] = ((/* implicit */short) (~(((/* implicit */int) arr_26 [i_12]))));
                        }
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_7])) != (((/* implicit */int) arr_32 [i_7] [i_7 + 1] [i_7 - 1]))));
        /* LoopNest 2 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_6 [i_7] [i_7])))) ? (arr_1 [i_7 + 2]) : (((/* implicit */long long int) arr_16 [i_14] [i_14] [i_14 - 1] [i_14] [i_14]))));
                    var_24 = ((/* implicit */int) (!(((arr_10 [i_7] [i_14] [i_7] [(short)15]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)18])))))));
                }
            } 
        } 
        var_25 += ((/* implicit */int) (short)63);
    }
    for (long long int i_16 = 2; i_16 < 22; i_16 += 2) 
    {
        var_26 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -332856868)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31758))) : (arr_54 [i_16 - 2])))));
        arr_56 [i_16 + 2] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)165)) >= (((/* implicit */int) (unsigned char)4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((arr_54 [i_16]), (((/* implicit */long long int) (short)-30924))))))) : (min((2U), (((/* implicit */unsigned int) (unsigned char)8))))));
    }
    var_27 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((_Bool)1)))))));
}
