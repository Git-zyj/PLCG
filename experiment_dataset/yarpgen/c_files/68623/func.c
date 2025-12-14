/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68623
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
    var_13 |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (3348310693U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 18446744073709551590ULL)))) == ((~(5684303188731253317LL)))))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (signed char)-29)))) * (((/* implicit */int) arr_1 [i_1 - 3])))) >> (((max((min((((/* implicit */unsigned int) var_8)), (var_4))), (((/* implicit */unsigned int) var_5)))) - (44425U)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((734550661U) >> (((arr_4 [i_1 - 3] [i_0 + 1]) - (686628774U)))));
                        var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62)))))) ? (((unsigned long long int) (signed char)-1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_1 - 3] [i_3])))));
                        var_17 = ((unsigned char) 18446744073709551590ULL);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) (~(1871727144U)));
                            var_19 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)74)))))) : (var_10)));
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0))) != (((/* implicit */long long int) var_4))));
                            arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [10ULL] [i_1] [i_1 - 2] [i_1 - 2] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) arr_13 [i_0] [(signed char)17] [i_0] [i_0] [i_0]))));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_4 [i_0 + 1] [i_0 + 1])));
                    }
                    arr_16 [15U] [i_0] [i_2] [(unsigned char)20] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) * (3560416629U))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210)))));
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1 + 1] [i_1 - 1]))));
                    var_23 = ((long long int) (signed char)29);
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_5])) || (((/* implicit */_Bool) arr_0 [i_1 - 2]))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_1] [i_5 + 2] [(signed char)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65518)) >= (((/* implicit */int) (signed char)-89)))))) : (((2423240150U) | (0U)))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)72)) == (((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (unsigned short)49674)))));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) (signed char)-1))))) * (((var_10) / (((/* implicit */unsigned long long int) var_12))))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_11))));
    var_29 = ((/* implicit */short) ((((/* implicit */int) (signed char)-106)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
}
