/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57705
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_2 + 1])) : (((/* implicit */int) arr_4 [i_2 + 1]))))) ? (((/* implicit */long long int) arr_2 [i_1] [i_2 + 1])) : (min((var_2), (max((((/* implicit */long long int) arr_3 [i_1])), (1140716336109496349LL)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) (~(arr_12 [i_1])));
                            var_15 -= ((/* implicit */long long int) (-(max((var_1), (((/* implicit */unsigned int) arr_5 [i_4 + 1] [i_4 + 1] [i_2 + 1] [i_0]))))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) ((unsigned short) var_11));
                        }
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((1591822473U), (((/* implicit */unsigned int) arr_1 [i_2 + 1] [i_2 + 1]))))) ? ((~(((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_2 + 1])) ? (((/* implicit */int) ((unsigned short) (short)32755))) : (((/* implicit */int) arr_1 [i_0] [i_2]))))));
                        var_16 = ((/* implicit */long long int) arr_9 [i_1] [i_1] [i_2 + 1] [i_3] [i_3]);
                        arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) 2039661843);
                        var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_3] [i_0] [i_2])) ? (((long long int) arr_11 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_2 + 1] [i_3])) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] [i_1] [i_1])))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]));
                        var_19 &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (-1LL)));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_5])) ? (var_11) : (((long long int) (short)32757))));
                            var_21 = ((/* implicit */unsigned int) var_11);
                            var_22 ^= ((/* implicit */_Bool) arr_3 [i_0]);
                        }
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) var_4);
                            var_24 = ((/* implicit */short) var_9);
                            var_25 = ((/* implicit */unsigned long long int) ((-1LL) >= (arr_10 [i_5] [i_5 - 1] [i_5] [i_5] [i_2 + 1] [i_2] [i_2])));
                            var_26 = ((/* implicit */_Bool) arr_8 [i_0]);
                        }
                        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_26 [i_5] [i_5] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) -14LL))) ^ (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_0] [i_8])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))));
                            var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_0] [i_2 + 1] [i_0] [i_5] [i_8] [i_5 + 1]))));
                            var_28 ^= ((/* implicit */long long int) (signed char)7);
                            arr_27 [i_0] [i_0] [i_0] [i_5 + 1] [i_1] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5 + 3] [i_8])) ? (4879742944055396837ULL) : (((/* implicit */unsigned long long int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]))));
                            arr_28 [i_0] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) -2147483638)) : ((-(var_1)))));
                        }
                        arr_29 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-32753))));
                    }
                    arr_30 [i_1] [i_1] [i_2] = ((/* implicit */short) ((unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_9 = 1; i_9 < 13; i_9 += 2) 
    {
        var_29 = max((((/* implicit */long long int) (signed char)-122)), (((((/* implicit */_Bool) arr_23 [i_9 + 2] [i_9 + 2])) ? (arr_23 [i_9 + 3] [i_9 - 1]) : (((/* implicit */long long int) 1267100785U)))));
        var_30 = ((/* implicit */unsigned long long int) (short)-1);
    }
}
