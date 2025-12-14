/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66462
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
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & ((-(66709400280445415ULL)))));
    var_18 = ((((/* implicit */_Bool) 2984597131U)) ? (((/* implicit */int) (short)24865)) : (((/* implicit */int) (short)24846)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned char) (~(((((/* implicit */_Bool) 1310858730U)) ? (2443779456U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [3LL]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) arr_3 [9U] [11ULL] [i_3 + 1]))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)60363)) : (((/* implicit */int) var_0))))));
                                arr_14 [i_0 - 3] [i_0 - 3] [i_2] [i_3 + 2] = ((/* implicit */short) ((int) var_16));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-11365))));
                    var_22 ^= ((/* implicit */long long int) max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)15215))));
                }
            } 
        } 
    } 
}
