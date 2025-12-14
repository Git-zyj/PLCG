/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79992
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned short) arr_6 [i_2]))))), (max((arr_3 [i_1 - 4]), (((/* implicit */long long int) arr_6 [i_2]))))));
                            var_15 = ((/* implicit */signed char) var_1);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_4] [i_5])) ? (arr_5 [i_1] [i_1 - 1] [i_4] [i_5]) : (arr_5 [i_4] [i_1] [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_0] [i_0] [i_0])) ? (arr_5 [i_4] [i_4] [i_1 - 1] [i_4]) : (arr_5 [i_5] [(unsigned char)20] [i_4] [i_5]))) : (((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_1 - 3] [i_5])) ? (arr_5 [i_1] [i_4] [i_1] [i_1]) : (arr_5 [i_1] [i_1] [i_4] [i_1])))));
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_17 |= ((/* implicit */long long int) arr_11 [i_0] [i_0]);
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [12] [i_1 - 2] [i_4] [i_5] [i_5])) ? (arr_1 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_4] [i_5] [(signed char)8] [i_4])))))) ? (max((((/* implicit */long long int) arr_16 [i_5])), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))) ? (((/* implicit */unsigned long long int) max((4294967280U), (15U)))) : (arr_12 [i_0] [i_1] [i_4] [i_6 - 1])));
                        }
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_19 ^= ((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_5] [i_1] [i_7]);
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1947)))));
                            var_21 = ((/* implicit */unsigned int) arr_5 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 2]);
                            var_22 = ((/* implicit */long long int) var_2);
                        }
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            var_23 = ((((/* implicit */_Bool) arr_13 [i_0] [0U])) ? (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 3] [i_1 + 1])) ? (arr_7 [i_1 - 4] [i_1] [i_1 - 4]) : (arr_7 [i_1 - 2] [0] [i_1 - 1]))) : (max((var_2), (((/* implicit */unsigned long long int) var_4)))));
                            var_24 = ((/* implicit */unsigned long long int) arr_15 [i_4] [i_1 - 3] [i_1 - 2] [11U] [i_8]);
                            var_25 = ((/* implicit */unsigned short) arr_2 [7LL] [i_0]);
                            var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_24 [i_1 - 2] [i_1 - 1] [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_21 [i_1 + 2] [i_1] [i_1] [i_1] [(signed char)18] [i_1 + 1] [i_1 + 1]))), (((((/* implicit */_Bool) var_0)) ? (arr_21 [i_1 - 2] [i_1 - 3] [i_1] [i_1] [i_1] [i_1 + 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 - 3] [i_1] [i_1 + 1])))))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) max((arr_23 [i_1 - 2] [i_1] [i_1 - 4] [(unsigned char)17] [(unsigned short)20]), (arr_23 [i_1 - 2] [i_1] [i_1 - 3] [i_1] [i_5]))))));
                        }
                        for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */int) var_7);
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2])) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_2 [i_0] [i_1])))) ? (((((/* implicit */_Bool) var_11)) ? (arr_13 [i_1 - 2] [i_9]) : (arr_13 [i_1 - 2] [i_1]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_5])) ? (arr_21 [i_9] [i_9] [i_5] [i_4] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0])))))) : (arr_10 [i_4] [i_1 - 4] [i_4] [i_1 - 4] [16ULL])))));
                            var_30 = arr_20 [i_0];
                            var_31 = ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]);
                            var_32 = max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_19 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 4] [i_1] [i_1 - 2]) : (((var_13) ? (var_5) : (((/* implicit */int) arr_9 [4] [i_4] [i_4] [i_0]))))))));
                        }
                        var_33 = ((/* implicit */long long int) var_5);
                    }
                    for (unsigned short i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        var_34 = max((((/* implicit */unsigned long long int) var_10)), (var_11));
                        var_35 = ((arr_16 [i_0]) ? (max((arr_27 [i_1 - 1] [i_10 + 1] [i_1 - 1]), (arr_27 [i_1 + 2] [i_10 - 1] [i_10]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_14 [i_10 + 1] [i_10 - 2] [i_10 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 1])) : (arr_12 [i_1 - 1] [i_1] [i_0] [i_0]))));
                        var_36 ^= ((/* implicit */long long int) var_8);
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_1 - 4] [i_1] [(unsigned char)6] [i_1 - 4] [(unsigned char)6])) ? (((/* implicit */unsigned long long int) arr_21 [i_11 + 1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1 - 4] [i_1])) : (arr_30 [i_1 - 4] [i_0])));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (arr_13 [i_1] [i_4])));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_1] [i_4] [i_4] [i_4] [i_11]))));
                    }
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 - 4] [i_1 + 1] [i_4] [i_1 - 2])) ? (max((arr_27 [i_0] [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 + 1] [18ULL] [i_1] [i_1] [i_4])))) : (max((arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 3]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_1 - 2] [i_1 + 2] [i_1 - 4] [18U]))))));
                }
            }
        } 
    } 
    var_41 ^= var_1;
    var_42 = ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
    var_43 = ((/* implicit */unsigned short) var_13);
    var_44 ^= ((/* implicit */_Bool) var_6);
}
