/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57602
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned short) (unsigned char)2);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */long long int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_14 = ((/* implicit */long long int) 8521215115264ULL);
                            var_15 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                            arr_17 [i_0] [i_1 - 1] [i_0] [i_0] [i_1 - 1] = ((/* implicit */signed char) arr_6 [i_3] [i_4]);
                        }
                    }
                    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_20 [7] [7] [7] [i_5] [5U] &= ((/* implicit */unsigned int) arr_9 [i_0] [i_0]);
                        arr_21 [i_1] [i_1] = ((/* implicit */_Bool) (((((+(-7713963789165639588LL))) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_16 [i_0] [i_2] [i_2 - 2] [i_5 - 2] [i_0] [i_0])) * (((/* implicit */int) (_Bool)1)))) + (22546))) - (7)))));
                        arr_22 [i_0] [i_2] = ((/* implicit */unsigned char) 8521215115254ULL);
                        var_17 *= ((/* implicit */unsigned long long int) arr_7 [i_2 - 2]);
                    }
                    arr_23 [i_1 + 2] [i_1 + 2] [i_1] [i_0] = ((/* implicit */unsigned short) (-((-(arr_15 [i_0] [i_1 + 1] [i_2 - 1] [i_2] [i_2 - 1])))));
                    arr_24 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((18446735552494436351ULL) | (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) 2147483638)) - (9006649498927104LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [4ULL] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((1342403369062691424LL) | (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1])) / (((/* implicit */int) arr_33 [i_6] [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 2])))))));
                                arr_34 [i_6] = ((/* implicit */unsigned short) ((arr_9 [i_1 + 1] [i_1 + 2]) - (arr_9 [i_1 - 1] [i_1 + 2])));
                                var_20 = ((/* implicit */signed char) (short)73);
                                arr_35 [i_0] [i_1] [i_7] [(signed char)3] [i_6] = ((/* implicit */signed char) arr_29 [i_0] [i_6] [i_7] [i_8]);
                            }
                        } 
                    } 
                }
                for (signed char i_9 = 3; i_9 < 17; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned int) ((-1908669729239963052LL) | (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_9 - 1])) / (((/* implicit */int) arr_43 [i_0] [i_0] [i_1 + 2] [i_9 - 2])))))));
                                var_22 = ((/* implicit */signed char) arr_4 [i_11] [i_11]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 17; i_13 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)0))))));
                                arr_51 [i_0] [i_9] = ((/* implicit */unsigned char) arr_11 [i_9 - 2] [i_9 - 3] [i_9 + 1] [i_9 + 1] [i_9 - 3] [i_9 - 3]);
                                arr_52 [(signed char)15] [i_1] [i_9] [i_9] [i_9] [i_12] [i_13 + 1] = ((/* implicit */signed char) arr_0 [i_0]);
                                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                                var_25 += ((/* implicit */signed char) (~((+(9223372036854775797LL)))));
                            }
                        } 
                    } 
                    arr_53 [i_9] [i_0] [i_9] = ((/* implicit */_Bool) 9223372036854775797LL);
                    arr_54 [i_9] [i_1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-120))));
                }
                var_26 = ((/* implicit */short) 9223372036854775796LL);
                var_27 = ((/* implicit */unsigned short) 1152921504606830592ULL);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((3708456969U) / (17U)));
    var_29 |= ((/* implicit */signed char) var_0);
}
