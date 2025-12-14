/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93315
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) arr_2 [i_2] [i_4]);
                                var_19 = ((/* implicit */unsigned int) (((+((+(((/* implicit */int) var_4)))))) <= ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)15] [i_1]))) >= (var_17))))))));
                                var_20 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_3]) : (((/* implicit */long long int) arr_8 [i_2] [i_2 + 1] [i_4])))) - (((((/* implicit */_Bool) arr_9 [i_4] [5LL] [i_1 + 1] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) + (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_17))) ^ ((-(((/* implicit */int) var_4)))))))));
                                arr_15 [i_0] [i_0] [i_2] [i_2] [0U] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 1] [i_3])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((9223372036854775807LL) ^ (-666436170084749922LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) var_5))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_22 ^= ((/* implicit */short) var_8);
                                arr_23 [i_0] [i_0] [6LL] [i_0] [0U] [6LL] = (-(arr_10 [i_5]));
                            }
                        } 
                    } 
                    var_23 ^= arr_16 [i_0] [i_0] [i_0] [7];
                }
                arr_24 [i_0] [i_1] [i_1] = ((/* implicit */int) max((var_13), (var_13)));
                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 3] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 3] [i_0]))))) ? (((/* implicit */int) ((short) 3092631725U))) : (((((/* implicit */int) arr_7 [i_1] [i_1 + 2] [i_0])) & (((/* implicit */int) arr_7 [i_1] [i_1 + 3] [i_1]))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            {
                arr_29 [i_8] [i_9] = min((((/* implicit */unsigned long long int) 4294967292U)), (0ULL));
                var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (2903337390U)));
                var_27 ^= ((/* implicit */short) ((((((/* implicit */unsigned long long int) 1U)) < (min((((/* implicit */unsigned long long int) arr_1 [8U])), (18446744073709551593ULL))))) ? (arr_26 [i_8] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57787))))))));
                var_28 = ((/* implicit */unsigned short) arr_27 [i_8] [i_9]);
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_7) : (var_11)))))))) > (((unsigned long long int) (~(var_9))))));
}
