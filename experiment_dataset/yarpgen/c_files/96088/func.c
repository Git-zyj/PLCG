/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96088
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0])));
        arr_3 [i_0] &= ((/* implicit */unsigned char) var_10);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((unsigned long long int) 0U);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 - 3]))) : (arr_5 [i_3 - 2] [i_3 + 1])));
                        var_20 = ((/* implicit */unsigned long long int) arr_12 [i_3]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */int) arr_1 [i_5]);
        /* LoopSeq 3 */
        for (unsigned short i_6 = 4; i_6 < 23; i_6 += 3) 
        {
            arr_21 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6 - 2] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))) : (arr_5 [i_6 - 2] [i_6 - 2])));
            arr_22 [i_6] [i_5] [i_6] = (~(((/* implicit */int) arr_7 [i_6 - 4])));
            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) arr_5 [12ULL] [i_5])) ? (((/* implicit */int) arr_19 [i_6 - 1])) : ((~(var_2)))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) arr_14 [(_Bool)1] [i_7] [(unsigned char)2] [i_5] [i_7] [i_5]);
            var_23 |= ((arr_9 [i_5]) / (arr_9 [i_5]));
        }
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 1) 
            {
                for (short i_10 = 4; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_33 [i_5] [i_5] [i_9 - 1] [i_10 - 3] [i_8] = ((/* implicit */unsigned short) var_1);
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) -4481997)) ? (4294967295U) : (4294967278U)));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                        {
                            arr_36 [i_11] [i_11] [i_9 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34346)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (unsigned short)34347))))) ? ((-(var_11))) : (((unsigned long long int) arr_13 [i_5] [i_8] [i_9] [i_10]))));
                            arr_37 [i_5] [i_8] [i_9 + 1] [i_10] [i_11] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 2] [i_10] [(unsigned char)6])) ? (arr_14 [i_11] [i_11] [i_10 + 2] [i_9] [i_11] [i_5]) : (arr_14 [i_10] [i_10] [i_10 + 2] [i_10 - 4] [i_10] [i_10 - 3])));
                        }
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                        {
                            arr_41 [i_9] [i_8] [i_9] [i_9] [i_12] [i_8] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_9 - 2])) > (((/* implicit */int) arr_24 [i_5] [i_5]))));
                            var_25 = arr_38 [i_5] [i_5] [i_8] [i_9 - 1] [i_10] [i_10 - 1] [i_12];
                            arr_42 [i_5] [i_5] [i_8] [i_8] [i_9 + 2] [i_8] [i_12] &= ((/* implicit */int) (unsigned char)94);
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [(_Bool)0] [i_9 + 2] [i_10 - 1] [i_12])) ? (arr_5 [i_9 + 2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8]))))))));
                        }
                        arr_43 [i_10 + 2] [i_5] [i_9 + 1] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_10 + 2])) ? (((/* implicit */int) arr_26 [i_10 + 2])) : (((/* implicit */int) arr_26 [i_10 - 2]))));
                        arr_44 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
            arr_45 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_35 [i_8] [(_Bool)1] [i_8] [(unsigned short)23] [i_8])) : (((/* implicit */int) (unsigned short)65535))))) % (((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_5] [i_8] [i_8]))) : (var_3)))));
        }
        var_27 += ((/* implicit */unsigned short) -2147483626);
        var_28 -= (+(var_4));
        var_29 += ((/* implicit */_Bool) (~(1087323618)));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        arr_48 [i_13] = ((/* implicit */unsigned short) arr_47 [i_13]);
        arr_49 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_14 [i_13] [(signed char)12] [i_13] [i_13] [(signed char)12] [i_13])))) ? (((/* implicit */int) arr_47 [i_13])) : (((/* implicit */int) arr_47 [i_13]))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 1; i_14 < 23; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                {
                    arr_57 [21] [i_14 + 1] [i_15] = ((unsigned long long int) (-(arr_50 [i_15] [i_14 + 1])));
                    var_30 = ((/* implicit */unsigned short) ((int) arr_28 [i_14 - 1] [i_14 + 1] [i_14 + 1]));
                }
            } 
        } 
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (short)-32760))));
    }
    var_32 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 14U)) ? (1503328768U) : (((/* implicit */unsigned int) ((/* implicit */int) ((539671199U) >= (((/* implicit */unsigned int) 105339781)))))))));
    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) var_13))));
    /* LoopNest 2 */
    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) 
    {
        for (int i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            {
                arr_64 [i_16] [i_17] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (var_16))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((1U) <= (((/* implicit */unsigned int) 2130545576)))))));
                arr_65 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_16])) ? (((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) 2690642328U))))) : (((((/* implicit */_Bool) (unsigned short)31181)) ? (((/* implicit */int) (unsigned short)31181)) : (105339767)))))) ? (((/* implicit */unsigned long long int) arr_13 [i_16] [i_16] [i_16] [i_17])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1824732633)) ? (((/* implicit */int) (unsigned short)19935)) : (105339781)))) ? (min((arr_39 [i_16] [i_17] [i_17] [i_17] [i_16] [i_16]), (((/* implicit */unsigned long long int) arr_30 [i_17] [i_17] [i_17] [i_16])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_16])) ? (((/* implicit */int) arr_7 [i_17])) : (((/* implicit */int) arr_30 [i_17] [i_17] [3U] [3U])))))))));
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) 1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_18 = 0; i_18 < 20; i_18 += 1) 
    {
        for (unsigned int i_19 = 0; i_19 < 20; i_19 += 1) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    arr_75 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_19])) + (((((/* implicit */_Bool) 2791638530U)) ? (((/* implicit */int) arr_24 [i_18] [i_18])) : (-142712703)))));
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 20; i_21 += 4) 
                    {
                        for (int i_22 = 1; i_22 < 18; i_22 += 4) 
                        {
                            {
                                var_35 += ((/* implicit */signed char) min((arr_12 [i_22 + 1]), (((/* implicit */short) arr_16 [i_18]))));
                                arr_82 [i_20] [i_20] [i_19] = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_35 [i_18] [i_18] [i_22 + 2] [i_22] [i_22 + 2]) ? (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_18] [12ULL] [12ULL]))) : (arr_38 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (2791638522U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
