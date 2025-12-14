/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75094
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
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)1076)))))))));
                        var_14 = ((/* implicit */unsigned short) (signed char)-127);
                    }
                    arr_10 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((max(((~(var_8))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1076))) : (arr_6 [i_1] [i_1] [i_1]))))) << (((((/* implicit */int) var_6)) - (48)))));
                    var_15 = ((/* implicit */_Bool) ((((18446744073709551590ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19350))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))));
                }
                /* vectorizable */
                for (signed char i_4 = 3; i_4 < 8; i_4 += 1) 
                {
                    arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-19350)) ^ (((/* implicit */int) (short)-1077))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_0 [i_0] [i_4]))));
                    var_17 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [(signed char)6] [6ULL])) && (((/* implicit */_Bool) var_11)))) || (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)-1082))))));
                    arr_14 [i_1] [i_4] [i_1] [i_1] = (!(((/* implicit */_Bool) 2366232969246645686ULL)));
                }
                for (int i_5 = 1; i_5 < 9; i_5 += 1) 
                {
                    var_18 = ((/* implicit */int) ((((arr_1 [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (arr_8 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1446248931)) ? (arr_5 [i_0 - 1] [i_1 + 1] [i_5 - 1] [i_5]) : (((/* implicit */int) (signed char)44)))))));
                    var_19 &= max((min((1446248931), (((/* implicit */int) (short)-19350)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)19350))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_22 [i_0 - 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_6 - 1])), (min((2366232969246645665ULL), (((/* implicit */unsigned long long int) (short)13533)))))), (((/* implicit */unsigned long long int) var_2))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */int) (short)-6196)) / (((/* implicit */int) (short)6195)));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (short)-1103))));
                                arr_24 [i_1] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */short) min((((/* implicit */int) arr_22 [i_0 + 1] [i_1 + 2] [i_5] [(unsigned char)3] [i_1] [i_7])), (((((/* implicit */int) (signed char)44)) ^ (((/* implicit */int) (unsigned short)31458))))));
                                arr_25 [i_7] [i_1] [(signed char)0] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_7])))))))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned short)12678)))), (((/* implicit */int) (unsigned short)12678))))), (((((/* implicit */_Bool) (short)6189)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)74))))) : (((((/* implicit */_Bool) (short)-1076)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) : (40635794U)))))));
                var_23 = ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((arr_1 [i_0 - 1]) ^ (var_8))) : (max((arr_1 [i_0 + 1]), (var_11))));
                var_24 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-6216)) ? (((/* implicit */int) arr_19 [i_0 - 1] [i_1 - 1] [4LL] [i_1])) : (((/* implicit */int) (unsigned char)254))))));
                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((16080511104462905975ULL), (((/* implicit */unsigned long long int) max(((short)-19351), ((short)19341)))))))));
            }
        } 
    } 
}
