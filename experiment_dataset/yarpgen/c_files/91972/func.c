/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91972
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
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-345))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))))), (min((max((((/* implicit */long long int) (short)30912)), (arr_3 [i_0 + 2] [i_2 + 3] [0LL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [13] [i_0])) ? (arr_1 [i_1 - 1] [3LL]) : (((/* implicit */int) arr_4 [i_0] [i_1 - 3] [i_0])))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_8 [i_2] [i_1 + 3] [i_2] [i_3])))))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)1)), (arr_9 [i_3] [i_3] [i_2] [i_1 - 1] [i_0] [i_0]))))) <= (arr_0 [i_0] [i_0]))))));
                        var_20 ^= ((/* implicit */_Bool) (~(((min((((/* implicit */unsigned long long int) (signed char)-102)), (15871648059820571810ULL))) & (((/* implicit */unsigned long long int) -3538229237219605999LL))))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_4] [i_2 + 3] [i_2] [i_1 + 1] [i_0 + 2] [i_0] &= ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2 - 1] [i_4] [i_4] [i_0]);
                        arr_15 [i_1] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((min((((arr_5 [i_4 + 1] [i_4 + 1] [(unsigned char)4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 4] [i_4 - 1] [i_2 + 4] [i_2 + 4] [i_1] [i_0]))))), (((/* implicit */unsigned int) min((arr_1 [i_2] [i_2]), (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1]))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12503))) : (arr_13 [i_2] [(unsigned short)15])))) ? (((/* implicit */int) max((arr_12 [i_4] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]), (arr_4 [i_0 - 1] [i_0] [i_0 - 1])))) : (((((/* implicit */int) (_Bool)1)) << (((var_6) - (3045125492U))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), ((-(((((/* implicit */_Bool) (~(arr_5 [i_0] [i_0] [(unsigned short)3])))) ? (min((3538229237219606009LL), (((/* implicit */long long int) arr_12 [i_5] [i_5] [i_2] [(unsigned short)3] [(unsigned short)3] [i_0 + 2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2305843000623759360ULL)) ? (((/* implicit */int) arr_8 [i_5] [15LL] [i_2] [i_5])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) (_Bool)1))), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((-213248668) + (213248689)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1656661262)) ? (((/* implicit */int) (_Bool)0)) : (arr_1 [i_0 - 1] [i_0 - 1])))) ? (max((((/* implicit */unsigned long long int) (unsigned short)8187)), (arr_19 [16] [(_Bool)1] [16] [16] [i_6]))) : (((/* implicit */unsigned long long int) (-(arr_1 [(unsigned short)13] [7ULL])))))))))));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned char) ((unsigned char) ((((/* implicit */int) (signed char)67)) >> (((((/* implicit */int) (signed char)71)) - (55))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_19))));
    var_25 = ((/* implicit */unsigned short) var_6);
}
