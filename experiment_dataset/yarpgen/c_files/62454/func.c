/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62454
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
    var_17 ^= var_12;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [(_Bool)1] = ((/* implicit */int) (~(1272590596U)));
                    arr_9 [i_2] [i_0] [(unsigned short)0] [i_2] |= ((/* implicit */int) arr_0 [i_2]);
                    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)35)), (var_13)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((int) var_2)))));
                                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((((/* implicit */unsigned int) arr_6 [i_0] [10LL])) & (var_14))) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) == (((/* implicit */unsigned int) 509395383))))))))), (arr_11 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])));
                                var_21 -= ((/* implicit */unsigned long long int) arr_6 [i_4] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
