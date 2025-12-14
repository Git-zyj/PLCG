/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7808
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))));
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        var_13 ^= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((int) (unsigned short)46857)))))));
                        var_14 ^= arr_8 [i_0] [i_1] [i_3 - 2];
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), ((-(arr_2 [i_0])))));
                        arr_12 [12U] [2] [(unsigned short)8] [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)61585)) == (((/* implicit */int) arr_0 [i_0]))));
                        var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_4 - 1]))));
                        var_17 = ((/* implicit */unsigned long long int) (+(arr_5 [i_2 - 1] [i_4 + 1] [i_0])));
                    }
                }
                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned short)7)), (0LL))) | (((/* implicit */long long int) (+(4294967295U))))))) ? (var_1) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) == (((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (var_0) : (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])))));
        var_20 = ((/* implicit */int) var_8);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) arr_5 [i_6] [i_5] [i_6]);
            arr_19 [i_6] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) 0U)));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_22 ^= ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))) + (((max((var_9), (((/* implicit */long long int) var_5)))) + (((long long int) var_3)))));
            var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_10 [0U] [i_5] [i_5] [0U])) : (((/* implicit */int) arr_4 [i_7] [i_5]))))));
        }
        for (int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) arr_1 [i_8]))) && (((/* implicit */_Bool) arr_27 [i_9] [i_8])))) || (((/* implicit */_Bool) (-(var_5)))))))));
                /* LoopSeq 3 */
                for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_25 = ((/* implicit */signed char) var_7);
                    arr_30 [(unsigned char)6] = ((/* implicit */unsigned short) ((((((var_2) ? (-673061238) : (((/* implicit */int) arr_7 [i_5] [i_8] [13ULL])))) + (((/* implicit */int) arr_10 [i_5] [i_10] [(unsigned short)4] [i_9 - 1])))) / (((/* implicit */int) ((unsigned char) arr_24 [i_9 + 2] [i_8] [i_9 - 1])))));
                    var_26 = ((/* implicit */unsigned char) ((((-5LL) + (9223372036854775807LL))) << (((arr_15 [i_5] [8]) - (1255237776)))));
                }
                for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    arr_33 [i_9] = (-(((((/* implicit */_Bool) -22LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (0U))));
                    arr_34 [i_5] [i_8] [(signed char)10] [i_9] [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5U)) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_11] [i_9 + 1])) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) var_2)))))));
                }
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) (unsigned short)65535);
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_5)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))))))))));
                    }
                    var_29 += min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_5])))))))), (min((-22LL), (((/* implicit */long long int) (+(var_1)))))));
                }
                var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_9] [(unsigned short)12] [i_5]))));
                arr_39 [i_5] [i_5] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) - (arr_15 [i_8] [i_9 + 1]))) + (((/* implicit */int) arr_27 [i_9 + 1] [i_9 + 1]))))) ? (((int) (+(arr_9 [i_5] [i_8] [i_5] [8U])))) : (((/* implicit */int) arr_16 [i_5] [0ULL]))));
            }
            arr_40 [i_5] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_5] [i_8] [(signed char)0] [i_5] [i_8] [i_8]))))) * (((((/* implicit */int) ((unsigned short) var_6))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [1LL] [(unsigned short)8] [i_8] [i_8])) && (((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_8])))))))));
        }
        for (int i_14 = 2; i_14 < 11; i_14 += 2) 
        {
            var_31 = arr_21 [i_14];
            /* LoopSeq 1 */
            for (signed char i_15 = 1; i_15 < 12; i_15 += 4) 
            {
                var_32 = min((((/* implicit */long long int) arr_27 [(unsigned short)7] [i_14])), (1304292978017384186LL));
                arr_46 [i_15] [i_14] [6U] = ((/* implicit */long long int) min(((+(arr_45 [i_14 + 2] [i_15 + 1] [i_15]))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [i_5] [i_15 - 1])) ^ (((/* implicit */int) arr_13 [i_14 - 1] [(unsigned char)5])))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_25 [i_5])) : (((/* implicit */int) arr_37 [i_14])))))))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 3; i_16 < 10; i_16 += 3) 
                {
                    for (unsigned int i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */int) ((((long long int) arr_9 [i_16 - 1] [i_16 - 1] [i_14] [i_16])) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_14 - 1])))));
                            var_34 &= ((/* implicit */unsigned short) (-((+(arr_23 [i_16 + 3] [i_14 + 2])))));
                            var_35 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)65535)), (((((/* implicit */_Bool) arr_27 [i_15 + 1] [i_16 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_23 [i_17] [i_14])))) : (((((/* implicit */_Bool) (unsigned short)50148)) ? (((/* implicit */long long int) arr_29 [(_Bool)1] [i_16] [i_17])) : (var_8)))))));
                            var_36 ^= ((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [i_15] [i_16] [i_17])), (arr_35 [i_5] [i_15 - 1] [i_5])));
                            var_37 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15402))) / (arr_2 [i_15 - 1])))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_41 [i_5] [12U]))));
            }
        }
        var_39 = ((/* implicit */int) (unsigned short)2553);
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 13; i_18 += 3) 
        {
            for (long long int i_19 = 3; i_19 < 11; i_19 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 4) 
                    {
                        var_40 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_20] [i_19]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_21 = 0; i_21 < 13; i_21 += 4) 
                        {
                            arr_67 [i_5] [i_5] [i_5] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_37 [i_18])) / (((/* implicit */int) (unsigned short)11314))));
                            arr_68 [i_18] = ((/* implicit */unsigned int) ((unsigned short) var_5));
                        }
                        var_41 = ((/* implicit */_Bool) ((unsigned char) 4294967290U));
                    }
                    var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_52 [i_5]))) ? (((((/* implicit */_Bool) arr_52 [i_5])) ? (arr_52 [i_5]) : (arr_52 [i_5]))) : (((((/* implicit */_Bool) arr_52 [i_5])) ? (arr_52 [i_5]) : (((/* implicit */unsigned int) 1058562669))))));
                }
            } 
        } 
    }
    for (long long int i_22 = 1; i_22 < 18; i_22 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_23 = 2; i_23 < 18; i_23 += 4) 
        {
            for (unsigned short i_24 = 0; i_24 < 21; i_24 += 3) 
            {
                for (unsigned short i_25 = 0; i_25 < 21; i_25 += 4) 
                {
                    {
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) min((min((var_1), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)17))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)54222))))))))));
                        arr_79 [i_22] [(unsigned short)4] [i_24] [i_22 - 1] [i_25] [i_25] &= ((/* implicit */unsigned long long int) arr_72 [i_23]);
                        arr_80 [i_22] = ((unsigned long long int) ((((/* implicit */int) arr_70 [i_22 + 1])) ^ (((int) 1))));
                    }
                } 
            } 
        } 
        var_44 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_22]))));
        arr_81 [i_22] [i_22] = arr_76 [i_22] [i_22] [i_22 + 3] [i_22 + 3];
    }
}
