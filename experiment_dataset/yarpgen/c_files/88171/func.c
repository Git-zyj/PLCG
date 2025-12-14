/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88171
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
    var_13 = ((/* implicit */short) ((var_0) ^ (((((((/* implicit */long long int) ((/* implicit */int) var_5))) % (-879919262384080058LL))) & (var_0)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23362)))))));
                arr_7 [i_0 + 2] [i_0 + 1] [i_1] = ((long long int) 4453668458959628655LL);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) var_11);
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((4294967277U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23362)))))) ? ((~(arr_3 [i_0 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
