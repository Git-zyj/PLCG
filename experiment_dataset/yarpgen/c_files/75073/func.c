/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75073
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0])) ? (((/* implicit */unsigned int) var_15)) : (0U)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [5U] [i_2 + 2] [i_3 + 3] [i_3 + 2] [i_0 - 1] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) 0U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3 + 3] [i_4] [i_4]))) : (0ULL)))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */_Bool) 0U)) ? (var_9) : (arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))))));
                                arr_12 [i_0] [i_1] [i_4] [i_1] [i_4] [i_3] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24)))))) ? (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (arr_10 [i_0] [i_0 - 1] [i_0] [i_0 + 4] [i_0 + 3] [i_2 + 3] [i_3 - 2]) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_3 + 2] [i_2 + 3]) : (((/* implicit */long long int) var_15)))))));
                                var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 21ULL)) ? (arr_8 [i_2] [i_2] [i_1] [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) 16777215U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_9))) : (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_2 + 2] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_2 + 2] [i_4] [(short)16])) : (var_9)))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_0] [i_0 + 2] [i_0]))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5))))));
                    arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16383)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_0] [i_2 + 3])) ? (arr_8 [i_2] [i_2 + 1] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))))))));
                    arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned short)65525))))) ? (((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)1)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (16777216U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (var_4)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (unsigned char i_6 = 3; i_6 < 14; i_6 += 3) 
        {
            for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) arr_17 [i_6 + 4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (arr_15 [i_6 - 1] [i_7 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7 + 2]))) : (18446744073709551615ULL)))));
                    arr_23 [(short)1] [(short)1] [(short)1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (arr_15 [i_6 - 1] [i_6 + 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 524287U)) : (((((/* implicit */_Bool) 16777192U)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_19 [i_5] [i_5] [i_7 - 1])))))) : (((((/* implicit */_Bool) var_5)) ? (arr_20 [i_6 - 2] [i_6 - 1] [i_7 - 2]) : (arr_20 [i_6 + 3] [i_6 - 1] [i_7 - 2])))));
                    arr_24 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16777228U)) ? (var_4) : (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_6 - 1])) : (((/* implicit */int) arr_22 [i_6] [i_6] [i_6 + 1]))))) : (((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */unsigned long long int) arr_21 [i_5] [i_5])) : (var_2)))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4278190080U)) ? (((/* implicit */long long int) 4294443009U)) : (arr_15 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) arr_15 [i_5] [i_6])) ? (((/* implicit */unsigned long long int) 67108863)) : (var_2)))));
                }
            } 
        } 
    } 
}
