/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61059
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
    var_12 = (~(min((var_9), (((/* implicit */int) (unsigned short)44821)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [(short)8] [i_1])) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0 - 2])) : (((/* implicit */int) min(((signed char)-90), (((/* implicit */signed char) arr_6 [i_2] [i_1] [i_1] [i_4])))))))));
                            var_14 ^= var_7;
                        }
                        var_15 *= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_1])) & (((/* implicit */int) (short)-23644)))), (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0]))))))));
                    }
                    arr_12 [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned char) max((min((var_6), (((/* implicit */signed char) arr_0 [i_1 + 1])))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        arr_15 [i_0 - 2] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned char)2] [i_1] [(unsigned short)4] [i_1 + 1] [i_1] [3]))) : (((((/* implicit */_Bool) var_6)) ? (arr_1 [9] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_1])))));
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_1)))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 3; i_6 < 13; i_6 += 4) 
                    {
                        arr_20 [2LL] [i_2] [(short)6] = ((/* implicit */signed char) ((unsigned char) arr_4 [i_0 + 1] [i_0 - 2] [i_1 - 2]));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_1))));
                        var_18 = ((var_8) & (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32746)) + (2147483647))) << (((((((/* implicit */int) var_6)) + (97))) - (19)))))));
                        var_19 += (!(((/* implicit */_Bool) var_2)));
                    }
                    for (signed char i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        arr_24 [(unsigned short)8] |= ((/* implicit */_Bool) ((unsigned short) arr_3 [i_7 - 1] [i_7] [i_7]));
                        arr_25 [i_0 - 2] [i_0] [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */short) arr_14 [i_1 + 1])), ((short)-32746)))), (max((((((/* implicit */_Bool) var_0)) ? (arr_9 [i_0 - 1] [i_7 + 1] [10ULL] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(signed char)9] [11] [(short)5] [(_Bool)1]))))), (((/* implicit */unsigned int) arr_0 [(unsigned short)1]))))));
                    }
                }
            } 
        } 
    } 
}
