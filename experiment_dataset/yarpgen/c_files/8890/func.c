/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8890
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_10 [i_1 - 2] [i_2] = ((/* implicit */_Bool) min(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) || (((/* implicit */_Bool) (unsigned char)63))))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (arr_9 [i_3] [i_3] [i_3] [i_2 + 1] [i_2] [i_1 - 1])))));
                        var_16 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_2)), ((~(((/* implicit */int) arr_7 [i_1 - 2] [1LL] [i_2 + 2])))))), (((((/* implicit */int) arr_1 [i_3])) & (min((1558307422), (((/* implicit */int) (unsigned char)255))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 4; i_7 < 10; i_7 += 4) 
                        {
                            {
                                arr_20 [i_0] [(unsigned char)11] [i_0] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [4LL]))));
                                var_17 = arr_12 [i_5];
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_19 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) arr_2 [i_0] [4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((var_8) / (var_8))))) >= (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (min((arr_17 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [9] [9]))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        for (long long int i_12 = 1; i_12 < 15; i_12 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */int) (unsigned short)45127)) ^ (-976510042))) : (((/* implicit */int) arr_27 [i_12 + 1] [(unsigned char)3] [i_9] [i_8])))), (((/* implicit */int) arr_27 [i_8] [i_9] [(unsigned char)12] [(unsigned short)6]))));
                                arr_34 [i_8] [i_9] [(_Bool)0] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_28 [i_8] [i_10 - 1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (((int) -1760318388490780900LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41986)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? (((unsigned long long int) arr_26 [i_12])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 2; i_14 < 14; i_14 += 2) 
                        {
                            {
                                arr_39 [(unsigned char)15] [i_9] [(unsigned char)15] [(unsigned char)15] [i_14 - 2] = ((/* implicit */unsigned short) arr_36 [i_10 + 2] [i_13] [i_14 + 1] [i_14 + 3]);
                                var_21 = ((/* implicit */unsigned char) (-((-((-(((/* implicit */int) (unsigned short)65533))))))));
                                var_22 |= ((/* implicit */unsigned char) ((_Bool) ((arr_38 [i_14 + 3] [i_10 + 2] [i_10 + 1] [i_10] [i_10]) | (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_10 - 1] [i_9] [i_9] [i_9]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_37 [(unsigned char)5] [i_9] [(_Bool)1] [i_9] [i_9] [i_9] [i_8])) : (((int) ((((/* implicit */int) arr_29 [i_10] [i_9] [i_8])) != (((/* implicit */int) arr_28 [i_8] [i_10])))))));
                    arr_40 [(unsigned short)2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7791)) ? (((unsigned long long int) arr_27 [i_8] [i_9] [i_10] [7LL])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))))))));
                }
            } 
        } 
        var_24 = var_13;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_44 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_4))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_15])) / (((/* implicit */int) (unsigned char)96))))) : (var_1)));
    }
}
