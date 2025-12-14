/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96263
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
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [3U] [i_3] [i_3]);
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_2])), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!((_Bool)1)))), (((unsigned int) arr_8 [i_0] [i_2] [i_2]))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) (+(4294967295U)))) : (1114322217103874332ULL)))));
                        }
                    } 
                } 
                arr_12 [13ULL] [13ULL] = ((/* implicit */int) 18446744073709551615ULL);
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(((unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) -2048787529)) : (1114322217103874308ULL)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((unsigned int) arr_0 [i_1] [i_4]))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) : (-6372239609811568912LL)))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0])) : (arr_6 [i_0])));
                    arr_15 [i_0] = ((/* implicit */unsigned short) var_0);
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                            var_19 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) -2147483621))));
                        }
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 2488803539703651450ULL))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 20; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_27 [i_8] [i_0] [i_7] [i_4] [i_4] [i_1] [i_0] &= ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_4] [(unsigned short)4] [i_4])) ? (arr_24 [i_0] [i_0] [i_0] [(short)7] [i_7] [4ULL]) : (var_12))) / (((((/* implicit */_Bool) (short)10874)) ? (arr_26 [i_0] [i_1] [i_0] [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)82)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) & (arr_17 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -6372239609811568912LL)) >= (1114322217103874312ULL)))))));
                    }
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            {
                                arr_37 [i_10] [i_1] [i_9] [i_9] [i_11] [i_10] [(unsigned char)8] = ((/* implicit */short) (-(var_12)));
                                var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_9] [i_9] [i_0] [i_9])) ? (1258063023U) : (((/* implicit */unsigned int) arr_31 [i_0] [i_1] [i_9] [i_9] [i_1] [i_9]))))) <= ((+(17332421856605677304ULL))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) 1114322217103874332ULL))));
                    var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) ((17332421856605677304ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4306)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((var_7) ? (arr_36 [i_9] [i_0] [i_0]) : (((/* implicit */long long int) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_9] [i_1]))))))))));
                }
            }
        } 
    } 
}
