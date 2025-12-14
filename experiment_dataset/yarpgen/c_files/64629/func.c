/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64629
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_10 = ((int) 9205357638345293824LL);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        var_11 = ((/* implicit */int) (-(min((arr_3 [i_1]), (arr_3 [i_1])))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)20]))) : (arr_3 [(signed char)18]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) 
                    {
                        arr_11 [i_1] [i_4 + 2] [i_3 + 2] [i_2] [i_1] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_10 [i_1])), ((+(18446744073709551615ULL))))), (((((/* implicit */_Bool) -9205357638345293839LL)) ? (var_2) : (((/* implicit */unsigned long long int) var_4))))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) max((max((9223372036854775807LL), (((/* implicit */long long int) arr_9 [22U])))), (((/* implicit */long long int) arr_4 [i_2 + 1])))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(var_1)))))) ? (-9205357638345293824LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2 + 1])))))));
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min((((((/* implicit */_Bool) -9205357638345293825LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6] [i_2 + 1] [i_1] [i_6]))) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16140901064495857664ULL)) ? (arr_19 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61440)))))))))));
                                var_15 = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) ((min((((-1LL) * (((/* implicit */long long int) arr_10 [i_1])))), (((/* implicit */long long int) min(((signed char)120), ((signed char)120)))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8192))) > (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-9205357638345293824LL)))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 9205357638345293829LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_1 + 1])))) : (min((((/* implicit */long long int) var_5)), (-9205357638345293828LL)))));
        var_18 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) & (9205357638345293824LL)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_9 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [3ULL])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_1] [i_1 + 1] [13] [i_1])) <= ((-(((/* implicit */int) var_6)))))))) : (min((((((/* implicit */long long int) 4294967295U)) / (-9205357638345293824LL))), (((/* implicit */long long int) ((int) (signed char)-118))))));
    }
    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        var_19 = ((/* implicit */int) max((9205357638345293820LL), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((-(-9205357638345293824LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)32256)))))));
        var_20 = ((/* implicit */unsigned char) var_4);
    }
    var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (signed char)120))))) ? (min((((/* implicit */unsigned int) -16777216)), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4113))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)65535)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_5)) & (2147483647))))))));
    var_22 = var_3;
    var_23 = ((/* implicit */int) (unsigned char)255);
}
