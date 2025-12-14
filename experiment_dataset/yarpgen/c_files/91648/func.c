/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91648
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_15 *= ((/* implicit */unsigned char) arr_0 [i_0]);
        var_16 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_13))), (((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_2]))) : (((((/* implicit */_Bool) (short)-24025)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))))))))));
                    /* LoopSeq 4 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))));
                        var_19 = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_3 + 1])))) >> ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_3 - 2]))) : (max((var_6), (((/* implicit */unsigned long long int) var_9)))))) - (18446744073709551476ULL)))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_3 + 1])))) >> ((((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_3 - 2]))) : (max((var_6), (((/* implicit */unsigned long long int) var_9)))))) - (18446744073709551476ULL))) - (190ULL))))));
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_21 = (unsigned short)59354;
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3436483861001050786LL)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_12 [(unsigned char)11] [(signed char)1] [i_2] [i_4] [(signed char)1])))) : (var_12)));
                        arr_16 [(_Bool)1] [i_1] [(_Bool)1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) var_13);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_2] [i_2]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            arr_23 [i_6] [i_1] &= ((_Bool) (!(((/* implicit */_Bool) (short)32744))));
                            var_24 = ((/* implicit */unsigned long long int) var_1);
                            arr_24 [i_2] = ((/* implicit */long long int) arr_3 [(signed char)11]);
                            arr_25 [i_6] [i_2] [i_2] [i_2] [i_0] = (-(((/* implicit */int) arr_6 [i_2] [i_1] [0] [i_5 + 2])));
                        }
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            arr_29 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) arr_19 [i_5 - 1] [i_5] [i_2] [i_5] [i_5 + 1]));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (unsigned char)2))));
                            arr_30 [i_0] [i_0] [i_1] [i_2] [i_5] [i_7] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [12LL] [i_0] [i_2])))) % (var_5)));
                        }
                        arr_31 [i_1] [i_1] [7] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_2] [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 2])) ? (((/* implicit */int) arr_18 [i_5 + 1] [i_5 - 1] [15LL] [i_5 + 2] [5LL] [(short)6])) : (((/* implicit */int) arr_18 [i_0] [i_5] [(_Bool)1] [i_5 - 2] [i_5] [i_5 - 2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (unsigned char)7);
                        var_27 ^= ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_0 [i_1])))) + (2147483647))) >> (((/* implicit */int) (unsigned char)3))));
                        arr_35 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_6)) ? (var_13) : (var_13))))), (max(((~(16055354679439946622ULL))), (((/* implicit */unsigned long long int) max(((unsigned char)1), ((unsigned char)255))))))));
                    }
                }
            } 
        } 
    }
    var_28 = ((/* implicit */short) var_2);
}
