/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77177
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_17 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [4ULL]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(arr_0 [i_0])))), ((~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 1633202694U)) : (16080183701872236936ULL)))))));
        var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 11LL)), (12452179621166488266ULL)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_1] [(short)4] &= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (unsigned short)55464)) << (((((/* implicit */int) var_4)) - (80))))));
                                var_19 = ((/* implicit */int) max((var_13), (min((((/* implicit */unsigned int) arr_11 [i_1 - 2])), (arr_4 [i_3 + 1] [i_3] [(unsigned char)10])))));
                                var_20 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)62953)), (arr_0 [i_3])));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */unsigned char) arr_3 [(signed char)0] [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */signed char) 1633202694U);
                                var_22 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 12452179621166488266ULL))));
                                arr_22 [i_0] [i_0] [9ULL] [i_6] [5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                                arr_23 [i_1] [i_5] [i_2] [i_2] [i_1] [i_0] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min(((unsigned short)49289), (((/* implicit */unsigned short) arr_8 [i_0] [(signed char)11] [i_0]))))) : (((((/* implicit */int) var_16)) << (((arr_18 [i_0] [i_1 + 2] [i_1] [9] [i_1 - 2] [i_1] [i_1 - 2]) - (8635603513833791492LL)))))));
                                var_23 ^= ((short) (unsigned short)49268);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
                        {
                            {
                                arr_31 [(signed char)1] [10ULL] [i_0] [2ULL] [i_8 - 1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)114))));
                                arr_32 [i_1 + 2] [i_1 + 2] [i_2] [i_1 + 2] [i_8 + 1] &= ((/* implicit */unsigned int) arr_11 [i_7 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (max((-1436839180986971904LL), (((/* implicit */long long int) (signed char)35))))))))))));
    /* LoopSeq 2 */
    for (signed char i_9 = 1; i_9 < 10; i_9 += 4) 
    {
        arr_35 [i_9] [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37833))) / (arr_3 [i_9 - 1] [i_9 - 1])))));
        var_25 = ((/* implicit */unsigned long long int) arr_28 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 - 1]);
    }
    for (int i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        var_26 &= ((/* implicit */long long int) (unsigned short)18969);
        var_27 -= ((/* implicit */short) (+((~(arr_9 [i_10] [i_10] [i_10] [i_10] [i_10] [(unsigned char)7])))));
        var_28 = arr_27 [i_10];
    }
}
