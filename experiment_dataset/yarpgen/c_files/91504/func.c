/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91504
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((((/* implicit */_Bool) 5302502137254793546ULL)) ? (5302502137254793546ULL) : (((/* implicit */unsigned long long int) var_7)))) == (min((((/* implicit */unsigned long long int) var_12)), (5302502137254793546ULL))))) && ((!(((/* implicit */_Bool) 13144241936454758069ULL)))))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) + (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13144241936454758070ULL)) && (((/* implicit */_Bool) 13144241936454758069ULL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((var_9) + (((/* implicit */unsigned long long int) var_3)))) : ((~(5302502137254793546ULL)))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_19 &= ((/* implicit */signed char) (~(5302502137254793546ULL)));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_11))));
                            arr_16 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_4]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22078))) + (5302502137254793546ULL))) : (((((/* implicit */_Bool) (short)-5793)) ? (13144241936454758069ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_2] [i_2 + 1] [i_2 + 2] [i_2] [i_1])) * (((/* implicit */int) arr_12 [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_1]))));
                        }
                    }
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_19 [4ULL] [i_1] [i_1] [4ULL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_2 + 2])) ? (((/* implicit */int) arr_2 [i_1] [i_2 + 1])) : (((/* implicit */int) (short)-29454))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)5774)))))));
                            var_22 = ((/* implicit */_Bool) arr_12 [i_6] [i_6] [(unsigned char)7] [i_6] [i_1]);
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) (~(arr_6 [i_2 + 1] [i_5] [i_5] [11U])));
                            arr_26 [i_0] [i_1] [i_1] [i_5] [12ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [i_0] [i_5])) ? (arr_7 [i_0] [i_1] [i_2] [(unsigned short)9] [(unsigned char)5]) : (13144241936454758070ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28822)))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) var_10)))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5302502137254793546ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_17 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned long long int) (-(var_6))))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 13144241936454758078ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [i_1]))) : (5302502137254793542ULL))) <= (((/* implicit */unsigned long long int) arr_25 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1]))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((5302502137254793566ULL) - (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2 - 1] [i_8]))));
                        arr_30 [i_1] = ((/* implicit */unsigned long long int) ((short) ((arr_7 [i_0] [i_1] [i_0] [(unsigned char)5] [1U]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                        var_28 = 13144241936454758082ULL;
                    }
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            arr_35 [i_10] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_25 [i_0] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2 + 1] [i_2 - 1] [i_2 - 1])))));
                            var_29 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [12ULL] [i_10] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) (short)-5809))))) + (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_9] [5ULL]))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 1])) : (((((/* implicit */int) arr_23 [(signed char)4] [i_0] [i_9] [(signed char)4] [i_2] [(short)12] [i_10])) & (((/* implicit */int) (signed char)121)))))))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) 
                        {
                            arr_38 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) 7671405854398171143ULL);
                            var_31 |= arr_23 [i_11] [i_11] [i_0] [i_9] [i_0] [12LL] [i_0];
                            arr_39 [i_1] [6ULL] [i_1] [i_1] [12ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)255))));
                            arr_40 [i_1] [i_9] [i_2] [9ULL] [i_1] = ((/* implicit */short) (-(var_3)));
                        }
                        arr_41 [i_1] = ((/* implicit */short) 5302502137254793534ULL);
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2 - 1] [i_0] [(signed char)8] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)41))))) : (((/* implicit */int) arr_33 [(short)9] [11ULL] [i_0] [i_2] [(_Bool)1] [i_0] [i_0])))))));
                        var_33 = ((/* implicit */short) ((((/* implicit */int) (signed char)63)) << (((((/* implicit */int) (unsigned short)17684)) - (17682)))));
                    }
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 1])) || (((/* implicit */_Bool) var_6))));
                    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(13144241936454758071ULL))))));
                }
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (18446744073709551586ULL) : (((/* implicit */unsigned long long int) ((1099859865) << (((((((/* implicit */int) arr_24 [i_0] [i_0] [(unsigned char)3] [i_0] [i_0])) + (110))) - (15))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14724))) : (13144241936454758070ULL))))));
            }
        } 
    } 
}
