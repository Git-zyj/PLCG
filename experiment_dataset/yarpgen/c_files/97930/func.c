/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97930
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 2]);
                    var_20 -= ((/* implicit */unsigned char) arr_7 [i_1]);
                    var_21 = ((/* implicit */unsigned short) arr_4 [i_2 - 1] [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_17 [i_3] [i_1 + 1] [i_3] [i_1] = ((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 1]);
                                var_22 += ((/* implicit */unsigned char) arr_5 [i_1 - 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_5 + 2] [i_5 - 1] [i_5] [i_5])) / (((((/* implicit */int) arr_9 [i_5] [i_5] [i_6] [i_6])) | (((/* implicit */int) arr_9 [i_6] [i_6] [i_5 - 1] [i_5 + 2]))))));
                arr_24 [i_5] [i_6] [i_5] = ((/* implicit */short) arr_23 [i_6] [i_6] [i_6]);
            }
        } 
    } 
}
