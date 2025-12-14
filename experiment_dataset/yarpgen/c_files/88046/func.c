/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88046
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_13 &= min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (arr_3 [i_3] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)239)) > (((/* implicit */int) (unsigned char)49)))))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 - 3] [15ULL] [i_0]))) : (var_2)))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 2; i_4 < 18; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) || (((/* implicit */_Bool) 3748822603621300441LL))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (short)-17203)) : (((/* implicit */int) arr_10 [(unsigned char)11] [(unsigned char)11] [i_0]))))) : (((((/* implicit */_Bool) (short)13236)) ? (13675287664189914677ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1])))))));
                                var_16 = ((/* implicit */short) arr_2 [i_1]);
                                var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? ((+(4294967279U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_3 - 1] [i_4 - 2])) == (2147483647)))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_18 *= var_4;
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_6] [i_6] [i_7 + 3] [i_6]))))) ^ (((((/* implicit */_Bool) arr_14 [i_6] [i_1] [i_1] [i_1] [i_1])) ? (min((((/* implicit */long long int) (signed char)94)), (-3748822603621300441LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_7 + 2] [i_7] [i_7 - 2] [i_7 + 1] [i_7 + 2])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 += ((/* implicit */long long int) max((((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_1))))));
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)168))));
}
