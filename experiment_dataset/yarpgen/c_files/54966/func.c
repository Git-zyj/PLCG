/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54966
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
    var_12 &= ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-7)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-7)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_1 + 2])) ? (((/* implicit */int) arr_0 [i_3 + 1])) : (((/* implicit */int) arr_4 [i_3 - 1] [i_1])))) | (((((/* implicit */_Bool) (unsigned char)74)) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned short)628)))) : (((/* implicit */int) (unsigned short)55734))))));
                                var_14 ^= ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned char)77)))), (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [(unsigned char)16] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 4])) ^ (((/* implicit */int) arr_9 [i_1 - 4] [i_1] [i_1 + 2] [i_1]))))) ^ (((((/* implicit */_Bool) 8661836556757123231ULL)) ? (arr_2 [i_1 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65)))))));
                var_15 |= ((/* implicit */unsigned char) arr_3 [i_1] [i_1 - 2]);
                arr_16 [i_1 + 2] [i_1] = ((/* implicit */unsigned short) min(((-(((unsigned long long int) arr_4 [i_0] [i_1])))), (((/* implicit */unsigned long long int) (signed char)-29))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((min((var_8), (min((var_8), (var_2))))), (var_4))))));
}
